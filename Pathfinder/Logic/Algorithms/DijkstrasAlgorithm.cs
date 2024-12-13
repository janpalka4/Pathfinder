
using System.Numerics;

namespace Pathfinder.Logic.Algorithms
{
    public class DijkstrasAlgorithm : Algorithm
    {
        private Dictionary<Vector2, DijkstrasNode> nodes;

        public DijkstrasAlgorithm(int tilesX, int tilesY, bool[][] walls) : base(tilesX, tilesY, walls)
        {
        }

        public override async Task Execute(int startX, int startY, int endX, int endY, CancellationToken cancellationToken)
        {
            nodes = MakeEmptyGrid();

            Vector2 start = new Vector2(startX, startY);
            Vector2 end = new Vector2(endX, endY);

            nodes[start].Cost = 0;

            Stack<DijkstrasNode> stack = new Stack<DijkstrasNode>();
            stack.Push(nodes[start]);

            while (!cancellationToken.IsCancellationRequested)
            {
                List<DijkstrasNode> next = new List<DijkstrasNode>();
                while (stack.Count > 0 && !cancellationToken.IsCancellationRequested) {
                    DijkstrasNode node = stack.Pop();

                    //node.Visited = true;

                    if (node.Position == end)
                    {
                        await MakePath(node);
                        return;
                    }

                    next.AddRange(ComputeTile(node));

                    await Delay();
                }

                foreach(DijkstrasNode node in next)
                {
                    if (!node.Visited)
                    {
                        node.Visited = true;
                        stack.Push(node);
                    }
                }

                await Delay();
            }
        }

        private List<DijkstrasNode> ComputeTile(DijkstrasNode node)
        {
            List<DijkstrasNode?> neigbours = new List<DijkstrasNode?>()
            {
                nodes.GetValueOrDefault(node.Position + new Vector2(1, 0)),
                nodes.GetValueOrDefault(node.Position + new Vector2(-1, 0)),
                nodes.GetValueOrDefault(node.Position + new Vector2(0, 1)),
                nodes.GetValueOrDefault(node.Position + new Vector2(0, -1))
            };

            List<DijkstrasNode> ret = new List<DijkstrasNode>();

            foreach (DijkstrasNode? neighbour in neigbours)
            {
                if (neighbour != null)
                {
                    if (VisitTile((int)neighbour.Position.X, (int)neighbour.Position.Y))
                    {

                        double distance = Vector2.Distance(node.Position, neighbour.Position);
                        double cost = node.Cost + distance;

                        if (neighbour.Cost > cost)
                        {
                            neighbour.Cost = cost;
                            neighbour.Previous = node;
                        }

                        if(!neighbour.Visited)
                            ret.Add(neighbour);
                    }
                }
            }

            return ret;
        }

        private async Task MakePath(DijkstrasNode node)
        {
            while (node.Previous != null)
            {
                SelectTile((int)node.Position.X, (int)node.Position.Y);
                node = node.Previous;
                await Delay();
            }
        }

        private Dictionary<Vector2, DijkstrasNode> MakeEmptyGrid()
        {
            Dictionary<Vector2, DijkstrasNode> nodes = new Dictionary<Vector2, DijkstrasNode>();
            for (int x = 0; x < TilesX; x++)
            {
                for (int y = 0; y < TilesY; y++)
                {
                    nodes.Add(new Vector2(x, y), new DijkstrasNode { Position = new Vector2(x, y), Cost = double.PositiveInfinity });
                }
            }
            return nodes;
        }
    }

    public class DijkstrasNode
    {
        public Vector2 Position { get; set; }
        public double Cost { get; set; }
        public bool Visited { get; set; }
        public DijkstrasNode? Previous { get; set; }
    }
}

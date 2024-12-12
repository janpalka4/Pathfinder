using System.Numerics;

namespace Pathfinder.Logic.Algorithms
{
    public class AStarAlgorithm : Algorithm
    {
        public AStarAlgorithm(int tilesX, int tilesY, bool[][] walls) : base(tilesX, tilesY, walls)
        {
        }

        public override async Task Execute(int startX, int startY, int endX, int endY, CancellationToken cancellationToken)
        {
            int iterations = 0;
            int x = startX;
            int y = startY;

            List<int> prevX = new List<int>();
            List<int> prevY = new List<int>();

            int p = 0;

            try
            {
                while (iterations < 1000 && !(x == endX && y == endY))
                {
                    cancellationToken.ThrowIfCancellationRequested();

                    AStarNode[] distances = GetDistances(x, y, startX, startY, endX, endY);

                    distances = distances.Where(d => d.X >= 0 && d.X < TilesX && d.Y >= 0 && d.Y < TilesY /*&& !Walls[d.X][d.Y]*/).ToArray();

                    distances = distances.Where(d => VisitTile(d.X, d.Y)).ToArray();

                    AStarNode? closest = distances.Where(d => !(prevX.Contains(d.X) && prevY.Contains(d.Y))).OrderBy(d => d.FDistance).ThenBy(d => d.HDistance).FirstOrDefault();

                    while (p > 0 && closest == null)
                    {
                        p--;

                        x = prevX[p];
                        y = prevY[p];

                        distances = GetDistances(x, y, startX, startY, endX, endY);
                        distances = distances.Where(d => d.X >= 0 && d.X < TilesX && d.Y >= 0 && d.Y < TilesY /*&& !Walls[d.X][d.Y]*/).ToArray();
                        distances = distances.Where(d => VisitTile(d.X, d.Y)).ToArray();
                        closest = distances.Where(d => !(prevX.Contains(d.X) && prevY.Contains(d.Y)) || (prevX[p-1] == d.X && prevY[p-1] == d.Y)).OrderBy(d => d.FDistance).ThenBy(d => d.HDistance).FirstOrDefault();
                    }


                    prevX.Add(x);
                    prevY.Add(y);

                    p++;

                    x = closest.X;
                    y = closest.Y;

                    SelectTile(x, y);

                    iterations++;

                    await Delay();
                }
            }
            catch (OperationCanceledException)
            {
                return;
            }
        }

        private AStarNode[] GetDistances(int x, int y, int startX, int startY, int endX, int endY) => new AStarNode[]
                    {
                    new AStarNode(x - 1, y, startX, startY, endX, endY),
                    new AStarNode(x + 1, y, startX, startY, endX, endY),
                    new AStarNode(x, y - 1, startX, startY, endX, endY),
                    new AStarNode(x, y + 1, startX, startY, endX, endY),

                    //new AStarNode(x - 1, y-1, startX, startY, endX, endY),
                    //new AStarNode(x + 1, y+1, startX, startY, endX, endY),
                    //new AStarNode(x+1, y - 1, startX, startY, endX, endY),
                    //new AStarNode(x-1, y + 1, startX, startY, endX, endY)
                    };
    }

    public class AStarNode
    {
        public int X { get; set; }
        public int Y { get; set; }
        public int LDistance { get; set; }
        public int HDistance { get; set; }
        public int FDistance { get; set; }

        public AStarNode(int x, int y, int startX, int startY, int endX, int endY)
        {
            X = x;
            Y = y;
            CalculateDistances(x, y, startX, startY, endX, endY);
        }

        private void CalculateDistances(int x, int y, int startX, int startY, int endX, int endY)
        {
            float LDist = (int)(Vector2.Distance(new Vector2(x, y), new Vector2(startX, startY)) * 100);
            float HDist = (int)(Vector2.Distance(new Vector2(x, y), new Vector2(endX, endY)) * 100);

            LDistance = (int)LDist;
            HDistance = (int)HDist;

            FDistance = (int)(LDist + HDist);
        }
    }
}

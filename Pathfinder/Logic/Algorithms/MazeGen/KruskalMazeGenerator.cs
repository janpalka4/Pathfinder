using Pathfinder.Model;

namespace Pathfinder.Logic.Algorithms.MazeGen
{
    public class KruskalMazeGenerator
    {
        private readonly Random _random = new Random();

        public Maze Generate(int width, int height)
        {
            var maze = new Maze(width, height);

            // Initialize all blocks as walls
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    maze.Blocks[x, y] = true;
                }
            }

            var edges = new List<Edge>();
            var sets = new DisjointSet((width / 2) * (height / 2));

            // Create list of all edges
            for (int y = 1; y < height; y += 2)
            {
                for (int x = 1; x < width; x += 2)
                {
                    int index = (y / 2) * (width / 2) + (x / 2);

                    // Mark the cell as a passage
                    maze.Blocks[x, y] = false;

                    if (x < width - 2)
                    {
                        edges.Add(new Edge(x, y, x + 2, y));
                    }
                    if (y < height - 2)
                    {
                        edges.Add(new Edge(x, y, x, y + 2));
                    }
                }
            }

            // Shuffle the edges
            edges = edges.OrderBy(e => _random.Next()).ToList();

            // Kruskal's algorithm
            foreach (var edge in edges)
            {
                int set1 = sets.Find(((edge.Y1 - 1) / 2) * (width / 2) + ((edge.X1 - 1) / 2));
                int set2 = sets.Find(((edge.Y2 - 1) / 2) * (width / 2) + ((edge.X2 - 1) / 2));

                if (set1 != set2)
                {
                    sets.Union(set1, set2);

                    // Remove wall between cells
                    int wallX = (edge.X1 + edge.X2) / 2;
                    int wallY = (edge.Y1 + edge.Y2) / 2;
                    maze.Blocks[wallX, wallY] = false;
                }
            }

            // Set the starting cell as passable
            maze.Blocks[1, 1] = false;

            return maze;
        }
    }

    public class DisjointSet
    {
        private readonly int[] _parent;
        private readonly int[] _rank;

        public DisjointSet(int size)
        {
            _parent = new int[size];
            _rank = new int[size];
            for (int i = 0; i < size; i++)
            {
                _parent[i] = i;
                _rank[i] = 0;
            }
        }

        public int Find(int x)
        {
            if (_parent[x] != x)
            {
                _parent[x] = Find(_parent[x]);
            }
            return _parent[x];
        }

        public void Union(int x, int y)
        {
            int rootX = Find(x);
            int rootY = Find(y);

            if (rootX != rootY)
            {
                if (_rank[rootX] > _rank[rootY])
                {
                    _parent[rootY] = rootX;
                }
                else if (_rank[rootX] < _rank[rootY])
                {
                    _parent[rootX] = rootY;
                }
                else
                {
                    _parent[rootY] = rootX;
                    _rank[rootX]++;
                }
            }
        }
    }
}

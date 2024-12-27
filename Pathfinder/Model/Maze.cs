namespace Pathfinder.Model
{
    public class Maze
    {
        public int Width { get; }
        public int Height { get; }
        public bool[,] Blocks { get; }

        public Maze(int width, int height)
        {
            Width = width;
            Height = height;
            Blocks = new bool[width, height];
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    Blocks[x, y] = true;
                }
            }
        }
    }
}

namespace Pathfinder.Logic.Algorithms
{
    public abstract class Algorithm
    {
        public event EventHandler<TileEventArgs>? TileSelected;
        public event EventHandler<TileEventArgs>? TileVisited;

        public int TilesX { get; set; }
        public int TilesY { get; set; }
        public bool[][] Walls { get; set; }

        public Algorithm(int tilesX, int tilesY, bool[][] walls)
        {
            TilesX = tilesX;
            TilesY = tilesY;
            Walls = walls;
        }

        public abstract Task Execute(int startX, int startY, int endX, int endY, CancellationToken cancellationToken);

        protected bool VisitTile(int x, int y)
        {
            TileVisited?.Invoke(this, new TileEventArgs { X = x, Y = y });
            return !Walls[x][y];
        }

        protected void SelectTile(int x, int y)
        {
            TileSelected?.Invoke(this, new TileEventArgs { X = x, Y = y });
        }

        protected async Task Delay(float mult = 1f)
        {
            await Task.Delay((int)(10 * mult));
        }
    }

    public struct TileEventArgs
    {
        public int X { get; set; }
        public int Y { get; set; }
    }
}

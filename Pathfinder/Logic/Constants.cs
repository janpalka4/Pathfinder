using System.Numerics;

namespace Pathfinder.Logic
{
    public static class Constants
    {
        public const int TILE_SIZE = 24;

        public readonly static Vector4 COLOR_EMPTY = new Vector4(0,0,0,0);
        public readonly static Vector4 COLOR_WALL = new Vector4(0, 0, 0, 1);
        public readonly static Vector4 COLOR_VISITED_FROM = new Vector4(152, 0, 173, 0);
        public readonly static Vector4 COLOR_VISITED_TO = new Vector4(0, 45, 178, 1);
        public readonly static Vector4 COLOR_PATH = new Vector4(45, 217, 0, 1);
        public readonly static Vector4 COLOR_START = new Vector4(234, 0, 59, 1);
        public readonly static Vector4 COLOR_END = new Vector4(255, 242, 0, 1);
        public readonly static Vector4 COLOR_GRID = new Vector4(128, 128, 128, 0.5f);
        public readonly static Vector4 COLOR_GRID_FULL = new Vector4(128, 128, 128, 1);
    }
}

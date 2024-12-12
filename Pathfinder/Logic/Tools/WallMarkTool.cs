using Pathfinder.Components;
using Pathfinder.Model;

namespace Pathfinder.Logic.Tools
{
    public class WallMarkTool : ITool
    {
        public void Use(GridTile tile)
        {
            tile.Type = TileType.WALL;
        }
    }
}

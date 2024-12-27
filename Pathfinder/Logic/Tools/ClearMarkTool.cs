using Pathfinder.Components;
using Pathfinder.Model;

namespace Pathfinder.Logic.Tools
{
    public class ClearMarkTool : ITool
    {
        public void Use(GridTile tile)
        {
            tile.Type = TileType.EMPTY;
        }
    }
}

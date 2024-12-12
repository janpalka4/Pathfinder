using Pathfinder.Components;
using Pathfinder.Model;

namespace Pathfinder.Logic.Tools
{
    public class EndMarkTool : ITool
    {
        public void Use(GridTile tile)
        {
            if (GridCache.End is not null)
            {
                GridCache.End.Type = TileType.EMPTY;
            }

            tile.Type = TileType.END;
            GridCache.End = tile;
        }
    }
}

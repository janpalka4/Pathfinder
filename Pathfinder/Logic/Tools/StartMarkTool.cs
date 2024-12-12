using Pathfinder.Components;
using Pathfinder.Model;

namespace Pathfinder.Logic.Tools
{
    public class StartMarkTool : ITool
    {
        public void Use(GridTile tile)
        {
            if(GridCache.Start is not null)
            {
                GridCache.Start.Type = TileType.EMPTY;
            }

            tile.Type = TileType.START;
            GridCache.Start = tile;
        }
    }
}

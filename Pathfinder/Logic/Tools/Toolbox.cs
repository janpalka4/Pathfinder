using Pathfinder.Components;
using Pathfinder.Model;

namespace Pathfinder.Logic.Tools
{
    public static class Toolbox
    {
        public static ITool? Tool { get; set; }

        public static void UseTool(GridTile tile)
        {
            Tool?.Use(tile);
        }
    }
}

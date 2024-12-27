using Pathfinder.Logic;
using System.Numerics;

namespace Pathfinder.Model.UI
{
    public class TileAnimation
    {
        public TileKeyframe[] Keyframes { get; set; }

        public TileAnimation(TileKeyframe[] keyframes)
        {
            Keyframes = keyframes;
        }

        public static TileAnimation VisitedAnimation = new TileAnimation(new TileKeyframe[]
        {
            new TileKeyframe() { DurationMs = 100, Color = Constants.COLOR_VISITED_FROM, Size = new Vector2(0,0), BorderRadius = 8 },
            new TileKeyframe() { DurationMs = 100, Color = Constants.COLOR_VISITED_TO, Size = new Vector2(1f,1f), BorderRadius = 0 } 
        });
        public static TileAnimation HoverEndAnimation = new TileAnimation(new TileKeyframe[]
        {
            new TileKeyframe() { DurationMs = 250, Color = Constants.COLOR_GRID_FULL, Size = new Vector2(1f,1f), BorderRadius = 0 },
            new TileKeyframe() { DurationMs = 250, Color = Constants.COLOR_EMPTY, Size = new Vector2(1f,1f), BorderRadius = 0 },
        });
    }
}

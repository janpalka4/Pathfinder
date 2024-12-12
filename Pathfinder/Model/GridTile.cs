using Pathfinder.Logic;
using System.Numerics;

namespace Pathfinder.Model
{
    public class GridTile
    {
        public event EventHandler<GridTile>? OnTileChanged;

        public TileType Type { get => _type; set => SetType(value); }
        public Vector2 Position { get; set; }

        private TileType _type = TileType.EMPTY;

        public GridTile(Vector2 position)
        {
            Position = position;
        }

        public Vector4 GetColor()
        {
            return Type switch
            {
                TileType.EMPTY => Constants.COLOR_EMPTY,
                TileType.WALL => Constants.COLOR_WALL,
                TileType.START => Constants.COLOR_START,
                TileType.END => Constants.COLOR_END,
                TileType.LPATH => Constants.COLOR_PATH,
                TileType.VISITED => Constants.COLOR_VISITED_TO,
                TileType.PATH => Constants.COLOR_PATH,
                _ => new Vector4(1, 1, 1, 1)
            };
        }

        private void SetType(TileType type)
        {
            _type = type;
            OnTileChanged?.Invoke(this,this);
        }
    }
}
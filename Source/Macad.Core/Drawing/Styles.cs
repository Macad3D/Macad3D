using Macad.Common;

namespace Macad.Core.Drawing
{
    public class StrokeStyle
    {
        public Color? Color { get; }
        public float Width  { get; }
        public LineStyle LineStyle  { get; }

        public StrokeStyle(Color? color, float width, LineStyle lineStyle)
        {
            Color = color;
            Width = width;
            LineStyle = lineStyle;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class FillStyle
    {
        public Color? Color { get; }

        public FillStyle(Color? color)
        {
            Color = color;
        }
    }
}
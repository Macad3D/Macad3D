using Macad.Common;

namespace Macad.Core.Drawing;

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

//--------------------------------------------------------------------------------------------------

public class FontStyle
{
    public string Family { get; }
    public float Size { get; }

    //--------------------------------------------------------------------------------------------------

    public FontStyle(string family, float size)
    {
        Family = family;
        Size = size;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEqual(FontStyle other)
    {
        return Family == other.Family
               && Size == other.Size;
    }
}
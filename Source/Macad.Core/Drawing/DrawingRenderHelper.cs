using System;
using System.Drawing;
using Macad.Occt;
using Color = Macad.Common.Color;

namespace Macad.Core.Drawing;

public static class DrawingRenderHelper
{
    public static FontStyle GetDefaultFontStyle()
    {
        var parameterSet = CoreContext.Current.Parameters.Get<DrawingParameterSet>();
        return new(parameterSet.DefaultFontFamily, parameterSet.DefaultFontSize);
    }

    //--------------------------------------------------------------------------------------------------

    public static (double Length, double Width) GetArrowSize()
    {
        var parameterSet = CoreContext.Current.Parameters.Get<DrawingParameterSet>();
        return (parameterSet.DimensionArrowLength, parameterSet.DimensionArrowWidth);
    }

    //--------------------------------------------------------------------------------------------------

    public static void RenderArrow(IDrawingRenderer renderer, Ax2d location, double scale=1.0)
    {
        var arrowSize = GetArrowSize();

        var p1 = location.Location;
        var backpoint = p1.Translated(location.Direction.Reversed().ToVec(arrowSize.Length * scale));
        var rightVec = new Vec2d(location.Direction.Y, -location.Direction.X).Scaled(arrowSize.Width * 0.5 * scale);
        var p2 = backpoint.Translated(rightVec);
        var p3 = backpoint.Translated(rightVec.Reversed());

        renderer.SetStyle(null, new FillStyle(Color.Black), null);
        renderer.BeginPath();
        renderer.BeginPathSegment();
        renderer.Line(p1, p2);
        renderer.Line(p2, p3);
        renderer.Line(p3, p1);
        renderer.EndPathSegment();
        renderer.EndPath();
    }

    //--------------------------------------------------------------------------------------------------

    public static void RenderCross(IDrawingRenderer renderer, Pnt2d point)
    {
        renderer.Line(point.Translated(new Vec2d(-1, -1)), point.Translated(new Vec2d(1, 1)));
        renderer.Line(point.Translated(new Vec2d(-1, 1)), point.Translated(new Vec2d(1, -1)));
    }

    //--------------------------------------------------------------------------------------------------

    public static XY MeasureText(string text, FontStyle style)
    {
        Font font = new Font(new FontFamily(style.Family), style.Size, System.Drawing.FontStyle.Regular, GraphicsUnit.Millimeter);

        using var g = Graphics.FromHwnd(IntPtr.Zero);
        g.PageUnit = GraphicsUnit.Millimeter;

        var size = g.MeasureString(text, font, new SizeF(), StringFormat.GenericTypographic);
        return new XY(size.Width, size.Height);
    }

}
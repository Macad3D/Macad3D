using Macad.Occt;

namespace Macad.Core.Drawing;

public interface IDrawingRenderer
{
    IRendererCapabilities Capabilities { get; }

    //--------------------------------------------------------------------------------------------------

    void Line(Pnt2d start, Pnt2d end);
    void Circle(Pnt2d center, double radius, double startAngle, double endAngle) {}
    void Ellipse(Pnt2d center, double majorRadius, double minorRadius, double rotation, double startAngle, double endAngle) {}
    void BezierCurve(Pnt2d[] knots) {}
    void BSplineCurve(int degree, double[] knots, Pnt2d[] controlPoints, double[] weights, bool isRational) {}
    void Text(string text, Pnt2d position, double rotation);

    //--------------------------------------------------------------------------------------------------

    void BeginGroup(string name) {}
    void EndGroup() {}
    void BeginPath() {}
    void EndPath() {}
    void BeginPathSegment() {}
    void EndPathSegment() {}

    //--------------------------------------------------------------------------------------------------

    void SetStyle(StrokeStyle stroke, FillStyle fill, FontStyle font);

    //--------------------------------------------------------------------------------------------------

    bool RenderElement(DrawingElement element) { return false; }
    bool RenderBrepShape(TopoDS_Shape shape) { return false; }
        
    //--------------------------------------------------------------------------------------------------
}
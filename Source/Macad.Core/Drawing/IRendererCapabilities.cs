namespace Macad.Core.Drawing
{
    public interface IRendererCapabilities
    {
        int BSplineCurveMaxDegree => 0;
        int BezierCurveMaxDegree => 0;
        bool CircleAsCurve => false;
        bool EllipseAsCurve => false;
    }
}
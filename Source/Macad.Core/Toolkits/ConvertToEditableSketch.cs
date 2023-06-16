using System.Linq;
using Macad.Common;
using Macad.Core.Drawing;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Toolkits;

public class ConvertToEditableSketch : IDrawingRenderer, IRendererCapabilities
{
    public static Sketch Convert(TopoDS_Shape brepShape)
    {
        var converter = new ConvertToEditableSketch();
        converter.Add(brepShape);
        return converter._Sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CollapseShapeStack(Body[] bodies, bool saveUndo = true)
    {
        var result = true;

        Shape[] originalShapes = bodies.Select(body => body.Shape)
                                       .Where(shape => shape.ShapeType == ShapeType.Sketch)
                                       .ToArray();
        if (originalShapes.Length == 0)
            return false; // Nothing to do

        TopoDS_Shape[] originalBreps = originalShapes.Select(shape => shape.GetBRep())
                                                     .ToArray();

        for (var i = 0; i < bodies.Length; i++)
        {
            var originalShape = originalShapes[i];
            if (originalShape is Sketch)
            {
                continue;
            }

            if (originalBreps[i] == null)
            {
                result = false;
                continue;
            }

            Sketch newSketch = Convert(originalBreps[i]);
            
            Body body = bodies[i];
            body.CollapseShapeStack(newSketch, saveUndo);

            // Correct transformation
            if(EdgeAlgo.GetPlaneOfEdges(originalBreps[i], out Pln plane))
            {
                var worldPosition = plane.Position.Transformed(body.GetTransformation());
                Trsf trsf = new Trsf(new Ax3(Pnt.Origin, worldPosition.Direction, worldPosition.XDirection), Ax3.XOY);
                body.Position = worldPosition.Location;
                body.Rotation = trsf.GetRotation();
            }
        }



        return result;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Sketch _Sketch;
    readonly SketchBuilder _Builder;
    bool _InPath;
    bool _PathIsOpen;

    //--------------------------------------------------------------------------------------------------

    ConvertToEditableSketch()
    {
        _Sketch = new Sketch();
        _Builder = new SketchBuilder(_Sketch);
    }

    //--------------------------------------------------------------------------------------------------

    void Add(TopoDS_Shape brepShape)
    {
        BrepRenderHelper.RenderShape(this, brepShape);
    }

    //--------------------------------------------------------------------------------------------------
    
    #region IRendererCapabilities

    int IRendererCapabilities.BezierCurveMaxDegree => 3;
    bool IRendererCapabilities.EllipticalArcAsCurve => true;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IDrawingRenderer

    IRendererCapabilities IDrawingRenderer.Capabilities => this;

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
    {
        if (_InPath)
        {
            _StartPath(start.X, start.Y);
            _Builder.LineTo(end.X, end.Y);
        }
        else
        {
            _Builder.Line(start.X, start.Y, end.X, end.Y);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Circle(Pnt2d center, double radius, double startAngle, double endAngle)
    {
        Geom2d_Circle circle = new Geom2d_Circle(new Ax2d(center, Dir2d.DX), radius);

        if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
        {
            // Full Circle
            var start = circle.Value(startAngle);
            _Builder.Circle(center.X, center.Y, start.X, start.Y);
        }
        else
        {
            // Arc
            var start = circle.Value(startAngle);
            var end = circle.Value(endAngle);
            var rim = circle.Value(startAngle + (endAngle - startAngle) / 2);
            if (_InPath)
            {
                _StartPath(start.X, start.Y);
                _Builder.ArcTo(end.X, end.Y, rim.X, rim.Y);
            }
            else
            {
                _Builder.Arc(start.X, start.Y, end.X, end.Y, rim.X, rim.Y);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    void IDrawingRenderer.Ellipse(Pnt2d center, double majorRadius, double minorRadius, double rotation, double startAngle, double endAngle)
    {
        if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
        {
            // Full ellipse
            _Builder.Ellipse(center.X, center.Y, majorRadius, minorRadius, rotation.ToDeg());
        }
        // Elliptical arc should be rendered as curve
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.BezierCurve(Pnt2d[] knots)
    {
        if (_InPath)
        {
            _StartPath(knots[0].X, knots[0].Y);
            switch (knots.Length)
            {
                case 3:
                    _Builder.BezierTo(knots[2].X, knots[2].Y, knots[1].X, knots[1].Y);
                    break;
                case 4:
                    _Builder.BezierTo(knots[3].X, knots[3].Y, knots[1].X, knots[1].Y, knots[2].X, knots[2].Y);
                    break;
            }
        }
        else
        {
            switch (knots.Length)
            {
                case 3:
                    _Builder.Bezier(knots[0].X, knots[0].Y, knots[2].X, knots[2].Y, knots[1].X, knots[1].Y);
                    break;
                case 4:
                    _Builder.Bezier(knots[0].X, knots[0].Y, knots[3].X, knots[3].Y, knots[1].X, knots[1].Y, knots[2].X, knots[2].Y);
                    break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _StartPath(double startX, double startY)
    {
        if (_InPath && !_PathIsOpen)
        {
            _Builder.StartPath(startX, startY);
            _PathIsOpen = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.BeginPath()
    {
        _InPath = true;
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.EndPath()
    {
        if (_InPath && _PathIsOpen)
        {
            _Builder.EndPath();
        }
        _PathIsOpen = false;
        _InPath = false;
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Text(string text, Pnt2d position, double rotation)
    {
        // Not implemented
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.SetStyle(StrokeStyle stroke, FillStyle fill, FontStyle font)
    {
        // Not implemented
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
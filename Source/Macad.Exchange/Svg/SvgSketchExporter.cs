using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Macad.Exchange.Svg;

internal sealed class SvgSketchExporter : SvgExporterBase
{
    public static MemoryStream Export(Sketch sketch)
    {
        var exporter = new SvgSketchExporter(sketch);

        return exporter._Export();
    }

    //--------------------------------------------------------------------------------------------------

    readonly Sketch _Sketch;
    SvgDomGroup _DomGroup;
    SvgDomPath _CurrentPath;
    int _FirstPathEndPoint = -1;
    int _LastPathEndPoint = -1;

    //--------------------------------------------------------------------------------------------------

    SvgSketchExporter(Sketch sketch)
    {
        _Sketch = sketch;
    }

    //--------------------------------------------------------------------------------------------------

    MemoryStream _Export()
    {
        _DomGroup = new SvgDomGroup
        {
            ID = _Sketch.Name,
            Style = new SvgStyle {StrokeWidth = 0.1f, StrokeColor = Color.Black, FillColor = null}
        };

        var freeSegments = new Dictionary<int,SketchSegment>(_Sketch.Segments);
        while (freeSegments.Any())
        {
            var currentSegmentKvp = freeSegments.First();
            freeSegments.Remove(currentSegmentKvp.Key);

            var currentSegment = currentSegmentKvp.Value;
            if ((currentSegment.StartPoint == -1) || (currentSegment.EndPoint == -1))
            {
                // Unconnected segment
                _AddUnconnectableSegment(currentSegment);
                continue;
            }

            // Start path
            _CurrentPath = new SvgDomPath();
            _FirstPathEndPoint = -1;
            _LastPathEndPoint = -1;

            // search for connected
            while (freeSegments.Any())
            {
                currentSegmentKvp = freeSegments.FirstOrDefault(kvp => kvp.Value.IsConnected(currentSegment));
                if (currentSegmentKvp.Value == null)
                {
                    // disconnected segment
                    break;
                }

                if (_FirstPathEndPoint == -1)
                {
                    // First connection, get winding order and write the move to start position
                    if ((currentSegment.EndPoint == currentSegmentKvp.Value.StartPoint)
                        || (currentSegment.EndPoint == currentSegmentKvp.Value.EndPoint))
                    {
                        var startPoint = _Sketch.Points[currentSegment.StartPoint];
                        _CurrentPath.Segments.Add(new SvgPathSegMoveto(startPoint));
                        _LastPathEndPoint = currentSegment.StartPoint;
                        _FirstPathEndPoint = currentSegment.StartPoint;
                    }
                    else
                    {
                        var startPoint = _Sketch.Points[currentSegment.EndPoint];
                        _CurrentPath.Segments.Add(new SvgPathSegMoveto(startPoint));
                        _LastPathEndPoint = currentSegment.EndPoint;
                        _FirstPathEndPoint = currentSegment.EndPoint;
                    }

                    // add first element
                    if (!_AddPathSegment(currentSegment))
                    {
                        break;
                    }
                }

                // Next connected, write
                currentSegment = currentSegmentKvp.Value;
                freeSegments.Remove(currentSegmentKvp.Key);

                if (!_AddPathSegment(currentSegment))
                {
                    break;
                }
            }

            if (_LastPathEndPoint == -1)
            {
                // Standalone element, write as single segment
                var startPoint = _Sketch.Points[currentSegment.StartPoint];
                _CurrentPath.Segments.Add(new SvgPathSegMoveto(startPoint));
                _AddPathSegment(currentSegment);
            }

            // Close segment, if needed
            if (_FirstPathEndPoint == _LastPathEndPoint)
            {
                _CurrentPath.Segments.Add(new SvgPathSegClosePath());
            }

            // Add to group
            _DomGroup.Children.Add(_CurrentPath);
        }

        var doc = new SvgDocument
        {
            Width = 100,
            Height = 100,
            DotsPerInch = DotsPerInch
        };

        doc.Children.Add(_DomGroup);

        return doc.WriteToStream();
    }

    //--------------------------------------------------------------------------------------------------

    void _AddUnconnectableSegment(SketchSegment sketchSegment)
    {
        if (sketchSegment is SketchSegmentCircle)
        {
            var sketchCircle = (SketchSegmentCircle) sketchSegment;
            var radius = sketchCircle.Radius(_Sketch.Points);
            if (radius > 0)
            {
                var center = _Sketch.Points[sketchCircle.CenterPoint];
                _DomGroup.Children.Add(new SvgDomCircle(center, radius));
                return;
            }
        }
        else if (sketchSegment is SketchSegmentEllipse)
        {
            var sketchEllipse = (SketchSegmentEllipse) sketchSegment;
            var curve = sketchEllipse.MakeCurve(_Sketch.Points) as Geom2d_Ellipse;
            if (curve != null)
            {
                var center = _Sketch.Points[sketchEllipse.CenterPoint];
                var element = new SvgDomEllipse(center, curve.MajorRadius(), curve.MinorRadius());
                var majorAxisPoint = _Sketch.Points[sketchEllipse.GetMajorAxisPoint(_Sketch.Points)];
                double rotAngle = new Ax2d(center, new Vec2d(center, majorAxisPoint).ToDir()).Angle(new Ax2d(center, Dir2d.DX));

                element.Transforms.Add(new SvgRotateTransform(rotAngle.ToDeg(), element.Center));

                _DomGroup.Children.Add(element);
                return;
            }
        }
        else
        {
            Messages.Warning($"Unconnectable segment {_Sketch.Segments.FirstOrDefault(x => x.Value == sketchSegment).Key} of type {sketchSegment.GetType().Name} does not have a method to be exported to a SVG element.");
        }
        Messages.Warning($"Unconnectable segment {_Sketch.Segments.FirstOrDefault(x => x.Value == sketchSegment).Key} of type {sketchSegment.GetType().Name} could not be exported to SVG element.");
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddPathSegment(SketchSegment sketchSegment)
    {
        // Get start and end point
        Pnt2d start, end;
        if (sketchSegment.EndPoint == _LastPathEndPoint)
        {
            start = _Sketch.Points[sketchSegment.EndPoint];
            end = _Sketch.Points[sketchSegment.StartPoint];
            _LastPathEndPoint = sketchSegment.StartPoint;
        }
        else
        {
            start = _Sketch.Points[sketchSegment.StartPoint];
            end = _Sketch.Points[sketchSegment.EndPoint];
            _LastPathEndPoint = sketchSegment.EndPoint;
        }

        // Create path segment
        switch (sketchSegment)
        {
            case SketchSegmentLine lineSegment:
                return _AddLineSegment(lineSegment, start, end);

            case SketchSegmentBezier bezierSegment:
                return _AddBezierSegment(bezierSegment, start, end);

            case SketchSegmentArc arcSegment:
                return _AddArcSegment(arcSegment, start, end);

            case SketchSegmentEllipticalArc arcSegment:
                return _AddEllipicalArcSegment(arcSegment, start, end);
        }

        Messages.Warning($"Connectable segment {_Sketch.Segments.FirstOrDefault(x => x.Value == sketchSegment).Key} of type {sketchSegment.GetType().Name} does not have a method to be exported to a SVG path.");
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddLineSegment(SketchSegmentLine segment, Pnt2d start, Pnt2d end)
    {
        var svgSegment = new SvgPathSegLineto(start, end);
        _CurrentPath.Segments.Add(svgSegment);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddBezierSegment(SketchSegmentBezier segment, Pnt2d start, Pnt2d end)
    {
        switch (segment.Points.Length)
        {
            case 3:
                var controlPoint = _Sketch.Points[segment.Points[1]];
                _CurrentPath.Segments.Add(new SvgPathSegCurvetoQuadratic(start, controlPoint, end));
                break;

            case 4:
                var controlPoint1 = _Sketch.Points[segment.Points[1]];
                var controlPoint2 = _Sketch.Points[segment.Points[2]];
                _CurrentPath.Segments.Add(new SvgPathSegCurvetoCubic(start, controlPoint1, controlPoint2, end));
                break;

            default:
                Messages.Warning($"The bezier segment {_Sketch.Segments.FirstOrDefault(x => x.Value == segment).Key} is of a higher order than cubic, which is unsupported in SVG paths.");
                return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddArcSegment(SketchSegmentArc arcSegment, Pnt2d start, Pnt2d end)
    {
        var parameters = new double[2];
        var circle = arcSegment.GetCircle(_Sketch.Points, parameters);
        if (circle == null)
            return false;
        double length = parameters[1] - parameters[0];
        var size = length < Math.PI ? SvgArcSize.Small : SvgArcSize.Large;
        var sweep = circle.Position().Sense() > 0 ? SvgArcSweep.Positive : SvgArcSweep.Negative;

        var svgSegment = new SvgPathSegArc(start, circle.Radius(), circle.Radius(), 0, size, sweep, end);

        _CurrentPath.Segments.Add(svgSegment);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddEllipicalArcSegment(SketchSegmentEllipticalArc arcSegment, Pnt2d start, Pnt2d end)
    {
        var parameters = new double[2];
        var ellipse = arcSegment.GetEllipse(_Sketch.Points, parameters);
        if (ellipse == null)
            return false;
        double rotAngle = ellipse.XAxis().Angle(new Ax2d(ellipse.Location(), Dir2d.DX));
        double length = parameters[1] - parameters[0];
        var size = length < Math.PI ? SvgArcSize.Small : SvgArcSize.Large;
        var sense = ellipse.Axis().Sense() > 0;
        if (start == _Sketch.Points[arcSegment.EndPoint])
            sense = !sense; // Sense was inverted by interchanged start/end point
        var sweep = sense ? SvgArcSweep.Positive : SvgArcSweep.Negative;

        var svgSegment = new SvgPathSegArc(start, ellipse.MajorRadius(), ellipse.MinorRadius(), rotAngle.ToDeg(), size, sweep, end);

        _CurrentPath.Segments.Add(svgSegment);
        return true;
    }

    //--------------------------------------------------------------------------------------------------
}
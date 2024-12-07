using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Core.Geom;

namespace Macad.Exchange.Svg;

internal sealed class SvgSketchImporter
{
    #region Reader
        
    public static bool Import(Stream stream, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments)
    {
        var importer = new SvgSketchImporter();

        return importer._Import(stream, out points, out segments);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members and C'tor

    SvgDocument _Document;
    readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>();
    int _LastPointIndex;
    readonly List<SketchSegment> _Segments = new List<SketchSegment>();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Importer

    bool _Import(Stream svgStream, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments)
    {
        points = null;
        segments = null;

        _Document = new SvgDocument();
        if (!_Document.ReadFromStream(svgStream))
        {
            Messages.Error("SVG data has an invalid format.");
            _Document = null;
            return false;
        }

        // Iterate through children
        foreach (var child in _Document.Children)
        {
            _ImportElement(child);
        }

        if (!_Segments.Any())
        {
            Messages.Error("Could not find any usable elements in SVG data.");
            return false;
        }

        points = _Points;
        segments = _Segments.ToIndexedDictionary();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportElement(SvgDomElement element)
    {
        switch (element)
        {
            case SvgDomGroup group:
                _ImportGroup(group);
                break;
            case SvgDomCircle circle:
                _ImportCircle(circle);
                break;
            case SvgDomEllipse ellipse:
                _ImportEllipse(ellipse);
                break;
            case SvgDomRect rectangle:
                _ImportRectangle(rectangle);
                break;
            case SvgDomPath path:
                _ImportPath(path);
                break;
            default:
                Messages.Warning("Imported SVG shape does have an unsupported node type " + element.GetType().Name + ". [ " + element.ID + " ]");
                break;
        }

        // Read subelements
        foreach (var child in element.Children)
        {
            _ImportElement(child);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportGroup(SvgDomGroup domGroup)
    {
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportCircle(SvgDomCircle domCircle)
    {
        var centerPoint = domCircle.Center;
        double radius = domCircle.Radius;
        if (radius <= 0)
            return;

        var centerIndex = _AddPoint(centerPoint);
        var rimIndex = _AddPoint(centerPoint.Translated(new Vec2d(radius, 0)));
        _Segments.Add(new SketchSegmentCircle(centerIndex, rimIndex));
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportEllipse(SvgDomEllipse domEllipse)
    {
        var centerPoint = domEllipse.Center;
        var radiusX = domEllipse.RadiusX;
        var radiusY = domEllipse.RadiusY;
        if (radiusX <= 0 || radiusY <= 0)
            return;

        var rimPointX = domEllipse.RimPointX;
        var rimPointY = domEllipse.RimPointY;

        var centerIndex = _AddPoint(centerPoint);
        var rimIndexX = _AddPoint(rimPointX);
        var rimIndexY = _AddPoint(rimPointY);
        _Segments.Add(new SketchSegmentEllipse(centerIndex, rimIndexX, rimIndexY));
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportRectangle(SvgDomRect rectangle)
    {
        if ((rectangle.CornerRadiusX > 0) || (rectangle.CornerRadiusY > 0))
        {
            Messages.Warning("Imported SVG shape does have an rectangle with corner radius, which are not supported yet. [ " + rectangle.ID + " ]");
        }

        var leftTop = rectangle.Start;
        var left = leftTop.X;
        var top = leftTop.Y;
        var right = left + rectangle.Width;
        var bottom = top + rectangle.Height;

        var points = new[]
        {
            _AddPoint(new Pnt2d(left, top)),
            _AddPoint(new Pnt2d(right, top)),
            _AddPoint(new Pnt2d(right, bottom)),
            _AddPoint(new Pnt2d(left, bottom))
        };

        _Segments.Add(new SketchSegmentLine(points[0], points[1]));
        _Segments.Add(new SketchSegmentLine(points[1], points[2]));
        _Segments.Add(new SketchSegmentLine(points[2], points[3]));
        _Segments.Add(new SketchSegmentLine(points[3], points[0]));
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportPath(SvgDomPath path)
    {
        if (path.Segments.Count < 1)
            return;

        int startPoint = -1;
        int firstPoint = -1;
        foreach (var pathSegment in path.Segments)
        {
            switch (pathSegment)
            {
                case SvgPathSegMoveto moveToSegment:
                    startPoint = _AddPoint(pathSegment.Start);
                    if (firstPoint == -1)
                        firstPoint = startPoint;
                    break;

                case SvgPathSegLineto lineSegment:
                    _ImportLineSegment(lineSegment, ref startPoint);
                    break;

                case SvgPathSegClosePath closePathSegment:
                    _ImportClosePathSegment(closePathSegment, ref startPoint, ref firstPoint);
                    break;

                case SvgPathSegArc arcSegment:
                    _ImportArcSegment(arcSegment, ref startPoint);
                    break;

                case SvgPathSegCurvetoCubic cubicCurveSegment:
                    _ImportCubicCurveSegment(cubicCurveSegment, ref startPoint);
                    break;

                case SvgPathSegCurvetoQuadratic quadraticCurveSegment:
                    _ImportQuadraticCurveSegment(quadraticCurveSegment, ref startPoint);
                    break;

                default:
                    var endPoint = _AddPoint(pathSegment.End);
                    startPoint = endPoint;
                    Messages.Warning("Imported SVG shape does have an unsupported path segment type " + pathSegment.GetType().Name + ". [ " + path.ID + " ]");
                    break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportClosePathSegment(SvgPathSegClosePath svgSegment, ref int startPoint, ref int firstPoint)
    {
        if (_Points[startPoint].IsEqual(_Points[firstPoint], Double.Epsilon))
        {
            // Replace last point
            var segment = _Segments.LastOrDefault();
            if (segment != null)
            {
                for (int i = 0; i < segment.Points.Length; i++)
                {
                    if (segment.Points[i] == startPoint)
                        segment.Points[i] = firstPoint;
                }
                _Points.Remove(startPoint);
            }
        }
        else
        {
            _Segments.Add(new SketchSegmentLine(startPoint, firstPoint));
        }
        startPoint = -1;
        firstPoint = -1;
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportLineSegment(SvgPathSegLineto svgSegment, ref int startPoint)
    {
        var endPoint = _AddPoint(svgSegment.End);
        _Segments.Add(new SketchSegmentLine(startPoint, endPoint));
        startPoint = endPoint;
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportArcSegment(SvgPathSegArc svgSegment, ref int startPoint)
    {
        var radiusX = svgSegment.RadiusX;
        var radiusY = svgSegment.RadiusY;
        var rotation = -svgSegment.Angle.ToRad();
        var startPnt2d = svgSegment.Start;
        var endPnt2d = svgSegment.End;
        var centerPnt2d = Geom2dUtils.FindEllipseCenterFromEndpoints(
            startPnt2d, endPnt2d,
            radiusX, radiusY, rotation,
            (int)svgSegment.Size != (int)svgSegment.Sweep);

        // Do we have a circle arc?
        if (Math.Abs(radiusX - radiusY) < 0.0001)
        {
            var axis = Ax2d.OX.Rotated(Pnt2d.Origin, rotation).Translated(centerPnt2d.ToVec());
            var circ = new gp_Circ2d(axis, radiusX, svgSegment.Sweep != SvgArcSweep.Positive);

            //Debug.WriteLine("StartParam: {0}  -  EndParam: {1}", ElCLib.Parameter(circ, startPnt2d), ElCLib.Parameter(circ, endPnt2d));
            var startParam = ElCLib.Parameter(circ, startPnt2d);
            var endParam = ElCLib.Parameter(circ, endPnt2d);
            if (endParam < startParam)
                endParam += 2 * Math.PI;
            var rimPnt2d = ElCLib.Value(startParam + (endParam - startParam) / 2, circ);

            var endPoint = _AddPoint(endPnt2d);
            _Segments.Add(new SketchSegmentArc(startPoint, endPoint, _AddPoint(rimPnt2d)));
            startPoint = endPoint;
        }
        else
        {
            // No, we have a elliptical arc
            // Construct ellipse, convert to bezier
            var axis = Ax2d.OX.Rotated(Pnt2d.Origin, rotation).Translated(centerPnt2d.ToVec());
            var ellipse = new gp_Elips2d(axis, radiusX, radiusY, svgSegment.Sweep != SvgArcSweep.Positive);
            var startParam = ElCLib.Parameter(ellipse, startPnt2d);
            var endParam = ElCLib.Parameter(ellipse, endPnt2d);
            if (double.IsNaN(startParam) || double.IsNaN(endParam))
            {
                Messages.Warning("Invalid elliptical arc found in SVG file.");
                return;
            }

            var bezierPointArray = Geom2dUtils.EllipticalArcToBezier(ellipse, startParam, endParam);
            foreach (var bezierPoints in bezierPointArray)
            {
                var endPoint = _AddPoint(bezierPoints.p2);
                _Segments.Add(new SketchSegmentBezier(startPoint, _AddPoint(bezierPoints.c1), _AddPoint(bezierPoints.c2), endPoint));
                startPoint = endPoint;
            }
        }
            
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportCubicCurveSegment(SvgPathSegCurvetoCubic svgSegment, ref int startPoint)
    {
        var endPoint = _AddPoint(svgSegment.End);
        var controlPoint1 = _AddPoint(svgSegment.C1);
        var controlPoint2 = _AddPoint(svgSegment.C2);

        _Segments.Add(new SketchSegmentBezier(startPoint, controlPoint1, controlPoint2, endPoint));
        startPoint = endPoint;
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportQuadraticCurveSegment(SvgPathSegCurvetoQuadratic svgSegment, ref int startPoint)
    {
        var endPoint = _AddPoint(svgSegment.End);
        var controlPoint = _AddPoint(svgSegment.C1);

        _Segments.Add(new SketchSegmentBezier(startPoint, controlPoint, endPoint));
        startPoint = endPoint;
    }

    //--------------------------------------------------------------------------------------------------

    int _AddPoint(Pnt2d point)
    {
        _LastPointIndex++;
        _Points.Add(_LastPointIndex, point);
        return _LastPointIndex;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
using System;
using System.Collections.Generic;
using System.IO;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Occt;
using Macad.Core;

namespace Macad.Exchange.Dxf;

internal sealed class DxfSketchImporter
{
    #region Reader
        
    public static bool Import(Stream stream, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments, 
                              DxfFlags flags=DxfFlags.None, double precision=0.01, double scale=1.0)
    {
        var importer = new DxfSketchImporter();

        return importer._Import(stream, out points, out segments, flags, precision, scale);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members and C'tor

    readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>();
    readonly Dictionary<int, Pnt2d> _MergeCandidates = new Dictionary<int, Pnt2d>();
    readonly List<SketchSegment> _Segments = new List<SketchSegment>();

    DxfDomDocument _Document;
    int _LastPointIndex = 1;
    double _MergePrecision = 0.01;

    //--------------------------------------------------------------------------------------------------

    DxfSketchImporter()
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Importer

    bool _Import(Stream stream, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments, 
                 DxfFlags flags, double precision, double scale)
    {
        points = null;
        segments = null;

        try
        {
            _MergePrecision = precision;
            _Document = new DxfDomDocument(DxfVersion.Latest, flags);
            if (!_Document.ReadFromStream(stream, scale))
            {
                Messages.Error("DxfImporter: The DXF document is invalid or does not contain any importable entities.");
                _Document = null;
                return false;
            }

            // Iterate through children
            foreach (var entity in _Document.Entities)
            {
                _ImportEntity(entity);
            }

            if (_Segments.Count == 0)
            {
                Messages.Error("DxfImporter: Could not find any usable elements in DXF data.");
                return false;
            }

            points = _Points;
            segments = _Segments.ToIndexedDictionary();
            return true;
        }
        catch (Exception e)
        {
            Messages.Exception("DxfImporter: An exception occured while importing the dxf file.", e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportEntity(DxfDomEntity entity)
    {
        switch (entity)
        {
            case DxfDomLine line:
                _ImportLine(line);
                break;

            case DxfDomCircle circle:
                if (circle.IsArc)
                    _ImportArc(circle);
                else
                    _ImportCircle(circle);
                break;

            case DxfDomEllipse ellipse:
                if (ellipse.IsArc)
                    _ImportEllipticalArc(ellipse);
                else
                    _ImportEllipse(ellipse);
                break;

            case DxfDomLwPolyline lwPolyline:
                _ImportLwPolyline(lwPolyline);
                break;

            case DxfDomPolyline polyline:
                _ImportPolyline(polyline);
                break;

            case DxfDomSpline spline:
                _ImportSpline(spline);
                break;

            default:
                Messages.Warning($"Imported DXF entity is of unsupported type {entity.GetType().Name}.");
                break;
        }

    }

    //--------------------------------------------------------------------------------------------------

    int _AddPoint(Pnt2d point, bool mergable=true)
    {
        if (mergable && !_Document.Flags.HasFlag(DxfFlags.ImportDoNotMergePoints))
        {
            foreach (var kvp in _MergeCandidates)
            {
                if (kvp.Value.IsEqual(point, _MergePrecision))
                    return kvp.Key;
            }

            // Add as merge candidate
            _MergeCandidates.Add(_LastPointIndex, point);
        }

        _Points.Add(_LastPointIndex, point);

        _LastPointIndex++;
        return _LastPointIndex - 1;
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportLine(DxfDomLine dxfLine)
    {
        var startIndex = _AddPoint(dxfLine.StartPoint);
        var endIndex = _AddPoint(dxfLine.EndPoint);
        if (startIndex != endIndex)
        {
            _Segments.Add(new SketchSegmentLine(startIndex, endIndex));
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    void _ImportCircle(DxfDomCircle dxfCircle)
    {
        var centerIndex = _AddPoint(dxfCircle.CenterPoint, false);
            
        double radius = dxfCircle.Radius;
        if (radius <= 0)
            return;
        var rimIndex = _AddPoint(dxfCircle.CenterPoint.Translated(new Vec2d(radius, 0)), false);

        if (centerIndex != rimIndex)
        {
            _Segments.Add(new SketchSegmentCircle(centerIndex, rimIndex));
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    void _ImportArc(DxfDomCircle dxfCircle)
    {
        Pnt2d center = dxfCircle.CenterPoint;
        double radius = dxfCircle.Radius;
        if (radius <= 0)
            return;

        var startParam = dxfCircle.StartAngle.ToRad();
        var endParam = dxfCircle.EndAngle.ToRad();
        if (endParam < startParam)
            endParam += 2 * Math.PI;

        var geomCircle = new Geom2d_Circle(new Ax2d(center, Dir2d.DX), radius);

        var startIndex = _AddPoint(geomCircle.Value(startParam));
        var endIndex = _AddPoint(geomCircle.Value(endParam));
        var rimIndex = _AddPoint(geomCircle.Value(startParam.Lerp(endParam, 0.5)), false);

        if (startIndex != endIndex)
        {
            _Segments.Add(new SketchSegmentArc(startIndex, endIndex, rimIndex));
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    void _ImportEllipse(DxfDomEllipse dxfEllipse)
    {
        var centerPoint = dxfEllipse.CenterPoint;
        var majorRimPoint = centerPoint.Translated(dxfEllipse.MajorAxisPointOffset.ToVec());
        var minorRimPoint = centerPoint.Translated(dxfEllipse.MajorAxisPointOffset.ToVec().Rotated(90.0.ToRad()).Scaled(dxfEllipse.Ratio));

        var centerIndex = _AddPoint(centerPoint, false);
        var majorRimIndex = _AddPoint(majorRimPoint, false);
        var minorRimIndex = _AddPoint(minorRimPoint, false);

        if (majorRimIndex != minorRimIndex)
        {
            _Segments.Add(new SketchSegmentEllipse(centerIndex, majorRimIndex, minorRimIndex));
        }
    }
                        
    //--------------------------------------------------------------------------------------------------

    void _ImportEllipticalArc(DxfDomEllipse dxfEllipse)
    {
        var centerPoint = dxfEllipse.CenterPoint;
        var majorRimPoint = centerPoint.Translated(dxfEllipse.MajorAxisPointOffset.ToVec());
        var minorRimPoint = centerPoint.Translated(dxfEllipse.MajorAxisPointOffset.ToVec().Rotated(90.0.ToRad()).Scaled(dxfEllipse.Ratio));

        var ellipse = Geom2dUtils.MakeEllipse(centerPoint, majorRimPoint, minorRimPoint);

        var bezierPointArray = Geom2dUtils.EllipticalArcToBezier(ellipse, dxfEllipse.StartParameter, dxfEllipse.EndParameter);
        foreach (var bezierPoints in bezierPointArray)
        {
            var startPoint = _AddPoint(bezierPoints.p1);
            var endPoint = _AddPoint(bezierPoints.p2);
            _Segments.Add(new SketchSegmentBezier(startPoint, _AddPoint(bezierPoints.c1, false), _AddPoint(bezierPoints.c2, false), endPoint));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportLwPolyline(DxfDomLwPolyline dxfPolyline)
    {
        if (dxfPolyline.Points.Length == 0)
            return;

        var startIndex = _AddPoint(dxfPolyline.Points[0]);
        for (int i = 1; i < dxfPolyline.Points.Length; i++)
        {
            var endIndex = _AddPoint(dxfPolyline.Points[i]);

            if (dxfPolyline.Bulge != null && dxfPolyline.Bulge[i - 1] != 0.0)
            {
                Pnt2d startPoint = dxfPolyline.Points[i - 1];
                Pnt2d endPoint = dxfPolyline.Points[i];
                double bulge = dxfPolyline.Bulge[i - 1];

                Vec2d d = new Vec2d(startPoint, endPoint).Multiplied(0.5);
                Pnt2d mid = startPoint.Translated(d);
                double sagitta = bulge * d.Magnitude();
                var rimPoint = mid.Translated(new Vec2d(d.Y, -d.X).Normalized().Multiplied(sagitta));
                var rimIndex = _AddPoint(rimPoint);
                _Segments.Add(new SketchSegmentArc(startIndex, endIndex, rimIndex));
            }
            else
            {
                _Segments.Add(new SketchSegmentLine(startIndex, endIndex));
            }
            startIndex = endIndex;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportPolyline(DxfDomPolyline dxfPolyline)
    {
        if (dxfPolyline.Points.Length == 0)
            return;

        var startIndex = _AddPoint(dxfPolyline.Points[0]);
        for (int i = 1; i < dxfPolyline.Points.Length; i++)
        {
            var endIndex = _AddPoint(dxfPolyline.Points[i]);
            _Segments.Add(new SketchSegmentLine(startIndex, endIndex));
            startIndex = endIndex;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportSpline(DxfDomSpline dxfSpline)
    {
        if (dxfSpline.ControlPoints.Length > 0 && dxfSpline.Knots.Length > 0)
        {
            _ImportSplineWithControlPoints(dxfSpline);
        } 
        else if (dxfSpline.FitPoints.Length > 0)
        {
            _ImportSplineWithFitPoints(dxfSpline);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportSplineWithFitPoints(DxfDomSpline dxfSpline)
    {
        // Copy points
        var pointCount = dxfSpline.FitPoints.Length;
        var points = new TColgp_HArray1OfPnt2d(1, pointCount);
        for (int i = 0; i < pointCount; i++)
        {
            points.SetValue(i + 1, dxfSpline.FitPoints[i]);
        }

        // Interpolate
        var algo = new Geom2dAPI_Interpolate(points, false, 0.001);
        if (dxfSpline.HasTangents)
        {
            algo.Load(dxfSpline.StartTangent, dxfSpline.EndTangent);
        }
        algo.Perform();
        if (!algo.IsDone())
        {
            Messages.Warning("DxfImporter: Cannot create spline through fit points.");
            return;
        }

        _AddBSplineCurve(algo.Curve());
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportSplineWithControlPoints(DxfDomSpline dxfSpline)
    {
        var spline = Geom2dUtils.MakeBSplineCurve(dxfSpline.Degree, dxfSpline.Knots, dxfSpline.ControlPoints, dxfSpline.Weights, dxfSpline.Flags.Has(DxfDomSpline.SplineFlags.IsClosed));
        _AddBSplineCurve(spline);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddBSplineCurve(Geom2d_BSplineCurve geom2dBSpline)
    {
        var converter = new Geom2dConvert_BSplineCurveToBezierCurve(geom2dBSpline);
        for (int i = 1; i <= converter.NbArcs(); i += 1)
        {
            var arc = converter.Arc(i);
            _AddBezierCurve(arc, arc.FirstParameter(), arc.LastParameter());
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddBezierCurve(Geom2d_BezierCurve geom2DBezier, double firstParameter, double lastParameter)
    {
        int p1, p2, p3, p4;
        switch (geom2DBezier.Degree())
        {
            case 1:
                p1 = _AddPoint(geom2DBezier.StartPoint());
                p2 = _AddPoint(geom2DBezier.EndPoint());
                _Segments.Add(new SketchSegmentLine(p1, p2));
                break;

            case 2:
                p1 = _AddPoint(geom2DBezier.StartPoint());
                p2 = _AddPoint(geom2DBezier.Pole(2), false);
                p3 = _AddPoint(geom2DBezier.EndPoint());
                _Segments.Add(new SketchSegmentBezier(p1, p2, p3));
                break;

            case 3:
                p1 = _AddPoint(geom2DBezier.StartPoint());
                p2 = _AddPoint(geom2DBezier.Pole(2), false);
                p3 = _AddPoint(geom2DBezier.Pole(3), false);
                p4 = _AddPoint(geom2DBezier.EndPoint());
                _Segments.Add(new SketchSegmentBezier(p1, p2, p3, p4));
                break;

            default:
                // Try to reduce the order of the curve
                var continuity = geom2DBezier.Continuity();
                if (continuity != GeomAbs_Shape.C0)
                    continuity = GeomAbs_Shape.C1;

                var trimmedCurve = new Geom2d_TrimmedCurve(geom2DBezier, firstParameter, lastParameter);

                var converter = new Geom2dConvert_ApproxCurve(trimmedCurve, 0.001 /*Precision.Confusion() * 10*/, continuity, 1000, 3);
                if (!(converter.IsDone() && converter.HasResult()))
                {
                    Messages.Warning("DxfImporter: Bezier curve has an undecreasable order of " + geom2DBezier.Degree() + ".");
                    return;
                }
                _AddBSplineCurve(converter.Curve());
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
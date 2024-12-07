using System;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Drawing;
using Macad.Core.Geom;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDrawingExporter: IDrawingRenderer, IRendererCapabilities
{ 
    public static MemoryStream Export(Drawing drawing, 
                                      DxfVersion version, DxfFlags flags = DxfFlags.None, double precision = 0.01)
    {
        var exporter = new DxfDrawingExporter();
        return exporter._Export(drawing, version, flags, precision);
    }

    //--------------------------------------------------------------------------------------------------

    DxfDomDocument _Document;
    DxfDomLayer _CurrentLayer;
    DxfDomBlock _CurrentBlock;
    string _CurrentLayerName => _CurrentLayer?.Name ?? "0";
    StrokeStyle _CurrentStrokeStyle;
    FontStyle _CurrentFontStyle;
    double _Precision;
    int _DimensionCount = 0;

    //--------------------------------------------------------------------------------------------------

    DxfDrawingExporter()
    {
    }

    //--------------------------------------------------------------------------------------------------
        
    MemoryStream _Export(Drawing drawing, DxfVersion version, DxfFlags flags, double precision)
    {
        _Precision = precision;
        _Document = new DxfDomDocument(version, flags);

        // Export
        drawing.Render(this);

        var stream = _Document.WriteToStream();
        _Document = null;
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

    void _AddEntity(DxfDomEntity entity)
    {
        if (_CurrentBlock != null)
        {
            _CurrentBlock.Entities.Add(entity);
        }
        else
        {
            _Document.Entities.Add(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _AddPolygonCurve(Geom2d_Curve curve)
    {
        var converter = new Geom2dConvert_ApproxCurve(curve, _Precision, GeomAbs_Shape.C0, 500, 1);
        if (!(converter.IsDone() && converter.HasResult()))
        {
            Messages.Error($"Cannot tesselate curve to polyline.");
            return;
        }

        var approx = converter.Curve();
        var points = new Pnt2d[approx.NbPoles()];
        for (int i = 0; i < points.Length; i++)
        {
            points[i] = approx.Pole(i + 1);
        }

        var entity = new DxfDomLwPolyline(_CurrentLayerName, points);
        _AddEntity(entity);
    }

    //--------------------------------------------------------------------------------------------------

    #region IRendererCapabilities

    int IRendererCapabilities.BSplineCurveMaxDegree => 3;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IDrawingRenderer

    IRendererCapabilities IDrawingRenderer.Capabilities => this;

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.BeginGroup(string name)
    {
        _CurrentLayer = _Document.Layers.FirstOrDefault(layer => layer.Name == name);
        if (_CurrentLayer != null)
            return;

        _CurrentLayer = new DxfDomLayer(name)
        {
            Lineweight = _CurrentStrokeStyle?.Width ?? 0.1, 
            LinetypeName = _CurrentStrokeStyle?.LineStyle.ToString() ?? "CONTINUOUS"
        };
        _Document.Layers.Add(_CurrentLayer);
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.EndGroup()
    {
        _CurrentBlock = null;
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.SetStyle(StrokeStyle stroke, FillStyle fill, FontStyle font)
    {
        void __AddLinetype(LineStyle style, double length, double[] pattern)
        {
            var linetype = new DxfDomLinetype(style.ToString(), "", length, pattern);
            _Document.Linetypes.Add(linetype);
        }

        //--------------------------------------------------------------------------------------------------

        _CurrentFontStyle = font;
        _CurrentStrokeStyle = stroke;

        if (stroke != null && !_Document.Linetypes.Exists(lt => lt.Name == stroke.LineStyle.ToString()))
        {
            switch (stroke.LineStyle)
            {
                case LineStyle.Solid:
                    __AddLinetype(LineStyle.Solid, 0.0, new double[0]);
                    break;
                case LineStyle.Dash:
                    __AddLinetype(LineStyle.Dash, 0.6, new[] {0.4, -0.2});
                    break;
                case LineStyle.ShortDash:
                    __AddLinetype(LineStyle.ShortDash, 0.4, new[] {0.2, -0.2});
                    break;
                case LineStyle.Dot:
                    __AddLinetype(LineStyle.Dot, 0.2, new[] {0.1, -0.1});
                    break;
                case LineStyle.DotDash:
                    __AddLinetype(LineStyle.DotDash, 0.9, new[] {0.4, -0.2, 0.1, -0.2});
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.EndPathSegment()
    {
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.EndPath()
    {
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
    {
        var entity = new DxfDomLine(_CurrentLayerName, start, end);
        _AddEntity(entity);
    }

    //--------------------------------------------------------------------------------------------------
        
    void IDrawingRenderer.Circle(Pnt2d center, double radius, double startAngle, double endAngle)
    {
        if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
        {
            // Full circle
            var entity = new DxfDomCircle(_CurrentLayerName, center, radius);
            _AddEntity(entity);
        }
        else
        {
            // Circle arc
            if(startAngle > endAngle)
                startAngle.Swap(ref endAngle);

            var entity = new DxfDomCircle(_CurrentLayerName, center, radius, startAngle.ToDeg(), endAngle.ToDeg());
            _AddEntity(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Ellipse(Pnt2d center, double majorRadius, double minorRadius, double rotation, double startAngle, double endAngle)
    {
        if(startAngle > endAngle)
            startAngle.Swap(ref endAngle);

        if (_Document.Flags.HasFlag(DxfFlags.ExportEllipseAsPolygon))
        {
            Geom2d_Ellipse geom2DEllipse = new(new Ax2d(center, Dir2d.DX.Rotated(rotation)), majorRadius, minorRadius);
            if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
            {
                // Full ellipse
                _AddPolygonCurve(geom2DEllipse);
            }
            else
            {
                // Elliptical arc
                _AddPolygonCurve(new Geom2d_TrimmedCurve(geom2DEllipse, startAngle, endAngle));
            }
            return;
        }

        var majorAxisPointOffset = Dir2d.DX.ToVec().Rotated(rotation).Multiplied(majorRadius);
        var ratio = minorRadius / majorRadius;

        if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
        {
            // Full ellipse
            var entity = new DxfDomEllipse(_CurrentLayerName, center, majorAxisPointOffset.ToPnt(), ratio);
            _AddEntity(entity);
        }
        else
        {
            // Elliptical arc
            var entity = new DxfDomEllipse(_CurrentLayerName, center, majorAxisPointOffset.ToPnt(), ratio, startAngle, endAngle);
            _AddEntity(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.BSplineCurve(int degree, double[] knots, Pnt2d[] controlPoints, double[] weights, bool isRational)
    {
        if (_Document.Flags.HasFlag(DxfFlags.ExportSplineAsPolygon))
        {
            var spline = Geom2dUtils.MakeBSplineCurve(degree, knots, controlPoints, weights, false);
            _AddPolygonCurve(spline);
            return;
        }
            
        var flags = isRational ? DxfDomSpline.SplineFlags.IsRational : DxfDomSpline.SplineFlags.None;
        var entity = new DxfDomSpline(_CurrentLayerName, degree, knots, controlPoints, weights, flags);
        _AddEntity(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Text(string text, Pnt2d position, double rotation)
    {
        var fontSize = (_CurrentFontStyle?.Size ?? 3.0) / 1.3; // assumed EU/EO = 0.3 * H
        var entity = new DxfDomText(_CurrentLayerName, position, fontSize, -rotation, text);
        _AddEntity(entity);
    }

    //--------------------------------------------------------------------------------------------------

    bool IDrawingRenderer.RenderElement(DrawingElement element)
    {
        switch (element)
        {
            case LengthDimension lengthDim:
                _AddLengthDimension(lengthDim);
                break;

            case AngleDimension angleDim:
                _AddAngleDimension(angleDim);
                break;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Dimensions

    void _InitDimensionBlock()
    {
        _DimensionCount++;
        _CurrentBlock = new DxfDomBlock($"*D{_DimensionCount}", true);
        _Document.Blocks.Add(_CurrentBlock);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddLengthDimension(LengthDimension dim)
    {
        _InitDimensionBlock();

        dim.ComputeParameters(out var p);

        var textMidPos = p.TextOrigin.Translated(p.DimensionDirection.ToVec(p.TextWidth * 0.5))
                          .Translated(p.ExtensionVector.Normalized().Scaled(p.TextHeight * 0.5));
        var dimLinePoint = dim.SecondPoint.Translated(p.DimensionOffset);

        var entity = new DxfDomDimension(_CurrentLayerName, _CurrentBlock.Name, textMidPos, -Maths.NormalizeAngleRad(p.DimensionRotation).ToDeg());
        entity.SetAlignedDimension(dimLinePoint, dim.FirstPoint, dim.SecondPoint);
        if (!dim.AutoText)
        {
            entity.Text = dim.Text;
        }

        _Document.Entities.Add(entity); // Add to document, not to block
    }

    //--------------------------------------------------------------------------------------------------
        
    void _AddAngleDimension(AngleDimension dim)
    {
        _InitDimensionBlock();

        dim.ComputeParameters(out var p);

        var textMidPos = p.TextOrigin.Translated(Dir2d.DX.Rotated(-p.TextRotation).ToVec(p.TextWidth * 0.5))
                          .Translated(Dir2d.DX.Rotated(-p.TextRotation + Maths.HalfPI).ToVec(p.TextHeight * 0.5));
        var rimPoint = dim.CenterPoint.Translated(p.FirstExtensionVector.Normalized().Lerped(p.SecondExtensionVector.Normalized(), 0.5).Normalized().Scaled(p.Radius));

        var entity = new DxfDomDimension(_CurrentLayerName, _CurrentBlock.Name, textMidPos, -Maths.NormalizeAngleRad(p.TextRotation).ToDeg());
        entity.SetAngularDimension(rimPoint, dim.FirstPoint, dim.SecondPoint, dim.CenterPoint);
        if (!dim.AutoText)
        {
            entity.Text = dim.Text;
        }

        _Document.Entities.Add(entity); // Add to document, not to block
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
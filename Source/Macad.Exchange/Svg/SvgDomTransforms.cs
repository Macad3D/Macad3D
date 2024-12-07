using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal abstract class SvgTransform
{
    internal abstract void Write(StringBuilder sb, SvgConverter conv);
    internal abstract gp_GTrsf2d GetMatrix();
        
    static readonly char[] _TransformSplitChars = {'(', ')'};
        
    internal static IEnumerable<SvgTransform> Create(string transformString, SvgConverter conv)
    {
        var transformParts = transformString.Split(_TransformSplitChars);
        for (int i = 0; i < transformParts.Length-1; i+=2)
        {
            if (!conv.TrySplitValues(transformParts[i + 1], out var values, false))
                continue;

            SvgTransform transform;
            switch (transformParts[i].ToLower().Trim())
            {
                case "matrix":
                    transform = SvgMatrixTransform.Create(values, conv);
                    break;
                case "translate":
                    transform = SvgTranslateTransform.Create(values, conv);
                    break;
                case "scale":
                    transform = SvgScaleTransform.Create(values, conv);
                    break;
                case "rotate":
                    transform = SvgRotateTransform.Create(values, conv);
                    break;
                case "skewx":
                    transform = SvgSkewXTransform.Create(values, conv);
                    break;
                case "skewy":
                    transform = SvgSkewYTransform.Create(values, conv);
                    break;
                default:
                    Messages.Warning($"Unknown transform type {transformParts[i]} found in SVG file.");
                    continue;
            }

            if (transform != null)
            {
                yield return transform;
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgTranslateTransform : SvgTransform
{
    double _Tx;
    double _Ty;

    public SvgTranslateTransform(double tx, double ty)
    {
        _Tx = tx;
        _Ty = ty;
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        var trsf = new gp_GTrsf2d();
        trsf.SetTranslationPart(new XY(_Tx, _Ty));
        return trsf;
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        sb.AppendFormat("translate({0},{1}) ", conv.ToSvgLength(_Tx), conv.ToSvgLength(-_Ty));
    }

    internal static SvgTranslateTransform Create(double[] values, SvgConverter conv)
    {
        if(values.Length >= 2)
            return new SvgTranslateTransform(values[0] * conv.Scale, values[1] * conv.Scale);
        else
            return new SvgTranslateTransform(values[0] * conv.Scale, 0);
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgRotateTransform : SvgTransform
{
    double _Angle;
    Pnt2d? _Center;

    public SvgRotateTransform(double angle, Pnt2d? center=null)
    {
        _Angle = angle;
        _Center = center;
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        return new gp_GTrsf2d(new Trsf2d(_Center ?? Pnt2d.Origin, _Angle.ToRad()));
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        if(_Center.HasValue)
            sb.AppendFormat("rotate({0},{1},{2}) ", 
                            conv.ToSvgValue(_Angle), 
                            conv.ToSvgLength(_Center.Value.X),
                            conv.ToSvgLength(-_Center.Value.Y));
        else
            sb.AppendFormat("rotate({0}) ", conv.ToSvgValue(_Angle));
    }
        
    internal static SvgRotateTransform Create(double[] values, SvgConverter conv)
    {
        if(values.Length >= 3)
            return new SvgRotateTransform(values[0], new Pnt2d(values[1] * conv.Scale, values[2] * conv.Scale));
        else
            return new SvgRotateTransform(values[0]);
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgScaleTransform : SvgTransform
{
    double _Sx;
    double _Sy;

    public SvgScaleTransform(double sx, double sy)
    {
        _Sx = sx;
        _Sy = sy;
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        var trsf = new gp_GTrsf2d();
        trsf.SetValue(1, 1, _Sx);
        trsf.SetValue(2, 2, _Sy);
        return trsf;
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        sb.AppendFormat("scale({0},{1}) ", conv.ToSvgValue(_Sx), conv.ToSvgValue(_Sy));
    }

    internal static SvgScaleTransform Create(double[] values, SvgConverter conv)
    {
        if(values.Length >= 2)
            return new SvgScaleTransform(values[0] * conv.Scale, values[1] * conv.Scale);
        else
            return new SvgScaleTransform(values[0] * conv.Scale, values[0] * conv.Scale);
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgMatrixTransform : SvgTransform
{
    double[] _Values = new double[6];

    public SvgMatrixTransform(double[] values)
    {
        Debug.Assert(values.Length==6);

        for (int i = 0; i < Math.Max(_Values.Length, values.Length); i++)
        {
            _Values[i] = values[i];
        }
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        var trsf = new gp_GTrsf2d();
        trsf.SetValue(1, 1, _Values[0]);
        trsf.SetValue(2, 1, _Values[1]);
        trsf.SetValue(1, 2, _Values[2]);
        trsf.SetValue(2, 2, _Values[3]);
        trsf.SetTranslationPart(new XY(_Values[4], _Values[5]));
        return trsf;
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        sb.AppendFormat("matrix({0},{1},{2},{3},{4},{5}) ", 
                        conv.ToSvgValue(_Values[0]), conv.ToSvgValue(_Values[1]), 
                        conv.ToSvgValue(_Values[2]), conv.ToSvgValue(_Values[3]), 
                        conv.ToSvgLength(_Values[4]), conv.ToSvgLength(-_Values[5]));
    }

    internal static SvgMatrixTransform Create(double[] values, SvgConverter conv)
    {
        if (values.Length >= 6)
        {
            return new SvgMatrixTransform(new[]
            {
                values[0], values[1], 
                values[2], values[3],
                values[4] * conv.Scale , values[5] * conv.Scale
            });
        }

        return null;
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgSkewXTransform : SvgTransform
{
    double _Skew;

    public SvgSkewXTransform(double skew)
    {
        _Skew = skew;
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        var trsf = new gp_GTrsf2d();
        trsf.SetValue(1, 1, 1);
        trsf.SetValue(2, 1, 0);
        trsf.SetValue(1, 2, Math.Tan(_Skew.ToRad()));
        trsf.SetValue(2, 2, 1);
        return trsf;
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        sb.AppendFormat("skewx({0}) ", conv.ToSvgValue(_Skew));
    }

    internal static SvgSkewXTransform Create(double[] values, SvgConverter conv)
    {
        if (values.Length >= 1)
        {
            return new SvgSkewXTransform(values[0]);
        }
        return null;
    }
}
//--------------------------------------------------------------------------------------------------

internal sealed class SvgSkewYTransform : SvgTransform
{
    double _Skew;

    public SvgSkewYTransform(double skew)
    {
        _Skew = skew;
    }

    internal override gp_GTrsf2d GetMatrix()
    {
        var trsf = new gp_GTrsf2d();
        trsf.SetValue(1, 1, 1);
        trsf.SetValue(2, 1, Math.Tan(_Skew.ToRad()));
        trsf.SetValue(1, 2, 0);
        trsf.SetValue(2, 2, 1);
        return trsf;
    }

    internal override void Write(StringBuilder sb, SvgConverter conv)
    {
        sb.AppendFormat("skewy({0}) ", conv.ToSvgValue(_Skew));
    }

    internal static SvgSkewYTransform Create(double[] values, SvgConverter conv)
    {
        if (values.Length >= 1)
        {
            return new SvgSkewYTransform(values[0]);
        }
        return null;
    }
}
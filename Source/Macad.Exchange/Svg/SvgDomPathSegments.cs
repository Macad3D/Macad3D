using System.Collections.Generic;
using System.Text;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal abstract class SvgPathSegment
{
    public Pnt2d Start;
    public Pnt2d End;

    //--------------------------------------------------------------------------------------------------

    protected SvgPathSegment(Pnt2d start, Pnt2d end)
    {
        Start = start;
        End = end;
    }

    //--------------------------------------------------------------------------------------------------

    internal abstract Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv);

    //--------------------------------------------------------------------------------------------------

    internal virtual void Transform(SvgConverter conv)
    {
        conv.Transform(ref Start);
        conv.Transform(ref End);
    }

    //--------------------------------------------------------------------------------------------------

    static readonly char[] _PathCommands = {'M', 'm', 'L', 'l', 'H', 'h', 'V', 'v', 'C', 'c', 'S', 's', 'Q', 'q', 'T', 't', 'A', 'a', 'Z', 'z'};

    //--------------------------------------------------------------------------------------------------

    internal static IEnumerable<SvgPathSegment> Create(string pathString, SvgConverter conv)
    {
        SvgPathSegment lastSegment = null;
        SvgPathSegment firstSegment = null;
        int next = 0;
        while (next < pathString.Length)
        {
            int start = next;
            next = pathString.IndexOfAny(_PathCommands, start + 1);
            if (next == -1)
            {
                next = pathString.Length;
            }

            IEnumerable<SvgPathSegment> newSegments = null;
            var commandString = pathString.Substring(start, next - start);
            switch (char.ToLower(commandString[0]))
            {
                case 'm':
                    newSegments = SvgPathSegMoveto.Create(lastSegment, commandString, conv);
                    break;
                case 'l':
                case 'h':
                case 'v':
                    newSegments = SvgPathSegLineto.Create(lastSegment, commandString, conv);
                    break;
                case 'c':
                case 's':
                    newSegments = SvgPathSegCurvetoCubic.Create(lastSegment, commandString, conv);
                    break;
                case 'q':
                case 't':
                    newSegments = SvgPathSegCurvetoQuadratic.Create(lastSegment, commandString, conv);
                    break;
                case 'a':
                    newSegments = SvgPathSegArc.Create(lastSegment, commandString, conv);
                    break;
                case 'z':
                    lastSegment = SvgPathSegClosePath.Create(firstSegment, lastSegment);
                    yield return lastSegment;
                    firstSegment = null;
                    continue;
            }

            if (newSegments == null)
                continue;

            foreach (var segment in newSegments)
            {
                if (firstSegment == null)
                    firstSegment = segment;
                lastSegment = segment;
                yield return segment;
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgPathSegLineto : SvgPathSegment
{
    public SvgPathSegLineto(Pnt2d start, Pnt2d end) 
        : base(start, end)
    {
    }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        if(!(lastPnt.HasValue && conv.AreEqual(lastPnt.Value, Start)))
            sb.AppendFormat("M{0},{1} ", conv.ToSvgLength(Start.X), conv.ToSvgLength(-Start.Y));

        sb.AppendFormat("L{0},{1} ", conv.ToSvgLength(End.X), conv.ToSvgLength(-End.Y));
        return End;
    }

    public static IEnumerable<SvgPathSegment> Create(SvgPathSegment lastSegment, string commandString, SvgConverter conv)
    {
        if(!conv.TrySplitValues(commandString.Substring(1), out var values, true))
            yield break;

        int valuePos = 0;
        while (valuePos < values.Length)
        {
            var start = lastSegment?.End ?? Pnt2d.Origin;

            SvgPathSegLineto segment = null;
            switch (commandString[0])
            {
                case 'L':
                    segment = new SvgPathSegLineto(start, new Pnt2d(values[valuePos], values[valuePos+1]));
                    valuePos += 2;
                    break;
                case 'l':
                    segment = new SvgPathSegLineto(start, start + new Pnt2d(values[valuePos], values[valuePos+1]));
                    valuePos += 2;
                    break;
                case 'H':
                    segment = new SvgPathSegLineto(start, new Pnt2d(values[valuePos], start.Y));
                    valuePos += 1;
                    break;
                case 'h':
                    segment = new SvgPathSegLineto(start, start + new Pnt2d(values[valuePos], 0));
                    valuePos += 1;
                    break;
                case 'V':
                    segment = new SvgPathSegLineto(start, new Pnt2d(start.X, values[valuePos]));
                    valuePos += 1;
                    break;
                case 'v':
                    segment = new SvgPathSegLineto(start, start + new Pnt2d(0, values[valuePos]));
                    valuePos += 1;
                    break;
            }
            yield return segment;
            lastSegment = segment;
        }
    }
}

//--------------------------------------------------------------------------------------------------

internal class SvgPathSegCurvetoQuadratic : SvgPathSegment
{
    public Pnt2d C1;

    public SvgPathSegCurvetoQuadratic(Pnt2d start, Pnt2d c1, Pnt2d end) 
        : base(start, end)
    {
        C1 = c1;
    }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        if(!(lastPnt.HasValue && conv.AreEqual(lastPnt.Value, Start)))
            sb.AppendFormat("M{0},{1} ", conv.ToSvgLength(Start.X), conv.ToSvgLength(-Start.Y));

        sb.AppendFormat("Q{0},{1} {2},{3} ", conv.ToSvgLength(C1.X), conv.ToSvgLength(-C1.Y), conv.ToSvgLength(End.X), conv.ToSvgLength(-End.Y));
        return End;
    }

    public static IEnumerable<SvgPathSegment> Create(SvgPathSegment lastSegment, string commandString, SvgConverter conv)
    {
        if(!conv.TrySplitValues(commandString.Substring(1), out var values, true))
            yield break;

        int valuePos = 0;
        while (valuePos < values.Length)
        {
            var start = lastSegment?.End ?? Pnt2d.Origin;

            Pnt2d c1;
            Pnt2d end;
            if (char.ToLower(commandString[0]) == 'q')
            {
                c1 = new Pnt2d(values[valuePos], values[valuePos+1]);
                end = new Pnt2d(values[valuePos+2], values[valuePos+3]);
                valuePos += 4;

                if (char.IsLower(commandString[0]))
                {
                    c1 += start;
                    end += start;
                }
                lastSegment = new SvgPathSegCurvetoQuadratic(start, c1, end);
                yield return lastSegment;
            }
            else if (char.ToLower(commandString[0]) == 't')
            {
                end = new Pnt2d(values[valuePos], values[valuePos+1]);
                valuePos += 2;

                if (char.IsLower(commandString[0]))
                {
                    end += start;
                }

                if (lastSegment is SvgPathSegCurvetoQuadratic lastSeg)
                {
                    c1 = lastSeg.C1;
                }
                else
                {
                    c1 = start;
                }
                lastSegment = new SvgPathSegCurvetoQuadratic(start, c1, end);
                yield return lastSegment;
            }
        }
    }

    internal override void Transform(SvgConverter conv)
    {
        conv.Transform(ref C1);
        base.Transform(conv);
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgPathSegCurvetoCubic : SvgPathSegment
{
    public Pnt2d C1;
    public Pnt2d C2;

    public SvgPathSegCurvetoCubic(Pnt2d start, Pnt2d c1, Pnt2d c2, Pnt2d end) 
        : base(start, end)
    {
        C1 = c1;
        C2 = c2;
    }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        if(!(lastPnt.HasValue && conv.AreEqual(lastPnt.Value, Start)))
            sb.AppendFormat("M{0},{1} ", conv.ToSvgLength(Start.X), conv.ToSvgLength(-Start.Y));

        sb.AppendFormat("C{0},{1} {2},{3} {4},{5} ", 
                        conv.ToSvgLength(C1.X), conv.ToSvgLength(-C1.Y),
                        conv.ToSvgLength(C2.X), conv.ToSvgLength(-C2.Y),
                        conv.ToSvgLength(End.X), conv.ToSvgLength(-End.Y));
        return End;
    }

    public static IEnumerable<SvgPathSegment> Create(SvgPathSegment lastSegment, string commandString, SvgConverter conv)
    {
        if(!conv.TrySplitValues(commandString.Substring(1), out var values, true))
            yield break;

        int valuePos = 0;
        while (valuePos < values.Length)
        {
            var start = lastSegment?.End ?? Pnt2d.Origin;

            Pnt2d c1;
            Pnt2d c2;
            Pnt2d end;
            if (char.ToLower(commandString[0]) == 'c')
            {
                c1 = new Pnt2d(values[valuePos], values[valuePos+1]);
                c2 = new Pnt2d(values[valuePos+2], values[valuePos+3]);
                end = new Pnt2d(values[valuePos+4], values[valuePos+5]);
                valuePos += 6;

                if (char.IsLower(commandString[0]))
                {
                    c1 += start;
                    c2 += start;
                    end += start;
                }
                lastSegment = new SvgPathSegCurvetoCubic(start, c1, c2, end);
                yield return lastSegment;
            }
            else if (char.ToLower(commandString[0]) == 's')
            {
                c2 = new Pnt2d(values[valuePos], values[valuePos+1]);
                end = new Pnt2d(values[valuePos+2], values[valuePos+3]);
                valuePos += 4;

                if (char.IsLower(commandString[0]))
                {
                    c2 += start;
                    end += start;
                }

                if (lastSegment is SvgPathSegCurvetoCubic lastSeg)
                {
                    c1 = lastSeg.C2;
                }
                else
                {
                    c1 = c2;
                }
                lastSegment = new SvgPathSegCurvetoCubic(start, c1, c2, end);
                yield return lastSegment;
            }
        }
    }
        
    internal override void Transform(SvgConverter conv)
    {
        conv.Transform(ref C1);
        conv.Transform(ref C2);
        base.Transform(conv);
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgPathSegMoveto : SvgPathSegment
{
    public SvgPathSegMoveto(Pnt2d moveTo)
        : base(moveTo, moveTo)
    { }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        sb.AppendFormat("M{0},{1} ", conv.ToSvgLength(End.X), conv.ToSvgLength(-End.Y));
        return End;
    }

    public static IEnumerable<SvgPathSegment> Create(SvgPathSegment lastSegment, string commandString, SvgConverter conv)
    {
        if(!conv.TrySplitValues(commandString.Substring(1), out var values, true))
            yield break;

        bool isRelative = commandString[0] == 'm';
        int valuePos = 0;
        Pnt2d endPoint = new Pnt2d();
        if (valuePos < values.Length)
        {
            endPoint = new Pnt2d(values[valuePos], values[valuePos+1]);
            if (isRelative && lastSegment != null)
            {
                endPoint += lastSegment.End;
            }
            yield return new SvgPathSegMoveto(endPoint);
            valuePos += 2;
        }

        // subsequent value pairs are implicit lineto's
        while (valuePos < values.Length)
        {
            var startPoint = endPoint;
            endPoint = new Pnt2d(values[valuePos], values[valuePos+1]);
            if (isRelative)
            {
                endPoint += startPoint;
            }
            yield return new SvgPathSegLineto(startPoint, endPoint);
            valuePos += 2;
        }
    }
}
    
//--------------------------------------------------------------------------------------------------

public enum SvgArcSize
{
    Small,
    Large
}

public enum SvgArcSweep
{
    Negative,
    Positive
}

internal sealed class SvgPathSegArc : SvgPathSegment
{
    public double RadiusX { get; }
    public double RadiusY { get; }
    public double Angle { get; }
    public SvgArcSize Size { get; }
    public SvgArcSweep Sweep { get; }

    public SvgPathSegArc(Pnt2d start, double radiusX, double radiusY, double angle, 
                         SvgArcSize size, SvgArcSweep sweep, Pnt2d end)
        : base(start, end)
    {
        RadiusX = radiusX;
        RadiusY = radiusY;
        Angle = angle;
        Size = size;
        Sweep = sweep;
    }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        if(!(lastPnt.HasValue && conv.AreEqual(lastPnt.Value, Start)))
            sb.AppendFormat("M{0},{1} ", conv.ToSvgLength(Start.X), conv.ToSvgLength(-Start.Y));

        sb.AppendFormat("A{0},{1} {2} {3} {4} {5},{6} ", 
                        conv.ToSvgLength(RadiusX), conv.ToSvgLength(RadiusY),
                        conv.ToSvgValue(Angle),
                        (uint)Size, (uint)Sweep,
                        conv.ToSvgLength(End.X), conv.ToSvgLength(-End.Y));
        return End;
    }

    public static IEnumerable<SvgPathSegment> Create(SvgPathSegment lastSegment, string commandString, SvgConverter conv)
    {
        if(!conv.TrySplitValues(commandString.Substring(1), out var values, false))
            yield break;

        int valuePos = 0;
        while (valuePos < values.Length)
        {
            var start = new Pnt2d();
            if (lastSegment != null)
            {
                start = lastSegment.End;
            }

            double rx = values[0] * conv.Scale;
            double ry = values[1] * conv.Scale;
            double angle = values[2];
            SvgArcSize size = values[3] == 0 ? SvgArcSize.Small : SvgArcSize.Large;
            SvgArcSweep sweep = values[4] == 0 ? SvgArcSweep.Negative : SvgArcSweep.Positive;
            Pnt2d end = new Pnt2d(values[5] * conv.Scale, values[6] * conv.Scale);
            if (char.IsLower(commandString[0]))
                end += start;
            valuePos += 7;

            lastSegment = new SvgPathSegArc(start, rx, ry, angle, size, sweep, end);
            yield return lastSegment;
        }
    }
}

//--------------------------------------------------------------------------------------------------

internal sealed class SvgPathSegClosePath : SvgPathSegment
{
    public SvgPathSegClosePath() 
        : base(Pnt2d.Origin, Pnt2d.Origin)
    { }

    internal override Pnt2d? Write(StringBuilder sb, Pnt2d? lastPnt, SvgConverter conv)
    {
        if (lastPnt != null)
        {
            sb.Append("Z ");
        }
        return null;
    }

    public static SvgPathSegClosePath Create(SvgPathSegment firstSegment, SvgPathSegment lastSegment)
    {
        var seg = new SvgPathSegClosePath {
            Start = lastSegment?.Start ?? Pnt2d.Origin, 
            End = firstSegment?.End ?? Pnt2d.Origin
        };
        return seg;
    }
}


//--------------------------------------------------------------------------------------------------
using System;
using Macad.Common;
using Macad.Occt;
using System.Linq;
using System.Xml;

namespace Macad.Exchange.Svg;

internal class SvgDomPolyline : SvgDomElement
{
    public Pnt2d[] Points;

    //--------------------------------------------------------------------------------------------------

    public SvgDomPolyline(Pnt2d[] points)
    {
        Points = points;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomPolyline()
    { }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("Polyline");
        writer.WriteAttributeString("points", string.Join(" ", Points.Select(p => $"{conv.ToSvgLength(p.X)} {conv.ToSvgLength(-p.Y)}")));
        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        string pointsStr = reader.GetAttribute("points") ?? "";

        if (!base.Read(reader, conv))
        {
            return false;
        }

        var values = pointsStr.Split([' ',',','\n','\r'], StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries)
                              .Select(conv.FromSvgLength)
                              .ToArray();
        if (values.Length < 4)
        {
            return false;
        }

        Pnt2d[] points = new Pnt2d[values.Length / 2];
        for (int i = 0; i < points.Length; i++)
        {
            points[i] = new(values[i * 2], values[i * 2 + 1]);
            conv.Transform(ref points[i]);
        }
        Points = points;

        conv.PopTransform();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
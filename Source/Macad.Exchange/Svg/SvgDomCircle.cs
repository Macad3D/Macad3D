using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomCircle : SvgDomElement
{
    public Pnt2d Center;
    public double Radius;

    //--------------------------------------------------------------------------------------------------

    public SvgDomCircle(Pnt2d center, double radius)
    {
        Center = center;
        Radius = radius;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomCircle()
    { }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("circle");

        writer.WriteAttributeString("cx", conv.ToSvgLength(Center.X));
        writer.WriteAttributeString("cy", conv.ToSvgLength(-Center.Y));
        writer.WriteAttributeString("r", conv.ToSvgLength(Radius));

        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        bool res = false;
        string sx = reader.GetAttribute("cx") ?? "0";
        string sy = reader.GetAttribute("cy") ?? "0";
        string sr = reader.GetAttribute("r");

        if (!base.Read(reader, conv))
            return false;
            
        if(!sx.IsNullOrEmpty() && !sy.IsNullOrEmpty() && !sr.IsNullOrEmpty())
        {
            Center = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
            conv.Transform(ref Center);
            Radius = conv.FromSvgLength(sr);
            res = true;
        }

        conv.PopTransform();
        return res;
    }

    //--------------------------------------------------------------------------------------------------

}
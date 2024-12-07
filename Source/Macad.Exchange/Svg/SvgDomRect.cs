using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomRect : SvgDomElement
{
    public Pnt2d Start;
    public double Width;
    public double Height;
    public double CornerRadiusX;
    public double CornerRadiusY;

    //--------------------------------------------------------------------------------------------------

    public SvgDomRect(Pnt2d start, double width, double height)
    {
        Start = start;
        Width = width;
        Height = height;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomRect()
    {}

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("line");

        writer.WriteAttributeString("x", conv.ToSvgLength(Start.X));
        writer.WriteAttributeString("y", conv.ToSvgLength(-Start.Y));
        writer.WriteAttributeString("width", conv.ToSvgLength(Width));
        writer.WriteAttributeString("height", conv.ToSvgLength(-Height));

        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        bool res = false;
        string sx = reader.GetAttribute("x") ?? "0";
        string sy = reader.GetAttribute("y") ?? "0";
        string sw = reader.GetAttribute("width") ?? "0";
        string sh = reader.GetAttribute("height") ?? "0";
        string srx = reader.GetAttribute("rx") ?? "0";
        string sry = reader.GetAttribute("ry") ?? "0";

        if (!base.Read(reader, conv))
            return false;
            
        if(!(sx.IsNullOrEmpty() && sy.IsNullOrEmpty() && sw.IsNullOrEmpty() && sh.IsNullOrEmpty()))
        {
            Start = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
            conv.Transform(ref Start);
            Width = conv.FromSvgLength(sw);
            Height = -conv.FromSvgLength(sh);
            CornerRadiusX = conv.FromSvgLength(srx);
            CornerRadiusY = -conv.FromSvgLength(sry);
            res = true;
        }

        conv.PopTransform();
        return res;
    }

    //--------------------------------------------------------------------------------------------------

}
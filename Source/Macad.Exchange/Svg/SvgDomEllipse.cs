using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomEllipse : SvgDomElement
{
    public Pnt2d Center;
    public double RadiusX;
    public double RadiusY;
    public Pnt2d RimPointX;
    public Pnt2d RimPointY;

    //--------------------------------------------------------------------------------------------------

    public SvgDomEllipse(Pnt2d center, double radiusX, double radiusY)
    {
        Center = center;
        RadiusX = radiusX;
        RadiusY = radiusY;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomEllipse()
    { }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("ellipse");

        writer.WriteAttributeString("cx", conv.ToSvgLength(Center.X));
        writer.WriteAttributeString("cy", conv.ToSvgLength(-Center.Y));
        writer.WriteAttributeString("rx", conv.ToSvgLength(RadiusX));
        writer.WriteAttributeString("ry", conv.ToSvgLength(RadiusY));

        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        bool res = false;
        string sx = reader.GetAttribute("cx") ?? "0";
        string sy = reader.GetAttribute("cy") ?? "0";
        string srx = reader.GetAttribute("rx");
        string sry = reader.GetAttribute("ry");

        if (!base.Read(reader, conv))
            return false;
            
        if(!sx.IsNullOrEmpty() && !sy.IsNullOrEmpty() && !srx.IsNullOrEmpty() && !sry.IsNullOrEmpty())
        {
            var localCenter = new Pnt2d(conv.FromSvgLength(sx), conv.FromSvgLength(sy));
            Center = localCenter;
            RadiusX = conv.FromSvgLength(srx);
            RadiusY = conv.FromSvgLength(sry);
            RimPointX = (localCenter + new Pnt2d(RadiusX, 0));
            RimPointY = (localCenter + new Pnt2d(0, RadiusY));

            conv.Transform(ref Center);
            conv.Transform(ref RimPointX);
            conv.Transform(ref RimPointY);
            res = true;
        }

        conv.PopTransform();
        return res;
    }

    //--------------------------------------------------------------------------------------------------

}
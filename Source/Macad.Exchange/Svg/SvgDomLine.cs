using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomLine : SvgDomElement
{
    public Pnt2d Start;
    public Pnt2d End;

    //--------------------------------------------------------------------------------------------------

    public SvgDomLine(Pnt2d start, Pnt2d end)
    {
        Start = start;
        End = end;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomLine()
    {}

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("line");

        writer.WriteAttributeString("x1", conv.ToSvgLength(Start.X));
        writer.WriteAttributeString("y1", conv.ToSvgLength(-Start.Y));
        writer.WriteAttributeString("x2", conv.ToSvgLength(End.X));
        writer.WriteAttributeString("y2", conv.ToSvgLength(-End.Y));

        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        bool res = false;
        string sx1 = reader.GetAttribute("x1") ?? "0";
        string sy1 = reader.GetAttribute("y1") ?? "0";
        string sx2 = reader.GetAttribute("x2") ?? "0";
        string sy2 = reader.GetAttribute("y2") ?? "0";

        if (!base.Read(reader, conv))
            return false;
            
        if(!(sx1.IsNullOrEmpty() && sy1.IsNullOrEmpty() && sx2.IsNullOrEmpty() && sy2.IsNullOrEmpty()))
        {
            Start = new Pnt2d(conv.FromSvgLength(sx1), conv.FromSvgLength(sy1));
            conv.Transform(ref Start);
            End = new Pnt2d(conv.FromSvgLength(sx1), conv.FromSvgLength(sy1));
            conv.Transform(ref End);
            res = true;
        }

        conv.PopTransform();
        return res;
    }

    //--------------------------------------------------------------------------------------------------

}
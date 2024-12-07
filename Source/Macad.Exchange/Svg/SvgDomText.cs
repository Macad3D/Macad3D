using System.Xml;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomText : SvgDomElement
{
    public Pnt2d Position;
    public string Text;

    //--------------------------------------------------------------------------------------------------

    public SvgDomText(Pnt2d position, string text)
    {
        Position = position;
        Text = text;
    }

    //--------------------------------------------------------------------------------------------------

    internal SvgDomText()
    {}

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("text");

        writer.WriteAttributeString("x", conv.ToSvgLength(Position.X));
        writer.WriteAttributeString("y", conv.ToSvgLength(-Position.Y));

        base.Write(writer, conv);

        writer.WriteValue(Text);

        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        // Gracefully ignore
        return true;
    }
}
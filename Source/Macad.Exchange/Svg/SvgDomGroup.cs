using System.Xml;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomGroup : SvgDomElement
{
    public bool IsLayer;

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("g");
        if (IsLayer)
        {
            writer.WriteAttributeString("groupmode", SvgDocument.XmlnsInkscape, "layer");
            writer.WriteAttributeString("label", SvgDocument.XmlnsInkscape, ID);
        }

        base.Write(writer, conv);

        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        if (!base.Read(reader, conv))
            return false;

        conv.PopTransform();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
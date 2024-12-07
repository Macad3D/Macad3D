using System.Collections.Generic;
using System.Text;
using System.Xml;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Svg;

internal sealed class SvgDomPath : SvgDomElement
{
    public List<SvgPathSegment> Segments { get; } = new List<SvgPathSegment>();

    //--------------------------------------------------------------------------------------------------

    internal override void Write(XmlWriter writer, SvgConverter conv)
    {
        writer.WriteStartElement("path");

        var sb = new StringBuilder();
        Pnt2d? lastPnt = null;
        foreach (var segment in Segments)
        {
            lastPnt = segment.Write(sb, lastPnt, conv);
        }
        writer.WriteAttributeString("d", sb.ToString().Trim());

        base.Write(writer, conv);
        writer.WriteEndElement();
    }

    //--------------------------------------------------------------------------------------------------

    internal override bool Read(XmlReader reader, SvgConverter conv)
    {
        var data = reader.GetAttribute("d");

        if (!base.Read(reader, conv))
            return false;

        if (!data.IsNullOrEmpty())
        {
            Segments.AddRange(SvgPathSegment.Create(data, conv));
        }

        Segments.ForEach(seg => seg.Transform(conv));

        conv.PopTransform();
        return Segments.Count > 0;
    }

    //--------------------------------------------------------------------------------------------------

}
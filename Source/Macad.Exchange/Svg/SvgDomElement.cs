using System.Collections.Generic;
using System.Text;
using System.Xml;
using Macad.Common;

namespace Macad.Exchange.Svg;

internal abstract class SvgDomElement
{
    public List<SvgDomElement> Children { get; } = new();
    public string ID;
    public List<SvgTransform> Transforms { get; } = new();
    public SvgStyle Style;

    //--------------------------------------------------------------------------------------------------

    internal virtual void Write(XmlWriter writer, SvgConverter conv)
    {
        if (!ID.IsNullOrEmpty())
            writer.WriteAttributeString("id", ID);

        Style?.Write(writer, conv);

        if (Transforms.Count > 0)
        {
            var sb = new StringBuilder();
            foreach (var transform in Transforms)
            {
                transform.Write(sb, conv);
            }
            writer.WriteAttributeString("transform", sb.ToString().Trim());
        }

        foreach (var child in Children)
        {
            child.Write(writer, conv);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal virtual bool Read(XmlReader reader, SvgConverter conv)
    {
        var transformString = reader.GetAttribute("transform");
        if (!transformString.IsNullOrEmpty())
        {
            Transforms.AddRange(SvgTransform.Create(transformString, conv));
        }

        conv.PushTransform(Transforms);
        var depth = reader.Depth;

        reader.Read();
        while (!reader.EOF && reader.Depth > depth)
        {
            if (reader.NodeType != XmlNodeType.Element)
            {
                reader.Read();
                continue;
            }

            SvgDomElement newElement = null;
            switch (reader.LocalName.ToLower())
            {
                case "g":
                    newElement = new SvgDomGroup();
                    break;
                case "circle":
                    newElement = new SvgDomCircle();
                    break;
                case "ellipse":
                    newElement = new SvgDomEllipse();
                    break;
                case "path":
                    newElement = new SvgDomPath();
                    break;
                case "line":
                    newElement = new SvgDomLine();
                    break;
                case "rect":
                    newElement = new SvgDomRect();
                    break;
            }

            if (newElement != null)
            {
                if(newElement.Read(reader, conv))
                    Children.Add(newElement);
            }
            else
            {
                reader.Skip();
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
}
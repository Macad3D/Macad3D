using System.Text;
using System.Xml;
using Macad.Common;
using Macad.Core;

namespace Macad.Exchange.Svg;

internal sealed class SvgStyle
{
    public Color? StrokeColor;
    public float? StrokeWidth;
    public LineStyle LineStyle;
    public Color? FillColor;
    public FillMode FillMode;
    public string FontFamily;
    public float? FontSize;

    //--------------------------------------------------------------------------------------------------

    internal void Write(XmlWriter writer, SvgConverter conv)
    {
        if(StrokeWidth.HasValue)
            writer.WriteAttributeString("stroke-width", conv.ToSvgLength(StrokeWidth.Value));

        switch (LineStyle)
        {
            case LineStyle.Dot:
                writer.WriteAttributeString("stroke-dasharray", "0.5 0.5");
                break;
            case LineStyle.ShortDash:
                writer.WriteAttributeString("stroke-dasharray", "1 0.5");
                break;
            case LineStyle.Dash:
                writer.WriteAttributeString("stroke-dasharray", "2 0.5");
                break;
            case LineStyle.DotDash:
                writer.WriteAttributeString("stroke-dasharray", "2 0.5 0.5 0.5");
                break;
        }

        var sb = new StringBuilder();

        if (StrokeColor.HasValue)
            sb.Append($"stroke:{conv.ToSvgColor(StrokeColor.Value)};");

        if (FillMode == FillMode.None)
        {
            sb.Append($"fill:none;");
        }
        else
        {
            if(FillColor.HasValue)
                sb.Append($"fill:{conv.ToSvgColor(FillColor.Value)};");
        }

        if(sb.Length > 0)
            writer.WriteAttributeString("style", sb.ToString());

        if(!FontFamily.IsNullOrEmpty())
            writer.WriteAttributeString("font-family", FontFamily);
        if(FontSize.HasValue)
            writer.WriteAttributeString("font-size", conv.ToSvgLength(FontSize.Value));
    }
}
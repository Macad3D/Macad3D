using Macad.Common;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDom3DBackground : PdfDomObject
{
    public Color Color
    {
        set
        {
            Attributes["C"] = value;
            Attributes["CS"] = "/DeviceRGB";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DBackground(PdfDomDocument document) 
        : base(document, "3DBG")
    {
        Attributes["Subtype"] = "/SC";
    }
}
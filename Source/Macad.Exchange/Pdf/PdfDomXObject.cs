using System.Linq;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomXObject : PdfDomStream
{
    public double[] BoundingBox
    {
        set
        {
            Attributes["BBox"] = value.Select(d => d * PdfDomDocument.UserSpaceScale).ToArray();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomXObject(PdfDomDocument document, double[] boundingBox) 
        : base(document, "XObject")
    {
        Attributes["Subtype"] = "/Form";
        Attributes["FormType"] = 1;
        BoundingBox = boundingBox;
    }
}
using System.Diagnostics;
using System.Linq;

namespace Macad.Exchange.Pdf;

internal class PdfDomAnnotation : PdfDomObject
{
    public PdfDomAnnotation(PdfDomDocument document, string subtype, double[] rect) 
        : base(document, "Annot")
    {
        Attributes["Subtype"] = "/" + subtype;

        Debug.Assert(rect.Length == 4);
        Attributes["Rect"] = rect.Select(v => v * PdfDomDocument.UserSpaceScale);
    }
}
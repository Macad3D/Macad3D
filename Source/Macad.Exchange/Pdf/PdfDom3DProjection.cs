namespace Macad.Exchange.Pdf;

internal sealed class PdfDom3DProjection : PdfDomObject
{
    public bool IsPerspective
    {
        set { Attributes["Subtype"] = value ? "/P" : "/O"; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool AutomaticClipping
    {
        set { Attributes["CS"] = value ? "/ANF" : "/XNF"; }
    }

    //--------------------------------------------------------------------------------------------------

    public double OrthographicScale
    {
        set { Attributes["OS"] = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DProjection(PdfDomDocument document) 
        : base(document, "")
    {
        IsPerspective = false;
    }
}
namespace Macad.Exchange.Pdf;

internal sealed class PdfDomCatalog : PdfDomObject
{
    public PdfDomObject Outlines { get; }
    public PdfDomPages Pages { get; }

    //--------------------------------------------------------------------------------------------------

    public PdfDomCatalog(PdfDomDocument document) 
        : base(document, "Catalog")
    {
        Outlines = new PdfDomObject(document, "Outlines");
        Pages = new PdfDomPages(document);

        Attributes["Outlines"] = Outlines;
        Attributes["Pages"] = Pages;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        base.Write(writer);

        Outlines.Write(writer);
        Pages.Write(writer);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
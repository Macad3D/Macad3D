using System.Collections.Generic;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomPages : PdfDomObject
{
    public List<PdfDomPage> PageList { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public PdfDomPages(PdfDomDocument document) 
        : base(document, "Pages")
    {
        Attributes["Kids"] = PageList;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        Attributes["Count"] = PageList.Count;
        base.Write(writer);

        PageList.ForEach(page => page.Write(writer));
        return true;
    }
}
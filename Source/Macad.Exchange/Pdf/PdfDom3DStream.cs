using System.Collections.Generic;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDom3DStream : PdfDomStream
{
    List<PdfDom3DView> _Views;

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DStream(PdfDomDocument document) 
        : base(document, "3D")
    {
        Attributes["Subtype"] = "/U3D";
    }
        
    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        base.Write(writer);

        _Views?.ForEach(view => view.Write(writer));

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DView AddView(string displayName)
    {
        var view = new PdfDom3DView(Document, displayName);

        if (_Views == null)
        {
            _Views = new();
            Attributes["VA"] = _Views;
            Attributes["DV"] = view;
        }

        _Views.Add(view);
        return view;
    }
}
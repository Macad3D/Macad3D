using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core.Drawing;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomPage : PdfDomObject
{
    public double[] MediaBox
    {
        set
        {
            Attributes["MediaBox"] = value.Select(d => d * PdfDomDocument.UserSpaceScale).ToArray();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public List<PdfDomStream> Contents { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public List<PdfDomObject> Annotations
    {
        get
        {
            if (_Annots == null)
            {
                _Annots = new();
                Attributes["Annots"] = _Annots;
            }

            return _Annots;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<PdfDomFont> Fonts
    {
        get
        {
            return _Fonts.Values;
        }
    }

    //--------------------------------------------------------------------------------------------------

    List<PdfDomObject> _Annots;
    readonly Dictionary<string, object> _Resources = new();
    readonly Dictionary<string, PdfDomFont> _Fonts = new();

    //--------------------------------------------------------------------------------------------------

    public PdfDomPage(PdfDomDocument document, PdfDomPages pagesObject)
        : base(document, "Page")
    {
        pagesObject.PageList.Add(this);

        Attributes["Parent"] = pagesObject;
        MediaBox = new[] {0.0, 0.0, 100.0, 100.0};
        Attributes["Contents"] = Contents;
        _Resources["ProcSet"] = new [] {"/PDF", "/Text"};
        Attributes["Resources"] = _Resources;
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomStream AddContent()
    {
        var stream = new PdfDomStream(Document, "");
            
        // Matrix for scaling from mm (MacadSpace) to 1/72 inch (UserSpace)
        stream.Add("2.83464567 0 0 2.83464567 0 0 cm\n".ToUtf8Bytes()); 
        Contents.Add(stream);
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomAnnotation AddAnnotation(string subtype, double[] rect)
    {
        var annot = new PdfDomAnnotation(Document, subtype, rect);
        Annotations.Add(annot);
        return annot;
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomFont AddFont(FontStyle style)
    {
        if (_Fonts.Count == 0)
        {
            _Resources["Font"] = _Fonts; // Added with first font
        }

        string name = $"F{_Fonts.Count + 1}";
        var font = new PdfDomFont(Document, name, style);
        _Fonts[name] = font;

        return font;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        base.Write(writer);

        Contents.ForEach(content => content.Write(writer));
        _Annots?.ForEach(annot => annot.Write(writer));
        foreach (var font in _Fonts.Values)
        {
            font.Write(writer);
        }

        return true;
    }
}
using System.Collections.Generic;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDom3DAnnotation : PdfDomAnnotation
{
    public bool IsInteractive
    {
        set { Attributes["3DI"] = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomObject ActivationDict
    {
        get
        {
            if (_ActivationDict == null)
            {
                _ActivationDict = new PdfDomObject(Document, "");
                Attributes["3DA"] = _ActivationDict;
            }

            return _ActivationDict;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsAutostart
    {
        set
        {
            ActivationDict.Attributes["A"] = value ? "/PO" : "/XA";
            ActivationDict.Attributes["D"] = value ? "/PC" : "/XD";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomXObject NormalAppearence
    {
        set
        {
            _NormalAppearence = value;
            Attributes["AP"] = new Dictionary<string, object> {{"N", value}};
        }
    }

    readonly PdfDomStream _Stream;
    PdfDomObject _ActivationDict;
    PdfDomXObject _NormalAppearence;

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DAnnotation(PdfDomDocument document, double[] rect, PdfDomStream stream) 
        : base(document, "3D", rect)
    {
        document.Version = PdfVersion.PDF_1_6;

        _Stream = stream;
        Attributes["3DD"] = stream; 
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        base.Write(writer);

        _ActivationDict?.Write(writer);
        _NormalAppearence?.Write(writer);
        _Stream?.Write(writer);

        return true;
    }
}
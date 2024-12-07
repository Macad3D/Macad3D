namespace Macad.Exchange.Pdf;

internal sealed class PdfDom3DView : PdfDomObject
{
    public string U3DPath
    {
        set
        {
            Attributes["MS"] = "/U3D";
            Attributes["U3DPath"] = new[] {new PdfDomString(value)};
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double OrbitCenterDistance
    {
        set { Attributes["CO"] = value; }
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DProjection Projection
    {
        get {
            if (_Projection == null)
            {
                _Projection = new(Document);
                Attributes["P"] = _Projection;
            }

            return _Projection;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public PdfDom3DBackground Background
    {
        get {
            if (_Background == null)
            {
                _Background = new(Document);
                Attributes["BG"] = _Background;
            }

            return _Background;
        }
    }

    //--------------------------------------------------------------------------------------------------

    PdfDom3DProjection _Projection;
    PdfDom3DBackground _Background;

    //--------------------------------------------------------------------------------------------------

    public PdfDom3DView(PdfDomDocument document, string displayName) 
        : base(document, "3DView")
    {
        Attributes["XN"] = new PdfDomString(displayName);
    }
        
    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        base.Write(writer);

        _Projection?.Write(writer);
        _Background?.Write(writer);
        return true;
    }
}
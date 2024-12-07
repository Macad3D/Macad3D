using System.Collections.Generic;
using System.IO;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomDocument
{
    public PdfDomCatalog Catalog { get; }

    public PdfVersion Version
    {
        get { return _Version; }
        set
        {
            if (_Version < value)
                _Version = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public const double UserSpaceScale = 72.0 / 25.4;
    public static bool UseCompression = true;

    public List<PdfDomObject> Objects { get; } = new();

    int _LastObjectNumber;
    PdfVersion _Version;

    //--------------------------------------------------------------------------------------------------

    public PdfDomDocument()
    {
        Version = PdfVersion.PDF_1_4;
        Catalog = new(this);
    }

    //--------------------------------------------------------------------------------------------------

    public int ReserveObjectNumber()
    {
        _LastObjectNumber++;
        return _LastObjectNumber;
    }

    //--------------------------------------------------------------------------------------------------

    public PdfDomPage AddPage()
    {
        return new PdfDomPage(this, Catalog.Pages);
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream WriteToStream()
    {
        PdfWriter writer = new(Version, _LastObjectNumber);
        Catalog.Write(writer);

        foreach (var obj in Objects)
        {
            obj.Write(writer);
        }

        var stream = writer.Finish();
        stream.Seek(0, SeekOrigin.Begin);
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

}
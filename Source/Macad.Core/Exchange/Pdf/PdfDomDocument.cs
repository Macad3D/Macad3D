using System.IO;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfDomDocument
    {
        public const double UserSpaceScale = 72.0 / 25.4;
        public bool UseCompression { get; set; } = true;

        //--------------------------------------------------------------------------------------------------

        int _LastObjectNumber;
        public PdfDomCatalog Catalog { get; }

        //--------------------------------------------------------------------------------------------------

        public PdfDomDocument()
        {
            Catalog = new(this);
        }

        //--------------------------------------------------------------------------------------------------

        public int ReserveObjectNumber()
        {
            _LastObjectNumber++;
            return _LastObjectNumber;
        }

        //--------------------------------------------------------------------------------------------------

        public MemoryStream WriteToStream()
        {
            PdfWriter writer = new(_LastObjectNumber);
            Catalog.Write(writer);
            return writer.Finish();
        }

        //--------------------------------------------------------------------------------------------------

        public PdfDomPage AddPage()
        {
            return new PdfDomPage(this, Catalog.Pages);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
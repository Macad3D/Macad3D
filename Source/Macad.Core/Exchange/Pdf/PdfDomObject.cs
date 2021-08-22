namespace Macad.Core.Exchange.Pdf
{
    public abstract class PdfDomObject
    {
        public int ObjectNumber { get; }
        protected PdfDomDocument Document { get; }

        //--------------------------------------------------------------------------------------------------

        protected PdfDomObject(PdfDomDocument document)
        {
            Document = document;
            ObjectNumber = document.ReserveObjectNumber();
        }

        //--------------------------------------------------------------------------------------------------

        public abstract bool Write(PdfWriter writer);
    }
}
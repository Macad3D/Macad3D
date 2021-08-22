namespace Macad.Core.Exchange.Pdf
{
    public sealed class PdfDomCatalog : PdfDomObject
    {
        public PdfDomDictionary Outlines { get; }
        public PdfDomPages Pages { get; }

        //--------------------------------------------------------------------------------------------------

        public PdfDomCatalog(PdfDomDocument document) 
            : base(document)
        {
            Outlines = new PdfDomDictionary(document);
            Pages = new PdfDomPages(document);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            writer.StartObject(ObjectNumber);
            writer.WriteKeyValue("/Type", "/Catalog");
            writer.WriteKeyValue("/Outlines", Outlines);
            writer.WriteKeyValue("/Pages", Pages);
            writer.EndObject();

            Outlines.Write(writer);
            Pages.Write(writer);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
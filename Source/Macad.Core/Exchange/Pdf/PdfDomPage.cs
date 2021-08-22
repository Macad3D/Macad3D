using System.Collections.Generic;
using System.Linq;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfDomPage : PdfDomObject
    {
        public double[] MediaBox { get; set; } = {0.0, 0.0, 100.0, 100.0};

        public List<PdfDomContent> Contents { get; } = new();

        //--------------------------------------------------------------------------------------------------

        readonly PdfDomPages _PagesObject;

        //--------------------------------------------------------------------------------------------------

        public PdfDomPage(PdfDomDocument document, PdfDomPages pagesObject) 
            : base(document)
        {
            _PagesObject = pagesObject;
            pagesObject.PageList.Add(this);
        }

        //--------------------------------------------------------------------------------------------------

        public PdfDomContent AddContent()
        {
            return new PdfDomContent(Document, this);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            writer.StartObject(ObjectNumber);
            writer.WriteKeyValue("/Type", "/Page");
            writer.WriteKeyValue("/Parent", _PagesObject);
            writer.WriteKeyValue("/MediaBox", MediaBox.Select(d => d * PdfDomDocument.UserSpaceScale).ToArray());
            if (Contents.Count == 1)
                writer.WriteKeyValue("/Contents", Contents[0]);
            else
                writer.WriteKeyValue("/Contents", Contents);
            writer.WriteKeyValue("/Resources", "<< /ProcSet [/PDF] >>");
            writer.EndObject();

            foreach (var content in Contents)
            {
                content.Write(writer);
            }

            return true;
        }
    }
}
using System.Collections.Generic;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfDomPages : PdfDomObject
    {
        public List<PdfDomPage> PageList { get; } = new();

        //--------------------------------------------------------------------------------------------------

        public PdfDomPages(PdfDomDocument document) : base(document)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            writer.StartObject(ObjectNumber);
            writer.WriteKeyValue("/Type", "/Pages");
            writer.WriteKeyValue("/Kids", PageList.ToArray());
            writer.WriteKeyValue("/Count", PageList.Count);
            writer.EndObject();

            PageList.ForEach(page => page.Write(writer));
            return true;
        }
    }
}
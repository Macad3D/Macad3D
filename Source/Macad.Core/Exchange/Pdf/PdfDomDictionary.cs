using System.Collections.Generic;
using Macad.Common;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfDomDictionary : PdfDomObject
    {
        public Dictionary<string, object> Content { get; } = new();
        public string Type { get; set; }

        //--------------------------------------------------------------------------------------------------

        public PdfDomDictionary(PdfDomDocument document) 
            : base(document)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            writer.StartObject(ObjectNumber);
            if (!Type.IsNullOrEmpty())
            {
                writer.WriteKeyValue("/Type", Type);
            }

            writer.WriteKeyValue("/Count", Content.Count);
            foreach (var kvp in Content)
            {
                writer.WriteKeyValue(kvp.Key, kvp.Value);    
            }
            writer.EndObject();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
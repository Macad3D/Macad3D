using System.Collections.Generic;
using Macad.Common;

namespace Macad.Exchange.Pdf;

internal class PdfDomObject
{
    public string Type { get; }
    public int ObjectNumber { get; }
    public Dictionary<string, object> Attributes { get; } = new();
    protected PdfDomDocument Document { get; }

    //--------------------------------------------------------------------------------------------------

    public PdfDomObject(PdfDomDocument document, string type)
    {
        Document = document;
        Type = type;
        ObjectNumber = document.ReserveObjectNumber();
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool Write(PdfWriter writer)
    {
        writer.StartObject(ObjectNumber);
        if (!Type.IsNullOrEmpty())
        {
            writer.WriteAttribute("Type",  "/" + Type);
        }
        foreach (var attribute in Attributes)
        {
            writer.WriteAttribute(attribute.Key, attribute.Value);
        }

        return true;
    }
}
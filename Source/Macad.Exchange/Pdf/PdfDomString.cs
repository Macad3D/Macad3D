using System.Text;
using Macad.Common;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDomString
{
    string _Value;

    //--------------------------------------------------------------------------------------------------

    public PdfDomString(string value)
    {
        _Value = value;
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        StringBuilder sb = new();
        sb.Append('<');
        var stringBytes = _Value.ToUtf8Bytes();
        stringBytes.ForEach(b => sb.Append(b.ToString("x2")));
        sb.Append('>');
        return sb.ToString();
    }
}
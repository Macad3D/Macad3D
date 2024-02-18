using System.IO;
using System.Text;

namespace Macad.Core;

public abstract class Clipboard
{
    public abstract bool ContainsData(in string format);
    public abstract MemoryStream GetDataStream(in string format);
    public abstract void SetData(in string format, in MemoryStream data);

    //--------------------------------------------------------------------------------------------------

    public void SetData(in string format, in string data)
    {
        SetData(format, new MemoryStream(Encoding.Unicode.GetBytes(data)));
    }

    //--------------------------------------------------------------------------------------------------

    public string GetDataAsString(in string format)
    {
        var memstream = GetDataStream(format);

        return Encoding.Unicode.GetString(memstream.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

}
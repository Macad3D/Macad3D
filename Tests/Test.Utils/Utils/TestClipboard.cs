using System.IO;
using Macad.Core;

namespace Macad.Test.Utils;

public class TestClipboard : Clipboard
{
    byte[] _Data;
    string _Format;

    //--------------------------------------------------------------------------------------------------

    public override bool ContainsData(in string format)
    {
        return format == _Format;
    }

    //--------------------------------------------------------------------------------------------------

    public override MemoryStream GetDataStream(in string format)
    {
        if(format == _Format)
            return new MemoryStream(_Data);
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override void SetData(in string format, in MemoryStream data)
    {
        _Format = format;
        _Data = data.ToArray();
    }

    //--------------------------------------------------------------------------------------------------

}
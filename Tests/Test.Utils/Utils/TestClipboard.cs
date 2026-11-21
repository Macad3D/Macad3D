using System.IO;
using Macad.Core;

namespace Macad.Test.Utils;

public class TestClipboard : Clipboard
{
    byte[] _Data;
    string _Format;

    //--------------------------------------------------------------------------------------------------

    protected override bool ContainsDataCore(string format)
    {
        return format == _Format;
    }

    //--------------------------------------------------------------------------------------------------

    protected override MemoryStream GetDataStreamCore(string format)
    {
        if(format == _Format)
            return new MemoryStream(_Data);
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void SetDataCore(string format, MemoryStream data)
    {
        _Format = format;
        _Data = data.ToArray();
    }

    //--------------------------------------------------------------------------------------------------

}

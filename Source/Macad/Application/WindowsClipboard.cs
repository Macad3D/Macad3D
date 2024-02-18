using System.IO;
using Macad.Core;

namespace Macad.Window;

public sealed class WindowsClipboard : Clipboard
{
    public override bool ContainsData(in string format)
    {
        return System.Windows.Clipboard.ContainsData(format);
    }

    //--------------------------------------------------------------------------------------------------

    public override MemoryStream GetDataStream(in string format)
    {
        return System.Windows.Clipboard.GetData(format) as MemoryStream;
    }

    //--------------------------------------------------------------------------------------------------

    public override void SetData(in string format, in MemoryStream data)
    {
        System.Windows.Clipboard.SetData(format, data);
    }

    //--------------------------------------------------------------------------------------------------
}
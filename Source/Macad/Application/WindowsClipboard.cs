using System.IO;
using Macad.Core;

namespace Macad.Window;

public sealed class WindowsClipboard : Clipboard
{
    protected override bool ContainsDataCore(string format)
    {
        return System.Windows.Clipboard.ContainsData(format);
    }

    //--------------------------------------------------------------------------------------------------

    protected override MemoryStream GetDataStreamCore(string format)
    {
        return System.Windows.Clipboard.GetData(format) as MemoryStream;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void SetDataCore(string format, MemoryStream data)
    {
        System.Windows.Clipboard.SetData(format, data);
    }

    //--------------------------------------------------------------------------------------------------
}

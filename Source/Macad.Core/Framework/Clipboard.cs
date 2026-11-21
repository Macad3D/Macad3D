using System.IO;
using System.Runtime.InteropServices;
using System.Text;

namespace Macad.Core;

/// <summary>
/// Access to the clipboard. The system clipboard may be locked by other applications,
/// therefore access failures are not passed on: Queries report no data, and failing to
/// store data is reported as warning.
/// </summary>
public abstract class Clipboard
{
    protected abstract bool ContainsDataCore(string format);
    protected abstract MemoryStream GetDataStreamCore(string format);
    protected abstract void SetDataCore(string format, MemoryStream data);

    //--------------------------------------------------------------------------------------------------

    public bool ContainsData(in string format)
    {
        try
        {
            return ContainsDataCore(format);
        }
        catch (ExternalException)
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream GetDataStream(in string format)
    {
        try
        {
            return GetDataStreamCore(format);
        }
        catch (ExternalException)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetData(in string format, in MemoryStream data)
    {
        try
        {
            SetDataCore(format, data);
        }
        catch (ExternalException e)
        {
            Messages.Warning("The data could not be copied to the clipboard, it may be in use by another application.", e.Message);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetData(in string format, in string data)
    {
        SetData(format, new MemoryStream(Encoding.Unicode.GetBytes(data)));
    }

    //--------------------------------------------------------------------------------------------------

    public string GetDataAsString(in string format)
    {
        var memstream = GetDataStream(format);
        if (memstream == null)
            return null;

        return Encoding.Unicode.GetString(memstream.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

}

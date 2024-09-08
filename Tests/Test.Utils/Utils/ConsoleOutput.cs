using System;
using System.IO;

namespace Macad.Test.Utils;

public sealed class ConsoleOutput : IDisposable
{
    StringWriter _StringWriter;
    TextWriter _OriginalOutput;
    bool _isDisposed;

    //--------------------------------------------------------------------------------------------------

    public ConsoleOutput()
    {
        _StringWriter = new StringWriter();
        _OriginalOutput = Console.Out;
        Console.SetOut(_StringWriter);
    }

    //--------------------------------------------------------------------------------------------------

    public string GetOutput()
    {
        Console.Out.Flush();
        return _StringWriter.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        if (_isDisposed)
            return;

        Console.SetOut(_OriginalOutput);
        _StringWriter.Dispose();
        _StringWriter = null;
        _OriginalOutput = null;
        _isDisposed = true;

        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

}
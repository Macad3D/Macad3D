using System;
using System.Diagnostics;
using System.IO;

namespace Macad.Occt.Generator;

public class SourceWriter
{
    StringWriter _Writer = new();
    int _Indentation;
    bool _NewLine;
    static readonly char[] _IndentBuffer = new char[32];

    //--------------------------------------------------------------------------------------------------

    static SourceWriter()
    {
        for (var i = 0; i < _IndentBuffer.Length; i++)
        {
            _IndentBuffer[i] = ' ';
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(string s)
    {
        _BeginLine();
        _Writer.Write(s);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Write(string format, params object[] arg)
    {
        _BeginLine();
        _Writer.Write(format, arg);
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteLine()
    {
        _Writer.WriteLine();
        _NewLine = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteLine(string s, int? indent=null)
    {
        if (!s.StartsWith("#"))
        {
            _BeginLine(indent);
        }

        _Writer.WriteLine(s);
        _NewLine = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteLine(string format, params object[] arg)
    {
        _BeginLine();
        _Writer.WriteLine(format, arg);
        _NewLine = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(SourceWriter writer)
    {
        foreach (var line in writer.ToString().Split("\n", StringSplitOptions.RemoveEmptyEntries))
        {
            WriteLine(line.TrimEnd('\r'));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Indent()
    {
        _Indentation++;
        _NewLine = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Outdent()
    {
        Debug.Assert(_Indentation > 0);
        _Indentation--;
        _NewLine = true;
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString() => _Writer.ToString();

    //--------------------------------------------------------------------------------------------------

    void _BeginLine(int? indent=null)
    {
        if (!_NewLine)
            return;

        var indentation = _Indentation;
        if (indent.HasValue)
        {
            indentation += indent.Value;
        }

        if (indentation > 0 && indent != 0)
        {
            _Writer.Write(_IndentBuffer, 0, indentation * 4);
        }

        _NewLine = false;
    }
}
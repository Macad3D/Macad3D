using System;
using System.Diagnostics;
using System.IO;
using System.Text;
using Macad.Common;
using Macad.Core;

namespace Macad.Exchange.Dxf;

internal sealed class DxfWriter
{
    public DxfVersion Version { get; }
        
    //--------------------------------------------------------------------------------------------------

    MemoryStream _Stream;
    StreamWriter _Writer;
    Encoding _Encoding = Encoding.GetEncoding("ISO-8859-1");
    int _NextHandle = 1;
    bool _IsBinary = false;

    //--------------------------------------------------------------------------------------------------

    public DxfWriter(DxfVersion version, bool binary)
    {
        Version = version;
        _IsBinary = binary;

        _Stream = new MemoryStream();

        if (_IsBinary)
        {
            _Stream.Write(DxfUtils.BinaryFileSentinel, 0, DxfUtils.BinaryFileSentinel.Length);
        }
        else
        {
            _Writer = new StreamWriter(_Stream, _Encoding, 512, true);
            Write(999, "DXF created by Macad3D");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream Finish()
    {
        Write(0, "EOF");

        if (_Writer != null)
        {
            _Writer.Dispose();
            _Writer = null;
        }
        return _Stream;
    }
        
    //--------------------------------------------------------------------------------------------------

    public int WriteHandle(int groupcode = 5)
    {
        if (Version >= DxfVersion.AC1012)
        {
            Write(groupcode, _NextHandle.ToString("X"));
        }

        _NextHandle++;
        return _NextHandle - 1;
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteSubclass(string subclass)
    {
        if (Version >= DxfVersion.AC1012)
        {
            Write(100, subclass);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(int groupcode, object value)
    {
        if (_IsBinary)
        {
            _WriteBinary(groupcode, value);
        }
        else
        {
            _WriteAscii(groupcode, value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void _WriteAscii(int groupcode, object value)
    {
        _Writer.WriteLine(groupcode);

        switch (value)
        {
            case string stringValue:
                _Writer.WriteLine(stringValue);
                break;

            case int int32Value:
                _Writer.WriteLine(int32Value.ToString());
                break;

            case double doubleValue:
                _Writer.WriteLine(doubleValue.ToInvariantString("G14"));
                break;

            default:
                Messages.Error($"Unknown value type {value.GetType().Name} for code {groupcode}.");
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void _WriteBinary(int groupcode, object value)
    {
        if (groupcode <= 255)
        {
            _Stream.WriteByte((byte)groupcode);
        }
        else
        {
            _Stream.WriteByte(255);
            _Stream.WriteByte((byte)(groupcode & 0xff));
            _Stream.WriteByte((byte)((groupcode >> 8) & 0xff));
        }

        var type = DxfUtils.GetTypeForGroupCode(groupcode);
        Debug.Assert(type != DxfUtils.Types.Unknown);
            
        switch (value)
        {
            case string stringValue:
                Debug.Assert(type == DxfUtils.Types.String);
                var stringBytes = _Encoding.GetBytes(stringValue);
                _Stream.Write(stringBytes, 0, stringBytes.Length);
                _Stream.WriteByte(0);
                break;

            case int intValue:
                Debug.Assert(type == DxfUtils.Types.Int16 || type == DxfUtils.Types.Int32);
                _Stream.WriteByte((byte)(intValue & 0xff));
                _Stream.WriteByte((byte)((intValue >> 8) & 0xff));
                if (type == DxfUtils.Types.Int32)
                {
                    _Stream.WriteByte((byte)((intValue >> 16) & 0xff));
                    _Stream.WriteByte((byte)((intValue >> 24) & 0xff));
                }
                break;

            case double doubleValue:
                Debug.Assert(type == DxfUtils.Types.Double);
                var doubleBytes = BitConverter.GetBytes(doubleValue);
                _Stream.Write(doubleBytes, 0, doubleBytes.Length);
                break;

            default:
                Messages.Error($"DxfWriter: Unknown value type {value.GetType().Name} for code {groupcode}.");
                break;
        }
    }
}
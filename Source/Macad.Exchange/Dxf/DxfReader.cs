using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Macad.Common;
using Macad.Core;

namespace Macad.Exchange.Dxf;

internal sealed class DxfReader
{
    public int Line => _Line;
    public int GroupCode => _GroupCode;

    //--------------------------------------------------------------------------------------------------

    Stream _Stream;
    StreamReader _Reader;
    Encoding _Encoding = Encoding.GetEncoding(1252);
    bool _IsBinary = false;
    int _Line = 0;
    int _GroupCode = -1;
    double _Scale = 1.0;

    //--------------------------------------------------------------------------------------------------

    public DxfReader(Stream stream, double scale)
    {
        _Stream = stream;
        _Scale = scale;

        // Check for binary
        var sentinel = DxfUtils.BinaryFileSentinel;
        var firstBytes = new byte[sentinel.Length];
        if (_Stream.Read(firstBytes, 0, sentinel.Length) == sentinel.Length)
        {
            if (firstBytes.SequenceEqual(sentinel))
            {
                _IsBinary = true;
            }
            else
            {
                // Not binary, reverse
                _Stream.Seek(-sentinel.Length, SeekOrigin.Current);
            }
        }

        if (!_IsBinary)
        {
            _Reader = new StreamReader(_Stream, _Encoding);
        }

        _Line = 0;
        _ReadGroupCode();
    }

    //--------------------------------------------------------------------------------------------------

    public void Close()
    {
        _Reader?.Dispose();
        _Reader = null;
        _Stream = null;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void _ReadGroupCode()
    {
        _GroupCode = -1;
        if (_IsBinary)
        {
            int code1 = _Stream.ReadByte();
            if (code1 == -1)
            {
                return;
            }
            if (code1 == 255)
            {
                // Doublebyte
                code1 = _Stream.ReadByte();
                int code2 = _Stream.ReadByte();
                if (code1 == -1 || code2 == -1)
                {
                    return;
                }

                code1 += code2 << 8;
            }
            _GroupCode = code1;
        }
        else
        {
            if (_Reader.EndOfStream)
            {
                return;
            }

            var s = _Reader.ReadLine()?.Trim();
            if (!s.IsNullOrEmpty())
            {
                int.TryParse(s, NumberStyles.Integer, CultureInfo.InvariantCulture, out _GroupCode);
            }
        }
        _Line+=2;

        if(_GroupCode == 999)
            Skip();
    }

    //--------------------------------------------------------------------------------------------------
        
    public void Skip()
    {
        if (_IsBinary)
        {
            var type = DxfUtils.GetTypeForGroupCode(_GroupCode);
            switch (type)
            {
                case DxfUtils.Types.String:
                {
                    int readByte;
                    do
                    {
                        readByte = _Stream.ReadByte();
                    } while (readByte > 0);

                    break;
                }
                case DxfUtils.Types.ByteChunk:
                {
                    int readByte = _Stream.ReadByte();
                    if(readByte == -1)
                    {
                        Messages.Error($"Binary DXF is invalid/not complete.");
                        _GroupCode = -1;
                        return;
                    }

                    _Stream.Seek(readByte, SeekOrigin.Current);
                    break;
                }
                default:
                {
                    int typeSize = DxfUtils.GetBinarySize(type);
                    if (typeSize == 0)
                    {
                        Messages.Error($"Binary DXF has group code {_GroupCode} of unknown type, the file cannot correctly parsed, in line {_Line}");
                        _GroupCode = -1;
                        return;
                    }

                    _Stream.Seek(typeSize, SeekOrigin.Current);
                    break;
                }
            }
        }
        else
        {
            if (_Reader.EndOfStream)
            {
                return;
            }

            _Reader.ReadLine();
        }
        _ReadGroupCode();
    }

    //--------------------------------------------------------------------------------------------------

    public string ReadString()
    {
        Debug.Assert(DxfUtils.GetTypeForGroupCode(_GroupCode) == DxfUtils.Types.String);

        string value = null;
        if (_IsBinary)
        {
            var list = new List<byte>();
            int readByte = _Stream.ReadByte();
            while (readByte > 0)
            {
                list.Add((byte)readByte);
                readByte = _Stream.ReadByte();
            }

            value = _Encoding.GetString(list.ToArray());
        }
        else
        {
            if (!_Reader.EndOfStream)
            {
                value = _Reader.ReadLine()?.Trim();
            }
        }

        _ReadGroupCode();
        return value;
    }

    //--------------------------------------------------------------------------------------------------
        
    public int ReadInteger()
    {
        Debug.Assert(DxfUtils.GetTypeForGroupCode(_GroupCode) == DxfUtils.Types.Int16 || DxfUtils.GetTypeForGroupCode(_GroupCode) == DxfUtils.Types.Int32);

        int value = 0;
        if (_IsBinary)
        {
            var buffer = new byte[DxfUtils.GetBinarySize(DxfUtils.Types.Int16)];
            if (_Stream.Read(buffer, 0, buffer.Length) != buffer.Length)
            {
                Messages.Error($"Binary DXF is invalid/not complete.");
                _GroupCode = -1;
            }
            else
            {
                value = BitConverter.ToInt16(buffer, 0);
            }
        }
        else
        {
            if (!_Reader.EndOfStream)
            {
                var s = _Reader.ReadLine()?.Trim();
                if (!s.IsNullOrEmpty())
                {
                    int.TryParse(s, NumberStyles.Integer, CultureInfo.InvariantCulture, out value);
                }
            }
        }

        _ReadGroupCode();
        return value;
    }

    //--------------------------------------------------------------------------------------------------
                
    public double ReadDouble()
    {
        Debug.Assert(DxfUtils.GetTypeForGroupCode(_GroupCode) == DxfUtils.Types.Double);

        double value = 0.0;
        if (_IsBinary)
        {
            var buffer = new byte[DxfUtils.GetBinarySize(DxfUtils.Types.Double)];
            if (_Stream.Read(buffer, 0, buffer.Length) != buffer.Length)
            {
                Messages.Error($"Binary DXF is invalid/not complete.");
                _GroupCode = -1;
            }
            else
            {
                value = BitConverter.ToDouble(buffer, 0);
            }
        }
        else
        {
            if (!_Reader.EndOfStream)
            {

                var s = _Reader.ReadLine()?.Trim();
                if (!s.IsNullOrEmpty())
                {
                    double.TryParse(s, NumberStyles.Float, CultureInfo.InvariantCulture, out value);
                }
            }
        }

        _ReadGroupCode();
        return value;
    }

    //--------------------------------------------------------------------------------------------------

    public double ReadCoord()
    {
        return ReadDouble() * _Scale;
    }

    //--------------------------------------------------------------------------------------------------

    public double ReadAngle()
    {
        return ReadDouble();
    }
}
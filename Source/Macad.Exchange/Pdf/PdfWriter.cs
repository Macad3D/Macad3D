using System;
using System.Collections;
using System.IO;
using System.Text;
using Macad.Common;

namespace Macad.Exchange.Pdf;

internal sealed class PdfWriter
{
    MemoryStream _Stream;
    Encoding _Encoding = Encoding.GetEncoding(1252);
    long[] _ObjectOffsets;
    bool _ObjectOpen;
    bool _CurrentObjectIsStream;
    int _Indent = 0;

    //--------------------------------------------------------------------------------------------------

    public PdfWriter(PdfVersion version, int lastObjectNumber)
    {
        _ObjectOffsets = new long[lastObjectNumber];
        _Stream = new MemoryStream();

        Write($"%PDF-{(int)version / 10}.{(int)version % 10}\n"); // header
        Write("%öäüß\n"); // binary signature
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream Finish()
    {
        EndObject();

        // XRef table
        var xrefOffset = _Stream.Position;
        Write($"xref\n{0} {_ObjectOffsets.Length+1}\n0000000000 65535 f\n");
        foreach (var objectOffset in _ObjectOffsets)
        {
            Write($"{objectOffset:D10} 00000 n\r\n");
        }

        // Trailer
        Write($"trailer\n<<\n/Size {_ObjectOffsets.Length+1}\n/Root 1 0 R\n>>\n");
        Write($"startxref\n{xrefOffset}\n");
        Write("%%EOF\n");

        _Stream.Flush();

        return _Stream;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void StartObject(int objectNumber)
    {
        EndObject();
        _ObjectOffsets[objectNumber-1] = _Stream.Position;
        Write($"{objectNumber} 0 obj\n<<\n");
        _ObjectOpen = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void EndObject()
    {
        if (!_ObjectOpen)
            return;

        if(_CurrentObjectIsStream)
            Write("endobj\n");
        else
            Write(">>\nendobj\n");

        _CurrentObjectIsStream = false;
        _ObjectOpen = false;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Write(String stringValue)
    {
        var stringBytes = _Encoding.GetBytes(stringValue);
        _Stream.Write(stringBytes, 0, stringBytes.Length);
    }

    //--------------------------------------------------------------------------------------------------

    void _WriteIndent()
    {
        for (int i = 0; i < _Indent; i++)
        {
            _Stream.WriteByte(0x20); // space
            _Stream.WriteByte(0x20);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Write(object value)
    {
        bool first;
        switch (value)
        {
            case bool boolValue:
                Write(boolValue ? "true" : "false");
                break;

            case String stringValue:
                Write(stringValue);
                break;

            case PdfDomString pdfStringValue:
                Write(pdfStringValue.ToString());
                break;

            case int int32Value:
                Write(int32Value.ToString());
                break;

            case uint uint32Value:
                Write(uint32Value.ToString());
                break;

            case long int64Value:
                Write(int64Value.ToString());
                break;

            case double doubleValue:
                Write(doubleValue.ToInvariantString("G14"));
                break;

            case float floatValue:
                Write(floatValue.ToInvariantString("G7"));
                break;

            case PdfDomObject pdfObject:
                Write($"{pdfObject.ObjectNumber} 0 R");
                break;

            case Color color:
                _Stream.WriteByte(0x5b); // [
                Write(color.Red);
                _Stream.WriteByte(0x20); // space
                Write(color.Green);
                _Stream.WriteByte(0x20); // space
                Write(color.Blue);
                _Stream.WriteByte(0x5d); // ]
                break;
                    
            case IDictionary dictionary:
                _Stream.WriteByte(0x3c); // <
                _Stream.WriteByte(0x3c); // <
                _Stream.WriteByte(0x0a);
                _Indent++;
                foreach (DictionaryEntry entry in dictionary)
                {
                    _WriteIndent();
                    _Stream.WriteByte(0x2f);
                    Write(entry.Key);
                    _Stream.WriteByte(0x20);
                    Write(entry.Value);
                    _Stream.WriteByte(0x0a);
                }
                _Indent--;
                _WriteIndent();
                _Stream.WriteByte(0x3e); // >
                _Stream.WriteByte(0x3e); // >
                break;

            case IEnumerable enumerable:
                _Stream.WriteByte(0x5b); // [
                first = true;
                foreach (var element in enumerable)
                {
                    if (!first)
                        _Stream.WriteByte(0x20);
                    first = false;
                    Write(element);
                }
                _Stream.WriteByte(0x5d); // ]
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteObjectStream(byte[] bytes, int offset, int count)
    {
        Write(">>\nstream\n");
        _Stream.Write(bytes, offset, count);
        if(bytes[offset+count-1] != '\n')
            _Stream.WriteByte(0x0a);
        Write("endstream\n");
        _CurrentObjectIsStream = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteAttribute(string key, object value)
    {
        _Stream.WriteByte(0x2f);
        Write(key);
        _Stream.WriteByte(0x20);
        Write(value);
        _Stream.WriteByte(0x0a);
    }

    //--------------------------------------------------------------------------------------------------


}
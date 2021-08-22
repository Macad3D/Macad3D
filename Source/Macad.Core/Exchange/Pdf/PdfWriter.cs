using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Macad.Common;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfWriter
    {
        MemoryStream _Stream;
        Encoding _Encoding = Encoding.GetEncoding(1252);
        long[] _ObjectOffsets;
        bool _CurrentObjectIsStream;

        //--------------------------------------------------------------------------------------------------

        public PdfWriter(int lastObjectNumber)
        {
            _ObjectOffsets = new long[lastObjectNumber];
            _Stream = new MemoryStream();

            Write("%PDF-1.4\n"); // header
            Write("%öäüß\n"); // binary signature
        }

        //--------------------------------------------------------------------------------------------------

        public MemoryStream Finish()
        {
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

            return _Stream;
        }
        
        //--------------------------------------------------------------------------------------------------

        public void StartObject(int objectNumber)
        {
            _ObjectOffsets[objectNumber-1] = _Stream.Position;
            Write($"{objectNumber} 0 obj\n<<\n");
        }

        //--------------------------------------------------------------------------------------------------

        public void EndObject()
        {
            if(_CurrentObjectIsStream)
                Write("endobj\n");
            else
                Write(">>\nendobj\n");
            _CurrentObjectIsStream = false;
        }
        
        //--------------------------------------------------------------------------------------------------

        public void Write(String stringValue)
        {
            var stringBytes = _Encoding.GetBytes(stringValue);
            _Stream.Write(stringBytes, 0, stringBytes.Length);
        }

        //--------------------------------------------------------------------------------------------------

        public void Write(object value)
        {
            switch (value)
            {
                case String stringValue:
                    Write(stringValue);
                    break;

                case int int32Value:
                    Write(int32Value.ToString());
                    break;

                case long int64Value:
                    Write(int64Value.ToString());
                    break;

                case double doubleValue:
                    Write(doubleValue.ToInvariantString("G14"));
                    break;

                case PdfDomObject pdfObject:
                    Write($"{pdfObject.ObjectNumber} 0 R");
                    break;

                case IEnumerable enumerable:
                    _Stream.WriteByte(0x5b); // [
                    var first = true;
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

        public void WriteKeyValue(string key, object value)
        {
            Write(key);
            _Stream.WriteByte(0x20);
            Write(value);
            _Stream.WriteByte(0x0a);
        }

        //--------------------------------------------------------------------------------------------------


    }
}
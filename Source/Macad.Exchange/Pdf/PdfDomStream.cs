using System.IO;
using System.IO.Compression;
using Macad.Common;

namespace Macad.Exchange.Pdf;

internal class PdfDomStream : PdfDomObject
{
    readonly MemoryStream _TargetStream;
    readonly DeflateStream _DeflateStream;
    readonly Stream _Stream;

    //--------------------------------------------------------------------------------------------------

    public PdfDomStream(PdfDomDocument document, string type) 
        : base(document, type)
    {
        _TargetStream = new();
        _Stream = _TargetStream;

        if (PdfDomDocument.UseCompression)
        {
            // ZLib magic header, .Net don't write, but PDF expect them
            // See https://www.ietf.org/rfc/rfc1950.txt
            _TargetStream.WriteByte(0x78);
            _TargetStream.WriteByte(0xDA);
            _DeflateStream = new (_TargetStream, CompressionLevel.Fastest, true);
            _Stream = _DeflateStream;
            Attributes["Filter"] = "/FlateDecode";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Add(Stream stream)
    {
        stream.Seek(0, SeekOrigin.Begin);
        stream.CopyTo(_Stream);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Add(byte[] bytes)
    {
        _Stream.Write(bytes);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Add(string value)
    {
        _Stream.Write(value.ToUtf8Bytes());
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Write(PdfWriter writer)
    {
        if (_DeflateStream != null)
        {
            _DeflateStream.Close();
        }
        Attributes["Length"] = _TargetStream.Length;

        base.Write(writer);

        writer.WriteObjectStream(_TargetStream.GetBuffer(),0, (int)_TargetStream.Length);

        return true;
    }
}
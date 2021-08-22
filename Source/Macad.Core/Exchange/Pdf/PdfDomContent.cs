using System.IO;
using System.IO.Compression;
using Macad.Common;

namespace Macad.Core.Exchange.Pdf
{
    public class PdfDomContent : PdfDomObject
    {
        readonly MemoryStream _TargetStream;
        readonly DeflateStream _DeflateStream;
        readonly Stream _Stream;

        //--------------------------------------------------------------------------------------------------

        public PdfDomContent(PdfDomDocument document, PdfDomPage page) : base(document)
        {
            _TargetStream = new();
            _Stream = _TargetStream;

            if (document.UseCompression)
            {
                // ZLib magic header, .Net don't write, but PDF expect them
                // See https://www.ietf.org/rfc/rfc1950.txt
                _TargetStream.WriteByte(0x78);
                _TargetStream.WriteByte(0xDA);
                _DeflateStream = new (_TargetStream, CompressionLevel.Fastest, true);
                _Stream = _DeflateStream;
            }

            page.Contents.Add(this);

            // Matrix for scaling from mm (MacadSpace) to 1/72 inch (UserSpace)
            Add("2.83464567 0 0 2.83464567 0 0 cm\n".ToUtf8Bytes()); 
        }

        //--------------------------------------------------------------------------------------------------

        public void Add(Stream stream)
        {
            stream.CopyTo(_Stream);
        }
        
        //--------------------------------------------------------------------------------------------------

        public void Add(byte[] bytes)
        {
            _Stream.Write(bytes);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            writer.StartObject(ObjectNumber);
            writer.WriteKeyValue("/Length", _TargetStream.Length);
            if (_DeflateStream != null)
            {
                _DeflateStream.Close();
                writer.WriteKeyValue("/Filter", "/FlateDecode");
            }
            writer.WriteObjectStream(_TargetStream.GetBuffer(),0, (int)_TargetStream.Length);
            writer.EndObject();

            return true;
        }
    }
}
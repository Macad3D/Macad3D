using System.Collections.Generic;
using System.Linq;
using Macad.Common;

namespace Macad.Exchange.Pdf
{
    public class PdfDomPage : PdfDomObject
    {
        public double[] MediaBox
        {
            set
            {
                Attributes["MediaBox"] = value.Select(d => d * PdfDomDocument.UserSpaceScale).ToArray();
            }
        }

        public List<PdfDomStream> Contents { get; } = new();

        public List<PdfDomObject> Annotations
        {
            get
            {
                if (_Annots == null)
                {
                    _Annots = new();
                    Attributes["Annots"] = _Annots;
                }

                return _Annots;
            }
        }

        //--------------------------------------------------------------------------------------------------

        List<PdfDomObject> _Annots;

        //--------------------------------------------------------------------------------------------------

        public PdfDomPage(PdfDomDocument document, PdfDomPages pagesObject)
            : base(document, "Page")
        {
            pagesObject.PageList.Add(this);

            Attributes["Parent"] = pagesObject;
            MediaBox = new[] {0.0, 0.0, 100.0, 100.0};
            Attributes["Contents"] = Contents;
            Attributes["Resources"] = "<< /ProcSet [/PDF] >>";
    }

        //--------------------------------------------------------------------------------------------------

        public PdfDomStream AddContent()
        {
            var stream = new PdfDomStream(Document, "");
            
            // Matrix for scaling from mm (MacadSpace) to 1/72 inch (UserSpace)
            stream.Add("2.83464567 0 0 2.83464567 0 0 cm\n".ToUtf8Bytes()); 
            Contents.Add(stream);
            return stream;
        }

        //--------------------------------------------------------------------------------------------------

        public PdfDomAnnotation AddAnnotation(string subtype, double[] rect)
        {
            var annot = new PdfDomAnnotation(Document, subtype, rect);
            Annotations.Add(annot);
            return annot;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Write(PdfWriter writer)
        {
            base.Write(writer);

            Contents.ForEach(content => content.Write(writer));
            _Annots?.ForEach(annot => annot.Write(writer));

            return true;
        }
    }
}
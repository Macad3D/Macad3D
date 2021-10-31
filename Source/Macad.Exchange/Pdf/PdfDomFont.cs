using Macad.Core.Drawing;

namespace Macad.Exchange.Pdf
{
    public class PdfDomFont : PdfDomObject
    {
        public string Name
        {
            get { return _Name; }
        }

        //--------------------------------------------------------------------------------------------------

        public FontStyle Style
        {
            get { return _Style; }
            set
            {
                _Style = value;
                Attributes["Subtype"] = "/TrueType";
                Attributes["BaseFont"] = $"/{_Style.Family}";
                Attributes["Encoding"] = "/WinAnsiEncoding";
            }
        }

        //--------------------------------------------------------------------------------------------------

        string _Name;
        FontStyle _Style;

        //--------------------------------------------------------------------------------------------------

        public PdfDomFont(PdfDomDocument document, string name) 
            : base(document, "Font")
        {
            _Name = name;
            Attributes["Name"] = $"/{name}";
        }

        //--------------------------------------------------------------------------------------------------
    }
}
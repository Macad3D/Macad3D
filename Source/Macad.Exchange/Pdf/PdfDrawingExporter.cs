using System.IO;
using System.Linq;
using Macad.Core;
using Macad.Core.Drawing;
using Macad.Occt;

namespace Macad.Exchange.Pdf
{
    public class PdfDrawingExporter: IDrawingRenderer, IRendererCapabilities
    {
        public static MemoryStream Export(Drawing drawing)
        {
            var exporter = new PdfDrawingExporter();
            return exporter._Export(drawing);
        }

        //--------------------------------------------------------------------------------------------------

        PdfDomDocument _Document;
        PdfDomPage _Page;
        PdfDomStream _Content;
        PdfPathBuilder _PathBuilder;
        PdfDomFont _CurrentFont;

        //--------------------------------------------------------------------------------------------------

        PdfDrawingExporter()
        {
        }

        //--------------------------------------------------------------------------------------------------
        
        MemoryStream _Export(Drawing drawing)
        {
            _Document = new PdfDomDocument();
            _Page = _Document.AddPage();
            _Content = _Page.AddContent();
            _PathBuilder = new PdfPathBuilder();

            var aabb = drawing.GetBoundingBox();
            if (!aabb.IsVoid())
            {
                double xmin = 0, xmax = 0, ymin = 0, ymax = 0;
                aabb.Get(ref xmin, ref ymin, ref xmax, ref ymax);
                _Page.MediaBox = new[] {xmin, ymin, xmax, ymax};
            }

            // Export
            drawing.Render(this);

            var stream = _Document.WriteToStream();
            _Document = null;
            return stream;
        }

        //--------------------------------------------------------------------------------------------------

        #region IRendererCapabilities

        int IRendererCapabilities.BezierCurveMaxDegree => 3;
        bool IRendererCapabilities.CircleAsCurve => true;
        bool IRendererCapabilities.EllipseAsCurve => true;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IDrawingRenderer

        IRendererCapabilities IDrawingRenderer.Capabilities => this;

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BeginGroup(string name)
        {
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndGroup()
        {
            ((IDrawingRenderer) this).EndPath();
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.SetStyle(StrokeStyle stroke, FillStyle fill, FontStyle font)
        {
            _PathBuilder.EndPath();

            _PathBuilder.StrokeEnabled = stroke != null;
            if (stroke != null)
            {
                _PathBuilder.SetLineWidth(stroke.Width);

                if(stroke.LineStyle == LineStyle.Solid)
                    _PathBuilder.SetLinePattern();
                else
                    _PathBuilder.SetLinePattern(stroke.LineStyle.Pattern().Select(w => w * 0.1).ToArray());

                if (stroke.Color.HasValue)
                {
                    var c = stroke.Color.Value;
                    _PathBuilder.SetStrokeColor(c.Red, c.Green, c.Blue);
                }
            }

            _PathBuilder.FillEnabled = fill != null;
            if (fill != null)
            {
                if (fill.Color.HasValue)
                {
                    var c = fill.Color.Value;
                    _PathBuilder.SetFillColor(c.Red, c.Green, c.Blue);
                }
            }

            _CurrentFont = null;
            if (font != null)
            {
                _CurrentFont = _Page.Fonts.FirstOrDefault(pdffont => pdffont.Style.IsEqual(font))
                               ?? _Page.AddFont(font);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPathSegment()
        {
            if (_PathBuilder.FillEnabled)
            {
                _PathBuilder.EndSegment();
            }
            else
            {
                // If path gets to long, Acrobat Reader does render dashed
                // lines as solid ones. So if we not need to fill, we can
                // end the path here.
                _PathBuilder.EndPath();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPath()
        {
            if (_PathBuilder.HasContent)
            {
                _PathBuilder.EndPath();
                _Content.Add(_PathBuilder.GetBytes());
            }
            _PathBuilder = new PdfPathBuilder();
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
        {
            _PathBuilder.AddLine(start, end);
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BezierCurve(Pnt2d[] knots)
        {
            switch (knots.Length)
            {
                case 3:
                    var cp1 = knots[0] + (knots[1] - knots[0]).ToVec() * 2 / 3;
                    var cp2 = knots[2] + (knots[1] - knots[2]).ToVec() * 2 / 3;
                    _PathBuilder.AddCurve(knots[0], cp1, cp2, knots[2]);
                    break;
                case 4: 
                    _PathBuilder.AddCurve(knots[0], knots[1], knots[2], knots[3]);
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Text(string text, Pnt2d position, double rotation)
        {
            _PathBuilder.AddText(text, position, rotation, _CurrentFont);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
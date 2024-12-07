using System.IO;
using System.Linq;
using Macad.Core;
using Macad.Core.Drawing;
using Macad.Occt;

namespace Macad.Exchange.Pdf;

internal sealed class PdfDrawingExporter: IDrawingRenderer, IRendererCapabilities
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
    PdfContentBuilder _ContentBuilder;
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
        _ContentBuilder = new PdfContentBuilder();

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
        _ContentBuilder.EndPath();

        _ContentBuilder.StrokeEnabled = stroke != null;
        if (stroke != null)
        {
            _ContentBuilder.SetLineWidth(stroke.Width);

            if(stroke.LineStyle == LineStyle.Solid)
                _ContentBuilder.SetLinePattern();
            else
                _ContentBuilder.SetLinePattern(stroke.LineStyle.Pattern().Select(w => w * 0.1).ToArray());

            if (stroke.Color.HasValue)
            {
                var c = stroke.Color.Value;
                _ContentBuilder.SetStrokeColor(c.Red, c.Green, c.Blue);
            }
        }

        _ContentBuilder.FillEnabled = fill != null;
        if (fill != null)
        {
            if (fill.Color.HasValue)
            {
                var c = fill.Color.Value;
                _ContentBuilder.SetFillColor(c.Red, c.Green, c.Blue);
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
        if (_ContentBuilder.FillEnabled)
        {
            _ContentBuilder.EndSegment();
        }
        else
        {
            // If path gets to long, Acrobat Reader does render dashed
            // lines as solid ones. So if we not need to fill, we can
            // end the path here.
            _ContentBuilder.EndPath();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.EndPath()
    {
        if (_ContentBuilder.HasContent)
        {
            _ContentBuilder.EndPath();
            _Content.Add(_ContentBuilder.Finish());
        }
        _ContentBuilder = new PdfContentBuilder();
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
    {
        _ContentBuilder.AddLine(start, end);
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.BezierCurve(Pnt2d[] knots)
    {
        switch (knots.Length)
        {
            case 3:
                var cp1 = knots[0] + (knots[1] - knots[0]).ToVec() * 2 / 3;
                var cp2 = knots[2] + (knots[1] - knots[2]).ToVec() * 2 / 3;
                _ContentBuilder.AddCurve(knots[0], cp1, cp2, knots[2]);
                break;
            case 4: 
                _ContentBuilder.AddCurve(knots[0], knots[1], knots[2], knots[3]);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void IDrawingRenderer.Text(string text, Pnt2d position, double rotation)
    {
        _ContentBuilder.AddText(text, position, rotation, _CurrentFont);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
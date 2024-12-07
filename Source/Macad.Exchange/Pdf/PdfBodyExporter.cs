using System;
using System.Collections.Generic;
using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange.U3d;

namespace Macad.Exchange.Pdf;

internal sealed class PdfBodyExporter
{
    public static MemoryStream Export(IEnumerable<Body> bodies)
    {
        var exporter = new PdfBodyExporter();
        return exporter._Export(bodies);
    }

    //--------------------------------------------------------------------------------------------------

    const double PaperSizeX = 270.0;
    const double PaperSizeY = 200.0;

    //--------------------------------------------------------------------------------------------------

    PdfDomDocument _Document;
    PdfDomPage _Page;

    //--------------------------------------------------------------------------------------------------
        
    MemoryStream _Export(IEnumerable<Body> bodies)
    {
        try
        {
            var u3dSource = U3dBodyExporter.Export(bodies);
            if (u3dSource == null)
            {
                Messages.Error("Mesh exporting failed, cannot generate 3D PDF.");
                return null;
            }

            _Document = new PdfDomDocument {Version = PdfVersion.PDF_1_6};
            _Page = _Document.AddPage();

            var pageRect = new[] {0, 0, PaperSizeX, PaperSizeY};
            _Page.MediaBox = pageRect;

            // Create U3D stream
            var streamObj = new PdfDom3DStream(_Document);
            streamObj.Add(u3dSource);

            // Create view
            var view = streamObj.AddView("Default");
            view.U3DPath = "View";

            var projection = view.Projection;
            projection.IsPerspective = false;
            projection.AutomaticClipping = true;

            var background = view.Background;
            background.Color = new Color(0.75f, 0.75f, 0.75f);

            if (CoreContext.Current?.Viewport != null)
            {
                var vp = CoreContext.Current.Viewport;
                var size = vp.Size;
                var scale = Math.Min(PaperSizeX / size.Width, PaperSizeY / size.Height);
                projection.OrthographicScale = scale * PdfDomDocument.UserSpaceScale;
                view.OrbitCenterDistance = vp.EyePoint.Distance(vp.TargetPoint) * vp.Scale;
            }

            // Create annotation
            var normalAppearenceStream = new PdfDomXObject(_Document, pageRect);
            normalAppearenceStream.Add(PdfSnippets.NormalAppearenceFor3DAnnot);
            var annot = new PdfDom3DAnnotation(_Document, new[] {0, 0, PaperSizeX, PaperSizeY}, streamObj)
            {
                IsInteractive = true, 
                IsAutostart = true,
                NormalAppearence = normalAppearenceStream 
            };
            _Page.Annotations.Add(annot);

            // Finish
            var stream = _Document.WriteToStream();
            _Document = null;
            return stream;
        }
        catch (Exception e)
        {
            Messages.Exception($"Exception occured while exporting to U3D.", e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
}
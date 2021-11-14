using System;
using System.Collections.Generic;
using System.IO;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange.Pdf;

namespace Macad.Exchange
{
    public class PdfExchanger : IDrawingExporter, IBodyExporter
    {
        #region Exchanger

        public string Description { get; } = "Portable Document Format";
        public string[] Extensions { get; } = {"pdf"};

        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is PdfSettings newSettings)
                    Settings = newSettings;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool CanExportToClipboard()
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool CanImportFromClipboard(Clipboard clipboard)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            ExchangeRegistry.Register(new PdfExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Settings

        [SerializeType]
        public class PdfSettings : IExchangerSettings
        {
        }

        //--------------------------------------------------------------------------------------------------

        public PdfSettings Settings { get; private set; } = new ();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Helper

        bool _WriteToFile(string fileName, MemoryStream content)
        {
            if (content.Length > 0)
            {
                try
                {
                    content.Position = 0;
                    using (var output = new FileStream(fileName, FileMode.Create))
                    {
                        content.CopyTo(output);
                    }
                    return true;
                }
                catch (Exception e)
                {
                    Messages.Exception("Writing PDF to file " + fileName + " failed.", e);
                }
            }
            return false;
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IDrawingExporter
        
        bool IDrawingExporter.DoExport(string fileName, Core.Drawing.Drawing drawing)
        {
            bool result;
            using (new ProcessingScope(null, "Exporting drawing to PDF"))
            {
                result = _WriteToFile(fileName, PdfDrawingExporter.Export(drawing));
            }

            return result;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
        
        #region IBodyExporter
        
        bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
        {
            bool result;
            using (new ProcessingScope(null, "Exporting bodies to 3D-PDF"))
            {
                result = _WriteToFile(fileName, PdfBodyExporter.Export(bodies));
            }

            return result;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
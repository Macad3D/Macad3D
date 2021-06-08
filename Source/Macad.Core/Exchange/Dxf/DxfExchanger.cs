using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using Macad.Core.Exchange.Dxf;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Exchange
{
    public sealed class DxfExchanger : ISketchExporter, ISketchImporter, IVectorExporter
    {
        #region Exchanger

        public string Description { get; } = "AutoCAD Drawing Interchange Format";
        public string[] Extensions { get; } = {"dxf"};
                
        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is DxfSettings newSettings)
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

        #endregion
            
        #region Settings

        [SerializeType]
        public class DxfSettings : IExchangerSettings
        {
            [SerializeMember]
            public DxfVersion ExportVersion { get; set; } = DxfVersion.Latest;

            [SerializeMember]
            public bool ExportBinary { get; set; }

            [SerializeMember]
            public bool ExportSplineAsPolygon { get; set; }

            [SerializeMember]
            public bool ExportEllipseAsPolygon { get; set; }

            [SerializeMember]
            public double ExportPolygonPrecision { get; set; } = 0.01;

            [SerializeMember]
            public bool ImportMergePoints { get; set; } = true;

            [SerializeMember]
            public double ImportMergePointPrecision { get; set; } = 0.01;

            [SerializeMember]
            public DxfScaling ImportScaling { get; set; } = DxfScaling.Millimeter;
        }

        //--------------------------------------------------------------------------------------------------

        public DxfSettings Settings { get; private set; } = new DxfSettings();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Helper

        DxfFlags _GetFlags()
        {
            var flags = DxfFlags.None;
            if (Settings.ExportBinary)
                flags = flags.Added(DxfFlags.ExportBinaryFile);
            if (Settings.ExportSplineAsPolygon)
                flags = flags.Added(DxfFlags.ExportSplineAsPolygon);
            if (Settings.ExportEllipseAsPolygon)
                flags = flags.Added(DxfFlags.ExportEllipseAsPolygon);
            if (!Settings.ImportMergePoints)
                flags = flags.Added(DxfFlags.ImportDoNotMergePoints);
            return flags;
        }

        //--------------------------------------------------------------------------------------------------

        bool _WriteToFile(string fileName, MemoryStream content)
        {
            if (content.Length > 0)
            {
                try
                {
                    content.Position = 0;
                    using var output = new FileStream(fileName, FileMode.Create);
                    content.CopyTo(output);
                    return true;
                }
                catch (Exception e)
                {
                    Messages.Exception("Writing DXF to file " + fileName + " failed.", e);
                }
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------
        
        bool _ReadFromFile(string fileName, out Stream content)
        {
            try
            {
                var contentBytes = File.ReadAllBytes(fileName);
                if (contentBytes.Length > 0)
                {
                    content = new MemoryStream(contentBytes);
                    return true;
                }

                Messages.Error("Reading DXF from file " + fileName + " failed.");
            }
            catch (Exception e)
            {
                Messages.Exception("Reading DXF from file " + fileName + " failed.", e);
            }

            content = null;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Registration

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new DxfExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region ISketchExporter

        bool ISketchExporter.DoExport(string fileName, Sketch sketch)
        {
            bool result;
            using(new ProcessingScope(sketch, "Exporting sketch to DXF"))
            {
                var stream = DxfSketchExporter.Export(sketch, Settings.ExportVersion, _GetFlags(), Settings.ExportPolygonPrecision );
                result = _WriteToFile(fileName, stream);
            }
            return result;
        }

        //--------------------------------------------------------------------------------------------------

        bool ISketchExporter.DoExport(Clipboard clipboard, Sketch sketch)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region ISketchImporter

        bool ISketchImporter.DoImport(string fileName, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments, out IEnumerable<SketchConstraint> constraints)
        {
            points = null;
            segments = null;
            constraints = null;
            bool result = false;
            using (new ProcessingScope(null, "Importing sketch from DXF"))
            {
                if (_ReadFromFile(fileName, out var content))
                {
                    result = DxfSketchImporter.Import(content, out points, out segments,
                                                      _GetFlags(), Settings.ImportMergePointPrecision, DxfUtils.GetImportScaleValue(Settings.ImportScaling));
                }
            }

            return result;
        }

        //--------------------------------------------------------------------------------------------------

        bool ISketchImporter.DoImport(Clipboard clipboard, out IDictionary<int, Pnt2d> points, out IDictionary<int, SketchSegment> segments, out IEnumerable<SketchConstraint> constraints)
        {
            points = null;
            segments = null;
            constraints = null;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IVectorExporter

        bool IVectorExporter.DoExport(string fileName, VectorExportTemplate template, VectorExportLayer[] layers)
        {
            bool result;
            using (new ProcessingScope(null, "Exporting vector to DXF"))
            {
                var stream = DxfVectorExporter.Export(template, layers, Settings.ExportVersion, _GetFlags(), Settings.ExportPolygonPrecision);
                result = _WriteToFile(fileName, stream);
            }
            return result;
        }

        #endregion
    }
}

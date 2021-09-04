using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Exchange.Obj;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Exchange
{
    public sealed class ObjExchanger : IBodyExporter, IBodyImporter
    {
        #region Exchanger

        public string Description { get; } =  "Wavefront Object (Mesh)";
        public string[] Extensions { get; } = {"obj"};

        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is ObjSettings newSettings)
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
        public class ObjSettings : IExchangerSettings
        {
            [SerializeMember]
            public bool ExportSmoothEdges { get; set; }
            [SerializeMember]
            public bool ImportSingleBody { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        public ObjSettings Settings { get; private set; } = new ObjSettings();

        //--------------------------------------------------------------------------------------------------

        #endregion
            
        #region Registration

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new ObjExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IBodyExport

        bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
        {
            try
            {
                return ObjBodyExporter.Export(fileName, bodies, Settings.ExportSmoothEdges);
            }
            catch (Exception e)
            {
                Messages.Exception($"Exception occured while exporting {fileName}.", e);
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IBodyImporter

        bool IBodyImporter.DoImport(string fileName, out IEnumerable<Body> bodies)
        {
            bodies = null;
            try
            {
                return ObjBodyImporter.Import(fileName, out bodies, Settings.ImportSingleBody);
            }
            catch (Exception e)
            {
                Messages.Exception($"Exception occured while importing {fileName}.", e);
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
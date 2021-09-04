using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Exchange.Stl;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Exchange
{
    public sealed class StlExchanger : IBodyExporter, IBodyImporter
    {
        #region Exchanger

        public string Description { get; } =  "Stereo Lithography (Mesh)";
        public string[] Extensions { get; } = {"stl"};

        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is StlSettings newSettings)
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
        public class StlSettings : IExchangerSettings
        {
            [SerializeMember]
            public bool ExportBinaryFormat { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        public StlSettings Settings { get; private set; } = new StlSettings();

        //--------------------------------------------------------------------------------------------------

        #endregion
            
        #region Registration

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new StlExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IBodyExport

        bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
        {
            try
            {
                return StlBodyExporter.Export(bodies, fileName, Settings.ExportBinaryFormat);
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
                return StlBodyImporter.Import(fileName, out bodies);
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
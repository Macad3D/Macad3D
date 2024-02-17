using System;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange.Stl;

namespace Macad.Exchange;

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

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new StlExchanger());
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
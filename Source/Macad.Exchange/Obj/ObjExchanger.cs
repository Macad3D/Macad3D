using System;
using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Exchange.Obj;
using Macad.Core;

namespace Macad.Exchange;

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

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new ObjExchanger());
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
using System;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Exchange.Obj;

public sealed class ObjSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get
        {
            return typeof(ObjExchanger);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if(typeof(T) == typeof(IBodyImporter))
        {
            return new ObjSettingsPanel((exchanger as ObjExchanger)?.Settings, true);
        } 
        if(typeof(T) == typeof(IBodyExporter))
        {
            return new ObjSettingsPanel((exchanger as ObjExchanger)?.Settings, false);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new ObjSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------

public sealed partial class ObjSettingsPanel : SettingsPanelBase
{
    public bool ExportSmoothEdges
    {
        get { return _Settings.ExportSmoothEdges; }
        set
        {
            _Settings.ExportSmoothEdges = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool ImportSingleBody
    {
        get { return _Settings.ImportSingleBody; }
        set
        {
            _Settings.ImportSingleBody = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsImport
    {
        get { return _IsImport; }
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsImport;
    ObjExchanger.ObjSettings _Settings;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetExportSmoothEdgesCommand { get; }
    public RelayCommand<bool> SetImportSingleBodyCommand { get; }

    //--------------------------------------------------------------------------------------------------

    public ObjSettingsPanel(ObjExchanger.ObjSettings settings, bool import)
    {
        _IsImport = import;
        _Settings = settings;
        ExportSmoothEdges = _Settings.ExportSmoothEdges;

        if (import)
        {
            SetImportSingleBodyCommand = new RelayCommand<bool>(
                (b) => { ImportSingleBody = b; }
            );
        }
        else
        {
            SetExportSmoothEdgesCommand = new RelayCommand<bool>(
                (b) => { ExportSmoothEdges = b; }
            );
        }
            
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
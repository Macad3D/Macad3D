using System;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Exchange.Stl;

public sealed class StlSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get
        {
            return typeof(StlExchanger);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if(typeof(T) == typeof(IBodyExporter))
        {
            return new StlSettingsPanel((exchanger as StlExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new StlSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------

public sealed partial class StlSettingsPanel : SettingsPanelBase
{
    public bool ExportBinaryFormat
    {
        get { return _Settings.ExportBinaryFormat; }
        set
        {
            _Settings.ExportBinaryFormat = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    StlExchanger.StlSettings _Settings;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetExportBinaryFormatCommand { get; }

    //--------------------------------------------------------------------------------------------------

    public StlSettingsPanel(StlExchanger.StlSettings settings)
    {
        _Settings = settings;
        ExportBinaryFormat = _Settings.ExportBinaryFormat;

        SetExportBinaryFormatCommand = new RelayCommand<bool>((b) => { ExportBinaryFormat = b; });

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
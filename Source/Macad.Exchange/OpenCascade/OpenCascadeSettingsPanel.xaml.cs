using System;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Exchange.OpenCascade;

public sealed class OpenCascadeSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get { return typeof(OpenCascadeExchanger); }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if (typeof(T) == typeof(IBodyExporter))
        {
            return new OpenCascadeSettingsPanel((exchanger as OpenCascadeExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new OpenCascadeSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public partial class OpenCascadeSettingsPanel : SettingsPanelBase
{
    public bool ExportBinaryFormat
    {
        get { return _BrepSettings.ExportBinaryFormat; }
        set
        {
            _BrepSettings.ExportBinaryFormat = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    OpenCascadeExchanger.BrepSettings _BrepSettings;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetExportBinaryFormatCommand { get; }

    //--------------------------------------------------------------------------------------------------

    public OpenCascadeSettingsPanel(OpenCascadeExchanger.BrepSettings brepSettings)
    {
        _BrepSettings = brepSettings;
        ExportBinaryFormat = _BrepSettings.ExportBinaryFormat;

        SetExportBinaryFormatCommand = new RelayCommand<bool>((b) => { ExportBinaryFormat = b; });

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
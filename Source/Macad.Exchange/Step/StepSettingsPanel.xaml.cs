using Macad.Presentation;
using System;
using Macad.Core;

namespace Macad.Exchange.Step;

public sealed class StepSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get { return typeof(StepExchanger); }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if (typeof(T) == typeof(IBodyImporter))
        {
            return new StepSettingsPanel((exchanger as StepExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new StepSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------

}

public sealed partial class StepSettingsPanel : SettingsPanelBase
{
    public bool ImportSingleBody
    {
        get { return _StepSettings.ImportSingleBody; }
        set
        {
            _StepSettings.ImportSingleBody = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    StepExchanger.StepSettings _StepSettings;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetImportSingleBodyCommand { get; }

    //--------------------------------------------------------------------------------------------------

    public StepSettingsPanel(StepExchanger.StepSettings stepSettings)
    {
        _StepSettings = stepSettings;
        ImportSingleBody = _StepSettings.ImportSingleBody;

        SetImportSingleBodyCommand = new RelayCommand<bool>((b) => { ImportSingleBody = b; });

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
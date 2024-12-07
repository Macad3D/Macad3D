using System;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Exchange.Iges;

public sealed class IgesSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get
        {
            return typeof(IgesExchanger);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if(typeof(T) == typeof(IBodyImporter))
        {
            return new IgesSettingsPanel((exchanger as IgesExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new IgesSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------

public partial class IgesSettingsPanel : SettingsPanelBase
{
    public bool ImportSingleBody
    {
        get { return _IgesSettings.ImportSingleBody; }
        set
        {
            _IgesSettings.ImportSingleBody = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetImportSingleBodyCommand { get; }

    //--------------------------------------------------------------------------------------------------

    IgesExchanger.IgesSettings _IgesSettings;

    //--------------------------------------------------------------------------------------------------

    public IgesSettingsPanel(IgesExchanger.IgesSettings igesSettings)
    {
        _IgesSettings = igesSettings;

        SetImportSingleBodyCommand = new RelayCommand<bool>(
            (b) => { ImportSingleBody = b; }
        );

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
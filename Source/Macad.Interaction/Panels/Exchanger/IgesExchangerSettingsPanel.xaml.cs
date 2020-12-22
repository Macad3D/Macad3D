using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Navigation;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    [InitializeAtStartup]
    public class IgesExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
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
                return new IgesExchangerSettingsPanel((exchanger as IgesExchanger)?.Settings);
            }

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        static IgesExchangerSettingsPanelCreator()
        {
            ExchangeRegistry.Register(new IgesExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    public partial class IgesExchangerSettingsPanel : PanelBase
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

        public IgesExchangerSettingsPanel(IgesExchanger.IgesSettings igesSettings)
        {
            _IgesSettings = igesSettings;

            SetImportSingleBodyCommand = new RelayCommand<bool>(
                (b) => { ImportSingleBody = b; }
            );

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

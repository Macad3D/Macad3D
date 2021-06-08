using System;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    public class StepExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
    {
        public Type ExchangerType
        {
            get
            {
                return typeof(StepExchanger);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public object CreatePanel<T>(IExchanger exchanger)
        {
            if(typeof(T) == typeof(IBodyImporter))
            {
                return new StepExchangerSettingsPanel((exchanger as StepExchanger)?.Settings);
            }

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new StepExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    public partial class StepExchangerSettingsPanel : PanelBase
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

        public StepExchangerSettingsPanel(StepExchanger.StepSettings stepSettings)
        {
            _StepSettings = stepSettings;
            ImportSingleBody = _StepSettings.ImportSingleBody;

            SetImportSingleBodyCommand = new RelayCommand<bool>((b) => { ImportSingleBody = b; });

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

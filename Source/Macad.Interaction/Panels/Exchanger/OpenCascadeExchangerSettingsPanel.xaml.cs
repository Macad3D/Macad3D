using System;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    [InitializeAtStartup]
    public class OpenCascadeExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
    {
        public Type ExchangerType
        {
            get
            {
                return typeof(OpenCascadeExchanger);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public object CreatePanel<T>(IExchanger exchanger)
        {
            if(typeof(T) == typeof(IBodyExporter))
            {
                return new OpenCascadeExchangerSettingsPanel((exchanger as OpenCascadeExchanger)?.Settings);
            }

            return null;
        }
        
        //--------------------------------------------------------------------------------------------------

        static OpenCascadeExchangerSettingsPanelCreator()
        {
            ExchangeRegistry.Register(new OpenCascadeExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    public partial class OpenCascadeExchangerSettingsPanel : PanelBase
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

        public OpenCascadeExchangerSettingsPanel(OpenCascadeExchanger.BrepSettings brepSettings)
        {
            _BrepSettings = brepSettings;
            ExportBinaryFormat = _BrepSettings.ExportBinaryFormat;

            SetExportBinaryFormatCommand = new RelayCommand<bool>((b) => { ExportBinaryFormat = b; });

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

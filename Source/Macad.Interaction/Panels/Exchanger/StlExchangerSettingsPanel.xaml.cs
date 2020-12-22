using System;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    [InitializeAtStartup]
    public class StlExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
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
                return new StlExchangerSettingsPanel((exchanger as StlExchanger)?.Settings);
            }

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        static StlExchangerSettingsPanelCreator()
        {
            ExchangeRegistry.Register(new StlExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    public partial class StlExchangerSettingsPanel : PanelBase
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

        public StlExchangerSettingsPanel(StlExchanger.StlSettings settings)
        {
            _Settings = settings;
            ExportBinaryFormat = _Settings.ExportBinaryFormat;

            SetExportBinaryFormatCommand = new RelayCommand<bool>((b) => { ExportBinaryFormat = b; });

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

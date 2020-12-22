using System;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Svg;

namespace Macad.Interaction.Panels
{
    [InitializeAtStartup]
    public class SvgExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
    {
        public Type ExchangerType
        {
            get
            {
                return typeof(SvgExchanger);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public object CreatePanel<T>(IExchanger exchanger)
        {
            return new SvgExchangerSettingsPanel((exchanger as SvgExchanger)?.Settings);
        }

        //--------------------------------------------------------------------------------------------------

        static SvgExchangerSettingsPanelCreator()
        {
            ExchangeRegistry.Register(new SvgExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

    public partial class SvgExchangerSettingsPanel : PanelBase
    {
        public double DotsPerInch
        {
            get { return _SvgSettings.DotsPerInch; }
            set
            {
                _SvgSettings.DotsPerInch = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        SvgExchanger.SvgSettings _SvgSettings;

        //--------------------------------------------------------------------------------------------------

        public SvgExchangerSettingsPanel(SvgExchanger.SvgSettings svgSettings)
        {
            _SvgSettings = svgSettings;
            DotsPerInch = _SvgSettings.DotsPerInch;

            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

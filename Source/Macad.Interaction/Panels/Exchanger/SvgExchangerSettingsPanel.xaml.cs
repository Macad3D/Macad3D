using System;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Svg;

namespace Macad.Interaction.Panels
{
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
            return new SvgExchangerSettingsPanel((exchanger as SvgExchanger)?.Settings, typeof(T));
        }

        //--------------------------------------------------------------------------------------------------

        [ModuleInitializer]
        public static void Register()
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

        public bool TagGroupsAsLayers
        {
            get { return _SvgSettings.TagGroupsAsLayers; }
            set
            {
                _SvgSettings.TagGroupsAsLayers = value;
                RaisePropertyChanged();
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        public bool IsDrawingExport
        {
            get { return _IsDrawingExport; }
        }

        //--------------------------------------------------------------------------------------------------

        readonly SvgExchanger.SvgSettings _SvgSettings;
        bool _IsDrawingExport;

        //--------------------------------------------------------------------------------------------------

        public SvgExchangerSettingsPanel(SvgExchanger.SvgSettings svgSettings, Type exchangerType)
        {
            _SvgSettings = svgSettings;
            _IsDrawingExport = exchangerType.IsAssignableTo(typeof(IDrawingExporter));
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

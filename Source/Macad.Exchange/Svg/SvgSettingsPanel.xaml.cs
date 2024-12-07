using System;
using Macad.Core;

namespace Macad.Exchange.Svg;

public sealed class SvgSettingsPanelCreator : IExchangerSettingsPanelCreator
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
        return new SvgSettingsPanel((exchanger as SvgExchanger)?.Settings, typeof(T));
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new SvgSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------

}

//--------------------------------------------------------------------------------------------------

public sealed partial class SvgSettingsPanel : SettingsPanelBase
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

    public SvgSettingsPanel(SvgExchanger.SvgSettings svgSettings, Type exchangerType)
    {
        _SvgSettings = svgSettings;
        _IsDrawingExport = exchangerType.IsAssignableTo(typeof(IDrawingExporter));
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
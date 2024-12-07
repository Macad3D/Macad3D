using System;
using Macad.Core;

namespace Macad.Exchange.Dxf;

public sealed class DxfSettingsPanelCreator : IExchangerSettingsPanelCreator
{
    public Type ExchangerType
    {
        get
        {
            return typeof(DxfExchanger);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public object CreatePanel<T>(IExchanger exchanger)
    {
        if (typeof(T) == typeof(ISketchExporter) || typeof(T) == typeof(IDrawingExporter))
        {
            return new DxfExportSettingsPanel((exchanger as DxfExchanger)?.Settings);
        }
        if (typeof(T) == typeof(ISketchImporter))
        {
            return new DxfImportSettingsPanel((exchanger as DxfExchanger)?.Settings);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new DxfSettingsPanelCreator());
    }

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------
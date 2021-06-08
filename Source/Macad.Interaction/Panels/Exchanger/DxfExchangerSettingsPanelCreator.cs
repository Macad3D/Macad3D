using System;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core.Exchange;

namespace Macad.Interaction.Panels
{
    public class DxfExchangerSettingsPanelCreator : IExchangerSettingsPanelCreator
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
            if (typeof(T) == typeof(ISketchExporter) || typeof(T) == typeof(IVectorExporter))
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

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new DxfExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

}
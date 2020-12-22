using System;
using Macad.Common;
using Macad.Core.Exchange;

namespace Macad.Interaction.Panels
{
    [InitializeAtStartup]
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

        static DxfExchangerSettingsPanelCreator()
        {
            ExchangeRegistry.Register(new DxfExchangerSettingsPanelCreator());
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

}
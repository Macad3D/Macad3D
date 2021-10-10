using System;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core;

namespace Macad.Exchange.Dxf
{
    public class DxfSettingsPanelCreator : IExchangerSettingsPanelCreator
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
    }

    //--------------------------------------------------------------------------------------------------

}
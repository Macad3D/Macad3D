using Macad.Common.Serialization;
using Macad.Core;

namespace Macad.Exchange
{
    public static class ExchangeModule
    {
        public static void Initialize()
        {
            Serializer.RegisterNamespaceAlias("Exchange", "Macad.Exchange");
        
            ExchangeRegistry.Register(new OpenCascadeExchanger());
            ExchangeRegistry.Register(new OpenCascade.OpenCascadeSettingsPanelCreator());

            ExchangeRegistry.Register(new IgesExchanger());
            ExchangeRegistry.Register(new Iges.IgesSettingsPanelCreator());

            ExchangeRegistry.Register(new StepExchanger());
            ExchangeRegistry.Register(new Step.StepSettingsPanelCreator());

            ExchangeRegistry.Register(new ObjExchanger());
            ExchangeRegistry.Register(new Obj.ObjSettingsPanelCreator());

            ExchangeRegistry.Register(new StlExchanger());
            ExchangeRegistry.Register(new Stl.StlSettingsPanelCreator());

            ExchangeRegistry.Register(new SvgExchanger());
            ExchangeRegistry.Register(new Svg.SvgSettingsPanelCreator());

            ExchangeRegistry.Register(new DxfExchanger());
            ExchangeRegistry.Register(new Dxf.DxfSettingsPanelCreator());

            ExchangeRegistry.Register(new U3dExchanger());

            ExchangeRegistry.Register(new PdfExchanger());
        }
    }
}
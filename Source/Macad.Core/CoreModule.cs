using System.Text;
using Macad.Common.Serialization;

namespace Macad.Core;

public static class CoreModule
{
    static bool _IsInitialized;

    //--------------------------------------------------------------------------------------------------

    public static void Initialize()
    {
        if (_IsInitialized)
            return;

        Encoding.RegisterProvider(CodePagesEncodingProvider.Instance);

        OcctSerializers.Init();
        Serializer.RegisterNamespaceAlias("Core", "Macad.Core");
        Serializer.RegisterNamespaceAlias("Topology", "Macad.Core.Topology");
        Serializer.RegisterNamespaceAlias("Shapes", "Macad.Core.Shapes");
        Serializer.RegisterNamespaceAlias("Auxiliary", "Macad.Core.Auxiliary");
        Serializer.RegisterNamespaceAlias("Components", "Macad.Core.Components");
        Serializer.RegisterNamespaceAlias("Toolkits", "Macad.Core.Toolkits");
        Serializer.RegisterNamespaceAlias("Occt", "Macad.Occt");

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}
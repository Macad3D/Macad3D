using Macad.Common.Serialization;

namespace Macad.Exchange;

[AutoRegisterHost]
public static partial class ExchangeModule
{
    static bool _IsInitialized;

    //--------------------------------------------------------------------------------------------------

    public static void Initialize()
    {
        if (_IsInitialized)
            return;

        Serializer.RegisterNamespaceAlias("Exchange", "Macad.Exchange");

        _DoAutoRegister();

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}
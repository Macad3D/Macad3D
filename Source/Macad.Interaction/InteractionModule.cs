using Macad.Common.Serialization;

namespace Macad.Interaction;

[AutoRegisterHost]
public static partial class InteractionModule
{
    static bool _IsInitialized;

    //--------------------------------------------------------------------------------------------------

    public static void Initialize()
    {
        if (_IsInitialized)
            return;

        Serializer.RegisterNamespaceAlias("Editors", "Macad.Interaction.Editors");

        _DoAutoRegister(); 

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}
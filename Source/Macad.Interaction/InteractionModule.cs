using Macad.Common.Serialization;
using Macad.Core.Plugin;

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

        // Allow plugins to register editors via IPluginContext.RegisterEditor(Type)
        PluginManager.RegisterEditorCallback = Editor.RegisterEditor;

        _IsInitialized = true;
    }

    //--------------------------------------------------------------------------------------------------

}
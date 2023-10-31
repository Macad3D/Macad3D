using Macad.Common.Serialization;
using Macad.Core.Toolkits;

namespace Macad.Interaction.Editors.Toolkits;

[SerializeType]
internal class SliceContourEditorSettings
{
    [SerializeMember]
    public bool ShowReconstruction { get; set; } = true;

    //--------------------------------------------------------------------------------------------------

    static EntityInstanceSettingsCache<SliceContourEditorSettings> _Cache;

    //--------------------------------------------------------------------------------------------------

    public static SliceContourEditorSettings GetOrCreate(SliceContourComponent entity)
    {
        return _Cache.GetOrCreate(entity);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    public static void Init()
    {
        _Cache = new(@"Tools\SliceContourEditorSettings", 1);
    }

    //--------------------------------------------------------------------------------------------------

}

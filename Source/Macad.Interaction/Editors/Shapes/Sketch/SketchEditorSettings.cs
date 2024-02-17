using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes;

[SerializeType]
internal class SketchEditorSettings
{
    [SerializeMember]
    public double[] ViewParameters { get; set; }

    [SerializeMember]
    public WorkingContext WorkingContext  { get; set; }

    [SerializeMember]
    public bool ClipPlaneEnabled  { get; set; } = true;

    [SerializeMember]
    public double ViewRotation  { get; set; } = 0;

    //--------------------------------------------------------------------------------------------------
    
    static EntityInstanceSettingsCache<SketchEditorSettings> _Cache;

    //--------------------------------------------------------------------------------------------------

    public static SketchEditorSettings GetOrCreate(Sketch entity)
    {
        return _Cache.GetOrCreate(entity);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    public static void Init()
    {
        _Cache = new(@"Tools\SketchEditorSettings", 2);
    }
}

//--------------------------------------------------------------------------------------------------
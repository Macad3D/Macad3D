using System;
using Macad.Core;

namespace Macad.Interaction;

[Flags]
public enum SnapModes
{
    None = 0,
    Grid = 1 << 0,
    Vertex = 1 << 1,
    Edge = 1 << 2,
    Face = 1 << 3
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class SnapInfo(SnapModes mode)
{
    public SnapModes Mode { get; } = mode;
    public string TargetName { get; set; }

    public static readonly SnapInfo Empty = new(SnapModes.None);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public interface ISnapHandler
{
    SnapModes SupportedModes { get; set; }
    SnapInfo CurrentInfo { get; set; }

    bool NeedActiveSubshapes(SubshapeType subshapeType);

    //--------------------------------------------------------------------------------------------------

    public delegate void SnapInfoEventHandler(SnapInfo snapInfo);
    static event SnapInfoEventHandler SnapInfoChanged;
    
    protected static void RaiseSnapInfoChanged(ISnapHandler instance)
    {
        SnapInfoChanged?.Invoke(instance.CurrentInfo);
    }
}

//--------------------------------------------------------------------------------------------------

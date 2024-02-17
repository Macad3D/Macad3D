using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core;

[SerializeType]
public class WorkingContext
{
    [SerializeMember]
    public Pln WorkingPlane { get; set; }

    [SerializeMember]
    public Workspace.GridTypes GridType { get; set; }

    [SerializeMember]
    public double GridStep { get; set; }

    [SerializeMember]
    public double GridRotation { get; set; }

    [SerializeMember]
    public int GridDivisions { get; set; }


    public WorkingContext()
    {
        WorkingPlane = Pln.XOY;
        GridType = Workspace.GridTypes.Rectangular;
        GridStep = 1.0;
        GridRotation = 0;
        GridDivisions = 8;
    }

    public WorkingContext Clone()
    {
        var wc = new WorkingContext();
        wc.CopyFrom(this);
        return wc;
    }

    public void CopyFrom(WorkingContext other)
    {
        WorkingPlane = other.WorkingPlane;
        GridType = other.GridType;
        GridStep = other.GridStep;
        GridDivisions = other.GridDivisions;
        GridRotation = other.GridRotation;
    }
}
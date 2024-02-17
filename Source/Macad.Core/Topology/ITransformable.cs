using System.Collections.Generic;
using System.ComponentModel;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Core.Topology;

public interface ITransformable
{
    Pnt Position { get; set; }
    Quaternion Rotation { get; set; }

    Shape Shape
    {
        get { return null; }
    }

    //--------------------------------------------------------------------------------------------------

    event PropertyChangedEventHandler PropertyChanged;

    public Ax3 GetCoordinateSystem();

    IEnumerable<ITransformable> GetLinkedTransformables()
    {
        yield break;
    }

    //--------------------------------------------------------------------------------------------------
}
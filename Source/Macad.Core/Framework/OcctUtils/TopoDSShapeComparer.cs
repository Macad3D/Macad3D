using System.Collections.Generic;
using Macad.Occt;

namespace Macad.Core;

public class TopoDSShapeComparer : IEqualityComparer<TopoDS_Shape>
{
    public enum CompareMode
    {
        Equal,
        Same,
        Partner
    }

    //--------------------------------------------------------------------------------------------------

    CompareMode _Mode = CompareMode.Equal;

    //--------------------------------------------------------------------------------------------------

    public TopoDSShapeComparer(CompareMode mode)
    {
        _Mode = mode;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(TopoDS_Shape x, TopoDS_Shape y)
    {
        if (x == null)
            return y == null;

        return _Mode switch
        {
            CompareMode.Equal => x.Equals(y),
            CompareMode.Same => x.IsSame(y),
            CompareMode.Partner => x.IsPartner(y),
            _ => false
        };
    }

    //--------------------------------------------------------------------------------------------------

    public int GetHashCode(TopoDS_Shape obj)
    {
        return _Mode switch
        {
            CompareMode.Equal => obj.GetHashCode(),
            CompareMode.Same => obj.TShape().GetHashCode() ^ obj.Location().GetHashCode(),
            CompareMode.Partner => obj.TShape().GetHashCode(),
            _ => 0
        };
    }
}

//--------------------------------------------------------------------------------------------------

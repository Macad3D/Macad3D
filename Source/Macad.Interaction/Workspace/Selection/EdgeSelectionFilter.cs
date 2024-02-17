using System;
using Macad.Occt;

namespace Macad.Interaction;

public sealed class EdgeSelectionFilter : ISelectionFilter
{
    public enum EdgeType
    {
        Any,
        Line,
        Circle,
    }

    //--------------------------------------------------------------------------------------------------

    readonly EdgeType _EdgeType = EdgeType.Any;

    //--------------------------------------------------------------------------------------------------

    public EdgeSelectionFilter(EdgeType edgeType)
    {
        _EdgeType = edgeType;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        return new StdSelect_EdgeFilter(_GetNativeTypeOfEdge(_EdgeType));
    }
        
    //--------------------------------------------------------------------------------------------------

    StdSelect_TypeOfEdge _GetNativeTypeOfEdge(EdgeSelectionFilter.EdgeType type)
    {
        switch (type)
        {
            case EdgeType.Any:
                return StdSelect_TypeOfEdge.AnyEdge;
            case EdgeType.Line:
                return StdSelect_TypeOfEdge.Line;
            case EdgeType.Circle:
                return StdSelect_TypeOfEdge.Circle;
            default:
                throw new ArgumentOutOfRangeException(nameof(type), type, null);
        }
    }
}
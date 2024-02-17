using Macad.Occt;

namespace Macad.Interaction;

public sealed class VertexSelectionFilter : ISelectionFilter
{
    public enum VertexType
    {
        All
    }

    //--------------------------------------------------------------------------------------------------

    readonly VertexType _VertexType = VertexType.All;

    //--------------------------------------------------------------------------------------------------

    public VertexSelectionFilter(VertexType vertexType)
    {
        _VertexType = vertexType;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        return new StdSelect_ShapeTypeFilter(TopAbs_ShapeEnum.VERTEX);
    }

    //--------------------------------------------------------------------------------------------------

}
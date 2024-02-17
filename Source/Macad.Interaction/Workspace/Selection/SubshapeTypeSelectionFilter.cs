using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction;

public sealed class SubshapeTypeSelectionFilter : ISelectionFilter
{
    readonly SubshapeType _SubshapeType;

    //--------------------------------------------------------------------------------------------------

    public SubshapeTypeSelectionFilter(SubshapeType subshapeType)
    {
        _SubshapeType = subshapeType;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        return new StdSelect_ShapeTypeFilter(_SubshapeType.ToTopAbs());
    }

    //--------------------------------------------------------------------------------------------------

}
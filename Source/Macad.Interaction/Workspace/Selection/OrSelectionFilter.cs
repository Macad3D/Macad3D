using Macad.Occt;

namespace Macad.Interaction;

public sealed class OrSelectionFilter : ISelectionFilter
{
    readonly ISelectionFilter[] _Filters;

    //--------------------------------------------------------------------------------------------------

    public OrSelectionFilter(params ISelectionFilter[] filters)
    {
        _Filters = filters;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        var andFilter = new SelectMgr_OrFilter();
        foreach (var filter in _Filters)
        {
            andFilter.Add(filter.GetNativeFilter());
        }

        return andFilter;
    }
}
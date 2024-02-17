using Macad.Occt;

namespace Macad.Interaction;

public sealed class AndSelectionFilter : ISelectionFilter
{
    readonly ISelectionFilter[] _Filters;

    //--------------------------------------------------------------------------------------------------

    public AndSelectionFilter(params ISelectionFilter[] filters)
    {
        _Filters = filters;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        var andFilter = new SelectMgr_AndFilter();
        foreach (var filter in _Filters)
        {
            andFilter.Add(filter.GetNativeFilter());
        }

        return andFilter;
    }

    //--------------------------------------------------------------------------------------------------

}
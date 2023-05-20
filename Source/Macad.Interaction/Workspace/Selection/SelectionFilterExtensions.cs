namespace Macad.Interaction;

public static class SelectionFilterExtensions
{
    public static ISelectionFilter Or(this ISelectionFilter filter, params ISelectionFilter[] others)
    {
        ISelectionFilter[] filters = new ISelectionFilter[others.Length+1];
        filters[0] = filter;
        others.CopyTo(filters, 1);
        return new OrSelectionFilter(filters);
    }    
    //--------------------------------------------------------------------------------------------------
        
    public static ISelectionFilter And(this ISelectionFilter filter, params ISelectionFilter[] others)
    {
        ISelectionFilter[] filters = new ISelectionFilter[others.Length+1];
        filters[0] = filter;
        others.CopyTo(filters, 1);
        return new AndSelectionFilter(filters);
    }

    //--------------------------------------------------------------------------------------------------

}
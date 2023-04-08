using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction;

public class InstanceSelectionFilter : ISelectionFilter
{
    readonly AIS_InteractiveObject[] _Instances;

    //--------------------------------------------------------------------------------------------------

    public InstanceSelectionFilter(IEnumerable<AIS_InteractiveObject> instances)
    {
        _Instances = instances.ToArray();
    }
    
    //--------------------------------------------------------------------------------------------------

    public InstanceSelectionFilter(IEnumerable<VisualObject> instances)
    {
        _Instances = instances.Select(obj => obj.AisObject).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        AISX_InstanceFilter filter = new();
        _Instances.ForEach(filter.Add);
        return filter;
    }
}
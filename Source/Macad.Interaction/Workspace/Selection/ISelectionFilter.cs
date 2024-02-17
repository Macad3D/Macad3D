using Macad.Occt;

namespace Macad.Interaction;

public interface ISelectionFilter
{
    SelectMgr_Filter GetNativeFilter();
}
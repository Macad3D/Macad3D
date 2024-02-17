using Macad.Occt;

namespace Macad.Interaction;
//--------------------------------------------------------------------------------------------------

public class SignatureSelectionFilter : ISelectionFilter
{
    readonly SelectionSignature _Signature;

    //--------------------------------------------------------------------------------------------------

    public SignatureSelectionFilter(AIS_KindOfInteractive kind, int signature)
    {
        _Signature = new(kind, signature);
    }

    //--------------------------------------------------------------------------------------------------

    public SignatureSelectionFilter(SelectionSignature signature)
    {
        _Signature = signature;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        return new AIS_SignatureFilter(_Signature.Kind, _Signature.Signature);
    }

}
using Macad.Occt;

namespace Macad.Interaction;

public struct SelectionSignature
{
    public AIS_KindOfInteractive Kind { get; }
    public int Signature { get; }

    //--------------------------------------------------------------------------------------------------

    public SelectionSignature(AIS_KindOfInteractive kind, int signature)
    {
        Kind = kind;
        Signature = signature;
    }
}
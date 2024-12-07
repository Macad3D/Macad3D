namespace Macad.Exchange.U3d;

internal sealed class U3dDomPriorityUpdate : U3dDomBlock
{
    public uint Priority { get; set; }

    //--------------------------------------------------------------------------------------------------

    public U3dDomPriorityUpdate(uint priority) 
        : base(0xffffff15)
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Priority);
    }
}
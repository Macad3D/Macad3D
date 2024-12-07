namespace Macad.Exchange.Dxf;

internal abstract class DxfDomEntity
{
    protected string LayerName;
    internal abstract void Write(DxfWriter writer);
    public abstract bool Read(DxfReader reader);
}
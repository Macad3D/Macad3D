namespace Macad.Exchange.Dxf;

internal sealed class DxfDomLayer
{
    public string Name;
    public string LinetypeName;
    public double Lineweight;

    //--------------------------------------------------------------------------------------------------

    public DxfDomLayer(string name, double lineweight=0.0, string linetype="CONTINUOUS")
    {
        Name = name;
        Lineweight = lineweight;
        LinetypeName = linetype;
    }

    //--------------------------------------------------------------------------------------------------

    internal void Write(DxfWriter writer)
    {
        writer.Write(0, "LAYER");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbSymbolTableRecord");
        writer.WriteSubclass("AcDbLayerTableRecord");
        writer.Write(2, Name);
        writer.Write(70, 0); // Flags
        writer.Write(6, LinetypeName);

        if (writer.Version >= DxfVersion.AC1015)
        {
            if (Lineweight > 0.0)
            {
                writer.Write(370, (int)(Lineweight * 100));
            }
            writer.Write(390, "0" );
        }
    }
}
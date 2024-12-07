namespace Macad.Exchange.Dxf;

internal sealed class DxfDomLinetype
{
    public string Name;
    public string Description;
    public double Length;
    public double[] Pattern;

    //--------------------------------------------------------------------------------------------------

    public DxfDomLinetype(string name, string description, double length, double[] pattern)
    {
        Name = name;
        Description = description;
        Length = length;
        Pattern = pattern;
    }

    //--------------------------------------------------------------------------------------------------

    internal void Write(DxfWriter writer)
    {
        writer.Write(0, "LTYPE");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbSymbolTableRecord");
        writer.WriteSubclass("AcDbLinetypeTableRecord");
        writer.Write(2, Name);
        writer.Write(70, 0); // Flags
        writer.Write(3, Description);
        writer.Write(72, 65);
        writer.Write(73, Pattern.Length);
        writer.Write(40, Length);
        foreach (var pattern in Pattern)
        {
            writer.Write(49, pattern);
            if (writer.Version >= DxfVersion.AC1012)
            {
                writer.Write(74, 0); // Complex line type
            }
        }
    }
}
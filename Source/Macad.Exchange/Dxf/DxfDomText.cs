using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomText : DxfDomEntity
{
    public Pnt2d Position;
    public double TextHeight;
    public double TextRotation;
    public string Text;
        
    //--------------------------------------------------------------------------------------------------

    public DxfDomText()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomText(string layer, Pnt2d position, double textHeight, double textRotation, string text)
    {
        LayerName = layer;
        Text = text;
        Position = position;
        TextHeight = textHeight;
        TextRotation = textRotation;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, "TEXT");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbText");

        writer.Write(10, Position.X);
        writer.Write(20, Position.Y);
        writer.Write(30, 0.0);

        writer.Write(40, TextHeight);
        writer.Write(1, Text);

        if (TextRotation != 0.0)
        {
            writer.Write(50, Maths.NormalizeAngleRad(TextRotation).ToDeg());
        }

        writer.WriteSubclass("AcDbText");
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        return false; // not supported
    }

    //--------------------------------------------------------------------------------------------------
}
using Macad.Common;
using Macad.Occt;

namespace Macad.Core;

public static class ColorExtensions
{
    public static Color ToColor(this Quantity_Color color)
    {
        var red = (float)color.Red();
        var green = (float)color.Green();
        var blue = (float)color.Blue();
        return new Color(red, green, blue);
    }

    //--------------------------------------------------------------------------------------------------

    public static Color ToColor(this Quantity_NameOfColor colorName)
    {
        return new Quantity_Color(colorName).ToColor();
    }

    //--------------------------------------------------------------------------------------------------

    public static Quantity_Color ToQuantityColor(this Color color)
    {
        return new Quantity_Color(color.Red, color.Green, color.Blue, Quantity_TypeOfColor.sRGB);
    }
    
    //--------------------------------------------------------------------------------------------------

    public static Quantity_Color ToQuantityColor(this Quantity_NameOfColor colorName)
    {
        return new Quantity_Color(colorName);
    }

    //--------------------------------------------------------------------------------------------------
}
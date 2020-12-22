using Macad.Common;
using Macad.Occt;

namespace Macad.Core
{
    public static class OcctColorUtils
    {
        public static Color Color(Quantity_Color color)
        {
            var red = (float)color.Red();
            var green = (float)color.Green();
            var blue = (float)color.Blue();
            return new Color(red, green, blue);
        }

        //--------------------------------------------------------------------------------------------------

        public static Color Color(Quantity_NameOfColor colorName)
        {
            return Color(new Quantity_Color(colorName));
        }

        //--------------------------------------------------------------------------------------------------

        public static Quantity_Color ToColor(this Quantity_NameOfColor colorName)
        {
            return new Quantity_Color(colorName);
        }

        //--------------------------------------------------------------------------------------------------

        public static Graphic3d_MaterialAspect ToAspect(this Graphic3d_NameOfMaterial materialName)
        {
            return new Graphic3d_MaterialAspect(materialName);
        }

        //--------------------------------------------------------------------------------------------------

        public static Quantity_Color ToQuantityColor(this Color color)
        {
            return new Quantity_Color(color.Red, color.Green, color.Blue, Quantity_TypeOfColor.Quantity_TOC_RGB);
        }

        //--------------------------------------------------------------------------------------------------
    }
}
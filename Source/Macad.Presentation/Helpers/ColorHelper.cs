using System;
using System.Collections.Generic;
using System.Globalization;
using System.Windows.Media;

namespace Macad.Presentation;

public static class ColorHelper 
{
    static ColorHelper()
    {
        _CreateStandardColors();
        _CreateExtendedColors();
        _CreateHexagonColors();
    }

    #region Color Lists

    public static Color ScaledColor(Color c, float percent)
    {
        c *= percent;
        c += Colors.White*(1.0f - percent);

        return c;
    }

    public static Color[] StandardColors;

    static void _CreateStandardColors()
    {
        StandardColors = new []
        {
            Brushes.White.Color,
            Brushes.Red.Color,
            Brushes.Orange.Color,
            Brushes.Yellow.Color,
            Brushes.LightGreen.Color,
            Brushes.Green.Color,
            Brushes.LightBlue.Color,
            Brushes.Blue.Color,
            Brushes.SteelBlue.Color,
            Brushes.DarkKhaki.Color
        };
    }

    const float _Percent10 = 0.90f;
    const float _Percent25 = 0.75f;
    const float _Percent40 = 0.60f;
    const float _Percent55 = 0.45f;
    const float _Percent70 = 0.30f;

    public static Color[] ExtendedColors;

    static void _CreateExtendedColors()
    {
        ExtendedColors = new []
        {
            Brushes.White.Color,
            Brushes.DarkRed.Color,
            Brushes.Green.Color,
            Brushes.Indigo.Color,
            Brushes.Blue.Color,
            Brushes.Red.Color,
            Brushes.SlateGray.Color,
            Brushes.DarkKhaki.Color,
            Brushes.Yellow.Color,
            Brushes.Orange.Color,

            ScaledColor(Brushes.Black.Color, _Percent10),
            ScaledColor(Brushes.DarkRed.Color, _Percent10),
            ScaledColor(Brushes.Green.Color, _Percent10),
            ScaledColor(Brushes.SteelBlue.Color, _Percent10),
            ScaledColor(Brushes.Blue.Color, _Percent10),
            ScaledColor(Brushes.Red.Color, _Percent10),
            ScaledColor(Brushes.SlateGray.Color, _Percent10),
            ScaledColor(Brushes.DarkKhaki.Color, _Percent10),
            ScaledColor(Brushes.Yellow.Color, _Percent10),
            ScaledColor(Brushes.Orange.Color, _Percent10),

            ScaledColor(Brushes.Black.Color, _Percent25),
            ScaledColor(Brushes.DarkRed.Color, _Percent25),
            ScaledColor(Brushes.Green.Color, _Percent25),
            ScaledColor(Brushes.SteelBlue.Color, _Percent25),
            ScaledColor(Brushes.Blue.Color, _Percent25),
            ScaledColor(Brushes.Red.Color, _Percent25),
            ScaledColor(Brushes.SlateGray.Color, _Percent25),
            ScaledColor(Brushes.DarkKhaki.Color, _Percent25),
            ScaledColor(Brushes.Yellow.Color, _Percent25),
            ScaledColor(Brushes.Orange.Color, _Percent25),

            ScaledColor(Brushes.Black.Color, _Percent40),
            ScaledColor(Brushes.DarkRed.Color, _Percent40),
            ScaledColor(Brushes.Green.Color, _Percent40),
            ScaledColor(Brushes.SteelBlue.Color, _Percent40),
            ScaledColor(Brushes.Blue.Color, _Percent40),
            ScaledColor(Brushes.Red.Color, _Percent40),
            ScaledColor(Brushes.SlateGray.Color, _Percent40),
            ScaledColor(Brushes.DarkKhaki.Color, _Percent40),
            ScaledColor(Brushes.Yellow.Color, _Percent40),
            ScaledColor(Brushes.Orange.Color, _Percent40),

            ScaledColor(Brushes.Black.Color, _Percent55),
            ScaledColor(Brushes.DarkRed.Color, _Percent55),
            ScaledColor(Brushes.Green.Color, _Percent55),
            ScaledColor(Brushes.SteelBlue.Color, _Percent55),
            ScaledColor(Brushes.Blue.Color, _Percent55),
            ScaledColor(Brushes.Red.Color, _Percent55),
            ScaledColor(Brushes.SlateGray.Color, _Percent55),
            ScaledColor(Brushes.DarkKhaki.Color, _Percent55),
            ScaledColor(Brushes.Yellow.Color, _Percent55),
            ScaledColor(Brushes.Orange.Color, _Percent55),

            ScaledColor(Brushes.Black.Color, _Percent70),
            ScaledColor(Brushes.DarkRed.Color, _Percent70),
            ScaledColor(Brushes.Green.Color, _Percent70),
            ScaledColor(Brushes.SteelBlue.Color, _Percent70),
            ScaledColor(Brushes.Blue.Color, _Percent70),
            ScaledColor(Brushes.Red.Color, _Percent70),
            ScaledColor(Brushes.SlateGray.Color, _Percent70),
            ScaledColor(Brushes.DarkKhaki.Color, _Percent70),
            ScaledColor(Brushes.Yellow.Color, _Percent70),
            ScaledColor(Brushes.Orange.Color, _Percent70)
        };
    }

    #endregion

    #region Color Hexagon

    public class HexagonColor
    {
        public Color Color { get; private set; }
        public int Row { get; private set; }
        public int Column { get; private set; }

        public HexagonColor(Color color, int row, int column)
        {
            Color = color;
            Row = row;
            Column = column;
        }

        public override string ToString()
        {
            return $"{Row},{Column},{Color}";
        }
    }

    public static HexagonColor[] HexagonColors;

    static void _CreateHexagonColors()
    {
        HexagonColors = new[]
        {
            new HexagonColor( Color.FromRgb(0x00, 0x33, 0x66),  0,  3),
            new HexagonColor( Color.FromRgb(0x33, 0x66, 0x99),  0,  4),
            new HexagonColor( Color.FromRgb(0x33, 0x66, 0xcc),  0,  5),
            new HexagonColor( Color.FromRgb(0x00, 0x33, 0x99),  0,  6),
            new HexagonColor( Color.FromRgb(0x00, 0x00, 0x99),  0,  7),
            new HexagonColor( Color.FromRgb(0x00, 0x00, 0xcc),  0,  8),
            new HexagonColor( Color.FromRgb(0x00, 0x00, 0x66),  0,  9),

            new HexagonColor( Color.FromRgb(0x00, 0x66, 0x66),  1,  2),
            new HexagonColor( Color.FromRgb(0x00, 0x66, 0x99),  1,  3),
            new HexagonColor( Color.FromRgb(0x00, 0x99, 0xcc),  1,  4),
            new HexagonColor( Color.FromRgb(0x00, 0x66, 0xcc),  1,  5),
            new HexagonColor( Color.FromRgb(0x00, 0x33, 0xcc),  1,  6),
            new HexagonColor( Color.FromRgb(0x00, 0x00, 0xff),  1,  7),
            new HexagonColor( Color.FromRgb(0x33, 0x33, 0xff),  1,  8),
            new HexagonColor( Color.FromRgb(0x33, 0x33, 0x99),  1,  9),

            new HexagonColor( Color.FromRgb(0x00, 0x80, 0x80),  2,  2),
            new HexagonColor( Color.FromRgb(0x00, 0x99, 0x99),  2,  3),
            new HexagonColor( Color.FromRgb(0x33, 0xcc, 0xcc),  2,  4),
            new HexagonColor( Color.FromRgb(0x00, 0xcc, 0xff),  2,  5),
            new HexagonColor( Color.FromRgb(0x00, 0x99, 0xff),  2,  6),
            new HexagonColor( Color.FromRgb(0x00, 0x66, 0xff),  2,  7),
            new HexagonColor( Color.FromRgb(0x33, 0x66, 0xff),  2,  8),
            new HexagonColor( Color.FromRgb(0x33, 0x33, 0xcc),  2,  9),
            new HexagonColor( Color.FromRgb(0x66, 0x66, 0x99),  2,  10),

            new HexagonColor( Color.FromRgb(0x33, 0x99, 0x66),  3,  1),
            new HexagonColor( Color.FromRgb(0x00, 0xcc, 0x99),  3,  2),
            new HexagonColor( Color.FromRgb(0x00, 0xff, 0xcc),  3,  3),
            new HexagonColor( Color.FromRgb(0x00, 0xff, 0xff),  3,  4),
            new HexagonColor( Color.FromRgb(0x33, 0xcc, 0xff),  3,  5),
            new HexagonColor( Color.FromRgb(0x33, 0x99, 0xff),  3,  6),
            new HexagonColor( Color.FromRgb(0x66, 0x99, 0xff),  3,  7),
            new HexagonColor( Color.FromRgb(0x66, 0x66, 0xff),  3,  8),
            new HexagonColor( Color.FromRgb(0x66, 0x00, 0xff),  3,  9),
            new HexagonColor( Color.FromRgb(0x66, 0x00, 0xcc),  3,  10),

            new HexagonColor( Color.FromRgb(0x33, 0x99, 0x33),  4,  1),
            new HexagonColor( Color.FromRgb(0x00, 0xcc, 0x66),  4,  2),
            new HexagonColor( Color.FromRgb(0x00, 0xff, 0x99),  4,  3),
            new HexagonColor( Color.FromRgb(0x66, 0xff, 0xcc),  4,  4),
            new HexagonColor( Color.FromRgb(0x66, 0xff, 0xff),  4,  5),
            new HexagonColor( Color.FromRgb(0x66, 0xcc, 0xff),  4,  6),
            new HexagonColor( Color.FromRgb(0x99, 0xcc, 0xff),  4,  7),
            new HexagonColor( Color.FromRgb(0x99, 0x99, 0xff),  4,  8),
            new HexagonColor( Color.FromRgb(0x99, 0x66, 0xff),  4,  9),
            new HexagonColor( Color.FromRgb(0x99, 0x33, 0xff),  4,  10),
            new HexagonColor( Color.FromRgb(0x99, 0x00, 0xff),  4,  11),

            new HexagonColor( Color.FromRgb(0x00, 0x66, 0x00),  5,  0),
            new HexagonColor( Color.FromRgb(0x00, 0xcc, 0x00),  5,  1),
            new HexagonColor( Color.FromRgb(0x00, 0xff, 0x00),  5,  2),
            new HexagonColor( Color.FromRgb(0x66, 0xff, 0x99),  5,  3),
            new HexagonColor( Color.FromRgb(0x99, 0xff, 0xcc),  5,  4),
            new HexagonColor( Color.FromRgb(0xcc, 0xff, 0xff),  5,  5),
            new HexagonColor( Color.FromRgb(0xcc, 0xec, 0xff),  5,  6),
            new HexagonColor( Color.FromRgb(0xcc, 0xcc, 0xff),  5,  7),
            new HexagonColor( Color.FromRgb(0xcc, 0x99, 0xff),  5,  8),
            new HexagonColor( Color.FromRgb(0xcc, 0x66, 0xff),  5,  9),
            new HexagonColor( Color.FromRgb(0xcc, 0x00, 0xff),  5,  10),
            new HexagonColor( Color.FromRgb(0x99, 0x00, 0xcc),  5,  11),

            new HexagonColor( Color.FromRgb(0x00, 0x33, 0x00),  6,  0),
            new HexagonColor( Color.FromRgb(0x00, 0x80, 0x00),  6,  1),
            new HexagonColor( Color.FromRgb(0x33, 0xcc, 0x33),  6,  2),
            new HexagonColor( Color.FromRgb(0x66, 0xff, 0x66),  6,  3),
            new HexagonColor( Color.FromRgb(0x99, 0xff, 0x99),  6,  4),
            new HexagonColor( Color.FromRgb(0xcc, 0xff, 0xcc),  6,  5),
            new HexagonColor( Color.FromRgb(0xff, 0xff, 0xff),  6,  6),
            new HexagonColor( Color.FromRgb(0xff, 0xcc, 0xff),  6,  7),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0xff),  6,  8),
            new HexagonColor( Color.FromRgb(0xff, 0x66, 0xff),  6,  9),
            new HexagonColor( Color.FromRgb(0xff, 0x00, 0xff),  6,  10),
            new HexagonColor( Color.FromRgb(0xcc, 0x00, 0xcc),  6,  11),
            new HexagonColor( Color.FromRgb(0x66, 0x00, 0x66),  6,  12),

            new HexagonColor( Color.FromRgb(0x33, 0x66, 0x00),  7,  0),
            new HexagonColor( Color.FromRgb(0x00, 0x99, 0x00),  7,  1),
            new HexagonColor( Color.FromRgb(0x66, 0xff, 0x33),  7,  2),
            new HexagonColor( Color.FromRgb(0x99, 0xff, 0x66),  7,  3),
            new HexagonColor( Color.FromRgb(0xcc, 0xff, 0x99),  7,  4),
            new HexagonColor( Color.FromRgb(0xff, 0xff, 0xcc),  7,  5),
            new HexagonColor( Color.FromRgb(0xff, 0xcc, 0xcc),  7,  6),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0xcc),  7,  7),
            new HexagonColor( Color.FromRgb(0xff, 0x66, 0xcc),  7,  8),
            new HexagonColor( Color.FromRgb(0xff, 0x33, 0xcc),  7,  9),
            new HexagonColor( Color.FromRgb(0xcc, 0x00, 0x99),  7,  10),
            new HexagonColor( Color.FromRgb(0x80, 0x00, 0x80),  7,  11),

            new HexagonColor( Color.FromRgb(0x33, 0x33, 0x00),  8,  1),
            new HexagonColor( Color.FromRgb(0x66, 0x99, 0x00),  8,  2),
            new HexagonColor( Color.FromRgb(0x99, 0xff, 0x33),  8,  3),
            new HexagonColor( Color.FromRgb(0xcc, 0xff, 0x66),  8,  4),
            new HexagonColor( Color.FromRgb(0xff, 0xff, 0x99),  8,  5),
            new HexagonColor( Color.FromRgb(0xff, 0xcc, 0x99),  8,  6),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0x99),  8,  7),
            new HexagonColor( Color.FromRgb(0xff, 0x66, 0x99),  8,  8),
            new HexagonColor( Color.FromRgb(0xff, 0x33, 0x99),  8,  9),
            new HexagonColor( Color.FromRgb(0xcc, 0x33, 0x99),  8,  10),
            new HexagonColor( Color.FromRgb(0x99, 0x00, 0x99),  8,  11),

            new HexagonColor( Color.FromRgb(0x66, 0x66, 0x33),  9,  1),
            new HexagonColor( Color.FromRgb(0x99, 0xcc, 0x00),  9,  2),
            new HexagonColor( Color.FromRgb(0xcc, 0xff, 0x33),  9,  3),
            new HexagonColor( Color.FromRgb(0xff, 0xff, 0x66),  9,  4),
            new HexagonColor( Color.FromRgb(0xff, 0xcc, 0x66),  9,  5),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0x66),  9,  6),
            new HexagonColor( Color.FromRgb(0xff, 0x7c, 0x80),  9,  7),
            new HexagonColor( Color.FromRgb(0xff, 0x00, 0x66),  9,  8),
            new HexagonColor( Color.FromRgb(0xd6, 0x00, 0x93),  9,  9),
            new HexagonColor( Color.FromRgb(0x99, 0x33, 0x66),  9,  10),

            new HexagonColor( Color.FromRgb(0x80, 0x80, 0x00),  10,  2),
            new HexagonColor( Color.FromRgb(0xcc, 0xcc, 0x00),  10,  3),
            new HexagonColor( Color.FromRgb(0xff, 0xff, 0x00),  10,  4),
            new HexagonColor( Color.FromRgb(0xff, 0xcc, 0x00),  10,  5),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0x33),  10,  6),
            new HexagonColor( Color.FromRgb(0xff, 0x66, 0x00),  10,  7),
            new HexagonColor( Color.FromRgb(0xff, 0x50, 0x50),  10,  8),
            new HexagonColor( Color.FromRgb(0xcc, 0x00, 0x66),  10,  9),
            new HexagonColor( Color.FromRgb(0x66, 0x00, 0x33),  10,  10),

            new HexagonColor( Color.FromRgb(0x99, 0x66, 0x33),  11,  2),
            new HexagonColor( Color.FromRgb(0xcc, 0x99, 0x00),  11,  3),
            new HexagonColor( Color.FromRgb(0xff, 0x99, 0x00),  11,  4),
            new HexagonColor( Color.FromRgb(0xcc, 0x66, 0x00),  11,  5),
            new HexagonColor( Color.FromRgb(0xff, 0x33, 0x00),  11,  6),
            new HexagonColor( Color.FromRgb(0xff, 0x00, 0x00),  11,  7),
            new HexagonColor( Color.FromRgb(0xcc, 0x00, 0x00),  11,  8),
            new HexagonColor( Color.FromRgb(0x99, 0x00, 0x33),  11,  9),

            new HexagonColor( Color.FromRgb(0x66, 0x33, 0x00),  12,  3),
            new HexagonColor( Color.FromRgb(0x99, 0x66, 0x00),  12,  4),
            new HexagonColor( Color.FromRgb(0xcc, 0x33, 0x00),  12,  5),
            new HexagonColor( Color.FromRgb(0x99, 0x33, 0x00),  12,  6),
            new HexagonColor( Color.FromRgb(0x99, 0x00, 0x00),  12,  7),
            new HexagonColor( Color.FromRgb(0x80, 0x00, 0x00),  12,  8),
            new HexagonColor( Color.FromRgb(0x99, 0x33, 0x33),  12,  9),

            new HexagonColor( Color.FromRgb(0xff, 0xff, 0xff),  14,  1),
            new HexagonColor( Color.FromRgb(0xf8, 0xf8, 0xf8),  14,  2),
            new HexagonColor( Color.FromRgb(0xdd, 0xdd, 0xdd),  14,  3),
            new HexagonColor( Color.FromRgb(0xb2, 0xb2, 0xb2),  14,  4),
            new HexagonColor( Color.FromRgb(0x96, 0x96, 0x96),  14,  5),
            new HexagonColor( Color.FromRgb(0x80, 0x80, 0x80),  14,  6),
            new HexagonColor( Color.FromRgb(0x5f, 0x5f, 0x5f),  14,  7),
            new HexagonColor( Color.FromRgb(0x48, 0x48, 0x48),  14,  8),
            new HexagonColor( Color.FromRgb(0x33, 0x33, 0x33),  14,  9),
            new HexagonColor( Color.FromRgb(0x20, 0x20, 0x20),  14,  10),
            new HexagonColor( Color.FromRgb(0x00, 0x00, 0x00),  14,  11),
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static HexagonColor[] CreateHexagonColorItems(IList<Common.Color> colors, int cols)
    {
        var result = new HexagonColor[colors.Count];
        int col = 0, row = 0;

        for(int index=0; index<colors.Count; index++)
        {
            result[index] = new HexagonColor( colors[index].ToWpfColor(), row, col);
            col++;
            if (col >= cols)
            {
                row++;
                col = 0;
            }
        }

        return result;
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Color Conversion

    // https://github.com/objorke/PropertyTools

    public static Color UndefinedColor { get; private set; }

    public static string ColorToHex(Color color)
    {
        return string.Format("#{0:X2}{1:X2}{2:X2}{3:X2}", color.A, color.R, color.G, color.B);
    }

    public static double ColorDifference(Color c1, Color c2)
    {
        // http://en.wikipedia.org/wiki/Color_difference
        // http://mathworld.wolfram.com/L2-Norm.html
        double dr = (c1.R - c2.R) / 255.0;
        double dg = (c1.G - c2.G) / 255.0;
        double db = (c1.B - c2.B) / 255.0;
        double da = (c1.A - c2.A) / 255.0;
        double e = dr * dr + dg * dg + db * db + da * da;
        return Math.Sqrt(e);
    }

    public static Color HexToColor(string value)
    {
        value = value.Trim('#');
        if (value.Length == 0)
        {
            return UndefinedColor;
        }

        if (value.Length <= 6)
        {
            value = "FF" + value.PadLeft(6, '0');
        }

        uint u;
        if (uint.TryParse(value, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out u))
        {
            return UIntToColor(u);
        }

        return UndefinedColor;
    }

    public static Color UIntToColor(uint color)
    {
        var a = (byte)(color >> 24);
        var r = (byte)(color >> 16);
        var g = (byte)(color >> 8);
        var b = (byte)(color >> 0);
        return Color.FromArgb(a, r, g, b);
    }

    public static Color ToWpfColor(this Common.Color color)
    {
        return Color.FromRgb((byte)(color.Red * 255.0f), (byte)(color.Green * 255.0f), (byte)(color.Blue * 255.0f));
    }

    public static Common.Color ToMmColor(this Color color)
    {
        return new Common.Color(color.R / 255.0f, color.G / 255.0f, color.B / 255.0f);
    }

    #endregion

}
using System;
using System.Diagnostics;
using System.Globalization;
using Macad.Common.Serialization;

namespace Macad.Common;

[SerializeType]
[DebuggerDisplay("{ToHexString(),nq} {ToString(),nq}")]
public struct Color : ISerializeValue, IEquatable<Color>
{
    public static readonly Color Black = new(0, 0, 0);
    public static readonly Color White = new(1, 1, 1);

    //--------------------------------------------------------------------------------------------------

    public float Red { get; private set; }

    public float Green { get; private set; }

    public float Blue { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public Color(float r, float g, float b)
    {
        Red = r;
        Green = g;
        Blue = b;
    }

    //--------------------------------------------------------------------------------------------------

    public Color(string s)
    {
        if (s.StartsWith("#") && s.Length >= 7)
        {
            int i = 1;
            if (s.Length == 9)
            {
                // Ignore Alpha
                i += 2;
            }

            Red = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
            i += 2;
            Green = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
            i += 2;
            Blue = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
            return;
        }

        Debug.Assert(true, "Color can not be decoded.");
        Red = Green = Blue = 0.0f;
    }

    //--------------------------------------------------------------------------------------------------

    #region Serialization

    public bool Write(Writer writer, SerializationContext context)
    {
        float[] values = { Red, Green, Blue };
        return writer.WriteType(values, context);
    }

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        var values = reader.ReadType<float[]>(null, context);
        if ((values != null) && (values.Length == 3))
        {
            Red = values[0];
            Green = values[1];
            Blue = values[2];
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Object Overrides

    public override bool Equals(object obj)
    {
        if (ReferenceEquals(null, obj)) return false;
        return obj is Color && ((Color)obj == this);
    }

    //--------------------------------------------------------------------------------------------------

    public override int GetHashCode()
    {
        unchecked
        {
            var hashCode = (int)(Red * 255.0f) 
                           | ((int)(Green * 255.0f) << 8)
                           | ((int)(Blue * 255.0f) << 16);
            return hashCode;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(Color other)
    {
        return other == this;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool operator ==(Color color1, Color color2)
    {
        return (color1.Red == color2.Red) && (color1.Green == color2.Green) && (color1.Blue == color2.Blue);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool operator !=(Color color1, Color color2)
    {
        return !(color1 == color2);
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        return string.Format(CultureInfo.InvariantCulture, $"[{Red},{Green},{Blue}]");
    }
    
    //--------------------------------------------------------------------------------------------------

    public string ToHexString()
    {
        return $"#{(int)(Red * 255):x2}{(int)(Green * 255):x2}{(int)(Blue * 255):x2}";
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Color Operations

    public Color Scaled(float scale)
    {
        return new Color(Red*scale, Green*scale, Blue*scale);
    }

    //--------------------------------------------------------------------------------------------------

    public Color Lerp(Color other, float f)
    {
        return new Color(Red.Lerp(other.Red, f), Green.Lerp(other.Green, f), Blue.Lerp(other.Blue, f));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
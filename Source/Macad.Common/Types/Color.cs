using System;
using System.Diagnostics;
using System.Globalization;
using System.Text;
using Macad.Common.Serialization;

namespace Macad.Common
{
    [SerializeType]
    public struct Color : ISerializeValue, IEquatable<Color>
    {
        public static readonly Color Black = new Color(0, 0, 0);
        public static readonly Color White = new Color(1, 1, 1);

        //--------------------------------------------------------------------------------------------------

        public float Red
        {
            get { return _Red; }
        }

        public float Green
        {
            get { return _Green; }
        }

        public float Blue
        {
            get { return _Blue; }
        }

        //--------------------------------------------------------------------------------------------------

        float _Red;
        float _Green;
        float _Blue;

        //--------------------------------------------------------------------------------------------------

        public Color(float r, float g, float b)
        {
            _Red = r;
            _Green = g;
            _Blue = b;
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

                _Red = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
                i += 2;
                _Green = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
                i += 2;
                _Blue = int.Parse(s.Substring(i, 2), NumberStyles.HexNumber) / 255.0f;
                return;
            }

            Debug.Assert(true, "Color can not be decoded.");
            _Red = _Green = _Blue = 0.0f;
        }

        //--------------------------------------------------------------------------------------------------

        #region Serialization

        public bool Write(Writer writer, SerializationContext context)
        {
            float[] values = { _Red, _Green, _Blue };
            return writer.WriteType(values, context);
        }

        //--------------------------------------------------------------------------------------------------

        public bool Read(Reader reader, SerializationContext context)
        {
            var values = reader.ReadType<float[]>(null, context);
            if ((values != null) && (values.Length == 3))
            {
                _Red = values[0];
                _Green = values[1];
                _Blue = values[2];
                return true;
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

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
                var hashCode = (int)(_Red * 255.0f) 
                    | ((int)(_Green * 255.0f) << 8)
                    | ((int)(_Blue * 255.0f) << 16);
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
            return (color1._Red == color2._Red) && (color1._Green == color2._Green) && (color1._Blue == color2._Blue);
        }

        //--------------------------------------------------------------------------------------------------

        public static bool operator !=(Color color1, Color color2)
        {
            return !(color1 == color2);
        }

        //--------------------------------------------------------------------------------------------------

        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat(CultureInfo.InvariantCulture, "[{0},{1},{2}]", _Red, Green, _Blue);

            return sb.ToString();
        }

        //--------------------------------------------------------------------------------------------------

        public Color Scaled(float scale)
        {
            return new Color(Red*scale, Green*scale, Blue*scale);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
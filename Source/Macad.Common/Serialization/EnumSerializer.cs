using System;
using System.Linq;

namespace Macad.Common.Serialization;

public class EnumSerializer : ISerializer
{
    readonly Type _Type;
    readonly bool _HasFlagsAttribute;
    readonly Enum[] _Values;

    public EnumSerializer(Type type)
    {
        _Type = type;
        _HasFlagsAttribute = _Type.GetCustomAttributes(typeof(FlagsAttribute), false).Length > 0;
        _Values = Enum.GetValues(type).Cast<Enum>().ToArray();
    }

    public bool Write(Writer writer, object obj, SerializationContext context)
    {
        if (_HasFlagsAttribute)
        {
            bool isFirst = true;
            var e = Convert.ToInt32((Enum) obj);
            var flaggedValues = _Values.Where(m =>
            {
                var mi = Convert.ToInt32(m);
                return (e & mi) == mi;
            });

            foreach (var flaggedValue in flaggedValues)
            {
                if (isFirst)
                    isFirst = false;
                else
                    writer.WriteChar('|');

                writer.WriteValueString(Enum.GetName(_Type, flaggedValue));
            }

            if (isFirst)
            {
                // No flags
                writer.WriteChar('0');
            }
        }
        else
        {
            writer.WriteValueString(Enum.GetName(_Type, obj));
        }
        return true;
    }

    public object Read(Reader reader, object obj, SerializationContext context)
    {
        if (_HasFlagsAttribute)
        {
            var valueString = reader.ReadValueString();
            if (valueString.IsEmpty() || valueString.Equals("0"))
            {
                return Enum.ToObject(_Type, 0);
            }

            Int32 result = 0;
            var flagStrings = valueString.Split('|');
            foreach (var flagString in flagStrings)
            {
                result |= Convert.ToInt32(Enum.Parse(_Type, flagString, true));
            }
            return Enum.ToObject(_Type, result);
        }
        else
        {
            return Enum.Parse(_Type, reader.ReadValueString(), true);
        }
    }
}
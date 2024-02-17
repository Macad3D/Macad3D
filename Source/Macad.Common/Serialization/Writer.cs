using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;

namespace Macad.Common.Serialization;

public class Writer
{
    readonly Dictionary<Guid,object> _WrittenInstances = new Dictionary<Guid, object>();
    readonly StringBuilder _Sb = new StringBuilder();
    int _BlocksOpen = 0;
    int _MapsKeys = 0;
    int _MapsValues = 0;
    bool _IsFirstElement = false;

    //--------------------------------------------------------------------------------------------------

    public Writer()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsValid()
    {
        return (_BlocksOpen == 0) && (_MapsKeys == _MapsValues);
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        return _Sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    #region Write Functions

    public void WriteChar(in char value)
    {
        _Sb.Append(value);
    }

    public void WriteRawString(in string value)
    {
        _Sb.Append(value);
    }

    public void WriteValueString(in string value)
    {
        foreach (var c in value)
        {
            switch (c)
            {
                case '"':
                    _Sb.Append(@"\""");
                    break;
                case '\'':
                    _Sb.Append(@"\'");
                    break;
                case '\\':
                    _Sb.Append(@"\\");
                    break;
                case '{':
                    _Sb.Append(@"\{");
                    break;
                case '}':
                    _Sb.Append(@"\}");
                    break;
                case ':':
                    _Sb.Append(@"\:");
                    break;
                case ',':
                    _Sb.Append(@"\,");
                    break;

                default:
                    _Sb.Append(c);
                    break;
            }
        }
    }

    public void WriteQuotedString(in string value)
    {
        _Sb.Append(@"""");
        foreach (var c in value)
        {
            switch (c)
            {
                case '"':
                    _Sb.Append(@"\""");
                    break;
                case '\\':
                    _Sb.Append(@"\\");
                    break;

                default:
                    _Sb.Append(c);
                    break;
            }
        }
        _Sb.Append(@"""");
    }

    public void WriteNullReference()
    {
        WriteRawString("?null");
    }

    public bool WriteInstanceReference(object instance, in Guid guid)
    {
        if (instance == null)
        {
            WriteNullReference();
            return true;
        }

        if (guid == Guid.Empty)
        {
            return false;
        }

        if (_WrittenInstances.ContainsKey(guid))
        {
            WriteChar('?');
            WriteValueString(guid.ToString("N"));
            return true;
        }

        _WrittenInstances.Add(guid, instance);
        return false;
    }

    public bool WriteType(object instance, SerializationContext context)
    {
        var serializer = Serializer.GetSerializer(instance.GetType());
        Debug.Assert(serializer != null);
        return serializer.Write(this, instance, context);
    }

    #endregion

    #region Map

    public void BeginMap()
    {
        _Sb.Append('{');
        _BlocksOpen++;
        _IsFirstElement = true;
    }

    public void BeginMapKey()
    {
        if (!_IsFirstElement)
        {
            _Sb.Append(',');
        }
        _IsFirstElement = false;
        _MapsKeys++;
    }

    public void BeginMapValue()
    {
        _Sb.Append(':');
        _MapsValues++;
    }

    public void EndMap()
    {
        _Sb.Append('}');
        _BlocksOpen--;
        _IsFirstElement = false;
    }

    #endregion

    #region List

    public void BeginList()
    {
        _Sb.Append('[');
        _BlocksOpen++;
        _IsFirstElement = true;
    }

    public void BeginListValue()
    {
        if (!_IsFirstElement)
        {
            _Sb.Append(',');
        }
        _IsFirstElement = false;
    }

    public void EndList()
    {
        _Sb.Append(']');
        _BlocksOpen--;
        _IsFirstElement = false;
    }

    #endregion

}
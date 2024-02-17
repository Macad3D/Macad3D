using System;
using System.Collections.Generic;
using System.Text;

namespace Macad.Common;

public static class StringExtensions
{
    public static string ToMixedCase(this string value)
    {
        if (string.IsNullOrEmpty(value)) return value;

        var len = value.Length;
        var newValue = new char[len];
        var ToUpperCase = true;

        for (var i = 0; i < len; ++i)
        {
            var c0 = value[i];
            if (!Char.IsLetter(c0))
            {
                newValue[i] = c0;
                ToUpperCase = true;
                continue;
            }

            var c0isUpper = Char.IsUpper(c0);
            if (c0isUpper && !ToUpperCase)
            {
                c0 = Char.ToLower(c0);
            }
            else if (!c0isUpper && ToUpperCase)
            {
                c0 = Char.ToUpper(c0);
            }

            newValue[i] = c0;
            ToUpperCase = false;
        }

        return new string(newValue);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool IsNullOrWhiteSpace(this string value)
    {
        return String.IsNullOrWhiteSpace(value);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsEmpty(this string value)
    {
        return String.IsNullOrEmpty(value);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsNullOrEmpty(this string value)
    {
        return String.IsNullOrEmpty(value);
    }

    //--------------------------------------------------------------------------------------------------

    public static string FromUtf8Bytes(this byte[] bytes)
    {
        return bytes == null ? null
                   : Encoding.UTF8.GetString(bytes, 0, bytes.Length);
    }

    //--------------------------------------------------------------------------------------------------

    public static byte[] ToUtf8Bytes(this string value)
    {
        return Encoding.UTF8.GetBytes(value);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static int CompareIgnoreCase(this string strA, string strB)
    {
        return String.Compare(strA, strB, StringComparison.InvariantCultureIgnoreCase);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static string Join(this List<string> parts, string separator)
    {
        return String.Join(separator, parts.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    public static string TrimPrefixes(this string fromString, params string[] prefixes)
    {
        if (string.IsNullOrEmpty(fromString))
            return fromString;

        foreach (var prefix in prefixes)
        {
            if (fromString.StartsWith(prefix))
                return fromString.Substring(prefix.Length);
        }

        return fromString;
    }

    //--------------------------------------------------------------------------------------------------

    public static string ToIdentifier(this string fromString)
    {
        string toString = "";
        for (int i = 0; i < fromString.Length; i++)
        {
            char c = fromString[i];

            if (char.IsLetter(c)
                || char.IsDigit(c) && toString.Length > 0
                || c == '_')
            {
                toString += c;
            }
        }

        return toString.IsNullOrEmpty() ? "_" : toString;
    }
}
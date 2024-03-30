using System;
using System.Text.RegularExpressions;

namespace Macad.Common;

public static class StringUtils
{
    public static string ToMixedCase(string value)
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

    public static string ToIdentifier(string fromString)
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

    //--------------------------------------------------------------------------------------------------
    
    public static string TrimPrefixes(string fromString, params string[] prefixes)
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
    
    public static string CamelCaseToWords(string camelCaseString)
    {
        // Use regular expression to split camelCaseString into words
        string pattern = @"(?<!^)(?=[A-Z])"; // Split on uppercase letters not at the start of the string
        string[] words = Regex.Split(camelCaseString, pattern);

        // Join words with space and return
        return string.Join(" ", words);
    }

    //--------------------------------------------------------------------------------------------------

}
using System;
using System.Collections.Generic;
using System.Text;

namespace Macad.Common;

public static class StringExtensions
{
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

}
using System.Text;
using Macad.Common.Serialization;

namespace Macad.Exchange.Dxf;

[SerializeType]
public enum DxfVersion
{
    AC1009,
    AC1012,
    AC1015,
    Latest
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public enum DxfScaling
{
    Millimeter,
    Centimeter,
    Meter,
    Inch,
    Foot,
    Yard,
}

//--------------------------------------------------------------------------------------------------

internal static class DxfUtils
{
    public static byte[] BinaryFileSentinel { get; } = Encoding.ASCII.GetBytes("AutoCAD Binary DXF\x0d\x0a\x1a\0");

    //--------------------------------------------------------------------------------------------------

    public enum Types
    {
        Unknown,
        String,
        Double,
        Int16,
        Int32,
        Int64,
        Bool,
        ByteChunk
    }

    //--------------------------------------------------------------------------------------------------

    public static Types GetTypeForGroupCode(int groupCode)
    {
        if (groupCode <= 9) return Types.String;
        if (groupCode <= 59) return Types.Double;
        if (groupCode <= 79) return Types.Int16;
        if (groupCode <= 89) return Types.Unknown;
        if (groupCode <= 99) return Types.Int32;
        if (groupCode <= 109) return Types.String;
        if (groupCode <= 149) return Types.Double;
        if (groupCode <= 159) return Types.Unknown;
        if (groupCode <= 169) return Types.Int64;
        if (groupCode <= 179) return Types.Int16;
        if (groupCode <= 209) return Types.Unknown;
        if (groupCode <= 239) return Types.Double;
        if (groupCode <= 269) return Types.Unknown;
        if (groupCode <= 289) return Types.Int16;
        if (groupCode <= 299) return Types.Bool;
        if (groupCode <= 369) return Types.String;
        if (groupCode <= 389) return Types.Int16;
        if (groupCode <= 399) return Types.String;
        if (groupCode <= 409) return Types.Int16;
        if (groupCode <= 419) return Types.String;
        if (groupCode <= 429) return Types.Int32;
        if (groupCode <= 439) return Types.String;
        if (groupCode <= 449) return Types.Int32;
        if (groupCode <= 459) return Types.Int32;
        if (groupCode <= 469) return Types.Double;
        if (groupCode <= 489) return Types.String;
        if (groupCode <= 998) return Types.Unknown;
        if (groupCode <= 1003) return Types.Unknown;
        if (groupCode <= 1004) return Types.ByteChunk;
        if (groupCode <= 1009) return Types.String;
        if (groupCode <= 1059) return Types.String;
        if (groupCode <= 1070) return Types.Int16;
        if (groupCode <= 1071) return Types.Int32;
        return Types.Unknown;
    }

    //--------------------------------------------------------------------------------------------------

    public static int GetBinarySize(Types type)
    {
        switch (type)
        {
            case Types.Double: return 8;
            case Types.Int16:  return 2;
            case Types.Int32:  return 4;
            case Types.Int64:  return 8;
            case Types.Bool:   return 1;
            default:           return 0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static double GetImportScaleValue(DxfScaling scaling)
    {
        return scaling switch
        {
            DxfScaling.Millimeter => 1.0,
            DxfScaling.Centimeter => 10.0,
            DxfScaling.Meter => 100.0,
            DxfScaling.Inch => 25.4,
            DxfScaling.Foot => 304.8,
            DxfScaling.Yard => 914.4,
            _ => 1.0
        };
    }
}
using System;

namespace Macad.Common;

public static class EnumExtensions
{
    public static bool Has<T>(this System.Enum type, T value)
    {
        try
        {
            return (((int)(object)type & (int)(object)value) == (int)(object)value);
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Has<T>(this System.Enum type, string value)
    {
        try
        {
            var ev = Enum.Parse(type.GetType(), value);
            return (((int)(object)type & (int)(object)value) == (int)(object)ev);
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Is<T>(this System.Enum type, T value)
    {
        try
        {
            return (int)(object)type == (int)(object)value;
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool HasAny<T>(this System.Enum type, T value)
    {
        try
        {
            return (((int)(object)type & (int)(object)value) != 0);
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static T Added<T>(this System.Enum type, T value)
    {
        try
        {
            return (T)(object)(((int)(object)type | (int)(object)value));
        }
        catch (Exception ex)
        {
            throw new ArgumentException(
                string.Format(
                    "Could not append value from enumerated type '{0}'.",
                    typeof(T).Name
                ), ex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static T Removed<T>(this System.Enum type, T value)
    {
        try
        {
            return (T)(object)(((int)(object)type & ~(int)(object)value));
        }
        catch (Exception ex)
        {
            throw new ArgumentException(
                string.Format(
                    "Could not remove value from enumerated type '{0}'.",
                    typeof(T).Name
                ), ex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static T Toggled<T>(this System.Enum type, T value)
    {
        try
        {
            var it = (int) (object) type;
            var iv = (int) (object) value;
            if ((it & iv) > 0)
                return (T) (object) (it & ~ iv);
            else
                return (T) (object) (it | iv);
        }
        catch (Exception ex)
        {
            throw new ArgumentException(
                string.Format(
                    "Could not append value from enumerated type '{0}'.",
                    typeof(T).Name
                ), ex);
        }
    }

    //--------------------------------------------------------------------------------------------------

}
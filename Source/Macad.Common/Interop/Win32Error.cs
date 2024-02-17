using System;
using System.Runtime.InteropServices;
using System.Security;

namespace Macad.Common;

[StructLayout(LayoutKind.Explicit)]
public readonly struct Win32Error
{
    [FieldOffset(0)]
    readonly int _value;

    //--------------------------------------------------------------------------------------------------

    /// <summary>The operation completed successfully.</summary>
    public static readonly Win32Error ERROR_SUCCESS = new Win32Error(0);
    /// <summary>Incorrect function.</summary>
    public static readonly Win32Error ERROR_INVALID_FUNCTION = new Win32Error(1);
    /// <summary>The system cannot find the file specified.</summary>
    public static readonly Win32Error ERROR_FILE_NOT_FOUND = new Win32Error(2);
    /// <summary>The system cannot find the path specified.</summary>
    public static readonly Win32Error ERROR_PATH_NOT_FOUND = new Win32Error(3);
    /// <summary>The system cannot open the file.</summary>
    public static readonly Win32Error ERROR_TOO_MANY_OPEN_FILES = new Win32Error(4);
    /// <summary>Access is denied.</summary>
    public static readonly Win32Error ERROR_ACCESS_DENIED = new Win32Error(5);
    /// <summary>The handle is invalid.</summary>
    public static readonly Win32Error ERROR_INVALID_HANDLE = new Win32Error(6);
    /// <summary>Not enough storage is available to complete this operation.</summary>
    public static readonly Win32Error ERROR_OUTOFMEMORY = new Win32Error(14);
    /// <summary>There are no more files.</summary>
    public static readonly Win32Error ERROR_NO_MORE_FILES = new Win32Error(18);
    /// <summary>The process cannot access the file because it is being used by another process.</summary>
    public static readonly Win32Error ERROR_SHARING_VIOLATION = new Win32Error(32);
    /// <summary>The parameter is incorrect.</summary>
    public static readonly Win32Error ERROR_INVALID_PARAMETER = new Win32Error(87);
    /// <summary>Cannot create a file when that file already exists.</summary>
    public static readonly Win32Error ERROR_ALREADY_EXISTS = new Win32Error(183);

    //--------------------------------------------------------------------------------------------------

    public Win32Error(int i)
    {
        _value = i;
    }

    //--------------------------------------------------------------------------------------------------
        
    [SecurityCritical]
    public static Win32Error GetLastError()
    {
        return new Win32Error(Marshal.GetLastWin32Error());
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Equals(object obj)
    {
        try
        {
            return ((Win32Error)obj)._value == _value;
        }
        catch (InvalidCastException)
        {
            return false;
        }
    }
 
    public override int GetHashCode()
    {
        return _value.GetHashCode();
    }
    public static bool operator ==(Win32Error errLeft, Win32Error errRight)
    {
        return errLeft._value == errRight._value;
    }
 
    public static bool operator !=(Win32Error errLeft, Win32Error errRight)
    {
        return !(errLeft == errRight);
    }

    //--------------------------------------------------------------------------------------------------
}
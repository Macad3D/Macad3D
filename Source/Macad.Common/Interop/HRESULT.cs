using System;
using System.Runtime.InteropServices;
// ReSharper disable InconsistentNaming

namespace Macad.Common.Interop;

/// <summary>Wrapper for HRESULT status codes.</summary>
[StructLayout(LayoutKind.Explicit)]
public readonly struct HRESULT
{
    [FieldOffset(0)]
    readonly uint _value;
 
    // NOTE: These public static field declarations are automatically
    // picked up by ToString through reflection.
    /// <summary>S_OK</summary>
    public static readonly HRESULT S_OK = new HRESULT(0x00000000);
    /// <summary>S_FALSE</summary>
    public static readonly HRESULT S_FALSE = new HRESULT(0x00000001);
    /// <summary>E_NOTIMPL</summary>
    public static readonly HRESULT E_NOTIMPL = new HRESULT(0x80004001);
    /// <summary>E_NOINTERFACE</summary>
    public static readonly HRESULT E_NOINTERFACE = new HRESULT(0x80004002);
    /// <summary>E_POINTER</summary>
    public static readonly HRESULT E_POINTER = new HRESULT(0x80004003);
    /// <summary>E_ABORT</summary>
    public static readonly HRESULT E_ABORT = new HRESULT(0x80004004);
    /// <summary>E_FAIL</summary>
    public static readonly HRESULT E_FAIL = new HRESULT(0x80004005);
    /// <summary>E_UNEXPECTED</summary>
    public static readonly HRESULT E_UNEXPECTED = new HRESULT(0x8000FFFF);
    /// <summary>DISP_E_MEMBERNOTFOUND</summary>
    public static readonly HRESULT DISP_E_MEMBERNOTFOUND = new HRESULT(0x80020003);
    /// <summary>DISP_E_TYPEMISMATCH</summary>
    public static readonly HRESULT DISP_E_TYPEMISMATCH = new HRESULT(0x80020005);
    /// <summary>DISP_E_UNKNOWNNAME</summary>
    public static readonly HRESULT DISP_E_UNKNOWNNAME = new HRESULT(0x80020006);
    /// <summary>DISP_E_EXCEPTION</summary>
    public static readonly HRESULT DISP_E_EXCEPTION = new HRESULT(0x80020009);
    /// <summary>DISP_E_OVERFLOW</summary>
    public static readonly HRESULT DISP_E_OVERFLOW = new HRESULT(0x8002000A);
    /// <summary>DISP_E_BADINDEX</summary>
    public static readonly HRESULT DISP_E_BADINDEX = new HRESULT(0x8002000B);
    /// <summary>DISP_E_BADPARAMCOUNT</summary>
    public static readonly HRESULT DISP_E_BADPARAMCOUNT = new HRESULT(0x8002000E);
    /// <summary>DISP_E_PARAMNOTOPTIONAL</summary>
    public static readonly HRESULT DISP_E_PARAMNOTOPTIONAL = new HRESULT(0x8002000F);
    /// <summary>SCRIPT_E_REPORTED</summary>
    public static readonly HRESULT SCRIPT_E_REPORTED = new HRESULT(0x80020101);
    /// <summary>STG_E_INVALIDFUNCTION</summary>
    public static readonly HRESULT STG_E_INVALIDFUNCTION = new HRESULT(0x80030001);
    /// <summary>DESTS_E_NO_MATCHING_ASSOC_HANDLER.</summary>
    /// <remarks>
    /// Win7 error code for Jump Lists.  There is no associated handler for the given item registered by the specified application.
    /// </remarks>
    public static readonly HRESULT DESTS_E_NO_MATCHING_ASSOC_HANDLER = new HRESULT(0x80040F03);
    /// <summary>E_ACCESSDENIED</summary>
    public static readonly HRESULT E_ACCESSDENIED = new HRESULT(0x80070005);
    /// <summary>E_OUTOFMEMORY</summary>
    public static readonly HRESULT E_OUTOFMEMORY = new HRESULT(0x8007000E);
    /// <summary>E_INVALIDARG</summary>
    public static readonly HRESULT E_INVALIDARG = new HRESULT(0x80070057);
    /// <summary>COR_E_OBJECTDISPOSED</summary>
    public static readonly HRESULT COR_E_OBJECTDISPOSED = new HRESULT(0x80131622);
    /// <summary>WC_E_GREATERTHAN</summary>
    public static readonly HRESULT WC_E_GREATERTHAN = new HRESULT(0xC00CEE23);
    /// <summary>WC_E_SYNTAX</summary>
    public static readonly HRESULT WC_E_SYNTAX = new HRESULT(0xC00CEE2D);

    //--------------------------------------------------------------------------------------------------

    public HRESULT(uint i)
    {
        _value = i;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Equals(object obj)
    {
        try
        {
            return ((HRESULT)obj)._value == _value;
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
    public static bool operator ==(HRESULT errLeft, HRESULT errRight)
    {
        return errLeft._value == errRight._value;
    }
 
    public static bool operator !=(HRESULT errLeft, HRESULT errRight)
    {
        return !(errLeft == errRight);
    }

    //--------------------------------------------------------------------------------------------------
}
using System.Runtime.InteropServices;
using System.Windows.Interop;
using Macad.Common.Interop;
using Macad.Common.Serialization;

namespace Macad.Window;

[SerializeType]
public sealed class WindowPlacement : ISerializeValue
{
    [SerializeMember]
    Win32Api.WINDOWPLACEMENT Placement
    {
        get { return _Placement; }
        set { _Placement = value; }
    }

    Win32Api.WINDOWPLACEMENT _Placement;

    //--------------------------------------------------------------------------------------------------

    bool _GetPlacement(System.Windows.Window window)
    {
        return Win32Api.GetWindowPlacement(new HandleRef(this, new WindowInteropHelper(window).Handle), out _Placement);
    }

    //--------------------------------------------------------------------------------------------------

    bool _SetPlacement(System.Windows.Window window)
    {
        _Placement.showCmd = _Placement.showCmd == Win32Api.SW_SHOWMINIMIZED ? Win32Api.SW_SHOWNORMAL : _Placement.showCmd;
        _Placement.flags = 0;
        return Win32Api.SetWindowPlacement(new HandleRef(this, new WindowInteropHelper(window).Handle), ref _Placement);
    }

    //--------------------------------------------------------------------------------------------------

    public static void SaveWindowPlacement(System.Windows.Window window, string name)
    {
        var placement = new WindowPlacement();
        if (placement._GetPlacement(window))
            AppContext.Current.SaveLocalSettings(name, placement);
    }

    //--------------------------------------------------------------------------------------------------

    public static void LoadWindowPlacement(System.Windows.Window window, string name)
    {
        var placement = AppContext.Current.LoadLocalSettings<WindowPlacement>(name);
        placement?._SetPlacement(window);
    }

    //--------------------------------------------------------------------------------------------------

    static readonly ISerializer _PlacementSerializer;

    static WindowPlacement()
    {
        _PlacementSerializer = Serializer.GetSerializer(typeof(Win32Api.WINDOWPLACEMENT));            
    }

    public bool Write(Writer writer, SerializationContext context)
    {
        return _PlacementSerializer.Write(writer, _Placement, context);
    }

    public bool Read(Reader reader, SerializationContext context)
    {
        var obj = _PlacementSerializer.Read(reader, null, context);
        if (obj == null)
            return false;

        _Placement = (Win32Api.WINDOWPLACEMENT) obj;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
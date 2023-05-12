using System.Text;
using System.Windows.Input;
using Macad.Common.Interop;

namespace Macad.Presentation;

public static class InputHelper
{
    public static ModifierKeys SimulatedModifiers { get; set; } = ModifierKeys.None;

    //--------------------------------------------------------------------------------------------------

    public static bool HasModifier(KeyEventArgs args, ModifierKeys modifier)
    {
        return args.KeyboardDevice.Modifiers.HasFlag(modifier) || SimulatedModifiers.HasFlag(modifier);
    }

    //--------------------------------------------------------------------------------------------------

    public static string ConvertKeyToText(KeyEventArgs args)
    {
        var sb = new StringBuilder();
        byte[] bKeyState  = new byte[255];
        if (HasModifier(args, ModifierKeys.Shift))
            bKeyState[0x10] = 0x80;
        if (HasModifier(args, ModifierKeys.Control))
            bKeyState[0x11] = 0x80;
        if (HasModifier(args, ModifierKeys.Alt))
            bKeyState[0x12] = 0x80;
        var vkey = KeyInterop.VirtualKeyFromKey(args.Key);
        uint lScanCode = Win32Api.MapVirtualKey((uint)vkey, Win32Api.MapVirtualKeyMapTypes.MAPVK_VK_TO_VSC);
        Win32Api.ToUnicode((uint)vkey, lScanCode, bKeyState, sb, 5, 0);
        return sb.ToString();
    }
}
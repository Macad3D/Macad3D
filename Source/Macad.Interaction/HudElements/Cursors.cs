using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Windows.Input;
using Macad.Common;
using Macad.Resources;

namespace Macad.Interaction;

public static class Cursors
{
    public static Cursor Wait => System.Windows.Input.Cursors.Wait;
    public static Cursor Move => _GetOrCreate();
    public static Cursor Rotate => _GetOrCreate();
    public static Cursor SelectShape => _GetOrCreate();
    public static Cursor SelectVertex => _GetOrCreate();
    public static Cursor SelectEdge => _GetOrCreate();
    public static Cursor SelectWire => _GetOrCreate();
    public static Cursor SelectFace => _GetOrCreate();
    public static Cursor SetPoint => _GetOrCreate();
    public static Cursor SetRadius => _GetOrCreate();
    public static Cursor SetHeight => _GetOrCreate();
    public static Cursor WorkingPlane => _GetOrCreate();
    public static Cursor Plus => _GetOrCreate();
    public static Cursor Minus => _GetOrCreate();

    //--------------------------------------------------------------------------------------------------

    static readonly Dictionary<string, Cursor> _Cursors = new();

    //--------------------------------------------------------------------------------------------------

    static Cursor _GetOrCreate([CallerMemberName] string cursorId="")
    {
        if (!_Cursors.TryGetValue(cursorId, out var cursor))
        {
            var stream = cursorId.IsNullOrEmpty() ? null : ResourceUtils.GetResourceStream("Cursors/" + cursorId + ".cur");
            cursor = stream == null ? null : new Cursor(stream);
            _Cursors.Add(cursorId, cursor);
        }

        return cursor;
    }

    //--------------------------------------------------------------------------------------------------

}
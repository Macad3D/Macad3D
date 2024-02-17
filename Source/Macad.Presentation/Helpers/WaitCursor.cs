using System;
using System.Windows.Input;

namespace Macad.Presentation;
// Source: https://stackoverflow.com/questions/3480966/display-hourglass-when-application-is-busy

public sealed class WaitCursor : IDisposable
{
    readonly Cursor _PreviousCursor;

    public WaitCursor()
    {
        _PreviousCursor = Mouse.OverrideCursor;

        Mouse.OverrideCursor = Cursors.Wait;
    }

    #region IDisposable Members

    public void Dispose()
    {
        Mouse.OverrideCursor = _PreviousCursor;
    }

    #endregion
}
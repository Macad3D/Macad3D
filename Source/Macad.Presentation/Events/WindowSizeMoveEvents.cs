using System;
using System.Diagnostics.CodeAnalysis;
using System.Windows;
using System.Windows.Interop;
using Macad.Common;
using Macad.Common.Interop;

namespace Macad.Presentation;

public enum WindowSizeMoveState
{
    None,
    SizingOrMoving,
    Sizing,
    Moving
}

//--------------------------------------------------------------------------------------------------

public class WindowSizeMoveChangedEventArgs(WindowSizeMoveState currentState) : EventArgs
{
    public WindowSizeMoveState CurrentState { get; } = currentState;
}

//--------------------------------------------------------------------------------------------------

public class WindowSizeMoveEvents
{
    #region Statics

    static readonly WeakTable<Window, WindowSizeMoveEvents> _HookedWindows = new();

    //--------------------------------------------------------------------------------------------------

    public static WindowSizeMoveEvents GetOrCreate([NotNull] Window window) 
    {
        if (window == null) {
            throw new ArgumentNullException(nameof(window));
        }

        if (_HookedWindows.TryGetValue(window, out var instance))
            return instance;

        instance = new WindowSizeMoveEvents(window);
        _HookedWindows[window] = instance;
        return instance;
    }
    
    //--------------------------------------------------------------------------------------------------

    #endregion

    public WindowSizeMoveState CurrentState { get; private set; } = WindowSizeMoveState.None;

    //--------------------------------------------------------------------------------------------------

    public event EventHandler<WindowSizeMoveChangedEventArgs> StateChanged;
    public event EventHandler EnterSizeMove;
    public event EventHandler ExitSizeMove;

    //--------------------------------------------------------------------------------------------------

    WindowSizeMoveEvents([NotNull] Window window)
    {
        if (window.IsLoaded) {
            // handle should be available at this level
            HwndSource source = PresentationSource.FromVisual(window) as HwndSource;
            source.AddHook(_WndProcHook);
        }
        else
        {
            window.Loaded += (_, _) =>
            {
                HwndSource source = PresentationSource.FromVisual(window) as HwndSource;
                source.AddHook(_WndProcHook);
            };
        }
    }

    //--------------------------------------------------------------------------------------------------

    IntPtr _WndProcHook(IntPtr hwnd, int msg, IntPtr wparam, IntPtr lparam, ref bool handled)
    {
        switch (msg)
        {
            case Win32Api.WM_SIZING:
                if (CurrentState == WindowSizeMoveState.SizingOrMoving)
                {
                    CurrentState = WindowSizeMoveState.Sizing;
                    StateChanged?.Invoke(this, new(CurrentState));
                }
                break;

            case Win32Api.WM_MOVING:
                if (CurrentState == WindowSizeMoveState.SizingOrMoving)
                {
                    CurrentState = WindowSizeMoveState.Moving;
                    StateChanged?.Invoke(this, new(CurrentState));
                }
                break;

            case Win32Api.WM_ENTERSIZEMOVE:
                CurrentState = WindowSizeMoveState.SizingOrMoving;
                EnterSizeMove?.Invoke(this, new());
                StateChanged?.Invoke(this, new(CurrentState));
                break;

            case Win32Api.WM_EXITSIZEMOVE:
                CurrentState = WindowSizeMoveState.None;
                ExitSizeMove?.Invoke(this, new());
                StateChanged?.Invoke(this, new(CurrentState));
                break;
        }
        return IntPtr.Zero;
    }

    //--------------------------------------------------------------------------------------------------

}
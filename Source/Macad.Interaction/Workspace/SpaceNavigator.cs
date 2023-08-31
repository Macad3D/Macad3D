using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Input;
using System.Windows.Interop;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Core;

namespace Macad.Interaction;

public sealed class SpaceNavigatorParameterSet : OverridableParameterSet
{
    public double MoveSensitivity       { get => GetValue<double>(); set => SetValue(value); }
    public double RotationSensitivity   { get => GetValue<double>(); set => SetValue(value); }
    public double ZoomSensitivity       { get => GetValue<double>(); set => SetValue(value); }
    public double RollDeadZone          { get => GetValue<double>(); set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public SpaceNavigatorParameterSet()
    {
        SetDefaultValue(nameof(MoveSensitivity),     1.0);
        SetDefaultValue(nameof(RotationSensitivity), 1.0);
        SetDefaultValue(nameof(ZoomSensitivity),     1.0);
        SetDefaultValue(nameof(RollDeadZone),        1.25);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class SpaceNavigator
{
    static double _MoveDataDivisorScale = 16.0;
    static double _RotateDataDivisorScale = 400.0;
    static double _ZoomDataDivisorScale = 20480.0;

    //--------------------------------------------------------------------------------------------------

    bool _Initialized = false;
    uint _WindowMessageCode;
    IntPtr _DeviceHandle;

    static double _MoveDataDivisor = _MoveDataDivisorScale;
    static double _RotateDataDivisor = _RotateDataDivisorScale;
    static double _ZoomDataDivisor = _ZoomDataDivisorScale;
    static double _RollDeadZone = 1.25;

    //--------------------------------------------------------------------------------------------------

    public bool Init(Window targetWindow)
    {
        try
        {
            var result = Driver.SiInitialize();
            if (result != Driver.SpwRetVal.SPW_NO_ERROR)
            {
                var message = Marshal.PtrToStringAnsi(Driver.SpwErrorString(result));
                Messages.Info($"[SpaceNavigator] Driver not initialized: {message}");
                return false;
            }

            _WindowMessageCode = Win32Api.RegisterWindowMessage("SpaceWareMessage00");
            IntPtr windowHandle = new WindowInteropHelper(targetWindow).Handle;
            Driver.SiOpenData openData = new();
            Driver.SiOpenWinInit(ref openData, windowHandle);
            
            _DeviceHandle = Driver.SiOpen("Macad3D", -1 /* and device */, IntPtr.Zero, 1 /* Event */, ref openData);
            if (_DeviceHandle == IntPtr.Zero)
            {
                Messages.Warning("[SpaceNavigator] Device could not be opened.");
                return false;
            }
            
            var hwndSource = HwndSource.FromHwnd(windowHandle);
            if (hwndSource == null)
            {
                Console.WriteLine("[SpaceNavigator] Window hook not successful.");
                return false;
            }
            hwndSource.AddHook(_WndProc);

            _Initialized = true;
            _UpdateParameters();

            return true;
        }
        catch (DllNotFoundException)
        {
            Console.WriteLine("[SpaceNavigator] Device driver dll not found (siapp.dll).");
            return false;
        }
        catch (Exception)
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _UpdateParameters()
    {
        Debug.Assert(InteractiveContext.Current != null);

        // Init parameters
        var paramSet = InteractiveContext.Current.Parameters.Get<SpaceNavigatorParameterSet>();
        _MoveDataDivisor = _MoveDataDivisorScale * paramSet.MoveSensitivity;
        _RotateDataDivisor = _RotateDataDivisorScale * paramSet.RotationSensitivity;
        _ZoomDataDivisor = _ZoomDataDivisorScale * paramSet.ZoomSensitivity;
        _RollDeadZone = paramSet.RollDeadZone;
    }

    //--------------------------------------------------------------------------------------------------

    IntPtr _WndProc(IntPtr hwnd, int msg, IntPtr wparam, IntPtr lparam, ref bool handled)
    {
        if ((uint) msg == _WindowMessageCode)
        {
            var viewportController = InteractiveContext.Current.ViewportController;
            if (viewportController != null)
            {
                Driver.SiGetEventData eventData = new();
                Driver.SiSpwEvent evt = new();
                Driver.SiGetEventWinInit(ref eventData, _WindowMessageCode, wparam, lparam);
                if (Driver.SiGetEvent(_DeviceHandle, 0, ref eventData, ref evt) == Driver.SpwRetVal.SI_IS_EVENT
                    && evt.Type == Driver.SiEventType.SI_MOTION_EVENT)
                {
                    double panX = -evt.Tx / (_MoveDataDivisor * viewportController.Viewport.Scale);
                    double panY = -evt.Ty / (_MoveDataDivisor * viewportController.Viewport.Scale);
                    viewportController.Pan(panX, panY);

                    double zoom = evt.Tz / _ZoomDataDivisor;
                    viewportController.Zoom(zoom);

                    double rotX = evt.Rx / _RotateDataDivisor;
                    double rotY = evt.Ry / _RotateDataDivisor;
                    double rotZ = -evt.Rz / _RotateDataDivisor;

                    // Add dead zone to rolling
                    if (Math.Abs(rotZ) < _RollDeadZone)
                    {
                        rotZ = 0.0;
                    }
                    else
                    {
                        rotZ -= rotZ > 0 ? _RollDeadZone : -_RollDeadZone;
                    }

                    viewportController.Rotate(rotY, rotX, rotZ);
                    viewportController.MouseMove(Keyboard.Modifiers);
                }
            }

            handled = true;
        }
        return IntPtr.Zero;
    }

    //--------------------------------------------------------------------------------------------------

    public void DeInit()
    {
        if (_Initialized)
        {
            Driver.SiTerminate();
            _Initialized = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static SpaceNavigator()
    {
        SpaceNavigatorParameterSet.ParameterChanged += (set, key) => _UpdateParameters();
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    static class Driver
    {
        internal enum SpwRetVal
        {
            SPW_NO_ERROR = 0,
            SI_IS_EVENT = 5
        }

        internal enum SiEventType
        {
            SI_MOTION_EVENT = 2
        }

        [StructLayout(LayoutKind.Sequential, Size = 284)]
        internal struct SiOpenData
        {
        }

        [StructLayout(LayoutKind.Sequential, Size = 20)]
        internal struct SiGetEventData
        {
        }

        [StructLayout(LayoutKind.Sequential, Size = 5124)]
        internal struct SiSpwEvent
        {
            internal SiEventType Type;
            internal uint BtnLast;
            internal uint BtnCurrent;
            internal uint BtnPressed;
            internal uint BtnReleased;
            internal int Tx;
            internal int Ty;
            internal int Tz;
            internal int Rx;
            internal int Ry;
            internal int Rz;
            internal int Period;
        }

        [DllImport("siappdll")]
        internal static extern SpwRetVal SiInitialize();

        [DllImport("siappdll")]
        internal static extern void SiTerminate();

        [DllImport("siappdll")]
        internal static extern IntPtr SpwErrorString(SpwRetVal code);

        [DllImport("siappdll")]
        internal static extern void SiOpenWinInit(ref SiOpenData openData, IntPtr windowHandle);

        [DllImport("siappdll", CharSet = CharSet.Ansi)]
        internal static extern IntPtr SiOpen(string appName, int deviceId, IntPtr typeMask, int mode, ref SiOpenData openData);

        [DllImport("siappdll")]
        internal static extern IntPtr SiGetEventWinInit(ref SiGetEventData eventData, uint msg, IntPtr wparam, IntPtr lparam);

        [DllImport("siappdll")]
        internal static extern SpwRetVal SiGetEvent(IntPtr deviceHandle, int flags, ref SiGetEventData eventData, ref SiSpwEvent spwEvent);
    }
}
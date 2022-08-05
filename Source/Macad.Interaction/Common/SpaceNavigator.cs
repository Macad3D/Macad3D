using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Input;
using System.Windows.Interop;
using Macad.Common;
using Macad.Core;
using Macad.Interop;

namespace Macad.Interaction
{
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
        SpaceNavigatorInterop _DeviceInterop;

        static double _MoveDataDivisor = _MoveDataDivisorScale;
        static double _RotateDataDivisor = _RotateDataDivisorScale;
        static double _ZoomDataDivisor = _ZoomDataDivisorScale;
        static double _RollDeadZone = 1.25;

        //--------------------------------------------------------------------------------------------------

        public bool Init(Window targetWindow)
        {
            try
            {
                _DeviceInterop = new SpaceNavigatorInterop();

                var windowInteropHelper = new WindowInteropHelper(targetWindow);

                if (!_DeviceInterop.Initialize(windowInteropHelper.Handle.ToInt64()))
                {
                    Messages.Info("[SpaceNavigator] " + _DeviceInterop.LastMessage);
                }

                _WindowMessageCode = _DeviceInterop.WindowMessageCode;

                var hwndSource = HwndSource.FromHwnd(windowInteropHelper.Handle);
                if (hwndSource == null)
                {
                    Console.WriteLine("[SpaceNavigator] Window hook not successful.");
                    return false;
                }
                hwndSource.AddHook(_WndProc);

                Console.WriteLine("[SpaceNavigator] Device " + _DeviceInterop.LastMessage + " initialized and opened.");
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
                    var spaceEvent = _DeviceInterop.ProcessMessage(wparam, lparam);
                    switch (spaceEvent)
                    {
                        case SpaceNavigatorInterop.MotionData motionData:
                            double panX = -motionData.Tx / (_MoveDataDivisor * viewportController.Viewport.Scale);
                            double panY = -motionData.Ty / (_MoveDataDivisor * viewportController.Viewport.Scale);
                            viewportController.Pan(panX, panY);

                            double zoom = motionData.Tz / _ZoomDataDivisor;
                            viewportController.Zoom(zoom);

                            double rotX = -motionData.Rx / _RotateDataDivisor;
                            double rotY = motionData.Ry / _RotateDataDivisor;
                            double rotZ = -motionData.Rz / _RotateDataDivisor;

                            // Add dead zone to rolling
                            if (Math.Abs(rotZ) < _RollDeadZone)
                            {
                                rotZ = 0.0;
                            }
                            else
                            {
                                rotZ -= (rotZ > 0) ? _RollDeadZone : -_RollDeadZone;
                            }

                            viewportController.Rotate(rotX, rotY, rotZ);
                            viewportController.MouseMove(Keyboard.Modifiers);
                            break;
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
                _DeviceInterop.Terminate();
                _Initialized = false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        static SpaceNavigator()
        {
            SpaceNavigatorParameterSet.ParameterChanged += (set, key) => _UpdateParameters();
        }
    }
}

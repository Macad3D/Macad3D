using System;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction;

public class RotateAction : ToolAction
{
    #region Enums

    [Flags]
    enum RotateMode
    {
        AxisX = 0,
        AxisY = 1,
        AxisZ = 2,
        None = 0xf,
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties and Members

    public bool IsRotating { get { return _RotateMode != RotateMode.None; } }

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _CoordinateSystem;
    readonly Circle[] _Gizmos = new Circle[3];
    Marker _CenterMarker;
    double _StartValue;
    Pln _RotationPlane = Pln.XOY;
    Ax1 _RotationAxis;
    double _Delta;
    DeltaHudElement _DeltaHudElement;
    RotateMode _RotateMode = RotateMode.None;
    HintLine _AxisHintLine;

    //--------------------------------------------------------------------------------------------------

    #endregion
                            
    #region Events

    public class EventArgs
    {
        public Ax1 Axis { get; init; }
        public double Delta { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(RotateAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create'n'Start

    public RotateAction(Ax3 coordinateSystem)
    {
        _CoordinateSystem = coordinateSystem;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        OpenSelectionContext();
        _UpdateGizmo();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
    
    protected override void Cleanup()
    {
        Preview = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Gizmo

    void _UpdateGizmo()
    {
        for (int i = 0; i < _Gizmos.Length; i++)
        {
            var mode = (RotateMode)i;
            if (_Gizmos[i] == null)
            {
                _Gizmos[i] ??= new Circle(WorkspaceController, Circle.Style.NoResize | Circle.Style.Topmost)
                {
                    Color = _GetColorByMode(mode),
                    IsSelectable = true,
                    Width = 4.0,
                    Radius = 2.0,
                    KnobPosition = 0.0
                };
                Add(_Gizmos[i]);
            }

            _Gizmos[i].Sector = _RotateMode == mode
                                    ? (_StartValue - _Delta, _StartValue)
                                    : (0, 0);
        }

        Ax3 rotatedCS = _RotateMode == RotateMode.None ? _CoordinateSystem : _CoordinateSystem.Rotated(_RotationAxis, _Delta);
        _Gizmos[0].Set(new Ax2(rotatedCS.Location, rotatedCS.XDirection, rotatedCS.YDirection));
        _Gizmos[1].Set(new Ax2(rotatedCS.Location, rotatedCS.YDirection, rotatedCS.Direction));
        _Gizmos[2].Set(new Ax2(rotatedCS.Location, rotatedCS.Direction, rotatedCS.XDirection));
        
        /* Center Marker */
        if (_CenterMarker == null)
        {
            _CenterMarker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage)
            {
                Color = Colors.ActionWhite,
                IsSelectable = false
            };
            Add(_CenterMarker);
        }
        _CenterMarker.Set(rotatedCS.Location);
    }

    //--------------------------------------------------------------------------------------------------

    Color _GetColorByMode(RotateMode mode)
    {
        return mode switch
        {
            RotateMode.AxisX => Colors.ActionRed,
            RotateMode.AxisY => Colors.ActionGreen,
            RotateMode.AxisZ => Colors.ActionBlue,
            _ => Colors.Auxillary
        };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

    public override bool OnMouseDown(MouseEventData data)
    {
        _RotateMode = RotateMode.None;
        for (int i = 0; i < _Gizmos.Length; i++)
        {
            var gizmo = _Gizmos[i];
            if (Equals(data.DetectedAisObject, gizmo?.AisObject))
            {
                _RotateMode = (RotateMode)i;
                Dir axisDir = Dir.DX;
                Dir rightDir = Dir.DZ;
                switch (_RotateMode)
                {
                    case RotateMode.AxisX: 
                        axisDir = _CoordinateSystem.XDirection;
                        rightDir = _CoordinateSystem.Direction;
                        break;
                    case RotateMode.AxisY: 
                        axisDir = _CoordinateSystem.YDirection;
                        rightDir = _CoordinateSystem.Direction;
                        break;
                    case RotateMode.AxisZ: 
                        axisDir = _CoordinateSystem.Direction;
                        rightDir = _CoordinateSystem.XDirection;
                        break;
                }
                _RotationAxis = new Ax1(_CoordinateSystem.Location, axisDir);
                _RotationPlane = new Pln(new Ax3(_CoordinateSystem.Location, axisDir, rightDir));

                _Gizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                gizmo.IsSelected = true;
                break;
            }
        }

        if (_RotateMode != RotateMode.None)
        {
            Pnt resultPnt;
            if (WorkspaceController.ActiveViewControlller.ScreenToPoint(_RotationPlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
            {
                var planeDelta = ProjLib.Project(_RotationPlane, resultPnt);
                _StartValue = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord));
            }

            _AxisHintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            Add(_AxisHintLine);
            _AxisHintLine.Set(_RotationAxis);
            WorkspaceController.Invalidate();

            SetCursor(Cursors.Rotate);
            return true;
        }
        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_RotateMode != RotateMode.None)
        {
            _RotateMode = RotateMode.None;
            SetCursor(null);

            Remove(_AxisHintLine);
            _AxisHintLine = null;

            Remove(_DeltaHudElement);
            _DeltaHudElement = null;

            if (_Delta != 0)
            {
                // Commit
                IsFinished = true;
                EventArgs args = new()
                {
                    Axis = _RotationAxis,
                    Delta = _Delta,
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);
            }

            WorkspaceController.Invalidate();
            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_RotateMode != RotateMode.None)
        {
            Pnt resultPnt;
            if (!WorkspaceController.ActiveViewControlller.ScreenToPoint(_RotationPlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
                return false;

            var planeDelta = ProjLib.Project(_RotationPlane, resultPnt);
            _Delta = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord)) - _StartValue;

            // Transform into unrotated frame
            //Debug.WriteLine(">> {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);
            //Delta.Transform(_InverseRotation);
            //Debug.WriteLine("<< {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);

            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                _Delta = Maths.RoundToNearest(_Delta, 5.0.ToRad());
            }

            _UpdateGizmo();
            data.Return.ForceReDetection = true;

            if (_DeltaHudElement == null)
            {
                _DeltaHudElement = new DeltaHudElement
                {
                    Units = ValueUnits.Degree,
                };
                Add(_DeltaHudElement);
            }
            _DeltaHudElement.Delta = _Delta.ToDeg();
             
            EventArgs args = new()
            {
                Axis = _RotationAxis,
                Delta = _Delta,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);
            return base.OnMouseMove(data);
        }
        return false;
    }

    #endregion
}
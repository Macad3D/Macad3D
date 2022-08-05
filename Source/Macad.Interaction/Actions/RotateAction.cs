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
    [Flags]
    enum RotateMode
    {
        AxisX = 0,
        AxisY = 1,
        AxisZ = 2,
        None = 0xf,
    }

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _CoordinateSystem;
    readonly Circle[] _Gizmos = new Circle[3];
    SelectionContext _SelectionContext;
    double _StartValue;
    Pln _RotationPlane = Pln.XOY;
    public Ax1 RotationAxis { get; private set; }
    public double Delta;
    public bool IsRotating { get { return _RotateMode != RotateMode.None; } }
    DeltaHudElement _DeltaHudElement;
    RotateMode _RotateMode = RotateMode.None;
    HintLine _AxisHintLine;

    //--------------------------------------------------------------------------------------------------

    public RotateAction(object owner, Ax3 coordinateSystem)
        : base(owner)
    {
        _CoordinateSystem = coordinateSystem;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Start()
    { 
        _SelectionContext = WorkspaceController.Selection.OpenContext();

        _UpdateGizmo();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateGizmo()
    {
        for (int i = 0; i < _Gizmos.Length; i++)
        {
            var mode = (RotateMode)i;
            _Gizmos[i] ??= new Circle(WorkspaceController, Circle.Style.NoResize | Circle.Style.Topmost)
            {
                Color = _GetColorByMode(mode),
                IsSelectable = true,
                Width = 4.0,
                Radius = 2.0
            };

            _Gizmos[i].Sector = _RotateMode == mode
                                    ? (_StartValue - Delta, _StartValue)
                                    : (0, 0);
        }

        Ax3 rotatedCS = _RotateMode == RotateMode.None ? _CoordinateSystem : _CoordinateSystem.Rotated(RotationAxis, Delta);
        _Gizmos[0].Set(new Ax2(rotatedCS.Location, rotatedCS.XDirection, rotatedCS.Direction));
        _Gizmos[1].Set(new Ax2(rotatedCS.Location, rotatedCS.YDirection, rotatedCS.Direction));
        _Gizmos[2].Set(new Ax2(rotatedCS.Location, rotatedCS.Direction, rotatedCS.XDirection));
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        for (var i = 0; i < _Gizmos.Length; i++)
        {
            _Gizmos[i]?.Remove();
            _Gizmos[i] = null;
        }

        _AxisHintLine?.Remove();

        WorkspaceController.Selection.CloseContext(_SelectionContext);
        _SelectionContext = null;

        base.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        _RotateMode = RotateMode.None;
        for (int i = 0; i < _Gizmos.Length; i++)
        {
            var gizmo = _Gizmos[i];
            if (data.DetectedAisInteractives.Contains(gizmo?.AisObject))
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
                RotationAxis = new Ax1(_CoordinateSystem.Location, axisDir);
                _RotationPlane = new Pln(new Ax3(_CoordinateSystem.Location, axisDir, rightDir));

                _Gizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                gizmo.IsSelected = true;
                break;
            }
        }

        if (_RotateMode != RotateMode.None)
        {
            Pnt resultPnt;
            if (WorkspaceController.ActiveViewport.ScreenToPoint(_RotationPlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
            {
                var planeDelta = ProjLib.Project(_RotationPlane, resultPnt);
                _StartValue = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord));
            }

            _AxisHintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            _AxisHintLine.Set(RotationAxis);
            WorkspaceController.Invalidate();

            WorkspaceController.HudManager?.SetCursor(Cursors.Rotate);
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
            WorkspaceController.HudManager?.SetCursor(null);

            _AxisHintLine?.Remove();
            _AxisHintLine = null;

            WorkspaceController.HudManager?.RemoveElement(_DeltaHudElement);
            _DeltaHudElement = null;

            if (Delta != 0)
            {
                // Commit
                Stop();
                IsFinished = true;
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
            if (!WorkspaceController.ActiveViewport.ScreenToPoint(_RotationPlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
                return false;

            var planeDelta = ProjLib.Project(_RotationPlane, resultPnt);
            Delta = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord)) - _StartValue;

            // Transform into unrotated frame
            //Debug.WriteLine(">> {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);
            //Delta.Transform(_InverseRotation);
            //Debug.WriteLine("<< {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);

            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                Delta = Maths.RoundToNearest(Delta, 5.0.ToRad());
            }

            _UpdateGizmo();
            data.ForceReDetection = true;

            _DeltaHudElement ??= WorkspaceController.HudManager?.CreateElement<DeltaHudElement>(this);
            if (_DeltaHudElement != null)
            {
                _DeltaHudElement.Units = ValueUnits.Degree;
                _DeltaHudElement.Delta = Delta.ToDeg();
            }

            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    Quantity_Color _GetColorByMode(RotateMode mode)
    {
        return mode switch
        {
            RotateMode.AxisX => Colors.ActionRed,
            RotateMode.AxisY => Colors.ActionGreen,
            RotateMode.AxisZ => Colors.ActionBlue,
            _ => Colors.Auxillary
        };
    }
}
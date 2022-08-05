using System;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction;

public class TranslateAction : ToolAction
{
    [Flags]
    enum MoveMode
    {
        None = 0,

        AxisX = 1,
        AxisY = 2,
        AxisZ = 3,
        Axis = 3,

        PlaneYZ = 1 << 2,
        PlaneXZ = 2 << 2,
        PlaneXY = 3 << 2,
        Plane = 3 << 2
    }

    //--------------------------------------------------------------------------------------------------

    public Vec Delta
    {
        get { return _Delta; }
    }

    public bool IsMoving { get { return _MoveMode != MoveMode.None; } }

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _CoordinateSystem;
    readonly Trsf _InverseRotation;
    SelectionContext _SelectionContext;
    Pnt2d _MoveStartValue;
    Ax1 _MoveAxis;
    Pln _MovePlane;

    readonly Axis[] _AxisGizmos = new Axis[3];
    readonly Plane[] _PlaneGizmos = new Plane[3];
    Coord3dHudElement _Coord3dHudElement;
    Delta3DHudElement _Delta3DHudElement;
    HintLine _AxisHintLine;

    MoveMode _MoveMode = MoveMode.None;
    Vec _Delta;

    //--------------------------------------------------------------------------------------------------


    public TranslateAction(object owner, Ax3 coordinateSystem)
        : base(owner)
    {
        _CoordinateSystem = coordinateSystem;

        // Create inverse rotation matrix
        var rotAx3 = _CoordinateSystem;
        rotAx3.Location = Pnt.Origin;
        _InverseRotation = new Trsf(rotAx3);
        _InverseRotation.Invert();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Start()
    { 
        _SelectionContext = WorkspaceController.Selection.OpenContext();

        UpdateGizmo();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateGizmo()
    {
        Ax3 translatedCS = _MoveMode == MoveMode.None ? _CoordinateSystem : _CoordinateSystem.Translated(Delta);

        /* Axes */
        for (int i = 0; i < _AxisGizmos.Length; i++)
        {
            var mode = (MoveMode)i+1;
            _AxisGizmos[i] ??= new Axis(WorkspaceController, Axis.Style.Headless | Axis.Style.NoResize | Axis.Style.Topmost)
            {
                Color = _GetColorByMode(mode),
                IsSelectable = true,
                Width = 4.0,
                Length = 2.0
            };
        }

        _AxisGizmos[0].Set(new Ax1(translatedCS.Location, translatedCS.XDirection));
        _AxisGizmos[1].Set(new Ax1(translatedCS.Location, translatedCS.YDirection));
        _AxisGizmos[2].Set(new Ax1(translatedCS.Location, translatedCS.Direction));

        /* Planes */
        for (int i = 0; i < _PlaneGizmos.Length; i++)
        {
            var mode = (MoveMode)(i + 1 << 2);
            _PlaneGizmos[i] ??= new Plane(WorkspaceController, Plane.Style.NoResize | Plane.Style.Topmost)
            {
                Color = _GetColorByMode(mode),
                IsSelectable = true,
                Boundary = true,
                Size = new XY(1, 1),
                Margin = new Vec2d(0.75, 0.75),
                Transparency = 0.5
            };
        }

        _PlaneGizmos[0].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.XDirection, translatedCS.YDirection)));
        _PlaneGizmos[1].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.YDirection, translatedCS.Direction)));
        _PlaneGizmos[2].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.Direction, translatedCS.XDirection)));
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        for (var i = 0; i < _AxisGizmos.Length; i++)
        {
            _AxisGizmos[i]?.Remove();
            _AxisGizmos[i] = null;
        }
        for (var i = 0; i < _PlaneGizmos.Length; i++)
        {
            _PlaneGizmos[i]?.Remove();
            _PlaneGizmos[i] = null;
        }

        _AxisHintLine?.Remove();

        WorkspaceController.Selection.CloseContext(_SelectionContext);
        _SelectionContext = null;

        base.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    void _DetectGizmos(MouseEventData data)
    {
        for (int i = 0; i < _AxisGizmos.Length; i++)
        {
            var gizmo = _AxisGizmos[i];
            if (data.DetectedAisInteractives.Contains(gizmo?.AisObject))
            {
                _MoveMode = (MoveMode)i + 1;
                Dir translateDir = _MoveMode switch
                {
                    MoveMode.AxisX => _CoordinateSystem.XDirection,
                    MoveMode.AxisY => _CoordinateSystem.YDirection,
                    MoveMode.AxisZ => _CoordinateSystem.Direction,
                    _ => Dir.DX
                };
                _MoveAxis = new Ax1(_CoordinateSystem.Location, translateDir);

                _AxisGizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                _PlaneGizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                gizmo.IsSelected = true;
                return;
            }
        } 

        for (int i = 0; i < _PlaneGizmos.Length; i++)
        {
            var gizmo = _PlaneGizmos[i];
            if (data.DetectedAisInteractives.Contains(gizmo?.AisObject))
            {
                _MoveMode = (MoveMode)(i + 1 << 2);

                Dir axisDir = Dir.DX;
                Dir rightDir = Dir.DZ;
                switch (_MoveMode)
                {
                    case MoveMode.PlaneXY:
                        axisDir = _CoordinateSystem.Direction;
                        rightDir = _CoordinateSystem.XDirection;
                        break;
                    case MoveMode.PlaneXZ:
                        axisDir = _CoordinateSystem.YDirection;
                        rightDir = _CoordinateSystem.Direction;
                        break;
                    case MoveMode.PlaneYZ:
                        axisDir = _CoordinateSystem.XDirection;
                        rightDir = _CoordinateSystem.Direction;
                        break;
                }

                _MovePlane = new Pln(new Ax3(_CoordinateSystem.Location, axisDir, rightDir));

                _AxisGizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                _PlaneGizmos.ForEach(gizmo => gizmo.IsSelectable = false);
                gizmo.IsSelected = true;
                return;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        _MoveMode = MoveMode.None;
        _Delta = Vec.Zero;

        _DetectGizmos(data);

        if ((_MoveMode & MoveMode.Axis) != 0)
        {
            var axisDelta = _ProcessMouseInputForAxis(data);
            if (axisDelta.HasValue)
            {
                _MoveStartValue.X = axisDelta.Value;
                _MoveStartValue.Y = 0;
            }
            else
            {
                _MoveStartValue.X = 0;
                _MoveStartValue.Y = 0;
            }

            _AxisHintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
            _AxisHintLine.Color = _GetColorByMode(_MoveMode);
            _AxisHintLine.Set(_MoveAxis);
            WorkspaceController.Invalidate();
            WorkspaceController.HudManager?.SetCursor(Cursors.Move);
            return true;
        }

        if ((_MoveMode & MoveMode.Plane) != 0)
        {
            Pnt resultPnt;
            if (WorkspaceController.ActiveViewport.ScreenToPoint(_MovePlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
            {
                _MoveStartValue = ProjLib.Project(_MovePlane, resultPnt);
            }

            WorkspaceController.Invalidate();
            WorkspaceController.HudManager?.SetCursor(Cursors.Move);
            return true;
        }

        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_MoveMode != MoveMode.None)
        {
            _MoveMode = MoveMode.None;
            WorkspaceController.HudManager?.SetCursor(null);

            _AxisHintLine?.Remove();

            WorkspaceController.HudManager?.RemoveElement(_Coord3dHudElement);
            _Coord3dHudElement = null;
            WorkspaceController.HudManager?.RemoveElement(_Delta3DHudElement);
            _Delta3DHudElement = null;

            if (_Delta.SquareMagnitude() > 0)
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
        if (_MoveMode != MoveMode.None)
        {
            if ((_MoveMode & MoveMode.Axis) != 0)
            {
                var axisDelta = _ProcessMouseInputForAxis(data) - _MoveStartValue.X;
                if (!axisDelta.HasValue)
                    return false;

                _Delta = Vec.Zero;

                switch (_MoveMode)
                {
                    case MoveMode.AxisX:
                        _Delta.X = axisDelta.Value;
                        break;
                    case MoveMode.AxisY:
                        _Delta.Y = axisDelta.Value;
                        break;
                    case MoveMode.AxisZ:
                        _Delta.Z = axisDelta.Value;
                        break;
                }
            }
            else if ((_MoveMode & MoveMode.Plane) != 0)
            {
                Pnt resultPnt;
                if (!WorkspaceController.ActiveViewport.ScreenToPoint(_MovePlane, (int) data.ScreenPoint.X, (int) data.ScreenPoint.Y, out resultPnt))
                    return false;

                _Delta = Vec.Zero;

                var planeDelta = ProjLib.Project(_MovePlane, resultPnt).Translated(_MoveStartValue, Pnt2d.Origin);
                switch (_MoveMode)
                {
                    case MoveMode.PlaneYZ:
                        _Delta.Z = planeDelta.X;
                        _Delta.Y = -planeDelta.Y;
                        break;
                    case MoveMode.PlaneXZ:
                        _Delta.Z = planeDelta.X;
                        _Delta.X = planeDelta.Y;
                        break;
                    case MoveMode.PlaneXY:
                        _Delta.X = planeDelta.X;
                        _Delta.Y = planeDelta.Y;
                        break;
                }
            }

            // Transform into unrotated frame
            //Debug.WriteLine(">> {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);
            _Delta.Transform(_InverseRotation);
            //Debug.WriteLine("<< {0}  {1}  {2}", Delta.x, Delta.y, Delta.z);

            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                _Delta.X = Maths.RoundToNearest(_Delta.X, WorkspaceController.Workspace.GridStep);
                _Delta.Y = Maths.RoundToNearest(_Delta.Y, WorkspaceController.Workspace.GridStep);
                _Delta.Z = Maths.RoundToNearest(_Delta.Z, WorkspaceController.Workspace.GridStep);
            }

            UpdateGizmo();
            data.ForceReDetection = true;

            if (_Coord3dHudElement == null)
            {
                _Coord3dHudElement = WorkspaceController.HudManager?.CreateElement<Coord3dHudElement>(this);
                _Delta3DHudElement = WorkspaceController.HudManager?.CreateElement<Delta3DHudElement>(this);
            }

            if (_Coord3dHudElement != null)
            {
                var coord = _CoordinateSystem.Location.Translated(_Delta);
                _Coord3dHudElement.CoordinateX = coord.X;
                _Coord3dHudElement.CoordinateY = coord.Y;
                _Coord3dHudElement.CoordinateZ = coord.Z;
            }

            if (_Delta3DHudElement != null)
            {
                _Delta3DHudElement.DeltaX = Delta.X;
                _Delta3DHudElement.DeltaY = Delta.Y;
                _Delta3DHudElement.DeltaZ = Delta.Z;
            }

            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    double? _ProcessMouseInputForAxis(MouseEventData data)
    {
        var planeDir = WorkspaceController.ActiveViewport.GetRightDirection();
        if (planeDir.IsParallel(_MoveAxis.Direction, 0.1))
        {
            planeDir = WorkspaceController.ActiveViewport.GetUpDirection();
        }
        planeDir.Cross(_MoveAxis.Direction);
        //Console.WriteLine("PlaneDir: {0:0.00} | {1:0.00} | {2:0.00}", planeDir.X(), planeDir.Y(), planeDir.Z());
        var plane = new Pln(new Ax3(_MoveAxis.Location, planeDir, _MoveAxis.Direction));

        Pnt convertedPoint;
        if (WorkspaceController.ActiveViewport.ScreenToPoint(plane, Convert.ToInt32(data.ScreenPoint.X), Convert.ToInt32(data.ScreenPoint.Y), out convertedPoint))
        {
            var extrema = new Extrema_ExtPC(convertedPoint, new GeomAdaptor_Curve(new Geom_Line(_MoveAxis)), 1.0e-10);
            if (extrema.IsDone() && extrema.NbExt() >= 1)
            {
                var value = extrema.Point(1).Parameter();
                return value;
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    Quantity_Color _GetColorByMode(MoveMode mode)
    {
        return mode switch
        {
            MoveMode.AxisX => Colors.ActionRed,
            MoveMode.AxisY => Colors.ActionGreen,
            MoveMode.AxisZ => Colors.ActionBlue,
            MoveMode.PlaneXY => Colors.ActionBlue,
            MoveMode.PlaneXZ => Colors.ActionGreen,
            MoveMode.PlaneYZ => Colors.ActionRed,
            _ => Colors.Auxillary,
        };
    }
}
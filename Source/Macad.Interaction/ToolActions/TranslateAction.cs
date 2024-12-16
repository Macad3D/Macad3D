using System;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction;

public class TranslateAction : ToolAction
{
    #region Enums

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

    #endregion
                        
    #region Events

    public class EventArgs
    {
        public Vec Delta { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(TranslateAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties and Members

    public bool IsMoving { get { return _MoveMode != MoveMode.None; } }

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _CoordinateSystem;
    readonly Trsf _InverseRotation;
    Pnt2d _MoveStartValue;
    Ax1 _MoveAxis;
    Pln _MovePlane;

    readonly Axis[] _AxisGizmos = new Axis[3];
    readonly Plane[] _PlaneGizmos = new Plane[3];
    Marker _CenterMarker;
    Coord3DHudElement _Coord3DHudElement;
    Delta3DHudElement _Delta3DHudElement;
    HintLine _AxisHintLine;

    MoveMode _MoveMode = MoveMode.None;
    Vec _Delta;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create'n'Start

    public TranslateAction(Ax3 coordinateSystem)
    {
        _CoordinateSystem = coordinateSystem;

        // Create inverse rotation matrix
        var rotAx3 = _CoordinateSystem;
        rotAx3.Location = Pnt.Origin;
        _InverseRotation = new Trsf(rotAx3);
        _InverseRotation.Invert();
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        OpenSelectionContext();
        UpdateGizmo();
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

    void UpdateGizmo()
    {
        Ax3 translatedCS = _MoveMode == MoveMode.None ? _CoordinateSystem : _CoordinateSystem.Translated(_Delta);

        /* Axes */
        for (int i = 0; i < _AxisGizmos.Length; i++)
        {
            var mode = (MoveMode)i+1;
            if (_AxisGizmos[i] == null)
            {
                _AxisGizmos[i] = new Axis(WorkspaceController, Axis.Style.KnobHead | Axis.Style.NoResize | Axis.Style.Topmost)
                {
                    Color = _GetColorByMode(mode),
                    IsSelectable = true,
                    Width = 4.0,
                    Length = 2.0,
                    Margin = 0.25
                };
                Add(_AxisGizmos[i]);
            }
        }

        _AxisGizmos[0].Set(new Ax1(translatedCS.Location, translatedCS.XDirection));
        _AxisGizmos[1].Set(new Ax1(translatedCS.Location, translatedCS.YDirection));
        _AxisGizmos[2].Set(new Ax1(translatedCS.Location, translatedCS.Direction));

        /* Planes */
        for (int i = 0; i < _PlaneGizmos.Length; i++)
        {
            var mode = (MoveMode)(i + 1 << 2);
            if (_PlaneGizmos[i] == null)
            {
                _PlaneGizmos[i] = new Plane(WorkspaceController, Plane.Style.NoResize | Plane.Style.Topmost)
                {
                    Color = _GetColorByMode(mode),
                    IsSelectable = true,
                    Boundary = true,
                    Size = new XY(1, 1),
                    Margin = new Vec2d(0.75, 0.75),
                    Transparency = 0.5
                };
                Add(_PlaneGizmos[i]);
            }
        }

        _PlaneGizmos[0].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.XDirection, translatedCS.YDirection)));
        _PlaneGizmos[1].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.YDirection, translatedCS.Direction)));
        _PlaneGizmos[2].Set(new Pln(new Ax3(translatedCS.Location, translatedCS.Direction, translatedCS.XDirection)));

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
        _CenterMarker.Set(translatedCS.Location);
    }

    //--------------------------------------------------------------------------------------------------

    void _DetectGizmos(MouseEventData data)
    {
        for (int i = 0; i < _AxisGizmos.Length; i++)
        {
            var gizmo = _AxisGizmos[i];
            if (Equals(data.DetectedAisObject, gizmo?.AisObject))
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
            if (Equals(data.DetectedAisObject, gizmo?.AisObject))
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
    
    Color _GetColorByMode(MoveMode mode)
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

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IMouseEventHandler

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

            _AxisHintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed)
            {
                Color = _GetColorByMode(_MoveMode)
            };
            Add(_AxisHintLine);
            _AxisHintLine.Set(_MoveAxis);
            WorkspaceController.Invalidate();
            SetCursor(Cursors.Move);
            return true;
        }

        if ((_MoveMode & MoveMode.Plane) != 0)
        {
            if (WorkspaceController.ActiveViewControlller.ScreenToPoint(_MovePlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out var resultPnt))
            {
                _MoveStartValue = ProjLib.Project(_MovePlane, resultPnt);
            }

            WorkspaceController.Invalidate();
            SetCursor(Cursors.Move);
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
            SetCursor(null);

            Remove(_AxisHintLine);
            _AxisHintLine = null;
            Remove(_Coord3DHudElement);
            _Coord3DHudElement = null;
            Remove(_Delta3DHudElement);
            _Delta3DHudElement = null;

            if (_Delta.SquareMagnitude() > 0)
            {
                // Commit
                IsFinished = true;
                EventArgs args = new()
                {
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
                if (!WorkspaceController.ActiveViewControlller.ScreenToPoint(_MovePlane, (int) data.ScreenPoint.X, (int) data.ScreenPoint.Y, out resultPnt))
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

            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                _Delta.X = Maths.RoundToNearest(_Delta.X, WorkspaceController.Workspace.GridStep);
                _Delta.Y = Maths.RoundToNearest(_Delta.Y, WorkspaceController.Workspace.GridStep);
                _Delta.Z = Maths.RoundToNearest(_Delta.Z, WorkspaceController.Workspace.GridStep);
            }

            if (_Coord3DHudElement == null)
            {
                _Coord3DHudElement = new Coord3DHudElement();
                Add(_Coord3DHudElement);
                _Delta3DHudElement = new Delta3DHudElement();
                Add(_Delta3DHudElement);
            }

            var coord = _CoordinateSystem.Location.Translated(_Delta);
            _Coord3DHudElement.SetValues(coord.X, coord.Y, coord.Z);
            _Delta3DHudElement.SetValues(_Delta.X, _Delta.Y, _Delta.Z);
            
            // Transform into unrotated frame
            _Delta.Transform(_InverseRotation);
            UpdateGizmo();
            data.Return.ForceReDetection = true;

            EventArgs args = new()
            {
                Delta = _Delta,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);

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
        var plane = new Pln(new Ax3(_MoveAxis.Location, planeDir, _MoveAxis.Direction));

        Pnt convertedPoint;
        if (WorkspaceController.ActiveViewControlller.ScreenToPoint(plane, Convert.ToInt32(data.ScreenPoint.X), Convert.ToInt32(data.ScreenPoint.Y), out convertedPoint))
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

    #endregion

}
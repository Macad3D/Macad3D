using System;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Occt;
using Macad.Occt.Ext;
using Macad.Presentation;

namespace Macad.Interaction
{
    public class RotateAction : ToolAction
    {
        [Flags]
        enum RotateMode
        {
            None = 0,
            AxisX = 1,
            AxisY = 2,
            AxisZ = 3,
        }

        //--------------------------------------------------------------------------------------------------

        readonly Ax3 _CoordinateSystem;
        SelectionContext _SelectionContext;
        double _StartValue;
        AIS_RotationGizmo _Gizmo;
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
            if (_Gizmo == null)
            {
                _Gizmo = new AIS_RotationGizmo(_CoordinateSystem);
                _Gizmo.SetLength(100);
                WorkspaceController.Workspace.AisContext.Display(_Gizmo, false);
            }
            else
            {
                _Gizmo.SetComponent(_CoordinateSystem.Rotated(RotationAxis, Delta));
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            if (_Gizmo != null)
            {
                _Gizmo.Remove();
                _Gizmo = null;
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
            if (data.DetectedEntities.Count == 0 && _Gizmo != null)
            {
                if (_Gizmo.IsPartDetected(AIS_RotationGizmo.Part.Part_XAxis))
                {
                    _RotateMode = RotateMode.AxisX;
                    RotationAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.XDirection);
                    _RotationPlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.XDirection, _CoordinateSystem.Direction));
                    _Gizmo.ForcePartHilighting(AIS_RotationGizmo.Part.Part_XAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_RotationGizmo.Part.Part_YAxis))
                {
                    _RotateMode = RotateMode.AxisY;
                    RotationAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.YDirection);
                    _RotationPlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.YDirection, _CoordinateSystem.Direction));
                    _Gizmo.ForcePartHilighting(AIS_RotationGizmo.Part.Part_YAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_RotationGizmo.Part.Part_ZAxis))
                {
                    _RotateMode = RotateMode.AxisZ;
                    RotationAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.Direction);
                    _RotationPlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.Direction, _CoordinateSystem.XDirection));
                    _Gizmo.ForcePartHilighting(AIS_RotationGizmo.Part.Part_ZAxis);
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
            }
            return base.OnMouseDown(data);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool shiftSelected)
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
            return base.OnMouseUp(data, shiftSelected);
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

                if (Keyboard.IsKeyDown(Key.LeftCtrl) || Keyboard.IsKeyDown(Key.RightCtrl))
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

    }
}
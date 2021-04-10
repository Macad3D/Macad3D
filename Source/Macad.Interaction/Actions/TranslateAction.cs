using System;
using System.Linq;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Occt;
using Macad.Occt.Ext;

namespace Macad.Interaction
{
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
        AIS_TranslationGizmo _Gizmo;
        Ax1 _MoveAxis;
        Pln _MovePlane;

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
            if (_Gizmo == null)
            {
                _Gizmo = new AIS_TranslationGizmo(_CoordinateSystem.Translated(Delta));
                _Gizmo.SetLength(100);
                WorkspaceController.Workspace.AisContext.Display(_Gizmo, false);
            }
            else
            {
                _Gizmo.SetComponent(_CoordinateSystem.Translated(Delta));
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
            _MoveMode = MoveMode.None;
            if (!data.DetectedEntities.Any() && _Gizmo != null)
            {
                _Delta = Vec.Zero;
 
                if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_XAxis))
                {
                    _MoveMode = MoveMode.AxisX;
                    _MoveAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.XDirection);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_XAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_YAxis))
                {
                    _MoveMode = MoveMode.AxisY;
                    _MoveAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.YDirection);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_YAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_ZAxis))
                {
                    _MoveMode = MoveMode.AxisZ;
                    _MoveAxis = new Ax1(_CoordinateSystem.Location, _CoordinateSystem.Direction);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_ZAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_YZPlane))
                {
                    _MoveMode = MoveMode.PlaneYZ;
                    _MovePlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.XDirection, _CoordinateSystem.Direction));
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_YAxis);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_ZAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_XZPlane))
                {
                    _MoveMode = MoveMode.PlaneXZ;
                    _MovePlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.YDirection, _CoordinateSystem.Direction));
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_XAxis);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_ZAxis);
                }
                else if (_Gizmo.IsPartDetected(AIS_TranslationGizmo.Part.Part_XYPlane))
                {
                    _MoveMode = MoveMode.PlaneXY;
                    _MovePlane = new Pln(new Ax3(_CoordinateSystem.Location, _CoordinateSystem.Direction, _CoordinateSystem.XDirection));
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_XAxis);
                    _Gizmo.ForcePartHilighting(AIS_TranslationGizmo.Part.Part_YAxis);
                }


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
                    _AxisHintLine.Set(_MoveAxis);
                    WorkspaceController.Invalidate();
                    WorkspaceController.HudManager?.SetCursor(Cursors.Move);
                    return true;
                }
                
                if ((_MoveMode & MoveMode.Plane) != 0)
                {
                    Pnt resultPnt;
                    if (WorkspaceController.ActiveViewport.ScreenToPoint(_MovePlane, (int) data.ScreenPoint.X, (int) data.ScreenPoint.Y, out resultPnt))
                    {
                        _MoveStartValue = ProjLib.Project(_MovePlane, resultPnt);
                    }
                    WorkspaceController.Invalidate();
                    WorkspaceController.HudManager?.SetCursor(Cursors.Move);
                    return true;
                }
            }
            return base.OnMouseDown(data);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool shiftSelected)
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
            return base.OnMouseUp(data, shiftSelected);
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

                if (Keyboard.IsKeyDown(Key.LeftCtrl) || Keyboard.IsKeyDown(Key.RightCtrl))
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

    }
}
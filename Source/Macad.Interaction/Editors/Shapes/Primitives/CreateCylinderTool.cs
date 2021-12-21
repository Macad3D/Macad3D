using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateCylinderTool : Tool
    {
        enum Phase
        {
            PivotPoint,
            Radius,
            Height
        }

        //--------------------------------------------------------------------------------------------------

        Phase _CurrentPhase;
        Pln _Plane;
        Pnt _PivotPoint;
        Pnt2d _PointPlane1;
        Pnt2d _PointPlane2;
        double _Radius;

        AIS_Shape _AisPreviewEdges;
        AIS_Shape _AisPreviewSolid;

        Cylinder _PreviewShape;
        Pnt _Position;
        Quaternion _Rotation = Quaternion.Identity;

        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null);

            var pointAction = new PointAction(this);
            if (!WorkspaceController.StartToolAction(pointAction))
                return false;
            pointAction.Previewed += _PreviewPivotPoint;
            pointAction.Finished += _FinishPivotPoint;

            _CurrentPhase = Phase.PivotPoint;
            StatusText = "Select center point.";
            _Coord2DHudElement = WorkspaceController.HudManager?.CreateElement<Coord2DHudElement>(this);
            WorkspaceController.HudManager?.SetCursor(Cursors.SetPoint);
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        void _PreviewPivotPoint(ToolAction toolAction)
        {
            if(!(toolAction is PointAction pointAction))
                return;

            _ClearPreviews();

            if (_Coord2DHudElement != null)
            {
                _Coord2DHudElement.CoordinateX = pointAction.PointOnPlane.X;
                _Coord2DHudElement.CoordinateY = pointAction.PointOnPlane.Y;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishPivotPoint(ToolAction toolAction)
        {
            if(!(toolAction is PointAction pointAction))
                return;
            
            _Plane = WorkspaceController.Workspace.WorkingPlane;
            _PointPlane1 = pointAction.PointOnPlane;
            _PivotPoint = pointAction.Point;

            pointAction.Stop();
            pointAction = new PointAction(this);
            if (!WorkspaceController.StartToolAction(pointAction))
                return;
            pointAction.Previewed += _PreviewRadius;
            pointAction.Finished += _FinishRadius;

            _CurrentPhase = Phase.Radius;
            StatusText = "Select radius.";

            _ValueHudElement = WorkspaceController.HudManager?.CreateElement<ValueHudElement>(this);
            if (_ValueHudElement != null)
            {
                _ValueHudElement.Label = "Radius:";
                _ValueHudElement.Units = ValueUnits.Length;
                _ValueHudElement.ValueEntered += _ValueEntered;
            }

            WorkspaceController.HudManager?.SetCursor(Cursors.SetRadius);
        }

        //--------------------------------------------------------------------------------------------------

        void _PreviewRadius(ToolAction toolAction)
        {
            if(!(toolAction is PointAction pointAction))
                return;

            _ClearPreviews();

            _PointPlane2 = pointAction.PointOnPlane;

            if (_PointPlane1.IsEqual(_PointPlane2, Double.Epsilon))
                return;

            _Radius = new Vec2d(_PointPlane1, _PointPlane2).Magnitude();
            if (_Radius <= Double.Epsilon)
                return;

            var makeCircle = new gce_MakeCirc(_PivotPoint, _Plane.Axis.Direction, _Radius);
            if (!makeCircle.IsDone())
                return;

            var makeEdge = new BRepBuilderAPI_MakeEdge(makeCircle.Value());
            if (!makeEdge.IsDone())
                return;

            var makeWire = new BRepBuilderAPI_MakeWire(makeEdge.Edge());
            if (!makeWire.IsDone())
                return;

            var makeFace = new BRepBuilderAPI_MakeFace(makeWire.Wire(), true);
            if (!makeFace.IsDone())
                return;

            _AisPreviewEdges = new AIS_Shape(makeFace.Face());
            _AisPreviewEdges.SetDisplayMode(0);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewEdges, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewEdges);

            _AisPreviewSolid = new AIS_Shape(makeFace.Face());
            _AisPreviewSolid.SetDisplayMode(1);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewSolid, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewSolid);

            StatusText = $"Select radius: {_Radius:0.00}";
            if (_ValueHudElement != null)
                _ValueHudElement.Value = _Radius;

            if (_Coord2DHudElement != null)
            {
                _Coord2DHudElement.CoordinateX = pointAction.PointOnPlane.X;
                _Coord2DHudElement.CoordinateY = pointAction.PointOnPlane.Y;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishRadius(ToolAction toolAction)
        {
            toolAction?.Stop();
            var axisValueAction = new AxisValueAction(this, new Ax1(_PivotPoint.Rounded(), _Plane.Axis.Direction));
            if (!WorkspaceController.StartToolAction(axisValueAction))
                return;
            axisValueAction.Previewed += _PreviewHeight;
            axisValueAction.Finished += _FinishHeight;

            _CurrentPhase = Phase.Height;
            StatusText = "Select height.";

            if (_ValueHudElement != null)
            {
                _ValueHudElement.Label = "Height:";
                _ValueHudElement.Value = 0;
            }

            WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            WorkspaceController.HudManager?.SetCursor(Cursors.SetHeight);

            _PreviewHeight(axisValueAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _PreviewHeight(ToolAction toolAction)
        {
            if(!(toolAction is AxisValueAction axisValueAction))
                return;

            _Position = _PivotPoint.Rounded();
            _Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();

            _ClearPreviews();

            if (_PreviewShape == null)
            {
                // Create solid
                _PreviewShape = new Cylinder()
                {
                    Radius = _Radius.Round(),
                    Height = 0.1
                };
            }

            var height = axisValueAction.Value.Round();
            if (Math.Abs(height) < 0.001)
                height = 0.001;

            if (height > 0)
            {
                _Position = _PivotPoint.Rounded();
                _PreviewShape.Height = height;
            }
            else
            {
                _Position = _PivotPoint.Translated(_Plane.Axis.Direction.ToVec().Multiplied(height)).Rounded();
                _PreviewShape.Height = -height;
            }

            var ocShape = _PreviewShape.GetTransformedBRep();

            if (ocShape != null)
            {
                var trsf = new Trsf(_Rotation, _Position.ToVec());

                _AisPreviewEdges = new AIS_Shape(ocShape);
                _AisPreviewEdges.SetDisplayMode(0);
                _AisPreviewEdges.SetLocalTransformation(trsf);
                WorkspaceController.Workspace.AisContext.Display(_AisPreviewEdges, false);
                WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewEdges);

                _AisPreviewSolid = new AIS_Shape(ocShape);
                _AisPreviewSolid.SetDisplayMode(1);
                _AisPreviewSolid.SetLocalTransformation(trsf);
                WorkspaceController.Workspace.AisContext.Display(_AisPreviewSolid, false);
                WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewSolid);
            }

            StatusText = $"Selected height: {height:0.00}";
            if (_ValueHudElement != null)
                _ValueHudElement.Value = height;
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishHeight(ToolAction toolAction)
        {
            _ClearPreviews();

            toolAction?.Stop();

            var body = Body.Create(_PreviewShape);
            body.Position = _Position;
            body.Rotation = _Rotation;

            InteractiveContext.Current.Document.Add(body);
            InteractiveContext.Current.UndoHandler.Commit();

            Stop();

            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (_CurrentPhase == Phase.Radius)
            {
                _Radius = (Math.Abs(newValue) >= 0.001) ? newValue : 0.001;
                _FinishRadius(null);
            }
            else if (_CurrentPhase == Phase.Height)
            {
                if (newValue > 0)
                {
                    _Position = _PivotPoint.Rounded();
                    _PreviewShape.Height = newValue;
                }
                else
                {
                    _Position = _PivotPoint.Translated(_Plane.Axis.Direction.ToVec().Multiplied(newValue)).Rounded();
                    _PreviewShape.Height = -newValue;
                }
                _FinishHeight(null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ClearPreviews()
        {
            if (_AisPreviewSolid != null)
            {
                WorkspaceController.Workspace.AisContext.Remove(_AisPreviewSolid, false);
                _AisPreviewSolid = null;
            }
            if (_AisPreviewEdges != null)
            {
                WorkspaceController.Workspace.AisContext.Remove(_AisPreviewEdges, false);
                _AisPreviewEdges = null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
            WorkspaceController.HudManager?.RemoveElement(_ValueHudElement);
            _ValueHudElement = null;

            _ClearPreviews();

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

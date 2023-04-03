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

        protected override bool OnStart()
        {
            WorkspaceController.Selection.SelectEntity(null);

            var pointAction = new PointAction();
            if (!StartAction(pointAction))
                return false;
            pointAction.Preview += _PivotAction_Preview;
            pointAction.Finished += _PivotAction_Finished;

            _CurrentPhase = Phase.PivotPoint;
            SetHintMessage("Select center point.");
            _Coord2DHudElement = new Coord2DHudElement();
            Add(_Coord2DHudElement);
            SetCursor(Cursors.SetPoint);
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        protected override void OnStop()
        {
            _ClearPreviews();
        }

        //--------------------------------------------------------------------------------------------------

        void _PivotAction_Preview(PointAction sender, PointAction.EventArgs args)
        {
            _ClearPreviews();
            _Coord2DHudElement?.SetValues(args.PointOnPlane.X, args.PointOnPlane.Y);
        }

        //--------------------------------------------------------------------------------------------------

        void _PivotAction_Finished(PointAction action, PointAction.EventArgs args)
        {
            _Plane = WorkspaceController.Workspace.WorkingPlane;
            _PointPlane1 = args.PointOnPlane;
            _PivotPoint = args.Point;

            StopAction(action);
            var pointAction = new PointAction();
            if (!StartAction(pointAction))
                return;
            pointAction.Preview += _RadiusAction_Preview;
            pointAction.Finished += _RadiusAction_Finished;

            _CurrentPhase = Phase.Radius;
            SetHintMessage("Select radius.");

            if (_ValueHudElement == null)
            {
                _ValueHudElement = new ValueHudElement
                {
                    Label = "Radius:",
                    Units = ValueUnits.Length
                };
                _ValueHudElement.ValueEntered += _ValueEntered;
                Add(_ValueHudElement);
            }

            SetCursor(Cursors.SetRadius);
        }

        //--------------------------------------------------------------------------------------------------

        void _RadiusAction_Preview(PointAction sender, PointAction.EventArgs args)
        {
            _ClearPreviews();

            _PointPlane2 = args.PointOnPlane;

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

            SetHintMessage($"Select radius: {_Radius:0.00}");
            _ValueHudElement?.SetValue(_Radius);
            _Coord2DHudElement?.SetValues(args.PointOnPlane.X, args.PointOnPlane.Y);
        }

        //--------------------------------------------------------------------------------------------------

        void _RadiusAction_Finished(PointAction action, PointAction.EventArgs args)
        {
            var axisValueAction = new AxisValueAction(this, new Ax1(_PivotPoint.Rounded(), _Plane.Axis.Direction));
            if (!StartAction(axisValueAction))
                return;
            axisValueAction.Preview += _HeightAction_Preview;
            axisValueAction.Finished += _HeightAction_Finished;

            _CurrentPhase = Phase.Height;
            SetHintMessage("Select height.");

            if (_ValueHudElement != null)
            {
                _ValueHudElement.Label = "Height:";
                _ValueHudElement.Value = 0;
            }

            Remove(_Coord2DHudElement);
            SetCursor(Cursors.SetHeight);

            _HeightAction_Preview(axisValueAction, new AxisValueAction.EventArgs());
        }

        //--------------------------------------------------------------------------------------------------

        void _HeightAction_Preview(AxisValueAction action, AxisValueAction.EventArgs args)
        {
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

            var height = args.Value.Round();
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

            SetHintMessage($"Selected height: {height:0.00}");
            _ValueHudElement?.SetValue(height);
        }

        //--------------------------------------------------------------------------------------------------

        void _HeightAction_Finished(AxisValueAction action, AxisValueAction.EventArgs args)
        {
            _ClearPreviews();

            var body = Body.Create(_PreviewShape);
            body.Position = _Position;
            body.Rotation = _Rotation;

            InteractiveContext.Current.Document.Add(body);
            CommitChanges();

            Stop();

            WorkspaceController.Selection.SelectEntity(body);
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (_CurrentPhase == Phase.Radius)
            {
                _Radius = (Math.Abs(newValue) >= 0.001) ? newValue : 0.001;
                _RadiusAction_Finished(null, null);
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
                _HeightAction_Finished(null, null);
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

    }
}

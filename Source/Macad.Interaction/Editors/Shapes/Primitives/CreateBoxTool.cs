using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateBoxTool : Tool
    {
        enum Phase
        {
            PivotPoint,
            BaseRect,
            Height
        }

        //--------------------------------------------------------------------------------------------------

        Phase _CurrentPhase;
        Pln _Plane;
        Pnt2d _PointPlane1;
        Pnt2d _PointPlane2;

        AIS_Shape _AisPreviewEdges;
        AIS_Shape _AisPreviewSolid;

        Box _PreviewShape;
        Pnt _Position;
        Quaternion _Rotation = Quaternion.Identity;

        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        MultiValueHudElement _MultiValueHudElement;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            WorkspaceController.Selection.SelectEntity(null);

            var pointAction = new PointAction();
            if (!StartAction(pointAction))
                return false;
            pointAction.Previewed += _PreviewPivot;
            pointAction.Finished += _FinishPivotPoint;

            _CurrentPhase = Phase.PivotPoint;
            SetHintMessage("Select corner point.");
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

        void _PreviewPivot(ToolAction toolAction)
        {
            if(toolAction is not PointAction pointAction)
                return;

            _ClearPreviews();
            _Coord2DHudElement?.SetValues(pointAction.PointOnPlane.X, pointAction.PointOnPlane.Y);
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishPivotPoint(ToolAction toolAction)
        {
            if(toolAction is not PointAction pointAction)
                return;

            _ClearPreviews();

            _Plane = WorkspaceController.Workspace.WorkingPlane;
            _PointPlane1 = pointAction.PointOnPlane;

            StopAction(pointAction);
            pointAction = new PointAction();
            pointAction.Previewed += _PreviewBaseRect;
            pointAction.Finished += _FinishBaseRect;
            if (!StartAction(pointAction))
                return;

            _CurrentPhase = Phase.BaseRect;
            SetHintMessage("Select opposite corner point.");

            if (_MultiValueHudElement == null)
            {
                _MultiValueHudElement = new MultiValueHudElement()
                {
                    Label1 = "Length:",
                    Units1 = ValueUnits.Length,
                    Label2 = "Width:",
                    Units2 = ValueUnits.Length
                };
                _MultiValueHudElement.MultiValueEntered += _MultiValueEntered;
                Add(_MultiValueHudElement);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _PreviewBaseRect(ToolAction toolAction)
        {
            if(toolAction is not PointAction pointAction)
                return;
            
            _ClearPreviews();

            _PointPlane2 = pointAction.PointOnPlane;

            if (_PointPlane1.IsEqual(_PointPlane2, Double.Epsilon))
            {
                return;
            }

            var face = new BRepBuilderAPI_MakeFace(WorkspaceController.Workspace.WorkingPlane,
                Math.Min(_PointPlane1.X, _PointPlane2.X),
                Math.Max(_PointPlane1.X, _PointPlane2.X),
                Math.Min(_PointPlane1.Y, _PointPlane2.Y),
                Math.Max(_PointPlane1.Y, _PointPlane2.Y)).Face();

            _AisPreviewEdges = new AIS_Shape(face);
            _AisPreviewEdges.SetDisplayMode(0);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewEdges, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewEdges);

            _AisPreviewSolid = new AIS_Shape(face);
            _AisPreviewSolid.SetDisplayMode(1);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewSolid, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewSolid);

            var dim1 = Math.Abs(_PointPlane1.X - _PointPlane2.X);
            var dim2 = Math.Abs(_PointPlane1.Y - _PointPlane2.Y);
            SetHintMessage($"Select opposite corner point. Size: {dim1:0.00} x {dim2:0.00}");

            _Coord2DHudElement?.SetValues(pointAction.PointOnPlane.X, pointAction.PointOnPlane.Y);
            _MultiValueHudElement?.SetValues(dim1, dim2);

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishBaseRect(ToolAction toolAction)
        {
            StopAction(toolAction);

            var axisPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane);
            var axisValueAction = new AxisValueAction(this, new Ax1(axisPosition, _Plane.Axis.Direction));
            axisValueAction.Previewed += _PreviewHeight;
            axisValueAction.Finished += _FinishHeight;

            if (!StartAction(axisValueAction))
                return;

            Remove(_Coord2DHudElement);
            _CurrentPhase = Phase.Height;
            SetHintMessage("Select height.");

            Remove(_MultiValueHudElement);
            if (_ValueHudElement == null)
            {
                _ValueHudElement = new ValueHudElement()
                {
                    Label = "Height:",
                    Units = ValueUnits.Length
                };
                _ValueHudElement.ValueEntered += _ValueEntered;
                Add(_ValueHudElement);
            }

            SetCursor(Cursors.SetHeight);
            _PreviewHeight(axisValueAction);
        }

        //--------------------------------------------------------------------------------------------------

        void _PreviewHeight(ToolAction toolAction)
        {
            if(toolAction is not AxisValueAction axisValueAction)
                return;

            _ClearPreviews();

            _Position = ElSLib.Value(Math.Min(_PointPlane1.X, _PointPlane2.X), Math.Min(_PointPlane1.Y, _PointPlane2.Y), _Plane).Rounded();
            _Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
            if (_PreviewShape == null)
            {
                // Create solid
                _PreviewShape = new Box
                {
                    DimensionX = Math.Abs(_PointPlane1.X - _PointPlane2.X).Round(),
                    DimensionY = Math.Abs(_PointPlane1.Y - _PointPlane2.Y).Round(),
                    DimensionZ = 0.1
                };
            }

            var height = axisValueAction.Value.Round();
            _PreviewShape.DimensionZ =  Math.Abs(height) >= 0.001 ? height : 0.001;

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

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishHeight(ToolAction toolAction)
        {
            StopAction(toolAction);

            var body = Body.Create(_PreviewShape);
            body.Position = _Position;
            body.Rotation = _Rotation;
            InteractiveContext.Current.Document.Add(body);
            CommitChanges();

            Stop();
            WorkspaceController.Selection.SelectEntity(body);
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (_CurrentPhase == Phase.Height)
            {
                _PreviewShape.DimensionZ = Math.Abs(newValue) >= 0.001 ? newValue : 0.001;
                _FinishHeight(null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _MultiValueEntered(MultiValueHudElement hudElement, double newValue1, double newValue2)
        {
            if (_CurrentPhase == Phase.BaseRect)
            {
                _PointPlane2 = new Pnt2d(_PointPlane1.X + newValue1, _PointPlane1.Y + newValue2);
                _FinishBaseRect(null);
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
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

    }
}

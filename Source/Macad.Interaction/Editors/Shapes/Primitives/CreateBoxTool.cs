using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
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
        Box _PreviewShape;
        VisualObject _VisualShape;

        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        MultiValueHudElement _MultiValueHudElement;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            WorkspaceController.Selection.SelectEntity(null);

            _CurrentPhase = Phase.PivotPoint;
            var pointAction = new PointAction();
            if (!StartAction(pointAction))
                return false;
            pointAction.Preview += _PivotAction_Preview;
            pointAction.Finished += _PivotAction_Finished;

            SetHintMessage("Select corner point.");
            _Coord2DHudElement = new Coord2DHudElement();
            Add(_Coord2DHudElement);
            SetCursor(Cursors.SetPoint);
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        protected override void Cleanup()
        {
            if (_VisualShape != null)
            {
                WorkspaceController.VisualObjects.Remove(_VisualShape.Entity);
                _VisualShape = null;
            }
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        void _PivotAction_Preview(PointAction action, PointAction.EventArgs args)
        {
            _Coord2DHudElement?.SetValues(args.PointOnPlane.X, args.PointOnPlane.Y);
        }

        //--------------------------------------------------------------------------------------------------

        void _PivotAction_Finished(PointAction action, PointAction.EventArgs args)
        {
            _Plane = WorkspaceController.Workspace.WorkingPlane;
            _PointPlane1 = args.PointOnPlane;

            StopAction(action);
            var newAction = new PointAction();
            newAction.Preview += _BaseRectAction_Preview;
            newAction.Finished += _BaseRectAction_Finished;
            if (!StartAction(newAction))
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

        void _BaseRectAction_Preview(PointAction action, PointAction.EventArgs args)
        {
            _PointPlane2 = args.PointOnPlane;

            _UpdatePreview();

            var dimX = Math.Abs(_PointPlane1.X - _PointPlane2.X).Round();
            var dimY = Math.Abs(_PointPlane1.Y - _PointPlane2.Y).Round();
            SetHintMessage($"Select opposite corner point. Size: {dimX:0.00} x {dimY:0.00}");
            
            _Coord2DHudElement?.SetValues(_PointPlane2.X, _PointPlane2.Y);
            _MultiValueHudElement?.SetValues(dimX, dimY);

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _BaseRectAction_Finished(PointAction action, PointAction.EventArgs args)
        {
            var axisPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane);
            var axisValueAction = new AxisValueAction(this, new Ax1(axisPosition, _Plane.Axis.Direction));
            axisValueAction.Preview += _HeightAction_Preview;
            axisValueAction.Finished += _HeightAction_Finished;

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
            _HeightAction_Preview(axisValueAction, new AxisValueAction.EventArgs());
        }

        //--------------------------------------------------------------------------------------------------

        void _HeightAction_Preview(AxisValueAction action, AxisValueAction.EventArgs args)
        {
            var height = args.Value.Round();
            _PreviewShape.DimensionZ =  Math.Abs(height) >= 0.001 ? height : 0.001;
            SetHintMessage($"Selected height: {height:0.00}");
            _ValueHudElement?.SetValue(height);
        }

        //--------------------------------------------------------------------------------------------------

        void _HeightAction_Finished(AxisValueAction action, AxisValueAction.EventArgs args)
        {
            InteractiveContext.Current.Document.Add(_PreviewShape.Body);
            _VisualShape.IsSelectable = true;
            _VisualShape = null; // Prevent removing
            CommitChanges();

            Stop();
            WorkspaceController.Selection.SelectEntity(_PreviewShape.Body);
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (_CurrentPhase == Phase.Height)
            {
                _PreviewShape.DimensionZ = Math.Abs(newValue) >= 0.001 ? newValue : 0.001;
                _UpdatePreview();
                _HeightAction_Finished(null, null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _MultiValueEntered(MultiValueHudElement hudElement, double newValue1, double newValue2)
        {
            if (_CurrentPhase == Phase.BaseRect)
            {
                _PointPlane2 = new Pnt2d(_PointPlane1.X + newValue1, _PointPlane1.Y + newValue2);
                _UpdatePreview();
                _BaseRectAction_Finished(null, null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdatePreview()
        {
            if (_PointPlane1.IsEqual(_PointPlane2, Double.Epsilon))
            {
                return;
            }

            if (_PreviewShape == null)
            {
                // Create solid
                _PreviewShape = new Box
                {
                    DimensionZ = 0.01
                };
                var body = Body.Create(_PreviewShape);
                _PreviewShape.Body.Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
                _VisualShape = WorkspaceController.VisualObjects.Get(body, true);
                _VisualShape.IsSelectable = false;
            }

            _PreviewShape.Body.Position = ElSLib.Value(Math.Min(_PointPlane1.X, _PointPlane2.X), Math.Min(_PointPlane1.Y, _PointPlane2.Y), _Plane).Rounded();;
            _PreviewShape.DimensionX = Math.Abs(_PointPlane1.X - _PointPlane2.X).Round();
            _PreviewShape.DimensionY = Math.Abs(_PointPlane1.Y - _PointPlane2.Y).Round();
        }
    }
}

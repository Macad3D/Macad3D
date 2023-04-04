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

        Cylinder _PreviewShape;
        VisualObject _VisualShape;

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

        void _PivotAction_Preview(PointAction sender, PointAction.EventArgs args)
        {
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
            _PointPlane2 = args.PointOnPlane;

            if (_PointPlane1.IsEqual(_PointPlane2, Double.Epsilon))
                return;

            _Radius = new Vec2d(_PointPlane1, _PointPlane2).Magnitude().Round();
            if (_Radius <= Double.Epsilon)
                return;

            if (_PreviewShape == null)
            {
                // Create solid
                _PreviewShape = new Cylinder()
                {
                    Height = 0.01
                };
                var body = Body.Create(_PreviewShape);
                _VisualShape = WorkspaceController.VisualObjects.Get(body, true);
                _VisualShape.IsSelectable = false;
                _PreviewShape.Body.Position = _PivotPoint.Rounded();
                _PreviewShape.Body.Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
            }

            _PreviewShape.Radius = _Radius;

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
            var height = args.Value.Round();
            if (Math.Abs(height) < 0.001)
                height = 0.001;

            if (height > 0)
            {
                _PreviewShape.Body.Position = _PivotPoint.Rounded();
                _PreviewShape.Height = height;
            }
            else
            {
                _PreviewShape.Body.Position = _PivotPoint.Translated(_Plane.Axis.Direction.ToVec().Multiplied(height)).Rounded();
                _PreviewShape.Height = -height;
            }

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
                    _PreviewShape.Body.Position = _PivotPoint.Rounded();
                    _PreviewShape.Height = newValue;
                }
                else
                {
                    _PreviewShape.Body.Position = _PivotPoint.Translated(_Plane.Axis.Direction.ToVec().Multiplied(newValue)).Rounded();
                    _PreviewShape.Height = -newValue;
                }
                _HeightAction_Finished(null, null);
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}

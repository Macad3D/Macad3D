using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateSphereTool : Tool
    {
        enum Phase
        {
            PivotPoint,
            Radius
        }

        //--------------------------------------------------------------------------------------------------

        Phase _CurrentPhase;
        Pnt _Point;

        AIS_Shape _AisPreviewEdges;
        AIS_Shape _AisPreviewSolid;

        Sphere _PreviewShape;

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
            _Point = args.Point.Rounded();
            StopAction(action);

            var axisValueAction = new AxisValueAction(this, new Ax1(_Point, Dir.DZ));
            if (!StartAction(axisValueAction))
                return;
            axisValueAction.Preview += _RadiusAction_Preview;
            axisValueAction.Finished += _RadiusAction_Finished;

            _CurrentPhase = Phase.Radius;
            SetHintMessage("Select Radius.");

            Remove(_Coord2DHudElement);
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

        void _RadiusAction_Preview(AxisValueAction action, AxisValueAction.EventArgs args)
        {
            _ClearPreviews();

            _PreviewShape ??= new Sphere()
            {
                Radius = 0.1
            };

            var radius = args.Distance.Round();

            if (radius <= 0) 
                return;

            var trsf = new Trsf(_Point.ToVec());
            _PreviewShape.Radius = radius;

            _AisPreviewEdges = new AIS_Shape(_PreviewShape.GetTransformedBRep());
            _AisPreviewEdges.SetDisplayMode(0);
            _AisPreviewEdges.SetLocalTransformation(trsf);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewEdges, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewEdges);

            _AisPreviewSolid = new AIS_Shape(_PreviewShape.GetTransformedBRep());
            _AisPreviewSolid.SetDisplayMode(1);
            _AisPreviewSolid.SetLocalTransformation(trsf);
            WorkspaceController.Workspace.AisContext.Display(_AisPreviewSolid, false);
            WorkspaceController.Workspace.AisContext.Deactivate(_AisPreviewSolid);

            SetHintMessage($"Select Radius: {radius:0.00}");
            _ValueHudElement?.SetValue(radius);
        }

        //--------------------------------------------------------------------------------------------------

        void _RadiusAction_Finished(AxisValueAction action, AxisValueAction.EventArgs args)
        {
            _ClearPreviews();

            var body = Body.Create(_PreviewShape);
            body.Position = _Point;
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
                _PreviewShape.Radius = (Math.Abs(newValue) >= 0.001) ? newValue : 0.001;
                _RadiusAction_Finished(null, null);
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

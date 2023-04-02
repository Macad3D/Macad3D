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
            pointAction.Previewed += _PreviewPivotPoint;
            pointAction.Finished += _FinishPivotPoint;

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

        void _PreviewPivotPoint(ToolAction toolAction)
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

            _Point = pointAction.Point.Rounded();
            pointAction.Stop();

            var axisValueAction = new AxisValueAction(this, new Ax1(_Point, Dir.DZ));
            if (!StartAction(axisValueAction))
                return;
            axisValueAction.Previewed += _PreviewRadius;
            axisValueAction.Finished += _FinishRadius;

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

        void _PreviewRadius(ToolAction toolAction)
        {
            if(toolAction is not AxisValueAction axisValueAction)
                return;

            _ClearPreviews();

            _PreviewShape ??= new Sphere()
            {
                Radius = 0.1
            };

            var radius = axisValueAction.Distance.Round();

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

        void _FinishRadius(ToolAction toolAction)
        {
            _ClearPreviews();

            StopAction(toolAction);

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
                _FinishRadius(null);
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

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

            _Point = pointAction.Point.Round();
            pointAction.Stop();

            var axisValueAction = new AxisValueAction(this, new Ax1(_Point, Dir.DZ));
            if (!WorkspaceController.StartToolAction(axisValueAction))
                return;
            axisValueAction.Previewed += _PreviewRadius;
            axisValueAction.Finished += _FinishRadius;

            _CurrentPhase = Phase.Radius;
            StatusText = "Select Radius.";

            WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
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
            if(!(toolAction is AxisValueAction axisValueAction))
                return;

            _ClearPreviews();

            if (_PreviewShape == null)
            {
                // Create solid
                _PreviewShape = new Sphere()
                {
                    Radius = 0.1
                };
            }

            var radius = axisValueAction.Distance.Round();

            if (radius > 0)
            {
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

                StatusText = $"Select Radius: {radius:0.00}";
                if (_ValueHudElement != null)
                    _ValueHudElement.Value = radius;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _FinishRadius(ToolAction toolAction)
        {
            _ClearPreviews();

            toolAction?.Stop();

            var body = Body.Create(_PreviewShape);
            body.Position = _Point;
            InteractiveContext.Current.Document.AddChild(body);
            InteractiveContext.Current.UndoHandler.Commit();

            ((Tool) this).Stop();

            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
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

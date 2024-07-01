using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public class CreateSphereTool : Tool
{
    enum Phase
    {
        PivotPoint,
        Radius
    }

    //--------------------------------------------------------------------------------------------------

    Phase _CurrentPhase;
    Pnt _Position;
    double _Radius;

    Sphere _PreviewShape;
    VisualObject _VisualShape;
    bool _IsTemporaryVisual;

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
        SetHintMessage("__Select center point.__");
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
            _VisualShape.Remove();
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
        _Position = args.Point.Rounded();
        StopAction(action);

        var axisValueAction = new AxisValueAction(new Ax1(_Position, Dir.DZ));
        if (!StartAction(axisValueAction))
            return;
        axisValueAction.Preview += _RadiusAction_Preview;
        axisValueAction.Finished += _RadiusAction_Finished;

        _CurrentPhase = Phase.Radius;
        SetHintMessage("__Select Radius__, press `k:Ctrl` to round to grid stepping.");

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
        _Radius = args.Distance.Round();
        if (_Radius < 0.001)
            _Radius = 0.001;

        if (args.MouseEventData.ModifierKeys.Has(ModifierKeys.Control))
        {
            _Radius = Maths.RoundToNearest(_Radius, WorkspaceController.Workspace.GridStep);
        }

        _EnsurePreviewShape();
        _PreviewShape.Radius = _Radius;
        if(_IsTemporaryVisual)
            _VisualShape?.Update();

        _ValueHudElement?.SetValue(_Radius);
    }

    //--------------------------------------------------------------------------------------------------

    void _RadiusAction_Finished(AxisValueAction action, AxisValueAction.EventArgs args)
    {
        InteractiveContext.Current.Document.Add(_PreviewShape.Body);
        if (!_IsTemporaryVisual)
        {
            _VisualShape.IsSelectable = true;
            _VisualShape = null; // Prevent removing
        }

        CommitChanges();

        Stop();
        WorkspaceController.Selection.SelectEntity(_PreviewShape.Body);
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _ValueEntered(ValueHudElement hudElement, double newValue)
    {
        if (_CurrentPhase == Phase.Radius)
        {
            _Radius = Math.Abs(newValue) >= 0.001 ? newValue : 0.001;
            _EnsurePreviewShape();
            _PreviewShape.Radius = _Radius;
            _RadiusAction_Finished(null, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _EnsurePreviewShape()
    {
        if (_PreviewShape != null) 
            return;

        // Create solid
        _PreviewShape = new Sphere
        {
            Radius = _Radius
        };
        var body = Body.Create(_PreviewShape);
        _PreviewShape.Body.Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
        _PreviewShape.Body.Position = _Position;
        if (body.Layer.IsVisible)
        {
            _VisualShape = WorkspaceController.VisualObjects.Get(body, true);
            _IsTemporaryVisual = false;
        }
        else
        {
            _VisualShape = new VisualShape(WorkspaceController, body, VisualShape.Options.Ghosting);
            _IsTemporaryVisual = true;
        }
        _VisualShape.IsSelectable = false;
    }
}
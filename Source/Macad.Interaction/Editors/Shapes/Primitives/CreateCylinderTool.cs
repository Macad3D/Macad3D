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
    double _Height;

    Cylinder _PreviewShape;
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
        SetHintMessage("__Select radius__, press `k:Ctrl` to round to grid stepping.");

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
        if (args.MouseEventData.ModifierKeys.Has(ModifierKeys.Control))
        {
            _Radius = Maths.RoundToNearest(_Radius, WorkspaceController.Workspace.GridStep);
        }

        if (Math.Abs(_Radius) <= 0)
        {
            _Radius = 0.001;
        }

        _PointPlane2 = _PointPlane1.Translated(new Vec2d(_PointPlane1, _PointPlane2).Normalized().Scaled(_Radius));
        args.MarkerPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane).Rounded();

        _EnsurePreviewShape();
        _PreviewShape.Radius = _Radius;
        if(_IsTemporaryVisual)
            _VisualShape?.Update();

        _ValueHudElement?.SetValue(_Radius);
        _Coord2DHudElement?.SetValues(args.PointOnPlane.X, args.PointOnPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _RadiusAction_Finished(PointAction action, PointAction.EventArgs args)
    {
        var axisPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane);
        var axisValueAction = new AxisValueAction(new Ax1(axisPosition, _Plane.Axis.Direction));
        if (!StartAction(axisValueAction))
            return;
        axisValueAction.Preview += _HeightAction_Preview;
        axisValueAction.Finished += _HeightAction_Finished;

        _CurrentPhase = Phase.Height;
        SetHintMessage("__Select height__, press `k:Ctrl` to round to grid stepping.");

        if (_ValueHudElement != null)
        {
            _ValueHudElement.Label = "Height:";
            _ValueHudElement.Value = 0;
        }

        Remove(_Coord2DHudElement);
        SetCursor(Cursors.SetHeight);

        _EnsurePreviewShape();
    }

    //--------------------------------------------------------------------------------------------------

    void _HeightAction_Preview(AxisValueAction action, AxisValueAction.EventArgs args)
    {
        if (args != null)
        {
            _Height = args.Value.Round();

            if (args.MouseEventData.ModifierKeys.Has(ModifierKeys.Control))
            {
                _Height = Maths.RoundToNearest(_Height, WorkspaceController.Workspace.GridStep);
            }
        }

        if (Math.Abs(_Height) < 0.001)
            _Height = 0.001;

        _EnsurePreviewShape();
        _PreviewShape.Height = _Height;
        if(_IsTemporaryVisual)
            _VisualShape?.Update();

        _ValueHudElement?.SetValue(_Height);
    }

    //--------------------------------------------------------------------------------------------------

    void _HeightAction_Finished(AxisValueAction action, AxisValueAction.EventArgs args)
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
        else if (_CurrentPhase == Phase.Height)
        {
            _Height = newValue;
            _EnsurePreviewShape();
            _HeightAction_Preview(null, null);
            _HeightAction_Finished(null, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _EnsurePreviewShape()
    {
        if (_PreviewShape != null)
            return;

        // Create solid
        _PreviewShape = new Cylinder()
        {
            Height = 0.01
        };
        var body = Body.Create(_PreviewShape);
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
        _PreviewShape.Body.Position = _PivotPoint.Rounded();
        _PreviewShape.Body.Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
    }
}
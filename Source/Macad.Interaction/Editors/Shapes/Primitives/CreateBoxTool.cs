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
    double _Height;
    Box _PreviewShape;
    VisualObject _VisualShape;
    bool _IsTemporaryVisual;

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

        SetHintMessage("__Select corner point.__");
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
        SetHintMessage("__Select opposite corner point__, press `k:Ctrl` to round length and width to grid stepping.");

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
        if (args != null)
        {
            _PointPlane2 = args.PointOnPlane;
        }

        var dimX = Math.Abs(_PointPlane1.X - _PointPlane2.X).Round();
        var dimY = Math.Abs(_PointPlane1.Y - _PointPlane2.Y).Round();
        if (args?.MouseEventData.ModifierKeys.Has(ModifierKeys.Control) ?? false)
        {
            dimX = Maths.RoundToNearest(dimX, WorkspaceController.Workspace.GridStep);
            dimY = Maths.RoundToNearest(dimY, WorkspaceController.Workspace.GridStep);
        }

        if (Math.Abs(dimX) <= 0)
        {
            dimX = 0.001;
        }
        if (Math.Abs(dimY) <= 0)
        {
            dimY = 0.001;
        }

        double posX;
        if (_PointPlane1.X < _PointPlane2.X)
        {
            posX = _PointPlane1.X;
            _PointPlane2.X = _PointPlane1.X + dimX;
        }
        else
        {
            posX = _PointPlane1.X - dimX;
            _PointPlane2.X = posX;
        }

        double posY;
        if (_PointPlane1.Y < _PointPlane2.Y)
        {
            posY = _PointPlane1.Y;
            _PointPlane2.Y = _PointPlane1.Y + dimY;
        }
        else
        {
            posY = _PointPlane1.Y - dimY;
            _PointPlane2.Y = posY;
        }

        _EnsurePreviewShape();
        var position = ElSLib.Value(posX, posY, _Plane).Rounded();
        _PreviewShape.Body.Position = position;
        _PreviewShape.DimensionX = dimX;
        _PreviewShape.DimensionY = dimY;
        if(_IsTemporaryVisual)
            _VisualShape?.Update();

        if (args != null)
        {
            args.MarkerPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane).Rounded();
        }

        _Coord2DHudElement?.SetValues(_PointPlane2.X, _PointPlane2.Y);
        _MultiValueHudElement?.SetValues(dimX, dimY);

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _BaseRectAction_Finished(PointAction action, PointAction.EventArgs args)
    {
        var axisPosition = ElSLib.Value(_PointPlane2.X, _PointPlane2.Y, _Plane);
        var axisValueAction = new AxisValueAction(new Ax1(axisPosition, _Plane.Axis.Direction));
        axisValueAction.Preview += _HeightAction_Preview;
        axisValueAction.Finished += _HeightAction_Finished;

        if (!StartAction(axisValueAction))
            return;

        Remove(_Coord2DHudElement);
        Remove(_MultiValueHudElement);

        _CurrentPhase = Phase.Height;
        SetCursor(Cursors.SetHeight);
        SetHintMessage($"__Select height__, press `k:Ctrl` to round to grid stepping.");

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
            
        _EnsurePreviewShape();
    }

    //--------------------------------------------------------------------------------------------------

    void _HeightAction_Preview(AxisValueAction action, AxisValueAction.EventArgs args)
    {
        _Height = args.Value.Round();

        if (args.MouseEventData.ModifierKeys.Has(ModifierKeys.Control))
        {
            _Height = Maths.RoundToNearest(_Height, WorkspaceController.Workspace.GridStep);
        }

        if (Math.Abs(_Height) <= 0)
        {
            _Height = 0.001;
        }

        _EnsurePreviewShape();
        _PreviewShape.DimensionZ = _Height;
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
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _ValueEntered(ValueHudElement hudElement, double newValue)
    {
        if (_CurrentPhase == Phase.Height)
        {
            _PreviewShape.DimensionZ = Math.Abs(newValue) >= 0.001 ? newValue : 0.001;
            _HeightAction_Finished(null, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _MultiValueEntered(MultiValueHudElement hudElement, double newValue1, double newValue2)
    {
        if (_CurrentPhase == Phase.BaseRect)
        {
            _PointPlane2 = new Pnt2d(_PointPlane1.X + newValue1, _PointPlane1.Y + newValue2);
            _BaseRectAction_Preview(null, null);
            _EnsurePreviewShape();
            _BaseRectAction_Finished(null, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _EnsurePreviewShape()
    {
        if (_PreviewShape != null) 
            return;

        // Create solid
        _PreviewShape = new Box
        {
            DimensionZ = 0.01
        };
        var body = Body.Create(_PreviewShape);
        _PreviewShape.Body.Rotation = WorkspaceController.Workspace.GetWorkingPlaneRotation();
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
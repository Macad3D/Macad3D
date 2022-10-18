using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

internal class CrossSectionEditor : Editor<CrossSection>
{
    CrossSectionPropertyPanel _Panel;
    VisualShape _GhostVisual;
    Plane _PlaneVisual;
    Pln _TranslatedPlane;
    double _PlaneSize;
    bool _IsMoving;
    TranslateAxisLiveAction _TranslateAction;
    RotateLiveAction _RotateActionX;
    RotateLiveAction _RotateActionY;
    RotateLiveAction _RotateActionZ;

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        _Panel = PropertyPanel.CreatePanel<CrossSectionPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _UpdateHints();
        _UpdateActions();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        
        _GhostVisual?.Remove();
        _GhostVisual = null;
        _PlaneVisual?.Remove();
        _PlaneVisual = null;
        _TranslateAction?.Stop();
        _TranslateAction = null;
        _RotateActionX?.Stop();
        _RotateActionX = null;
        _RotateActionY?.Stop();
        _RotateActionY = null;
        _RotateActionZ?.Stop();
        _RotateActionZ = null;

        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity && !_IsMoving)
        {
            _TranslateAction?.Deactivate();
            _RotateActionX?.Deactivate();
            _RotateActionY?.Deactivate();
            _RotateActionZ?.Deactivate();

            _UpdateHints();
            _UpdateActions();

            WorkspaceController.Invalidate();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdateHints()
    {
        var trsf = Entity.Body.GetTransformation();
        var brep = Entity.Predecessor.GetBRep(Entity.Body.GetCoordinateSystem());
        if(brep == null)
            return;
        
        // Ghost
        _GhostVisual ??= new VisualShape(WorkspaceController, Entity.Body, VisualShape.Options.Ghosting);
        _GhostVisual.OverrideBrep = brep;
        _GhostVisual.SetLocalTransformation(trsf);

        // Plane
        _PlaneVisual ??= new Plane(WorkspaceController, Plane.Style.None);
        _PlaneVisual.Transparency = 0.7;
        _PlaneVisual.Boundary = false;
        _PlaneVisual.Color = Colors.ActionBlue;
        _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
        _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
        _PlaneVisual.SetLocalTransformation(trsf);
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _UpdateActions()
    {
        _TranslatedPlane = Entity.GetCenteredPlane(out _PlaneSize).Transformed(Entity.Body.GetTransformation());

        if (_TranslateAction == null)
        {
            _TranslateAction = new(this)
            {
                Color = Colors.ActionBlue,
                Cursor = Cursors.Move,
                ShowHudElement = true,
                
            };
            _TranslateAction.Previewed += _TranslateActionPreviewed;
            _TranslateAction.Finished += _TranslateActionFinished;
        }
        _TranslateAction.Length = _PlaneSize / 2;
        _TranslateAction.Axis = _TranslatedPlane.Axis;
        WorkspaceController.StartLiveAction(_TranslateAction);

        if (_RotateActionX == null)
        {
            _RotateActionX = new(this)
            {
                Color = Colors.ActionRed,
                VisualLimits = (-Maths.HalfPI, Maths.HalfPI),
                SectorAutoUpdate = true,
                ShowAxisHint = true,
                ShowHudElement = true
            };
            _RotateActionX.Previewed += _RotateActionXPreviewed;
            _RotateActionX.Finished += _RotateActionXFinished;
        }
        _RotateActionX.Radius = _PlaneSize / 3;
        _RotateActionX.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.XAxis.Direction, _TranslatedPlane.Axis.Direction);
        WorkspaceController.StartLiveAction(_RotateActionX);

        if (_RotateActionY == null)
        {
            _RotateActionY = new(this)
            {
                Color = Colors.ActionGreen,
                VisualLimits = (-Maths.HalfPI, Maths.HalfPI),
                SectorAutoUpdate = true,
                ShowAxisHint = true,
                ShowHudElement = true
            };
            _RotateActionY.Previewed += _RotateActionYPreviewed;
            _RotateActionY.Finished += _RotateActionYFinished;
        }
        _RotateActionY.Radius = _PlaneSize / 3;
        _RotateActionY.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.YAxis.Direction, _TranslatedPlane.Axis.Direction);
        WorkspaceController.StartLiveAction(_RotateActionY);
        
        if (_RotateActionZ == null)
        {
            _RotateActionZ = new(this)
            {
                Color = Colors.ActionBlue,
                SectorAutoUpdate = true,
                ShowAxisHint = true,
                ShowHudElement = true
            };
            _RotateActionZ.Previewed += _RotateActionZPreviewed;
            _RotateActionZ.Finished += _RotateActionZFinished;
        }
        _RotateActionZ.Radius = _PlaneSize / 3;
        _RotateActionZ.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.Axis.Direction, _TranslatedPlane.YAxis.Direction);
        WorkspaceController.StartLiveAction(_RotateActionZ);
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionPreviewed(LiveAction liveAction)
    {
        _IsMoving = true;
        var newLocation = _TranslateAction.Axis.Location;
        if (liveAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newLocation.Z = Maths.RoundToNearest(newLocation.Z, WorkspaceController.Workspace.GridStep);
        }
        Entity.Plane = _TranslatedPlane.Translated(_TranslatedPlane.Location, newLocation)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());
        _TranslateAction.Axis = _TranslatedPlane.Axis.Translated(_TranslatedPlane.Axis.Location, newLocation);

        if (_PlaneVisual != null)
        {
            WorkspaceController.HudManager?.SetHintMessage(this, "Move cut plane using gizmo, press 'CTRL' to round to grid stepping.");
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
            _RotateActionX.Deactivate();
            _RotateActionY.Deactivate();
            _RotateActionZ.Deactivate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _TranslateAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }
    
    //--------------------------------------------------------------------------------------------------

    void _RotateActionXPreviewed(LiveAction liveAction)
    {
        _IsMoving = true;

        var delta = _RotateActionX.Delta;
        if (_RotateActionX.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            delta = Maths.RoundToNearest(delta, 5.0.ToRad());
            _RotateActionX.Delta = delta;
        }

        Entity.Plane = _TranslatedPlane.Rotated(_TranslatedPlane.XAxis, delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());

        WorkspaceController.HudManager?.SetHintMessage(this, "Rotate cut plane using gizmo, press 'CTRL' to round to 5°.");

        if (_PlaneVisual != null)
        {
            _TranslateAction.Deactivate();
            _RotateActionY.Deactivate();
            _RotateActionZ.Deactivate();
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionXFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _RotateActionX.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RotateActionYPreviewed(LiveAction liveAction)
    {
        _IsMoving = true;
        var delta = _RotateActionY.Delta;
        if (_RotateActionY.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            delta = Maths.RoundToNearest(delta, 5.0.ToRad());
            _RotateActionY.Delta = delta;
        }

        Entity.Plane = _TranslatedPlane.Rotated(_TranslatedPlane.YAxis, delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());

        WorkspaceController.HudManager?.SetHintMessage(this, "Rotate cut plane using gizmo, press 'CTRL' to round to 5°.");

        if (_PlaneVisual != null)
        {
            _TranslateAction.Deactivate();
            _RotateActionX.Deactivate();
            _RotateActionZ.Deactivate();
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionYFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _RotateActionY.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------
        
    void _RotateActionZPreviewed(LiveAction liveAction)
    {
        _IsMoving = true;
        var delta = _RotateActionZ.Delta;
        if (_RotateActionZ.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            delta = Maths.RoundToNearest(delta, 5.0.ToRad());
            _RotateActionZ.Delta = delta;
        }

        Entity.Plane = _TranslatedPlane.Rotated(_TranslatedPlane.Axis, delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());

        WorkspaceController.HudManager?.SetHintMessage(this, "Rotate cut plane using gizmo, press 'CTRL' to round to 5°.");

        if (_PlaneVisual != null)
        {
            _TranslateAction.Deactivate();
            _RotateActionX.Deactivate();
            _RotateActionY.Deactivate();
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionZFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _RotateActionZ.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<CrossSectionEditor>();
    }
}
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

internal sealed class CrossSectionEditor : Editor<CrossSection>
{
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

    protected override void OnStart()
    {
        CreatePanel<CrossSectionPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _UpdateHints();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        
        _GhostVisual?.Remove();
        _GhostVisual = null;
        _PlaneVisual?.Remove();
        _PlaneVisual = null;
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _TranslateAction = null;
        _RotateActionX = null;
        _RotateActionY = null;
        _RotateActionZ = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateHints();
            _UpdateActions();
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

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _ShowActions()
    {
        if (_TranslateAction == null)
        {
            _TranslateAction = new()
            {
                Color = Colors.ActionBlue,
                Cursor = Cursors.Move,
                ShowHudElement = true,
                
            };
            _TranslateAction.Preview += _TranslateAction_Preview;
            _TranslateAction.Finished += _TranslateActionFinished;
        }

        if (_RotateActionX == null)
        {
            _RotateActionX = new()
            {
                Color = Colors.ActionRed,
                VisualLimits = (-Maths.HalfPI, Maths.HalfPI),
                ShowAxisHint = true,
                ShowHudElement = true,
                SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Reverse
            };
            _RotateActionX.Preview += _RotateActionX_Preview;
            _RotateActionX.Finished += _RotateActionFinished;
        }

        if (_RotateActionY == null)
        {
            _RotateActionY = new()
            {
                Color = Colors.ActionGreen,
                VisualLimits = (-Maths.HalfPI, Maths.HalfPI),
                ShowAxisHint = true,
                ShowHudElement = true,
                SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Reverse
            };
            _RotateActionY.Preview += _RotateActionY_Preview;
            _RotateActionY.Finished += _RotateActionFinished;
        }
        
        if (_RotateActionZ == null)
        {
            _RotateActionZ = new()
            {
                Color = Colors.ActionBlue,
                ShowAxisHint = true,
                ShowHudElement = true,
                SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Reverse
            };
            _RotateActionZ.Preview += _RotateActionZ_Preview;
            _RotateActionZ.Finished += _RotateActionFinished;
        }

        _UpdateActions();

        StartAction(_TranslateAction);
        StartAction(_RotateActionX);
        StartAction(_RotateActionY);
        StartAction(_RotateActionZ);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        _TranslatedPlane = Entity.GetCenteredPlane(out _PlaneSize).Transformed(Entity.Body.GetTransformation());

        if(_TranslateAction != null)
        {
            _TranslateAction.Length = _PlaneSize / 2;
            _TranslateAction.Axis = _TranslatedPlane.Axis;
        }
        if (_RotateActionX != null)
        {
            _RotateActionX.Radius = _PlaneSize / 3;
            _RotateActionX.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.XAxis.Direction, _TranslatedPlane.Axis.Direction);
        }
        if (_RotateActionY != null)
        {
            _RotateActionY.Radius = _PlaneSize / 3;
            _RotateActionY.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.YAxis.Direction, _TranslatedPlane.Axis.Direction);

        }
        if (_RotateActionZ != null)
        {
            _RotateActionZ.Radius = _PlaneSize / 3;
            _RotateActionZ.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.Axis.Direction, _TranslatedPlane.YAxis.Direction);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("Move cut plane using gizmo, press 'CTRL' to round to grid stepping.");
        }

        var newLocation = args.Axis.Location;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newLocation.Z = Maths.RoundToNearest(newLocation.Z, WorkspaceController.Workspace.GridStep);
        }

        Entity.Plane = _TranslatedPlane.Translated(_TranslatedPlane.Location, newLocation)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());

        _UpdateActions();

        if (_PlaneVisual != null)
        {
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
            StopAction(_RotateActionX);
            _RotateActionX = null;
            StopAction(_RotateActionY);
            _RotateActionY = null;
            StopAction(_RotateActionZ);
            _RotateActionZ = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        InteractiveContext.Current.UndoHandler.Commit();
        StartTools();
    }
    
    //--------------------------------------------------------------------------------------------------

    void _RotateActionPreviewed(RotateLiveAction.EventArgs args, Ax1 axis)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("Rotate cut plane using gizmo, press 'CTRL' to round to 5°.");
        }

        var delta = args.Delta;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            double clampDelta = Maths.RoundToNearest(args.DeltaSum, 5.0.ToRad()) - args.DeltaSum;
            args.DeltaSumOverride = args.DeltaSum + clampDelta;
            delta += clampDelta;
        }

        if (delta.Abs() < 0.0001)
            return;

        Entity.Plane = _TranslatedPlane.Rotated(axis, delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());
        _UpdateActions();

        if (_PlaneVisual != null)
        {
            StopAction(_TranslateAction);
            _TranslateAction = null;
            _PlaneVisual.Set(Entity.GetCenteredPlane(out _PlaneSize));
            _PlaneVisual.Size = new XY(_PlaneSize, _PlaneSize);
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _RotateActionFinished(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _IsMoving = false;
        CommitChanges();
        StartTools();
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionX_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _RotateActionPreviewed(args, _TranslatedPlane.XAxis);
        StopAction(_RotateActionY);
        _RotateActionY = null;
        StopAction(_RotateActionZ);
        _RotateActionZ = null;
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RotateActionY_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _RotateActionPreviewed(args, _TranslatedPlane.YAxis);
        StopAction(_RotateActionX);
        _RotateActionX = null;
        StopAction(_RotateActionZ);
        _RotateActionZ = null;
    }

    //--------------------------------------------------------------------------------------------------
        
    void _RotateActionZ_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _RotateActionPreviewed(args, _TranslatedPlane.Axis);
        StopAction(_RotateActionX);
        _RotateActionX = null;
        StopAction(_RotateActionY);
        _RotateActionY = null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<CrossSectionEditor>();
    }
}
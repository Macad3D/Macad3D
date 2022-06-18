using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
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

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        _Panel = PropertyPanel.CreatePanel<CrossSectionPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

        InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;     

        _UpdateHints();
        _UpdateActions();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;                 
        
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
        WorkspaceController.Invalidate();

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
    }
            
    //--------------------------------------------------------------------------------------------------

    void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
    {
        if (entity == Entity.Body)
        {
            _TranslateAction.Deactivate();
            _RotateActionX.Deactivate();
            _RotateActionY.Deactivate();

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
        _TranslatedPlane = Entity.GetCenteredPlane(out _PlaneSize).Transformed(trsf);

        _PlaneVisual ??= new Plane(WorkspaceController);
        _PlaneVisual.Transparency = 0.7;
        _PlaneVisual.Boundary = false;
        _PlaneVisual.Color = Colors.ActionBlue;
        _PlaneVisual.Set(_TranslatedPlane);
        _PlaneVisual.SetSize(_PlaneSize, _PlaneSize);
        _PlaneVisual.SetLocalTransformation(null);
    }

    //--------------------------------------------------------------------------------------------------

    #region Translate Action

    TranslateAxisLiveAction _TranslateAction;
    RotateLiveAction _RotateActionX;
    RotateLiveAction _RotateActionY;

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_TranslateAction == null)
        {
            _TranslateAction = new(this)
            {
                Color = Colors.ActionBlue,
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
                VisualLimits = (-Maths.HalfPI, Maths.HalfPI)
            };
            _RotateActionY.Previewed += _RotateActionYPreviewed;
            _RotateActionY.Finished += _RotateActionYFinished;
        }
        _RotateActionY.Radius = _PlaneSize / 3;
        _RotateActionY.Position = new Ax2(_TranslatedPlane.Location, _TranslatedPlane.YAxis.Direction, _TranslatedPlane.Axis.Direction);
        WorkspaceController.StartLiveAction(_RotateActionY);
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionPreviewed(LiveAction liveAction)
    {
        if (_PlaneVisual != null)
        {
            _PlaneVisual.SetLocalTransformation(new Trsf(_TranslatedPlane.Location, _TranslateAction.Axis.Location));
            _PlaneVisual.Transparency = 0.0;
            _RotateActionX.Deactivate();
            _RotateActionY.Deactivate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(LiveAction liveAction)
    {
        _TranslateAction.Deactivate();
        Entity.Plane = _TranslatedPlane.Translated(_TranslatedPlane.Location, _TranslateAction.Axis.Location)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());
        InteractiveContext.Current.UndoHandler.Commit();
    }
    
    //--------------------------------------------------------------------------------------------------

    void _RotateActionXPreviewed(LiveAction liveAction)
    {
        if (_PlaneVisual != null)
        {
            _TranslateAction.Deactivate();
            _RotateActionY.Deactivate();
            _PlaneVisual.SetLocalTransformation(new Trsf(_TranslatedPlane.XAxis, _RotateActionX.Delta));
            _PlaneVisual.Transparency = 0.0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionXFinished(LiveAction liveAction)
    {
        _RotateActionX.Deactivate();
        Entity.Plane = _TranslatedPlane.Rotated(_TranslatedPlane.XAxis, _RotateActionX.Delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());
        InteractiveContext.Current.UndoHandler.Commit();
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RotateActionYPreviewed(LiveAction liveAction)
    {
        if (_PlaneVisual != null)
        {
            _TranslateAction.Deactivate();
            _RotateActionX.Deactivate();
            _PlaneVisual.SetLocalTransformation(new Trsf(_TranslatedPlane.YAxis, _RotateActionY.Delta));
            _PlaneVisual.Transparency = 0.0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActionYFinished(LiveAction liveAction)
    {
        _RotateActionY.Deactivate();
        Entity.Plane = _TranslatedPlane.Rotated(_TranslatedPlane.YAxis, _RotateActionY.Delta)
                                       .Transformed(Entity.Body.GetTransformation().Inverted());
        InteractiveContext.Current.UndoHandler.Commit();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<CrossSectionEditor>();
    }
}
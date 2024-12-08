using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;

public sealed class VisualPlane : VisualObject
{
    public override AIS_InteractiveObject AisObject
    {
        get
        {
            _EnsureAisObject();
            return _AisObject;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool IsSelectable
    {
        get { return _IsSelectable(); }
    }

    //--------------------------------------------------------------------------------------------------

    public float Transparency
    {
        get { return _Transparency; }
        private set
        {
            _Transparency = value;
            _UpdatePresentation();
        }
    }


    //--------------------------------------------------------------------------------------------------

    AISX_Plane _AisObject;
    readonly DatumPlane _DatumPlane;
    Image_PixMap _Texture;
    float _Transparency = 0.8f;

    //--------------------------------------------------------------------------------------------------

        
    #region c'tors

    static VisualPlane()
    {
        Layer.PresentationChanged += _OnPresentationChanged;
        Layer.InteractivityChanged += _OnInteractivityChanged;
        VisualObjectManager.IsolatedEntitiesChanged += _VisualObjectManager_IsolatedEntitiesChanged;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static VisualPlane Create(WorkspaceController workspaceController, InteractiveEntity entity)
    {
        if (entity is DatumPlane imagePlane)
        {
            return new VisualPlane(workspaceController, imagePlane);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public VisualPlane(WorkspaceController workspaceController, DatumPlane entity) 
        : base(workspaceController, entity)
    {
        _DatumPlane = entity;
        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public static SelectionSignature SelectionSignature => new (AIS_KindOfInteractive.Datum, 7);

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        VisualObjectManager.Register<DatumPlane>(Create);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Layer

    static void _VisualObjectManager_IsolatedEntitiesChanged(VisualObjectManager visualObjectManager)
    {
        foreach (var visualPlane in visualObjectManager.GetAll().OfType<VisualPlane>())
        {
            visualPlane._UpdateInteractivityStatus();
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _OnInteractivityChanged(Layer layer)
    {
        var workspaceController = InteractiveContext.Current?.WorkspaceController;
        if (workspaceController == null)
            return;

        foreach (var visualPlane in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualPlane>())
        {
            visualPlane._UpdateInteractivityStatus();
        }
    }
        
    //--------------------------------------------------------------------------------------------------
        
    static void _OnPresentationChanged(Layer layer)
    {
        var workspaceController = InteractiveContext.Current?.WorkspaceController;
        if (workspaceController == null)
            return;

        foreach (var visualPlane in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualPlane>())
        {
            var aisShape = visualPlane._AisObject;
            if (aisShape == null)
                continue;
                
            aisShape.SetColor((layer?.Color ?? Colors.Auxillary).ToQuantityColor());
            workspaceController.AisContext.RecomputePrsOnly(aisShape, false, true);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public override void Remove()
    {
        if (_AisObject != null)
        {
            AisContext.Erase(_AisObject, false);
            _AisObject = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Update()
    {
        if (_AisObject == null)
        {
            _EnsureAisObject();
        }
        else
        {
            _UpdatePresentation();
            AisContext.Redisplay(_AisObject, false);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisObject == null)
            return;

        _AisObject.SetPlane(new Pln(_DatumPlane.GetCoordinateSystem()));
        _AisObject.SetSize(_DatumPlane.SizeX, _DatumPlane.SizeY);
        _AisObject.SetColor((_DatumPlane.Layer?.Color ?? Colors.Auxillary).ToQuantityColor());
        _AisObject.SetTransparency(_Transparency);

        if (!_DatumPlane.ImageFilePath.IsNullOrEmpty())
        {
            _Texture = ImageCache.LoadCachedImage(_DatumPlane.ImageFilePath, false);
            if (_Texture != null)
            {
                _AisObject.SetTexture(_Texture);
            }
        }
        else
        {
            _Texture = null;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _EnsureAisObject()
    {
        if (_AisObject != null)
            return;

        if (_DatumPlane == null) 
            return;

        _AisObject = new AISX_Plane();

        _UpdatePresentation();

        _AisObject.SetOwner(new AISX_Guid(_DatumPlane.Guid));

        _UpdateInteractivityStatus();
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsSelectable()
    {
        if (_AisObject == null)
            return false;

        var layer = Entity?.Layer;
        if (layer == null)
            return false;

        if (!layer.IsVisible
            || layer.IsLocked
            || CoreContext.Current.Layers.IsolateActiveLayer && CoreContext.Current.Layers.ActiveLayer != layer)
        {
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateInteractivityStatus()
    {
        if (_AisObject == null)
            return;

        var layer = Entity?.Layer;
        if (layer == null)
            return;

        bool isVisible = layer.IsVisible;
        if (WorkspaceController.VisualObjects.EntityIsolationEnabled)
        {
            isVisible &= WorkspaceController.VisualObjects.GetIsolatedEntities().Contains(Entity);
        }

        if (isVisible)
        {
            if (AisContext.IsDisplayed(_AisObject))
            {
                AisContext.Update(_AisObject, false);
            }
            else
            {
                AisContext.Display(_AisObject, false);
            }

            if (WorkspaceController.Selection.SelectedEntities.Contains(Entity) && !AisContext.IsSelected(_AisObject))
            {
                AisContext.AddOrRemoveSelected(_AisObject, false);
            }
        }
        else
        {
            if (AisContext.IsDisplayed(_AisObject))
            {
                AisContext.Erase(_AisObject, false);
            }
        }

        RaiseAisObjectChanged();
    }

    //--------------------------------------------------------------------------------------------------

}
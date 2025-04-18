﻿using System;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Components;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;
//--------------------------------------------------------------------------------------------------

public sealed class VisualShape : VisualObject
{
    #region Enums

    [Flags]
    public enum Options
    {
        None,
        Ghosting = 1<<0,   // Used to visualize a normally hidden object
    }

    #endregion

    #region Properties

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisShape ?? _ErrorMarker?.AisObject; }
    }

    //--------------------------------------------------------------------------------------------------

    public TopoDS_Shape OverrideBrep
    {
        get { return _OverrideBrep; }
        set
        {
            _OverrideBrep = value;
            Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsHidden
    {
        get { return _IsHidden; }
        set
        {
            if(_IsHidden != value)
            {
                _IsHidden = value;
                _UpdateAisDisplay();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool IsSelectable
    {
        get { return !_IsFreezed && _IsSelectable(); }
        set {
            if (_IsFreezed != !value)
            {
                _IsFreezed = !value;
                _UpdateAisDisplay();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    AIS_Shape _AisShape;
    bool _IsHidden;
    bool _IsFreezed;
    VisualStyle _VisualStyle;
    readonly Options _Options;
    TopoDS_Shape _OverrideBrep;
    Marker _ErrorMarker;

    static readonly WeakTable<object, AttributeSet> _DrawerCache = new();

    //--------------------------------------------------------------------------------------------------

    class AttributeSet
    {
        public Prs3d_Drawer Drawer { get; }

        public AttributeSet()
        {
            Drawer = new Prs3d_Drawer();
            Drawer.SetupOwnDefaults();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Statics

    static VisualShape()
    {
        Layer.PresentationChanged += _OnPresentationChanged;
        Layer.InteractivityChanged += _OnInteractivityChanged;
        VisualObjectManager.IsolatedEntitiesChanged += _VisualObjectManager_IsolatedEntitiesChanged;
    }

    //--------------------------------------------------------------------------------------------------

    public static VisualShape Create(WorkspaceController workspaceController, InteractiveEntity entity)
    {
        return new VisualShape(workspaceController, entity);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        VisualObjectManager.Register<Body>(Create);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Layer

    static void _VisualObjectManager_IsolatedEntitiesChanged(VisualObjectManager visualObjectManager)
    {
        foreach (var visualShape in visualObjectManager.GetAll().OfType<VisualShape>())
        {
            visualShape._UpdateAisDisplay();
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _OnInteractivityChanged(Layer layer)
    {
        var workspaceController = InteractiveContext.Current?.WorkspaceController;
        if (workspaceController == null)
            return;

        foreach (var visualShape in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualShape>())
        {
            visualShape._UpdateAisDisplay();
            visualShape._UpdatePresentation();
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _OnPresentationChanged(Layer layer)
    {
        if (!_DrawerCache.TryGetValue(layer, out var drawer))
            return;

        var newDisplayMode = (int)(layer.PresentationMode == PresentationMode.Wireframe ? AIS_DisplayMode.WireFrame : AIS_DisplayMode.Shaded);
        var displayModeChanged = drawer.Drawer.DisplayMode() != newDisplayMode;
        _UpdateAttributesForLayer(layer, ref drawer);

        var workspaceController = InteractiveContext.Current?.WorkspaceController;
        if (workspaceController == null)
            return;

        foreach (var visualShape in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualShape>())
        {
            var aisShape = visualShape._AisShape;
            if (aisShape == null)
                continue;
                
            if (displayModeChanged)
            {
                workspaceController.AisContext.SetDisplayMode(aisShape, newDisplayMode, false);
            }

            workspaceController.AisContext.RecomputePrsOnly(aisShape, false, true);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _UpdateAttributesForLayer(Layer layer, ref AttributeSet attributeSet)
    {
        // Normal mode Drawer
        var shadingAspect = new Prs3d_ShadingAspect();
        shadingAspect.SetColor(layer.Color.ToQuantityColor());
        shadingAspect.SetMaterial(new Graphic3d_MaterialAspect(Graphic3d_NameOfMaterial.PLASTIC));
        shadingAspect.SetTransparency(layer.Transparency);
        attributeSet.Drawer.SetShadingAspect(shadingAspect);

        var lineAspect = new Prs3d_LineAspect(layer.Color.ToQuantityColor(), Aspect_TypeOfLine.SOLID, layer.LineThickness.LineWidth());
        layer.LineStyle.ApplyToAspect(lineAspect);
        attributeSet.Drawer.SetLineAspect(lineAspect);
        attributeSet.Drawer.SetSeenLineAspect(lineAspect);
        attributeSet.Drawer.SetWireAspect(lineAspect);
        attributeSet.Drawer.SetFaceBoundaryAspect(lineAspect);
        attributeSet.Drawer.SetFreeBoundaryAspect(lineAspect);
        attributeSet.Drawer.SetUnFreeBoundaryAspect(lineAspect);
        attributeSet.Drawer.SetFaceBoundaryUpperContinuity(GeomAbs_Shape.C2);
        attributeSet.Drawer.SetPointAspect(new Prs3d_PointAspect(Aspect_TypeOfMarker.O_POINT, layer.Color.ToQuantityColor(), 2.0));

        attributeSet.Drawer.SetFaceBoundaryDraw(layer.PresentationMode == PresentationMode.SolidWithBoundary);
        attributeSet.Drawer.SetDisplayMode((int)(layer.PresentationMode == PresentationMode.Wireframe ? AIS_DisplayMode.WireFrame : AIS_DisplayMode.Shaded));

        attributeSet.Drawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region C'tor, Remove

    public VisualShape(WorkspaceController workspaceController, InteractiveEntity entity)
        : this(workspaceController, entity, Options.None)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public VisualShape(WorkspaceController workspaceController, InteractiveEntity entity, Options options)
        : base(workspaceController, entity)
    {
        _Options = options;
        if (entity != null)
        {
            /*_VisualStyle = entity.GetVisualStyleComponent();
            if (_VisualStyle != null)
                _VisualStyle.VisualStyleChanged += _VisualStyle_VisualStyleChanged;*/
        }
        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        if (_AisShape == null) 
            return;

        if (AisContext.IsHilighted(_AisShape))
            AisContext.Unhilight(_AisShape, false);
        AisContext.Remove(_AisShape, false);

        AisContext.Erase(_AisShape, false);
        _AisShape = null;

        _ErrorMarker?.Remove();
        _ErrorMarker = null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Updating

    public override void Update()
    {
        if (Entity == null || AisContext == null)
            return;

        var brep = OverrideBrep ?? (Entity as Body)?.GetTransformedBRep();
        if (brep != null)
        {
            if (_AisShape != null)
            {
                Remove();
            }

            _AisShape = new AIS_Shape(brep);
            _AisShape.SetOwner(new AISX_Guid(Entity.Guid));

            _UpdatePresentation();
            _UpdateAisDisplay();
        }

        _UpdateMarker();
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisShape == null)
            return;

        var layer = Entity?.Layer;
        if (layer == null)
            return;

        AttributeSet attributeSet;
        if (!_DrawerCache.TryGetValue(layer, out attributeSet))
        {
            attributeSet = new AttributeSet();
            _UpdateAttributesForLayer(layer, ref attributeSet);
            _DrawerCache.SetValue(layer, attributeSet);
        }

        _AisShape.SetAttributes(attributeSet.Drawer);
        _AisShape.SynchronizeAspects();

        if (_Options.HasFlag(Options.Ghosting))
        {
            _UpdatePresentationForGhost();
        } 

        AisContext.RecomputePrsOnly(_AisShape, false, true);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentationForGhost()
    {
        _AisShape.SetDisplayMode((int)AIS_DisplayMode.Shaded);
        var ghostDrawer = new Prs3d_Drawer();
        ghostDrawer.Link(_AisShape.Attributes());
        ghostDrawer.SetDisplayMode((int)AIS_DisplayMode.Shaded);

        var shadingAspect = new Prs3d_ShadingAspect();
        shadingAspect.SetColor(Colors.Ghost.ToQuantityColor());
        shadingAspect.SetMaterial(new Graphic3d_MaterialAspect(Graphic3d_NameOfMaterial.DEFAULT));
        shadingAspect.SetTransparency(0.75);
        ghostDrawer.SetShadingAspect(shadingAspect);

        var lineAspect = new Prs3d_LineAspect(Colors.Ghost.ToQuantityColor(), Aspect_TypeOfLine.SOLID, 0.5);
        ghostDrawer.SetLineAspect(lineAspect);
        ghostDrawer.SetSeenLineAspect(lineAspect);
        ghostDrawer.SetWireAspect(lineAspect);
        ghostDrawer.SetFaceBoundaryAspect(lineAspect);
        ghostDrawer.SetFreeBoundaryAspect(lineAspect);
        ghostDrawer.SetUnFreeBoundaryAspect(lineAspect);
        ghostDrawer.SetPointAspect(new Prs3d_PointAspect(Aspect_TypeOfMarker.O_POINT, Colors.Ghost.ToQuantityColor(), 0.5));
        ghostDrawer.SetFaceBoundaryDraw(true);
           
        _AisShape.SetAttributes(ghostDrawer);
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsSelectable()
    {
        if (AisObject == null)
            return false;

        if (_Options.HasFlag(Options.Ghosting))
        {
            return false;
        }

        var layer = Entity?.Layer;
        if (layer == null)
            return false;

        if (_IsHidden 
            || !Entity.IsVisible
            || !layer.IsVisible
            || layer.IsLocked
            || CoreContext.Current.Layers.IsolateActiveLayer && CoreContext.Current.Layers.ActiveLayer != layer)
        {
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateAisDisplay()
    {
        var aisShape = _AisShape ?? _ErrorMarker?.AisObject;
        if (aisShape == null)
            return;

        if (_Options.HasFlag(Options.Ghosting))
        {
            AisContext.Display(aisShape, false);
            AisContext.Deactivate(aisShape);
            return;
        }

        var layer = Entity?.Layer;
        if (layer == null)
            return;

        bool isVisible = !_IsHidden && Entity.IsVisible && layer.IsVisible;
        if (WorkspaceController.VisualObjects.EntityIsolationEnabled)
        {
            isVisible &= WorkspaceController.VisualObjects.GetIsolatedEntities().Contains(Entity);
        }

        if (isVisible)
        {
            if (AisContext.IsDisplayed(aisShape))
            {
                AisContext.Update(aisShape, false);
            }
            else
            {
                AisContext.Display(aisShape, false);
            }

            _UpdateSelectionSensitivity();

            if (WorkspaceController.Selection.SelectedEntities.Contains(Entity)
                && !AisContext.IsSelected(aisShape))
            {
                AisContext.AddOrRemoveSelected(aisShape, false);
            }
        }
        else
        {
            if (AisContext.IsDisplayed(aisShape))
            {
                AisContext.Erase(aisShape, false);
            }
        }

        RaiseAisObjectChanged();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateSelectionSensitivity()
    {
        if (_AisShape == null)
            return;

        // Check if shape is activated
        var modes = new TColStd_ListOfInteger();
        AisContext.ActivatedModes(_AisShape, modes);
        var modeList = modes.ToList();
        if (!modeList.Contains(0))
        {
            return;
        }

        if ((Entity as Body)?.Shape.ShapeType == ShapeType.Sketch)
        {
            var paramSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            AisContext.SetSelectionSensitivity(_AisShape, 0, (int)(paramSet.SketchSelectionSensitivity * 10.0));
        }
        else
        {
            AisContext.SetSelectionSensitivity(_AisShape, 0, 2);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void SetSelectionModes(bool activate, SubshapeTypes subshapeTypes)
    {
        if (IsSelectable)
        {
            if (_AisShape != null)
            {
                // Get already activated modes
                var colActivatedModes = new TColStd_ListOfInteger();
                AisContext.ActivatedModes(_AisShape, colActivatedModes);
                var activatedModes = colActivatedModes.ToList();

                // Enlist all requested modes
                var modesToBeActivated = new bool[5];
                modesToBeActivated[0] = activate && subshapeTypes == SubshapeTypes.None;
                modesToBeActivated[SubshapeType.Vertex.ToAisSelectionMode()] = subshapeTypes.HasFlag(SubshapeTypes.Vertex);
                modesToBeActivated[SubshapeType.Edge.ToAisSelectionMode()] =  subshapeTypes.HasFlag(SubshapeTypes.Edge);
                modesToBeActivated[SubshapeType.Wire.ToAisSelectionMode()] = subshapeTypes.HasFlag(SubshapeTypes.Wire);
                modesToBeActivated[SubshapeType.Face.ToAisSelectionMode()] = subshapeTypes.HasFlag(SubshapeTypes.Face);

                // Deactivate all modes which are not requested
                foreach (var mode in activatedModes)
                {
                    if (!modesToBeActivated[mode])
                    {
                        AisContext.SetSelectionModeActive(_AisShape, mode, false, AIS_SelectionModesConcurrency.Multiple);
                    }
                }

                // Activate all requested modes
                for (int mode = 0; mode < 5; mode++)
                {
                    if (modesToBeActivated[mode])
                    {
                        AisContext.SetSelectionModeActive(_AisShape, mode, true, AIS_SelectionModesConcurrency.Multiple);
                    }
                }
            }
            else if (_ErrorMarker != null)
            {
                base.SetSelectionModes(true, subshapeTypes);
            }
        }
        else
        {
            AisContext.Deactivate(AisObject);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Visual Style

    public void SetVisualStyle(VisualStyle visualStyle)
    {
        if (_VisualStyle != null)
            _VisualStyle.VisualStyleChanged -= _VisualStyle_VisualStyleChanged;

        _VisualStyle = visualStyle;

        if (_VisualStyle != null)
            _VisualStyle.VisualStyleChanged += _VisualStyle_VisualStyleChanged;

        _UpdatePresentation();
    }

    //--------------------------------------------------------------------------------------------------

    void _VisualStyle_VisualStyleChanged(Body body, VisualStyle visualStyle)
    {
        _UpdatePresentation();
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Error Marker

    void _UpdateMarker()
    {
        var shape = (Entity as Body)?.Shape;
        var brep = shape?.GetTransformedBRep() ?? _AisShape?.Shape();

        if (shape is { HasErrors: true } || brep == null)
        {
            if (_ErrorMarker == null)
            {
                _ErrorMarker = new (WorkspaceController, Marker.Styles.Image | Marker.Styles.Topmost, Marker.ErrorImage);
                _ErrorMarker.Set(brep?.CenterOfMass() ?? (Entity as ITransformable)?.Position ?? Pnt.Origin);
                _ErrorMarker.AisObject.SetOwner(new AISX_Guid(Entity.Guid));
            }

            _ErrorMarker.IsSelectable = IsSelectable;
            _UpdateAisDisplay();
        }
        else
        {
            _ErrorMarker?.Remove();
            _ErrorMarker = null;
        }
    }

    #endregion
}
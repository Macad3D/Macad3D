using System;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Components;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Visual
{
    //--------------------------------------------------------------------------------------------------

    public class VisualShape : VisualObject
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
            get { return _AisShape; }
        }

        //--------------------------------------------------------------------------------------------------

        public InteractiveEntity ShapeSourceEntity {  get { return _ShapeSource; } }

        //--------------------------------------------------------------------------------------------------

        public TopoDS_Shape OverrideBrep
        {
            get { return _OverrideBrep; }
            set
            {
                _OverrideBrep = value;
                UpdateShape();
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
                    _UpdateInteractivityStatus();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members

        readonly InteractiveEntity _ShapeSource;
        AIS_Shape _AisShape;
        bool _IsHidden;
        VisualStyle _VisualStyle;
        Options _Options;
        TopoDS_Shape _OverrideBrep;
        Marker _ErrorMarker;

        class AttributeSet
        {
            public Prs3d_Drawer Drawer { get; }
            public Prs3d_Drawer HilightDrawer { get; }

            public AttributeSet()
            {
                Drawer = new Prs3d_Drawer();
                HilightDrawer = new Prs3d_Drawer();
                HilightDrawer.Link(Drawer);
            }
        }

        static readonly WeakTable<object, AttributeSet> _DrawerCache = new WeakTable<object, AttributeSet>();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Layer

        static VisualShape()
        {
            Layer.PresentationChanged += _OnPresentationChanged;
            Layer.InteractivityChanged += _OnInteractivityChanged;
            VisualShapeManager.IsolatedEntitiesChanged += _VisualShapeManager_IsolatedEntitiesChanged;
        }

        //--------------------------------------------------------------------------------------------------

        static void _VisualShapeManager_IsolatedEntitiesChanged(VisualShapeManager visualShapeManager)
        {
            foreach (var visualShape in visualShapeManager.GetVisualShapes())
            {
                visualShape._UpdateInteractivityStatus();
            }
        }

        //--------------------------------------------------------------------------------------------------

        static void _OnInteractivityChanged(Layer layer)
        {
            var workspaceController = InteractiveContext.Current?.WorkspaceController;
            if (workspaceController == null)
                return;

            foreach (var visualShape in workspaceController.VisualShapes.GetVisualShapes(entity => entity.GetLayer() == layer))
            {
                visualShape._UpdateInteractivityStatus();
            }
        }

        //--------------------------------------------------------------------------------------------------

        static void _OnPresentationChanged(Layer layer)
        {
            if (!_DrawerCache.TryGetValue(layer, out var drawer))
                return;

            var newDisplayMode = (int)(layer.PresentationMode == PresentationMode.Wireframe ? AIS_DisplayMode.AIS_WireFrame : AIS_DisplayMode.AIS_Shaded);
            var displayModeChanged = drawer.Drawer.DisplayMode() != newDisplayMode;
            _UpdateAttributesForLayer(layer, ref drawer);

            var workspaceController = InteractiveContext.Current?.WorkspaceController;
            if (workspaceController == null)
                return;

            foreach (var visualShape in workspaceController.VisualShapes.GetVisualShapes(entity => entity.GetLayer() == layer))
            {
                var aisShape = visualShape._AisShape;
                if (aisShape == null)
                    continue;
                
                if (displayModeChanged)
                {
                    workspaceController.Workspace.AisContext.SetDisplayMode(aisShape, newDisplayMode, false);
                }

                workspaceController.Workspace.AisContext.RecomputePrsOnly(aisShape, false, true);
            }
        }

        //--------------------------------------------------------------------------------------------------

        static void _UpdateAttributesForLayer(Layer layer, ref AttributeSet attributeSet)
        {
            // Normal mode Drawer
            var shadingAspect = new Prs3d_ShadingAspect();
            shadingAspect.SetColor(layer.Color.ToQuantityColor());
            shadingAspect.SetMaterial(Graphic3d_NameOfMaterial.Graphic3d_NOM_PLASTIC.ToAspect());
            shadingAspect.SetTransparency(layer.Transparency);
            attributeSet.Drawer.SetShadingAspect(shadingAspect);

            var lineAspect = new Prs3d_LineAspect(layer.Color.ToQuantityColor(), layer.LineStyle.TypeOfLine(), layer.LineThickness.LineWidth());
            attributeSet.Drawer.SetLineAspect(lineAspect);
            attributeSet.Drawer.SetSeenLineAspect(lineAspect);
            attributeSet.Drawer.SetWireAspect(lineAspect);
            attributeSet.Drawer.SetFaceBoundaryAspect(lineAspect);
            attributeSet.Drawer.SetFreeBoundaryAspect(lineAspect);
            attributeSet.Drawer.SetUnFreeBoundaryAspect(lineAspect);
            attributeSet.Drawer.SetPointAspect(new Prs3d_PointAspect(Aspect_TypeOfMarker.Aspect_TOM_O_POINT, layer.Color.ToQuantityColor(), 2.0));

            attributeSet.Drawer.SetFaceBoundaryDraw(layer.PresentationMode == PresentationMode.SolidWithBoundary);
            attributeSet.Drawer.SetDisplayMode((int)(layer.PresentationMode == PresentationMode.Wireframe ? AIS_DisplayMode.AIS_WireFrame : AIS_DisplayMode.AIS_Shaded));

            attributeSet.Drawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.Aspect_TOD_RELATIVE);

            // Hilight Drawer
            shadingAspect = new Prs3d_ShadingAspect();
            shadingAspect.SetColor(layer.Color.ToQuantityColor());
            shadingAspect.SetMaterial(Graphic3d_NameOfMaterial.Graphic3d_NOM_PLASTIC.ToAspect());
            shadingAspect.SetTransparency(0);
            attributeSet.HilightDrawer.SetShadingAspect(shadingAspect);

            lineAspect = new Prs3d_LineAspect(Colors.Selection, Aspect_TypeOfLine.Aspect_TOL_SOLID, 3.0);
            attributeSet.HilightDrawer.SetLineAspect(lineAspect);
            attributeSet.HilightDrawer.SetSeenLineAspect(lineAspect);
            attributeSet.HilightDrawer.SetWireAspect(lineAspect);
            attributeSet.HilightDrawer.SetFaceBoundaryAspect(lineAspect);
            attributeSet.HilightDrawer.SetFreeBoundaryAspect(lineAspect);
            attributeSet.HilightDrawer.SetUnFreeBoundaryAspect(lineAspect);
            attributeSet.HilightDrawer.SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, Colors.Selection));

            //TODO attributeSet.HilightDrawer.SetHighlightStyle(new Graphic3d_HighlightStyle(Aspect_TypeOfHighlightMethod.Aspect_TOHM_COLOR, new Quantity_Color(Quantity_NameOfColor.Quantity_NOC_ALICEBLUE)));

            attributeSet.HilightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.Aspect_TOD_RELATIVE);
            attributeSet.HilightDrawer.SetFaceBoundaryDraw(layer.PresentationMode == PresentationMode.SolidWithBoundary);
            attributeSet.HilightDrawer.SetDisplayMode(0);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region C'tor, Remove

        public VisualShape(WorkspaceController workspaceController, InteractiveEntity shapeSource, Options options = Options.None)
            : base(workspaceController)
        {
            _Options = options;
            _ShapeSource = shapeSource;
            if (_ShapeSource != null)
            {
                _VisualStyle = _ShapeSource.GetVisualStyleComponent();
                if (_VisualStyle != null)
                    _VisualStyle.VisualStyleChanged += _VisualStyle_VisualStyleChanged;
            }
            UpdateShape();
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

            _UpdateMarker();
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion

        #region Updating

        public void UpdateShape()
        {
            if (_AisShape == null)
            {
                _EnsureAisObject();
                _UpdateInteractivityStatus();
            }
            else
            {
                var ocShape = OverrideBrep ?? _ShapeSource.GetTransformedBRep();
                if (ocShape != null)
                {
                    if (_AisShape.Shape().ShapeType() != ocShape.ShapeType())
                    {
                        // If shape type changes, recompute can lead to crashes. It's better to redisplay AIS_Shape
                        Remove();
                        UpdateShape();
                    }
                    else
                    {
                        _AisShape.Set(ocShape);
                        _UpdatePresentation();
                        AisContext.RecomputeSelectionOnly(_AisShape);
                        _UpdateSelectionSensitivity();
                    }
                }
                else
                {
                    _UpdateMarker();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetLocalTransformation(Trsf? transformation)
        {
            if (_AisShape != null)
            {
                if (transformation != null)
                {
                    _AisShape.SetLocalTransformation(transformation.Value);
                }
                else
                {
                    _AisShape.ResetTransformation();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _EnsureAisObject()
        {
            if (_AisShape != null)
                return true;

            if ((_ShapeSource == null) || (AisContext == null))
                return false;

            var brep = OverrideBrep ?? _ShapeSource.GetTransformedBRep();
            if (brep == null)
                return false;

            _AisShape = new AIS_Shape(brep);

            _UpdatePresentation();
            _UpdateInteractivityStatus();

            if (WorkspaceController.Selection.SelectedEntities.Contains(_ShapeSource) && !IsHidden)
            {
                AisContext.AddOrRemoveSelected(_AisShape, false);
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdatePresentation()
        {
            _UpdateMarker();

            if (_AisShape == null)
                return;

            var layer = _ShapeSource?.GetLayer();
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
            //_AisShape.SetHilightAttributes(attributeSet.HilightDrawer);

            _AisShape.SynchronizeAspects();

            if (_Options.HasFlag(Options.Ghosting))
            {
                _UpdatePresentationForGhost();
            } 

            //TODO maybe not needed due to call to SynchronizeAspects
            AisContext.RecomputePrsOnly(_AisShape, false, true);
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdatePresentationForGhost()
        {
            _AisShape.SetDisplayMode((int)AIS_DisplayMode.AIS_Shaded);
            var ghostDrawer = new Prs3d_Drawer();
            ghostDrawer.Link(_AisShape.Attributes());

            var shadingAspect = new Prs3d_ShadingAspect();
            shadingAspect.SetColor(Colors.Ghost);
            shadingAspect.SetTransparency(0.5);
            ghostDrawer.SetShadingAspect(shadingAspect);

            var lineAspect = new Prs3d_LineAspect(Colors.Ghost, Aspect_TypeOfLine.Aspect_TOL_SOLID, 2.0);
            ghostDrawer.SetLineAspect(lineAspect);
            ghostDrawer.SetSeenLineAspect(lineAspect);
            ghostDrawer.SetWireAspect(lineAspect);
            ghostDrawer.SetFaceBoundaryAspect(lineAspect);
            ghostDrawer.SetFreeBoundaryAspect(lineAspect);
            ghostDrawer.SetUnFreeBoundaryAspect(lineAspect);
            ghostDrawer.SetPointAspect(new Prs3d_PointAspect(Aspect_TypeOfMarker.Aspect_TOM_O_POINT, Colors.Ghost, 2.0));
            ghostDrawer.SetFaceBoundaryDraw(true);
           
            _AisShape.SetAttributes(ghostDrawer);
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsSelectable()
        {
            if (_AisShape == null)
                return false;

            if (_Options.HasFlag(Options.Ghosting))
            {
                return false;
            }

            var layer = _ShapeSource?.GetLayer();
            if (layer == null)
                return false;

            if (_IsHidden 
                || !layer.IsVisible
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
            if (_AisShape == null)
                return;

            if (_Options.HasFlag(Options.Ghosting))
            {
                AisContext.Display(_AisShape, false);
                AisContext.Deactivate(_AisShape);
                return;
            }

            var layer = _ShapeSource?.GetLayer();
            if (layer == null)
                return;

            bool isVisible = !_IsHidden && layer.IsVisible;
            if (WorkspaceController.VisualShapes.EntityIsolationEnabled)
            {
                isVisible &= WorkspaceController.VisualShapes.GetIsolatedEntities().Contains(_ShapeSource);
            }

            if (isVisible)
            {
                if (AisContext.IsDisplayed(_AisShape))
                {
                    AisContext.Update(_AisShape, false);
                }
                else
                {
                    AisContext.Display(_AisShape, false);
                }

                _UpdateSelectionSensitivity();
            }
            else
            {
                if (AisContext.IsDisplayed(_AisShape))
                {
                    AisContext.Erase(_AisShape, false);
                }
            }

            _RaiseAisObjectChanged();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateSelectionSensitivity()
        {
            // Check if shape is activated
            var modes = new TColStd_ListOfInteger();
            AisContext.ActivatedModes(_AisShape, modes);
            var modeList = modes.ToList();
            if (!modeList.Contains(0))
            {
                return;
            }

            if ((_ShapeSource as Body)?.Shape.ShapeType == ShapeType.Sketch)
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

        #endregion

        #region Events

        public delegate void AisObjectChangedEventHandler(VisualShape theShape);

        //--------------------------------------------------------------------------------------------------

        public static event AisObjectChangedEventHandler AisObjectChanged;

        //--------------------------------------------------------------------------------------------------

        void _RaiseAisObjectChanged()
        {
            AisObjectChanged?.Invoke(this);
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
            var shape = (_ShapeSource as Body)?.Shape;

            if (_AisShape != null && shape != null && !shape.IsValid)
            {
                if (_ErrorMarker == null)
                {
                    _ErrorMarker = new Marker(WorkspaceController, Marker.Styles.Image | Marker.Styles.Topmost, Marker.ErrorImage);
                    var brep = shape.GetTransformedBRep() ?? _AisShape.Shape();
                    if (brep != null)
                    {
                        _ErrorMarker.Set(brep.CenterOfMass());
                    }
                    else
                    {
                        _ErrorMarker.Set(shape.Body.Position);
                    }
                }
            }
            else
            {
                _ErrorMarker?.Remove();
                _ErrorMarker = null;
            }
        }

        #endregion
    }
}
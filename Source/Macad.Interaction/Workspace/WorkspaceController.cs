using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using System.Windows.Threading;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Extensions;
using Macad.Occt.Helper;

namespace Macad.Interaction;

public sealed class WorkspaceController : BaseObject, IContextMenuItemProvider, IDisposable
{
    #region Properties

    public Workspace Workspace { get; }

    public Viewport ActiveViewport { get; set; }

    public ViewportController ActiveViewControlller
    {
        get { return GetViewController(ActiveViewport); }
    }

    public IHudManager HudManager { get; set; }

    public bool LockWorkingPlane { get; set; }

    public SelectionManager Selection { get; }
        
    public bool IsSelecting { get; private set; }

    public VisualObjectManager VisualObjects { get; init; }
    
    public Pnt? CursorPosition
    {
        get
        {
            return _CursorPosition;
        }
        set
        {
            if (_CursorPosition != value)
            {
                _CursorPosition = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Pnt2d? CursorPosition2d
    {
        get
        {
            return _CursorPosition2d;
        }
        set
        {
            if (_CursorPosition2d != value)
            {
                _CursorPosition2d = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member variables

    readonly List<ViewportController> _ViewControllers = [];
    readonly DispatcherTimer _RedrawTimer;
    AISX_Grid _Grid;
    XY _LastGridSize = new(200.0, 200.0);
    bool _GridNeedsUpdate;
    readonly List<AIS_InteractiveObject> _CustomHighlights = [];

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    public WorkspaceController(Workspace workspace)
    {
        Debug.Assert(workspace != null);

        Workspace = workspace;
        workspace.GridChanged += _Workspace_GridChanged;

        Viewport.ViewportChanged += _Viewport_ViewportChanged;

        VisualObjects = new VisualObjectManager(this);

        Selection = new SelectionManager(this);
        Selection.SelectionChanging += _Selection_SelectionChanging;
        Selection.SelectionChanged += _Selection_SelectionChanged;

        VisualParameterSet.ParameterChanged += _ParameterSet_ParameterChanged;
        ViewportParameterSet.ParameterChanged += _ParameterSet_ParameterChanged;

        _RedrawTimer = new DispatcherTimer(DispatcherPriority.Render)
        {
            Interval = TimeSpan.FromSeconds(1.0/60.0)
        };
        _RedrawTimer.Tick += _RedrawTimer_Tick;
        _RedrawTimer.Start();

        InitWorkspace();
    }

    //--------------------------------------------------------------------------------------------------

    ~WorkspaceController()
    {
        Dispose(false);
    }

    public void Dispose()
    {
        Dispose(true);
    }

    void Dispose(bool disposing)
    {
        if (disposing)
        {
            if (_CurrentTool != null)
                CancelTool(_CurrentTool, true);
            StopEditor();
        }

        _CurrentTool = null;
        _CurrentEditor = null;
        _Grid = null;
            
        _RedrawTimer.Stop();
        _RedrawTimer.Tick -= _RedrawTimer_Tick;

        VisualParameterSet.ParameterChanged -= _ParameterSet_ParameterChanged;
        ViewportParameterSet.ParameterChanged -= _ParameterSet_ParameterChanged;

        Selection.SelectionChanged -= _Selection_SelectionChanged;
        Selection.SelectionChanging -= _Selection_SelectionChanging;
        Selection.Dispose();

        VisualObjects.Dispose();

        Viewport.ViewportChanged -= _Viewport_ViewportChanged;

        foreach (var viewCtrl in _ViewControllers)
        {
            viewCtrl.Dispose();
        }
        _ViewControllers.Clear();
        _LastDetectedAisObject?.Dispose();

        Workspace.GridChanged -= _Workspace_GridChanged;
        Workspace.Dispose();

        GC.SuppressFinalize(this);
    }
        
    //--------------------------------------------------------------------------------------------------
        
    void _Workspace_GridChanged(Workspace sender)
    {
        if (Workspace == sender)
        {
            _RecalculateGridSize();
            _GridNeedsUpdate = true;
            _UpdateGrid();
            Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Viewport_ViewportChanged(Viewport sender)
    {
        if (_ViewControllers.Any(vc => vc.Viewport == sender))
        {
            _RecalculateGridSize();
            _UpdateParameter();
            Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ParameterSet_ParameterChanged(OverridableParameterSet set, string key)
    {
        _UpdateParameter();
    }

    //--------------------------------------------------------------------------------------------------

    void InitWorkspace()
    {
        Workspace.InitV3dViewer();
        Workspace.InitAisContext();
        _InitVisualSettings();

        foreach (var view in Workspace.Viewports)
        {
            var viewCtrl = new ViewportController(view, this);
            _ViewControllers.Add(viewCtrl);
        }

        _Grid = new AISX_Grid();
        AisHelper.DisableGlobalClipPlanes(_Grid);
        Workspace.AisContext?.Display(_Grid, 0, -1, false);

        VisualObjects.InitEntities();
        _UpdateGrid();
    }

    //--------------------------------------------------------------------------------------------------

    void _InitVisualSettings()
    {
        var aisContext = Workspace.AisContext;

        _UpdateParameter();

        // Higlight Selected
        var selectionDrawer = new Prs3d_Drawer();
        selectionDrawer.SetupOwnDefaults();
        selectionDrawer.SetColor(Colors.Selection.ToQuantityColor());
        selectionDrawer.SetDisplayMode(0);
        selectionDrawer.SetZLayer(0); // Graphic3d_ZLayerId_Default
        selectionDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        selectionDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        selectionDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
        aisContext.SetSelectionStyle(selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Selected, selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.LocalSelected, selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.SubIntensity, selectionDrawer);

        // Higlight Dynamic
        var hilightDrawer = new Prs3d_Drawer();
        hilightDrawer.SetupOwnDefaults();
        hilightDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        hilightDrawer.SetDisplayMode(0);
        hilightDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
        hilightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        hilightDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        hilightDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, hilightDrawer);

        // Higlight Local
        var hilightLocalDrawer = new Prs3d_Drawer();
        hilightLocalDrawer.SetupOwnDefaults();
        hilightLocalDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        hilightLocalDrawer.SetDisplayMode(1);
        hilightLocalDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
        hilightLocalDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        hilightLocalDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        hilightLocalDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());

        var shadingAspect = new Prs3d_ShadingAspect();
        shadingAspect.SetColor(Colors.Highlight.ToQuantityColor());
        shadingAspect.SetTransparency(0);
        shadingAspect.Aspect().SetPolygonOffsets((int)Aspect_PolygonOffsetMode.Fill, 0.99f, 0.0f);
        hilightLocalDrawer.SetShadingAspect(shadingAspect);

        var lineAspect = new Prs3d_LineAspect(Colors.Highlight.ToQuantityColor(), Aspect_TypeOfLine.SOLID, 3.0);
        hilightLocalDrawer.SetLineAspect(lineAspect);
        hilightLocalDrawer.SetSeenLineAspect(lineAspect);
        hilightLocalDrawer.SetWireAspect(lineAspect);
        hilightLocalDrawer.SetFaceBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetFreeBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetUnFreeBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, Colors.Highlight));

        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.LocalDynamic, hilightLocalDrawer);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateParameter()
    {
        if (Workspace.AisContext == null)
            return;

        var aisContext = Workspace.AisContext;
        var visualParameterSet = InteractiveContext.Current.Parameters.Get<VisualParameterSet>();
        aisContext.SetDeviationCoefficient(visualParameterSet.DeviationCoefficient);
        aisContext.SetDeviationAngle(visualParameterSet.DeviationAngle.ToRad());

        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        var viewport = ActiveViewport ?? Workspace.Viewports.First();
        aisContext.SetPixelTolerance((int)(viewportParameterSet.SelectionPixelTolerance * viewport.DpiScale));
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportController GetViewController(int viewIndex)
    {
        Debug.Assert(viewIndex >= 0);
        Debug.Assert(viewIndex < _ViewControllers.Count);

        return _ViewControllers[viewIndex];
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportController GetViewController(Viewport viewport)
    {
        if(viewport == null)
        {
            return null;
        }
        return _ViewControllers.Find(vc => vc.Viewport == viewport);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Workspace navigation

    readonly MouseEventData _MouseEventData = new();
    Point _LastMouseMovePosition;
    ViewportController _LastMouseMoveViewportController;
    ModifierKeys _LastModifierKeys;
    AIS_InteractiveObject _LastDetectedAisObject;
    SelectMgr_EntityOwner _LastDetectedOwner;
    Pnt? _CursorPosition;
    Pnt2d? _CursorPosition2d;
        
    //--------------------------------------------------------------------------------------------------

    public SelectionManager.SelectionMode _GetSelectionModeFromKeys(ModifierKeys mode)
    {
        return mode switch
        {
            ModifierKeys.Control => SelectionManager.SelectionMode.Toggle,
            ModifierKeys.Shift => SelectionManager.SelectionMode.Add,
            _ => SelectionManager.SelectionMode.Exclusive
        };
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseMove(ViewportController viewportController, Point pos, ModifierKeys modifierKeys)
    {
        _LastMouseMovePosition = pos;
        _LastMouseMoveViewportController = viewportController;
        _LastModifierKeys = modifierKeys;
        _MouseEventData.Clear();

        foreach (var aisObject in _CustomHighlights)
        {
            if (Workspace.AisContext.IsDisplayed(aisObject))
            {
                Workspace.AisContext.Unhilight(aisObject, false);
            }
        }
        _CustomHighlights.Clear();

        Selection.Update();

        if (pos.X < 0 || pos.Y < 0)
        {
            // Position is out of bounds, reset highlighting
            Workspace.AisContext.MoveTo(int.MinValue, int.MinValue, viewportController.Viewport.V3dView, false); ;
            Invalidate(true);
            return;
        }

        var status = Workspace.AisContext.MoveTo(Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), viewportController.Viewport.V3dView, false);
        Invalidate(true);

        if (status == AIS_StatusOfDetection.Error)
        {
            CursorPosition = null;
            CursorPosition2d = null;
            return;
        }

        Pnt planePoint;
        if (!viewportController.Viewport.ScreenToPoint(Workspace.WorkingPlane, Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), out planePoint))
        {
            CursorPosition = null;
            CursorPosition2d = null;
        }

        _LastDetectedAisObject = null;
        _LastDetectedOwner = null;
        _MouseEventData.Set(viewportController.Viewport, pos, planePoint, modifierKeys);

        if (Workspace.AisContext.HasDetected())
        {
            _LastDetectedOwner = Workspace.AisContext.DetectedOwner();
            _LastDetectedAisObject = Workspace.AisContext.DetectedInteractive();
            TopoDS_Shape detectedShape = AisHelper.GetShapeFromEntityOwner(_LastDetectedOwner);
            InteractiveEntity detectedEntity = VisualObjects.GetEntity(_LastDetectedAisObject);
            _MouseEventData.SetDetectedElement(_LastDetectedAisObject, detectedEntity, detectedShape);
        }

        CursorPosition = planePoint;
        CursorPosition2d = Workspace.WorkingPlane.Parameters(planePoint);

        foreach (var handler in EnumerateControls())
        {
            if (handler.OnMouseMove(_MouseEventData))
                break;
        }

        // Process return infos

        if (_MouseEventData.Return.ForceReDetection)
        {
            Workspace.AisContext.MoveTo(Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), viewportController.Viewport.V3dView, false);
        }

        if (_MouseEventData.Return.RemoveHighlighting)
        {
            Workspace.AisContext.ClearDetected(false);
        }

        foreach (var element in _MouseEventData.Return.AdditionalHighlights)
        {
            Debug.Assert(element.Entity == null, "Custom highlighting if entities not implemented yet.");
            var aisObject = element.AisObject;
            if (aisObject != null && Workspace.AisContext.IsDisplayed(aisObject))
            {
                Debug.Assert(element.BrepShape == null, "Custom highlighting subshapes not implemented yet.");
                Workspace.AisContext.Hilight(aisObject, false);
                _CustomHighlights.Add(aisObject);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseDown(ViewportController viewportController, ModifierKeys modifierKeys)
    {
        _LastModifierKeys = modifierKeys;
        _MouseEventData.ModifierKeys = modifierKeys;

        if (_LastDetectedAisObject is AIS_ViewCube viewCube
            && _LastDetectedOwner is AIS_ViewCubeOwner viewCubeOwner)
        {
            if (!viewportController.LockedToPlane)
            {
                viewCube.HandleClick(viewCubeOwner);
            }
            return;
        }

        bool handled = false;
        foreach (var handler in EnumerateControls())
        {
            handled = handler.OnMouseDown(_MouseEventData);
            if (handled)
                break;
        }
                        
        if (_MouseEventData.Return.ForceReDetection)
        {
            MouseMove(viewportController, _LastMouseMovePosition, modifierKeys);
        }
            
        if (handled)
            return;

        IsSelecting = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseUp(ViewportController viewportController, ModifierKeys modifierKeys)
    {
        _LastModifierKeys = modifierKeys;
        _MouseEventData.ModifierKeys = modifierKeys;
            
        if (_LastDetectedAisObject is AIS_ViewCube viewCube
            && _LastDetectedOwner is AIS_ViewCubeOwner viewCubeOwner)
        {
            return;
        }

        bool wasSelecting = IsSelecting;
        IsSelecting = false;

        bool handled = false;
        foreach (var handler in EnumerateControls())
        {
            handled = handler.OnMouseUp(_MouseEventData);
            if (handled)
                break;
        }
            
        if (_MouseEventData.Return.ForceReDetection)
        {
            MouseMove(viewportController, _LastMouseMovePosition, modifierKeys);
        }

        if (handled)
            return;

        if (wasSelecting)
        {
            InteractiveEntity[] detectedEntities = _MouseEventData.DetectedElements
                                                                  .Select(element => element.Entity)
                                                                  .WhereNotNull()
                                                                  .ToArray();

            if (detectedEntities is { Length: > 0 })
            {
                // Shape selected
                Selection.SelectEntities(detectedEntities, _GetSelectionModeFromKeys(modifierKeys));
                MouseMove(viewportController, _LastMouseMovePosition, modifierKeys);
            }
            else
            {
                // Empty click
                if (_GetSelectionModeFromKeys(modifierKeys) == SelectionManager.SelectionMode.Exclusive)
                {
                    Selection.SelectEntity(null);
                    Invalidate();
                }
            }
        }
    }       
        
    //--------------------------------------------------------------------------------------------------

    public void SelectByRectangle(int[] corners, bool includeTouched, ViewportController viewportController)
    {
        List<AIS_InteractiveObject> detectedAisObjects = [];
        List<TopoDS_Shape> detectedBrepShapes = [];
        if (AisHelper.PickFromContext(Workspace.AisContext, corners[0], corners[1], corners[2], corners[3], includeTouched,
                                      viewportController.Viewport.V3dView, 
                                      detectedAisObjects, detectedBrepShapes) > 0)
        {
            _MouseEventData.SetDetectedElements(detectedAisObjects, detectedAisObjects.Select(VisualObjects.GetEntity), detectedBrepShapes);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectByPolyline(List<ValueTuple<int,int>> pointList, bool includeTouched, ViewportController viewportController)
    {
        List<AIS_InteractiveObject> detectedAisObjects = [];
        List<TopoDS_Shape> detectedBrepShapes = [];
        if (AisHelper.PickFromContext(Workspace.AisContext, pointList, includeTouched,
                                      viewportController.Viewport.V3dView, 
                                      detectedAisObjects, detectedBrepShapes) > 0)
        {
            _MouseEventData.SetDetectedElements(detectedAisObjects, detectedAisObjects.Select(VisualObjects.GetEntity), detectedBrepShapes);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void CancelSelection()
    {
        IsSelecting = false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool KeyPressed(Key key, ModifierKeys modifierKeys)
    {
        if(EnumerateControls().Any(control => control.OnKeyPressed(key, modifierKeys)))
            return true;

        if (_CurrentTool != null)
        {
            InteractiveContext.Current.ShortcutHandler.KeyPressed(_CurrentTool.Id, key, modifierKeys);
        }

        return InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", key, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------
        
    public void UpdateSelection()
    {
        if (_LastMouseMoveViewportController == null)
            return;
        Selection.Update();
        MouseMove(_LastMouseMoveViewportController, _LastMouseMovePosition, _LastModifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Editors

    public Editor CurrentEditor
    {
        get { return _CurrentEditor; }
        private set
        {
            _CurrentEditor = value;
            RaisePropertyChanged();
        }
    }
    Editor _CurrentEditor;

    //--------------------------------------------------------------------------------------------------

    public void StopEditor()
    {
        CurrentEditor?.Stop();
        CurrentEditor = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void StartEditor(Entity entity)
    {
        StopEditor();
        CurrentEditor = Editor.CreateEditor(entity);
        CurrentEditor?.Start();
    }

    //--------------------------------------------------------------------------------------------------

    public void UpdateEditor()
    {
        if (Selection.SelectedEntities.Count > 1
            || Selection.SelectedEntities.Count == 0)
        {
            // Multiple Selection Editors not supported yet
            StopEditor();
            return;
        }

        var entity = Selection.SelectedEntities.First();
        if (entity != CurrentEditor?.GetEntity())
        {
            StartEditor(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal IEnumerable<WorkspaceControl> EnumerateControls()
    {
        if (_CurrentTool != null)
            yield return _CurrentTool;

        if (_CurrentEditor != null)
            yield return _CurrentEditor;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Tools

    public Tool CurrentTool
    {
        get { return _CurrentTool; }
        set 
        {
            // Do nothing, this setter must be public to enable correct binding
        }
    }
    Tool _CurrentTool;

    //--------------------------------------------------------------------------------------------------

    public bool StartTool(Tool tool)
    {
        try
        {
            if (CurrentTool != null && !CancelTool(CurrentTool, true))
                return false;

            if (tool != null)
            {
                tool.WorkspaceController = this;
                _CurrentTool = tool;
                CurrentEditor?.StopTools();
                if (!tool.Start())
                {
                    return false;
                }
                RaisePropertyChanged(nameof(CurrentTool));
                Invalidate(true);
                return true;
            }
            return false;
        }
        catch (Exception e)
        {
            Debug.WriteLine(e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool CancelTool(Tool tool, bool force)
    {
        var isCancelled = true;

        Debug.Assert(tool != null);
        if (CurrentTool != tool)
            return false;

        if (CurrentTool != null)
        {
            if (!CurrentTool.Cancel(force))
            {
                Debug.WriteLine("CancelTool -> CurrentTool.Cancel() denied.");
                isCancelled = false;
            }
        }

        if (isCancelled)
        {
            _CurrentTool = null;
            RaisePropertyChanged(nameof(CurrentTool));
        }

        Invalidate();
        UpdateSelection();
        return isCancelled;
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveTool(Tool tool)
    {
        Debug.Assert(tool != null);
        if (CurrentTool != tool)
            return;

        _CurrentTool = null;

        RaisePropertyChanged(nameof(CurrentTool));
        Invalidate();
        UpdateSelection();

        if (CurrentTool == null)
        {
            _CurrentEditor?.StartTools();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool PrepareUndo()
    {
        if (CurrentTool != null)
        {
            return CurrentTool.PrepareUndo();
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Selection Change
        
    void _Selection_SelectionChanging(SelectionManager selectionManager, SelectionManager.SelectionChangingCancelEventArgs eventArgs)
    {
        if (EnumerateControls().Any(child => child.OnEntitySelectionChanging(eventArgs.EntitiesToSelect, eventArgs.EntitiesToUnSelect)))
        {
            eventArgs.Cancel = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Selection_SelectionChanged(SelectionManager selectionManager)
    {
        if (VisualObjects.EntityIsolationEnabled)
        {
            if (VisualObjects.GetIsolatedEntities()
                             .SymmetricExcept(selectionManager.SelectedEntities)
                             .Any())
            {
                VisualObjects.SetIsolatedEntities(null);
            }
        }

        UpdateEditor();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Redraw and Invalidate

    //static int _InvalidateCount = 0;
    //static int _RedrawCount = 0;

    public void Invalidate(bool immediateOnly = false, bool forceRedraw = false)
    {
        //_InvalidateCount++;
        //Debug.WriteLine("Invalidated: {0}    Redrawn: {1}", _InvalidateCount, _RedrawCount);

        Workspace.NeedsImmediateRedraw = true;
        if (!immediateOnly)
            Workspace.NeedsRedraw = true;

        if(forceRedraw)
            _Redraw();
    }

    //--------------------------------------------------------------------------------------------------

    void _Redraw()
    {
        _UpdateGrid();

        if (Workspace.V3dViewer == null)
            return;

        Workspace.Viewports.ForEach(v =>
        {
            if (!v.AisAnimationCamera.IsStopped())
            {
                v.AisAnimationCamera.UpdateTimer();
                Workspace.NeedsRedraw = true;
            }
        });

        if (Workspace.NeedsRedraw)
        {
            VisualObjects.UpdateInvalidatedEntities();
            Workspace.Viewports.ForEach(v =>
            {
                if(v.RenderMode == Viewport.RenderModes.HLR)
                    v.V3dView?.Update();
            });
            Workspace.V3dViewer.Redraw();
            Workspace.V3dViewer.RedrawImmediate();
            Workspace.NeedsRedraw = false;
        }
        else if (Workspace.NeedsImmediateRedraw)
        {
            Workspace.V3dViewer.RedrawImmediate();
            Workspace.NeedsImmediateRedraw = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RedrawTimer_Tick(object sender, EventArgs e)
    {
        _Redraw();
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Grid

    //--------------------------------------------------------------------------------------------------

    void _RecalculateGridSize()
    {
        Pnt[] corners = new Pnt[4];
        double u = 0;
        double v = 0;

        double sizeX = 50.0 * Workspace.GridStep;
        double sizeY = 50.0 * Workspace.GridStep;

        Pln plane = Workspace.WorkingContext.WorkingPlane;
        foreach (var viewportController in _ViewControllers)
        {
            var viewport = viewportController.Viewport;
            if (viewport == null)
                continue;

            var screenSize = viewport.ScreenSize;

            viewport.ScreenToPoint(plane, 0,                0,                 out corners[0]);
            viewport.ScreenToPoint(plane, 0,                screenSize.Height, out corners[1]);
            viewport.ScreenToPoint(plane, screenSize.Width, screenSize.Height, out corners[2]);
            viewport.ScreenToPoint(plane, screenSize.Width, 0,                 out corners[3]);

            foreach (var corner in corners)
            {
                ElSLib.Parameters(plane, corner, ref u, ref v);
                sizeX = Math.Max(sizeX, u.Abs());
                sizeY = Math.Max(sizeY, v.Abs());
            }
        }

        // Take the maximum, overprovision by 10, and clamp to a (unrealistic) maximum
        XY newGridSize = new XY(Math.Min(sizeX + 10.0, Workspace.GridStep * 1000.0),
                                Math.Min(sizeY + 10.0, Workspace.GridStep * 1000.0));
        XY diff = _LastGridSize - newGridSize;
        if (diff.X is < 0 or > 50.0 || diff.Y is < 0 or > 50.0)
        {
            _LastGridSize = newGridSize;
            _GridNeedsUpdate = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateGrid()
    {
        if (!_GridNeedsUpdate) 
            return;

        if (_Grid is null)
            return;

        WorkingContext wc = Workspace.WorkingContext;

        if (Workspace.GridEnabled)
        {
            Ax3 position = wc.WorkingPlane.Position;
            if (wc.GridRotation != 0)
            {
                position.Rotate(wc.WorkingPlane.Axis, wc.GridRotation.ToRad());
            }
            _Grid.SetPosition(position);
            _Grid.SetExtents(_LastGridSize.X, _LastGridSize.Y);
            _Grid.SetDivisions(wc.GridStep, wc.GridDivisions);

            if (wc.GridType == Workspace.GridTypes.Rectangular)
            {
                Workspace.AisContext?.SetDisplayMode(_Grid, 1, false);
            }
            else
            {
                Workspace.AisContext?.SetDisplayMode(_Grid, 2, false);
            }
        }
        else
        {
            Workspace.AisContext?.SetDisplayMode(_Grid, 0, false);
        }

        _GridNeedsUpdate = false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Delete, Duplicate, Clipboard

    public bool CanDelete()
    {
        if(CurrentTool != null)
            return CurrentTool.CanDelete();
        else
            return InteractiveContext.Current.DocumentController.CanDelete(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public void Delete()
    {
        if(CurrentTool != null)
            CurrentTool.Delete();
        else
            InteractiveContext.Current.DocumentController.Delete(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanDuplicate()
    {
        if(CurrentTool != null)
            return CurrentTool.CanDuplicate();
        else
            return InteractiveContext.Current.DocumentController.CanDuplicate(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public void Duplicate()
    {
        if(CurrentTool != null)
            CurrentTool.Duplicate();
        else
            InteractiveContext.Current.DocumentController.Duplicate(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanCopyToClipboard()
    {
        if(CurrentTool != null)
            return CurrentTool.CanCopyToClipboard();
        else
            return InteractiveContext.Current.DocumentController.CanCopyToClipboard(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public void CopyToClipboard()
    {
        if(CurrentTool != null)
            CurrentTool.CopyToClipboard();
        else
            InteractiveContext.Current.DocumentController.CopyToClipboard(Selection.SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanPasteFromClipboard()
    {
        if(CurrentTool != null)
            return CurrentTool.CanPasteFromClipboard();
        else
            return InteractiveContext.Current.DocumentController.CanPasteFromClipboard();
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<InteractiveEntity> PasteFromClipboard()
    {
        if(CurrentTool != null)
            return CurrentTool.PasteFromClipboard();
        else
            return InteractiveContext.Current.DocumentController.PasteFromClipboard();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region IActionCommandProvider

    public void EnrichContextMenu(ContextMenuItems itemList)
    {
        if (CurrentTool != null) 
            return;

        itemList.AddCommandIfExecutable(WorkspaceCommands.StartEditing, null);

        if (Selection.SelectedEntities.Count > 0)
        {
            itemList.AddCommand(WorkspaceCommands.Transform);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
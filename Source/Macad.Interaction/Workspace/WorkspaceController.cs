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

namespace Macad.Interaction
{
    public sealed class WorkspaceController : BaseObject, IContextMenuItemProvider, IDisposable
    {
        #region Properties

        public Workspace Workspace { get; }

        public Viewport ActiveViewport { get; set; }

        public ViewportController ActiveViewControlller { get { return GetViewController(ActiveViewport); } }

        public SnapHandler SnapHandler { get; }

        public IHudManager HudManager { get; set; }

        public bool LockWorkingPlane { get; set; }

        public SelectionManager Selection { get; }
        
        public bool IsSelecting { get; private set; }

        public VisualObjectManager VisualObjects { get; init; }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member variables

        readonly List<ViewportController> _ViewControllers = new();
        readonly DispatcherTimer _RedrawTimer;
        AISX_Grid _Grid;
        XY _LastGridSize = new(200.0, 200.0);
        bool _GridNeedsUpdate;

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

            SnapHandler = new SnapHandler(this);

            VisualParameterSet.ParameterChanged += _VisualParameterSet_ParameterChanged;

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

            VisualParameterSet.ParameterChanged -= _VisualParameterSet_ParameterChanged;

            Selection.SelectionChanged -= _Selection_SelectionChanged;
            Selection.SelectionChanging -= _Selection_SelectionChanging;
            Selection.Dispose();

            VisualObjects.Dispose();
            SnapHandler.Dispose();

            Viewport.ViewportChanged -= _Viewport_ViewportChanged;

            foreach (var viewCtrl in _ViewControllers)
            {
                viewCtrl.Dispose();
            }
            _ViewControllers.Clear();
            _LastDetectedInteractive?.Dispose();

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
                Invalidate();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _VisualParameterSet_ParameterChanged(OverridableParameterSet set, string key)
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
            selectionDrawer.SetColor(Colors.Selection);
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
            hilightDrawer.SetColor(Colors.Highlight);
            hilightDrawer.SetDisplayMode(0);
            hilightDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
            hilightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
            hilightDrawer.SetDeviationAngle(aisContext.DeviationAngle());
            hilightDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, hilightDrawer);

            // Higlight Local
            var hilightLocalDrawer = new Prs3d_Drawer();
            hilightLocalDrawer.SetupOwnDefaults();
            hilightLocalDrawer.SetColor(Colors.Highlight);
            hilightLocalDrawer.SetDisplayMode(1);
            hilightLocalDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
            hilightLocalDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
            hilightLocalDrawer.SetDeviationAngle(aisContext.DeviationAngle());
            hilightLocalDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());

            var shadingAspect = new Prs3d_ShadingAspect();
            shadingAspect.SetColor(Colors.Highlight);
            shadingAspect.SetTransparency(0);

            var aspectFill = new Graphic3d_AspectFillArea3d(shadingAspect.Aspect());
            aspectFill.SetPolygonOffsets((int)Aspect_PolygonOffsetMode.Fill, 0.99f, 0.0f);
            shadingAspect.SetAspect(aspectFill);
            hilightLocalDrawer.SetShadingAspect(shadingAspect);

            var lineAspect = new Prs3d_LineAspect(Colors.Highlight, Aspect_TypeOfLine.SOLID, 3.0);
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
            var parameterSet = InteractiveContext.Current.Parameters.Get<VisualParameterSet>();
            aisContext.SetDeviationCoefficient(parameterSet.DeviationCoefficient);
            aisContext.SetDeviationAngle(parameterSet.DeviationAngle.ToRad());
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

        bool _IsMouseEventDataValid;
        public bool IsMouseEventDataValid
        {
            get
            {
                return _IsMouseEventDataValid;
            }
            set
            {
                if (_IsMouseEventDataValid != value)
                {
                    _IsMouseEventDataValid = value;
                    RaisePropertyChanged();
                }
            }
        }

        Pnt _CursorPosition;
        public Pnt CursorPosition
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

        Pnt2d _CursorPosition2d;
        public Pnt2d CursorPosition2d
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

        bool _IsCursorPositionValid;
        
        Point _LastMouseMovePosition;
        ViewportController _LastMouseMoveViewportController;
        ModifierKeys _LastModifierKeys;
        AIS_InteractiveObject _LastDetectedInteractive;
        SelectMgr_EntityOwner _LastDetectedOwner;

        //--------------------------------------------------------------------------------------------------

        public bool IsCursorPositionValid
        {
            get
            {
                return _IsCursorPositionValid;
            }
            set
            {
                if (_IsCursorPositionValid != value)
                {
                    _IsCursorPositionValid = value;
                    RaisePropertyChanged();
                }
            }
        }
        
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

            Selection.Update();

            if (pos.X < 0 || pos.Y < 0)
            {
                // Position is out of bounds, reset highlighting
                Workspace.AisContext.MoveTo(Int32.MinValue, Int32.MinValue, viewportController.Viewport.V3dView, false); ;
                Invalidate(true);
                return;
            }

            var status = Workspace.AisContext.MoveTo(Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), viewportController.Viewport.V3dView, false);
            Invalidate(true);

            if (status != AIS_StatusOfDetection.Error)
            {
                Pnt rawPoint;
                if (!viewportController.Viewport.ScreenToPoint(Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), out rawPoint))
                {
                    IsMouseEventDataValid = false;
                    IsCursorPositionValid = false;
                    return;
                }

                Pnt planePoint;
                if (!viewportController.Viewport.ScreenToPoint(Workspace.WorkingPlane, Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), out planePoint))
                {
                    IsMouseEventDataValid = false;
                    IsCursorPositionValid = false;
                }

                _LastDetectedInteractive = null;
                _LastDetectedOwner = null;
                InteractiveEntity detectedEntity = null;
                TopoDS_Shape detectedShape = null;
                if (Workspace.AisContext.HasDetected())
                {
                    _LastDetectedInteractive = Workspace.AisContext.DetectedInteractive();
                    _LastDetectedOwner = Workspace.AisContext.DetectedOwner();
                    detectedShape = AisHelper.GetDetectedShapeFromContext(Workspace.AisContext);
                    detectedEntity = VisualObjects.GetVisibleEntity(_LastDetectedInteractive);
                }

                _MouseEventData.Set(viewportController.Viewport, pos, rawPoint, planePoint, detectedEntity, _LastDetectedInteractive, detectedShape, modifierKeys);
                IsMouseEventDataValid = true;

                CursorPosition = planePoint;
                CursorPosition2d = Workspace.WorkingPlane.Parameters(planePoint);
                IsCursorPositionValid = true;

                foreach (var handler in EnumerateControls())
                {
                    if (handler.OnMouseMove(_MouseEventData))
                        break;
                }

                if (_MouseEventData.ForceReDetection)
                {
                    Workspace.AisContext.MoveTo(Convert.ToInt32(pos.X), Convert.ToInt32(pos.Y), viewportController.Viewport.V3dView, false);
                }

                return;
            }

            IsMouseEventDataValid = false;
            IsCursorPositionValid = false;
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseDown(ViewportController viewportController, ModifierKeys modifierKeys)
        {
            _LastModifierKeys = modifierKeys;
            _MouseEventData.ModifierKeys = modifierKeys;

            if (_LastDetectedInteractive is AIS_ViewCube viewCube
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
                        
            if (_MouseEventData.ForceReDetection)
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

            bool wasSelecting = IsSelecting;
            IsSelecting = false;

            bool handled = false;
            foreach (var handler in EnumerateControls())
            {
                handled = handler.OnMouseUp(_MouseEventData);
                if (handled)
                    break;
            }
            
            if (_MouseEventData.ForceReDetection)
            {
                MouseMove(viewportController, _LastMouseMovePosition, modifierKeys);
            }

            if (handled)
                return;

            if (wasSelecting)
            {
                if (_MouseEventData.DetectedEntities.Any())
                {
                    // Shape selected
                    Selection.SelectEntities(_MouseEventData.DetectedEntities, _GetSelectionModeFromKeys(modifierKeys));
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
            if (AisHelper.PickFromContext(Workspace.AisContext, corners[0], corners[1], corners[2], corners[3], includeTouched,
                                          viewportController.Viewport.V3dView, 
                                          _MouseEventData.DetectedAisInteractives, _MouseEventData.DetectedShapes) > 0)
            {
                var entities = _MouseEventData.DetectedAisInteractives.Select(VisualObjects.GetVisibleEntity).Where(entity => entity != null);
                _MouseEventData.DetectedEntities.AddRange(entities);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectByPolyline(List<ValueTuple<int,int>> pointList, bool includeTouched, ViewportController viewportController)
        {
            _MouseEventData.DetectedAisInteractives.Clear();
            _MouseEventData.DetectedEntities.Clear();
            _MouseEventData.DetectedShapes.Clear();
            
            if (AisHelper.PickFromContext(Workspace.AisContext, pointList, includeTouched,
                                                viewportController.Viewport.V3dView, 
                                                _MouseEventData.DetectedAisInteractives, _MouseEventData.DetectedShapes) > 0)
            {
                var entities = _MouseEventData.DetectedAisInteractives.Select(VisualObjects.GetVisibleEntity).Where(entity => entity != null);
                _MouseEventData.DetectedEntities.AddRange(entities);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void CancelSelection()
        {
            IsSelecting = false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool KeyPressed(Key key)
        {
            return EnumerateControls().Any(control => control.OnKeyPressed(key));
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
            if (CurrentTool == null)
            {
                if (Selection.SelectedEntities.Count > 0)
                {
                    itemList.AddCommand(WorkspaceCommands.Transform);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
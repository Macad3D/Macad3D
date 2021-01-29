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

namespace Macad.Interaction
{
    public sealed class WorkspaceController : BaseObject, ICustomMenuProvider, IDisposable
    {
        #region Properties

        public Workspace Workspace { get; private set; }

        public Viewport ActiveViewport { get; set; }

        public ViewportController ActiveViewControlller { get { return GetViewController(ActiveViewport); } }

        public SnapHandler SnapHandler { get; }

        public IHudManager HudManager { get; set; }

        public bool LockWorkingPlane { get; set; }

        public SelectionManager Selection { get; }
        
        public bool IsSelecting { get; private set; }

        public VisualShapeManager VisualShapes { get; set; }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member variables

        readonly List<ViewportController> _ViewControllers = new List<ViewportController>();

        readonly DispatcherTimer _RedrawTimer;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Initialization

        public WorkspaceController(Workspace workspace)
        {
            Debug.Assert(workspace != null);

            Workspace = workspace;

            VisualShapes = new VisualShapeManager(this);

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

        public void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (_CurrentTool != null)
                    CancelTool(_CurrentTool, true);
                StopEditor();
            }

            _CurrentTool = null;
            _CurrentEditor = null;
            
            _RedrawTimer.Stop();
            _RedrawTimer.Tick -= _RedrawTimer_Tick;

            VisualParameterSet.ParameterChanged -= _VisualParameterSet_ParameterChanged;

            Selection.SelectionChanged -= _Selection_SelectionChanged;
            Selection.SelectionChanging -= _Selection_SelectionChanging;
            Selection.Dispose();

            VisualShapes.Dispose();

            Workspace.Dispose();
            foreach (var viewCtrl in _ViewControllers)
            {
                viewCtrl.Dispose();
            }
            _ViewControllers.Clear();
            GC.SuppressFinalize(this);
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

            VisualShapes.InitEntities();
        }

        //--------------------------------------------------------------------------------------------------

        void _InitVisualSettings()
        {
            var aisContext = Workspace.AisContext;

            _UpdateParameter();

            // Higlight Selected
            var selectionDrawer = new Prs3d_Drawer();
            selectionDrawer.SetColor(Colors.Selection);
            selectionDrawer.SetDisplayMode(0);
            selectionDrawer.SetZLayer(0); // Graphic3d_ZLayerId_Default
            selectionDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.Aspect_TOD_RELATIVE);
            selectionDrawer.SetDeviationAngle(aisContext.DeviationAngle());
            selectionDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
            aisContext.SetSelectionStyle(selectionDrawer);
            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Prs3d_TypeOfHighlight_Selected, selectionDrawer);
            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Prs3d_TypeOfHighlight_LocalSelected, selectionDrawer);
            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Prs3d_TypeOfHighlight_SubIntensity, selectionDrawer);

            // Higlight Dynamic
            var hilightDrawer = new Prs3d_Drawer();
            hilightDrawer.SetColor(Colors.Highlight);
            hilightDrawer.SetDisplayMode(0);
            hilightDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
            hilightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.Aspect_TOD_RELATIVE);
            hilightDrawer.SetDeviationAngle(aisContext.DeviationAngle());
            hilightDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Prs3d_TypeOfHighlight_Dynamic, hilightDrawer);

            // Higlight Local
            var hilightLocalDrawer = new Prs3d_Drawer();
            hilightLocalDrawer.SetColor(Colors.Highlight);
            hilightLocalDrawer.SetDisplayMode(1);
            hilightLocalDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
            hilightLocalDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.Aspect_TOD_RELATIVE);
            hilightLocalDrawer.SetDeviationAngle(aisContext.DeviationAngle());
            hilightLocalDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());

            var shadingAspect = new Prs3d_ShadingAspect();
            shadingAspect.SetColor(Colors.Highlight);
            shadingAspect.SetTransparency(0);

            var aspectFill = new Graphic3d_AspectFillArea3d(shadingAspect.Aspect());
            aspectFill.SetPolygonOffsets((int)Aspect_PolygonOffsetMode.Aspect_POM_Fill, 0.99f, 0.0f );
            shadingAspect.SetAspect(aspectFill);
            hilightLocalDrawer.SetShadingAspect(shadingAspect);

            var lineAspect = new Prs3d_LineAspect(Colors.Highlight, Aspect_TypeOfLine.Aspect_TOL_SOLID, 3.0);
            hilightLocalDrawer.SetLineAspect(lineAspect);
            hilightLocalDrawer.SetSeenLineAspect(lineAspect);
            hilightLocalDrawer.SetWireAspect(lineAspect);
            hilightLocalDrawer.SetFaceBoundaryAspect(lineAspect);
            hilightLocalDrawer.SetFreeBoundaryAspect(lineAspect);
            hilightLocalDrawer.SetUnFreeBoundaryAspect(lineAspect);
            hilightLocalDrawer.SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, Colors.Highlight));

            aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Prs3d_TypeOfHighlight_LocalDynamic, hilightLocalDrawer);
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

        readonly MouseEventData _MouseEventData = new MouseEventData();

        bool _IsMouseEventDataValid = false;
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

        bool _IsCursorPositionValid = false;
        
        Point _LastMouseMovePosition;
        ViewportController _LastMouseMoveViewportController;
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

        public void MouseMove(Point pos, ViewportController viewportController)
        {
            _LastMouseMovePosition = pos;
            _LastMouseMoveViewportController = viewportController;

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

            if (status != AIS_StatusOfDetection.AIS_SOD_Error)
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
                    detectedEntity = VisualShapes.GetVisibleEntity(_LastDetectedInteractive);
                    detectedShape = Occt.Helper.Ais.GetDetectedShapeFromContext(Workspace.AisContext);
                }

                _MouseEventData.Set(viewportController.Viewport, pos, rawPoint, planePoint, detectedEntity, _LastDetectedInteractive, detectedShape);
                IsMouseEventDataValid = true;

                CursorPosition = planePoint;
                CursorPosition2d = Workspace.WorkingPlane.Parameters(planePoint);
                IsCursorPositionValid = true;
                bool handled = false;

                if (CurrentTool != null)
                {
                    handled = CurrentTool.OnMouseMove(_MouseEventData);
                }

                if (_ToolActions.Any() && !handled)
                {
                    foreach (var toolAction in _ToolActions)
                    {
                        if (toolAction.OnMouseMove(_MouseEventData))
                        {
                            break;
                        }
                    }
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

        public void MouseDown(ViewportController viewportController)
        {
            if (_LastDetectedInteractive is AIS_ViewCube viewCube
                && _LastDetectedOwner is AIS_ViewCubeOwner viewCubeOwner)
            {
                if (!viewportController.LockedToPlane)
                {
                    viewCube.HandleClick(viewCubeOwner);
                }
                return;
            }

            if (CurrentTool != null)
            {
                if (CurrentTool.OnMouseDown(_MouseEventData))
                {
                    // Handled by tool
                    return;
                }
            }

            if (_ToolActions.Any())
            {
                foreach (var toolAction in _ToolActions)
                {
                    if (toolAction.OnMouseDown(_MouseEventData))
                    {
                        // Handled by tool action
                        return;
                    }
                }
            }
            IsSelecting = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseUp(bool shiftKey, ViewportController viewportController)
        {
            bool wasSelecting = IsSelecting;
            IsSelecting = false;

            if (CurrentTool != null)
            {
                if (CurrentTool.OnMouseUp(_MouseEventData, shiftKey))
                {
                    // Handled by tool
                    return;
                }
            }

            if (_ToolActions.Any())
            {
                foreach (var toolAction in _ToolActions)
                {
                    if (toolAction.OnMouseUp(_MouseEventData, shiftKey))
                    {
                        // Handled by tool action
                        return;
                    }
                }
            }

            if (wasSelecting)
            {
                if (_MouseEventData.DetectedEntities.Any())
                {
                    // Shape selected
                    Selection.SelectEntities(_MouseEventData.DetectedEntities, !shiftKey);
                    Invalidate();
                }
                else
                {
                    // Empty click
                    if (!shiftKey)
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
            _MouseEventData.DetectedAisInteractives.Clear();
            _MouseEventData.DetectedEntities.Clear();
            _MouseEventData.DetectedShapes.Clear();

            if (Occt.Helper.Ais.PickFromContext(Workspace.AisContext, corners[0], corners[1], corners[2], corners[3], includeTouched,
                                                viewportController.Viewport.V3dView, 
                                                _MouseEventData.DetectedAisInteractives, _MouseEventData.DetectedShapes) > 0)
            {
                var entities = _MouseEventData.DetectedAisInteractives.Select(detected => VisualShapes.GetVisibleEntity(detected)).Where(entity => entity != null);
                _MouseEventData.DetectedEntities.AddRange(entities);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectByPolyline(List<ValueTuple<int,int>> pointList, bool includeTouched, ViewportController viewportController)
        {
            _MouseEventData.DetectedAisInteractives.Clear();
            _MouseEventData.DetectedEntities.Clear();
            _MouseEventData.DetectedShapes.Clear();
            
            if (Occt.Helper.Ais.PickFromContext(Workspace.AisContext, pointList, includeTouched,
                                                viewportController.Viewport.V3dView, 
                                                _MouseEventData.DetectedAisInteractives, _MouseEventData.DetectedShapes) > 0)
            {
                var entities = _MouseEventData.DetectedAisInteractives.Select(detected => VisualShapes.GetVisibleEntity(detected)).Where(entity => entity != null);
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
            if (CurrentTool != null)
            {
                if (CurrentTool.OnKeyPressed(key))
                {
                    return true;
                }
            }

            if (_ToolActions.Any())
            {
                foreach (var toolAction in _ToolActions)
                {
                    if (toolAction.OnKeyPressed(key))
                    {
                        // Handled by tool action
                        //Workspace.V3dViewer.Redraw();
                        return true;
                    }
                }
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------
        
        public void UpdateSelection()
        {
            if (_LastMouseMoveViewportController == null)
                return;
            Selection.Update();
            MouseMove(_LastMouseMovePosition, _LastMouseMoveViewportController);
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
            if (_CurrentEditor == null)
                return;

            _CurrentEditor.Stop();
            _CurrentEditor = null;
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
            if (entity != _CurrentEditor?.GetEntity())
            {
                StopEditor();
                _CurrentEditor = Editor.CreateEditor(entity);
                _CurrentEditor?.Start();
            }
        }

        #endregion

        #region Tools and Context

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

        readonly List<ToolAction> _ToolActions = new List<ToolAction>();

        //--------------------------------------------------------------------------------------------------

        public ToolAction CurrentToolAction {
            get { return _ToolActions.Count > 0 ? _ToolActions[0] : null; }
        }

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
                    if (!tool.Start() && !tool.IsClosed)
                    {
                        CancelTool(tool, true);
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
                Console.WriteLine(e);
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
                while (CurrentToolAction?.Owner == tool)
                {
                    if (!(CurrentToolAction.IsFinished || CurrentToolAction.Cancel(force)))
                    {
                        Debug.WriteLine("CancelTool -> CurrentToolAction.Cancel() denied.");
                        isCancelled = false;
                    }
                }
                HudManager?.RemoveElements(e => e.Owner == tool);
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

            while (CurrentToolAction?.Owner == tool)
            {
                if (!CurrentToolAction.IsFinished)
                    CurrentToolAction.Cancel(true);
            }
            HudManager?.RemoveElements(e => e.Owner == tool);

            RaisePropertyChanged(nameof(CurrentTool));
            Invalidate();
            UpdateSelection();
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
        
        public bool StartToolAction(ToolAction toolAction, bool exclusive = true)
        {
            try
            {
                if (exclusive)
                {
                    while (_ToolActions.Any())
                    {
                        if (!(CurrentToolAction.IsFinished || CurrentToolAction.Cancel(true)))
                        {
                            Debug.WriteLine("StartToolAction -> CurrentToolAction.Cancel() denied.");
                            return false;
                        }
                    }
                }

                if (toolAction != null)
                {
                    Console.WriteLine("Starting tool action " + toolAction.GetType().Name);
                    toolAction.WorkspaceController = this;
                    if (!toolAction.Start())
                        return false;
                    _ToolActions.Insert(0, toolAction);
                    RaisePropertyChanged(nameof(CurrentToolAction));
                }
                return true;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveToolAction(ToolAction toolAction)
        {
            if (_ToolActions.Contains(toolAction))
            {
                _ToolActions.Remove(toolAction);
                RaisePropertyChanged(nameof(CurrentToolAction));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Selection_SelectionChanging(SelectionManager selectionManager, SelectionManager.SelectionChangingCancelEventArgs eventArgs)
        {
            if (CurrentTool != null)
            {
                if (CurrentTool.OnEntitySelectionChanging(eventArgs.EntitiesToSelect, eventArgs.EntitiesToUnSelect))
                {
                    eventArgs.Cancel = true;
                    return;
                }
            }
            if (CurrentToolAction != null)
            {
                if (CurrentToolAction.OnEntitySelectionChanging(eventArgs.EntitiesToSelect, eventArgs.EntitiesToUnSelect))
                {
                    eventArgs.Cancel = true;
                    return;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Selection_SelectionChanged(SelectionManager selectionManager)
        {
            if (VisualShapes.EntityIsolationEnabled)
            {
                if(VisualShapes.GetIsolatedEntities().SymmetricExcept(selectionManager.SelectedEntities).Any())
                    VisualShapes.SetIsolatedEntities(null);
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
                VisualShapes.UpdateInvalidatedEntities();
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

        public void EnrichContextMenu(CustomMenuItems itemList)
        {
            if (CurrentTool == null)
            {
                if (Selection.SelectedEntities.Count > 0)
                {
                    itemList.AddCommand(WorkspaceCommands.TransformShape);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
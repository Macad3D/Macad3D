using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing.Imaging;
using System.Windows;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Resources;

namespace Macad.Interaction
{
    public sealed class ViewportController : BaseObject, IDisposable
    {
        const int RubberbandFreehandSelectionThresholdSquared = 100;

        #region Enums

        public enum RubberbandSelectionMode
        {
            Rectangle,
            Freehand
        }

        #endregion

        #region Properties

        public WorkspaceController WorkspaceController { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public Viewport Viewport { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public bool LockedToPlane
        {
            get { return _LockedToPlane; }
            set
            {
                if (_LockedToPlane != value)
                {
                    if (value)
                    {
                        SetPredefinedView(PredefinedViews.WorkingPlane);
                    }
                    _LockedToPlane = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsInRubberbandSelection
        {
            get { return _AisRubberBand != null; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member variables
        
        static WNT_WClass _OcWindowClass;
        const double _OrbitProjectionConstraint = Maths.HalfPI - 0.000000000001;
        WNT_Window _OcWindow;
        bool _ZoomFitAllOnInit;
        
        MouseMoveMode _CurrentMouseMoveMode;
        Point _StartedMousePosition;
        Point _LastMousePosition;
        bool _LockedToPlane;

        AIS_RubberBand _AisRubberBand;
        RubberbandSelectionMode _RubberbandMode;
        bool _RubberbandIncludeTouched;
        readonly List<ValueTuple<int, int>> _RubberbandPoints = new();

        Macad.Occt.Ext.AIS_ViewCubeEx _AisViewCube;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Initialization

        public ViewportController(Viewport viewport, WorkspaceController workspaceController)
        {
            Debug.Assert(viewport != null);

            Viewport = viewport;
            WorkspaceController = workspaceController;

            Init();
        }

        //--------------------------------------------------------------------------------------------------

        ~ViewportController()
        {
            Dispose();
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            ViewportParameterSet.ParameterChanged -= _ViewportParameterSet_ParameterChanged;

            _AisViewCube?.Dispose();
            _AisViewCube = null;

            _AisRubberBand?.Dispose();
            _AisRubberBand = null;

            Viewport.Dispose();
            if (_OcWindow != null && !_OcWindow.IsDisposed())
            {
                if (_OcWindow.IsMapped())
                    _OcWindow.Unmap();
                _OcWindow.Dispose();
                _OcWindow = null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void Init()
        {
            Viewport.Init();

            ViewportParameterSet.ParameterChanged += _ViewportParameterSet_ParameterChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public IntPtr InitWindow(IntPtr parentHWnd, Int32Rect initialRect)
        {
            Debug.Assert(Viewport.V3dView != null);

            uint style;

            if (_OcWindowClass == null)
            {
                style = Win32Api.CS_OWNDC;
                _OcWindowClass = new WNT_WClass(new TCollection_AsciiString("WorkspaceView"), IntPtr.Zero, style, 0);
            }

            style = Win32Api.WS_VISIBLE | (parentHWnd == IntPtr.Zero ? Win32Api.WS_POPUP : Win32Api.WS_CHILD);
            _OcWindow = new WNT_Window("WorkspaceView", _OcWindowClass, style, initialRect.X, initialRect.Y, initialRect.Width, initialRect.Height, Quantity_NameOfColor.Quantity_NOC_GRAY50, parentHWnd);
            _OcWindow.Map();

            if (Viewport.V3dView != null)
            {
                Viewport.V3dView.SetWindow(_OcWindow);
                //Viewport.InitV3dView();
                if (_ZoomFitAllOnInit)
                {
                    _ZoomFitAllOnInit = false;
                    ZoomFitAll();
                }
                Viewport.V3dView.Update();
                Viewport.V3dView.MustBeResized();
                Viewport.V3dView.SetImmediateUpdate(false);

                _UpdateParameter();
            }
            var handle = _OcWindow.HWindow();
            return handle;
        }

        //--------------------------------------------------------------------------------------------------

        void _ViewportParameterSet_ParameterChanged(OverridableParameterSet set, string key)
        {
            _UpdateParameter();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateParameter()
        {
            var parameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            _ShowViewCube(parameterSet.ShowViewCube, parameterSet.ViewCubeSize, parameterSet.ViewCubeAnimationDuration);
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Viewport navigation

        public enum PredefinedViews
        {
            Top,
            Bottom,
            Left,
            Right,
            Front,
            Back,
            WorkingPlane
        }

        //--------------------------------------------------------------------------------------------------

        public void SetPredefinedView(PredefinedViews predefinedView)
        {
            if (predefinedView == PredefinedViews.WorkingPlane)
            {
                var plane = WorkspaceController.Workspace.WorkingPlane;
                var dir = plane.Axis.Direction;
                Viewport.V3dView.SetProj(dir.X, dir.Y, dir.Z);
                var up = plane.YAxis.Direction;
                Viewport.V3dView.SetUp(up.X, up.Y, up.Z);
                return;
            }

            V3d_TypeOfOrientation orientation;
            switch (predefinedView)
            {
                case PredefinedViews.Top:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Top;
                    break;
                case PredefinedViews.Bottom:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Bottom;
                    break;
                case PredefinedViews.Left:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Left;
                    break;
                case PredefinedViews.Right:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Right;
                    break;
                case PredefinedViews.Front:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Front;
                    break;
                case PredefinedViews.Back:
                    orientation = V3d_TypeOfOrientation.V3d_TypeOfOrientation_Zup_Back;
                    break;
                default:
                    return;
            }

            var viewCubeOwner = new AIS_ViewCubeOwner(_AisViewCube, orientation);
            _AisViewCube.HandleClick(viewCubeOwner);
            viewCubeOwner.Dispose();

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public enum MouseMoveMode
        {
            None,
            Panning,
            Rotating,
            Twisting,
            Zooming
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseMove(Point pos, MouseMoveMode mode = ViewportController.MouseMoveMode.None)
        {
            if (IsInRubberbandSelection)
            {
                _LastMousePosition = pos;
                _UpdateRubberbandSelection();
                WorkspaceController.Invalidate(true);
                return;
            }

            if (_CurrentMouseMoveMode != mode)
            {
                if (mode == MouseMoveMode.None)
                {
                    _ResetMouseMoveMode();
                }
                else
                {
                    _StartedMousePosition = pos;
                    _SetMouseMoveMode(mode);
                }
            }

            switch (_CurrentMouseMoveMode)
            {
                case MouseMoveMode.Panning:
                    Viewport.V3dView.Pan((int) (pos.X - _LastMousePosition.X), -(int) (pos.Y - _LastMousePosition.Y), 1.0, true);
                    Viewport.OnViewMoved();
                    break;

                case MouseMoveMode.Twisting:
                    Rotate(0, 0, (pos.Y - _LastMousePosition.Y) / 12.0);
                    break;

                case MouseMoveMode.Rotating:
                    // Turntable
                    Rotate((pos.Y - _LastMousePosition.Y) / 6.0, (_LastMousePosition.X - pos.X) / 6.0, 0);
                    break;

                case MouseMoveMode.Zooming:
                    Viewport.V3dView.ZoomAtPoint((int) _LastMousePosition.X, (int) pos.Y, (int) pos.X, (int) _LastMousePosition.Y);
                    Viewport.OnViewMoved();
                    break;
            }

            WorkspaceController.MouseMove(pos, this);
            WorkspaceController.Invalidate();

            _LastMousePosition = pos;
        }
        
        //--------------------------------------------------------------------------------------------------

        public void MouseMove()
        {
            if (_AisRubberBand != null)
                return;

            WorkspaceController.MouseMove(_LastMousePosition, this);
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseDown()
        {
            WorkspaceController.MouseDown(this);
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseUp(bool shiftKey)
        {
            if (IsInRubberbandSelection)
            {
                _StopRubberbandSelection();
            }
            WorkspaceController.MouseUp(shiftKey, this);
        }

        //--------------------------------------------------------------------------------------------------

        void _SetMouseMoveMode(MouseMoveMode mode)
        {
            switch (mode)
            {
                case MouseMoveMode.Panning:
                    _CurrentMouseMoveMode = MouseMoveMode.Panning;
                    break;

                case MouseMoveMode.Rotating:
                    _CurrentMouseMoveMode = MouseMoveMode.Rotating;
                    break;

                case MouseMoveMode.Twisting:
                    _CurrentMouseMoveMode = MouseMoveMode.Twisting;
                    break;

                case MouseMoveMode.Zooming:
                    Viewport.V3dView.StartZoomAtPoint((int) (_StartedMousePosition.X), (int) (_StartedMousePosition.Y));
                    _CurrentMouseMoveMode = MouseMoveMode.Zooming;
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ResetMouseMoveMode()
        {
            _CurrentMouseMoveMode = MouseMoveMode.None;
        }

        //--------------------------------------------------------------------------------------------------

        public void Rotate(double dX, double dY, double dZ)
        {
            if (!_LockedToPlane)
            {
                if ((Math.Abs(dX) > 0.001) || (Math.Abs(dY) > 0.001))
                {
                    if (Viewport.Twist == 180)
                    {
                        Viewport.Twist = 0;
                    }

                    var sphere = Viewport.GetOrbitSphere();
                    var projPoint = ProjLib.Project(sphere, Viewport.EyePoint);

                    projPoint.Translate(new Vec2d(dY.ToRad(), dX.ToRad()));

                    // Constraint polar regions to avoid singularity troubles
                    if (projPoint.Y > _OrbitProjectionConstraint)
                    {
                        projPoint.Y = _OrbitProjectionConstraint;
                    }
                    if (projPoint.Y < -_OrbitProjectionConstraint)
                    {
                        projPoint.Y = -_OrbitProjectionConstraint;
                    }

                    Viewport.EyePoint = ElSLib.Value(projPoint.X, projPoint.Y, sphere);

//                    Debug.WriteLine("[RotateView] x={0}  y={1}  px={2}  py={3}", dX, dY, projPoint.X, projPoint.Y);
                }

                if (Math.Abs(dZ) > 0.001)
                {
                    Viewport.V3dView.Turn(V3d_TypeOfAxe.V3d_Z, dZ.ToRad(), true);
                }
            }

            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        public void Pan(double dX, double dY)
        {
            Viewport.V3dView.Panning(dX, dY, 1.0, true);
            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        public void Zoom(Point pos, double value)
        {
            double delta = value * 20.0;
            if (_CurrentMouseMoveMode != MouseMoveMode.Zooming)
            {
                Viewport.V3dView.StartZoomAtPoint((int) pos.X, (int) (pos.Y - delta));
            }

            Viewport.V3dView.ZoomAtPoint((int) pos.X, (int) (pos.Y - delta), (int) pos.X, (int) (pos.Y + delta));
            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        public void Zoom(double value)
        {
            if (value > 0)
            {
                Viewport.V3dView.SetZoom(1.0 + value, true);
            }
            else if (value < 0)
            {
                Viewport.V3dView.SetZoom(1.0 / (1.0-value), true);
            }
            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        public void ZoomFitAll()
        {
            if (_OcWindow == null)
            {
                // We need a window, defer call
                _ZoomFitAllOnInit = true;
                return;
            }
            WorkspaceController.VisualObjects.UpdateInvalidatedEntities();
            Viewport.V3dView.FitAll(0.1, false);
            Viewport.V3dView.ZFitAll(1.0);
            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------
        
        public void ZoomFitSelected()
        {
            WorkspaceController.VisualObjects.UpdateInvalidatedEntities();
            WorkspaceController.Workspace.AisContext.FitSelected(Viewport.V3dView, 0.1, false);
            WorkspaceController.Invalidate();
            Viewport.OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region ViewCube

        void _ShowViewCube(bool isVisible, uint size, double duration)
        {
            var aisContext = WorkspaceController.Workspace.AisContext;
            
            if (_AisViewCube != null)
            {
                if (aisContext.IsDisplayed(_AisViewCube))
                {
                    aisContext.Remove(_AisViewCube, false);
                    _AisViewCube.Dispose();
                    _AisViewCube = null;
                }
            }

            var bitmap = ResourceUtils.ReadBitmapFromResource(@"Visual\ViewCubeSides.png");
            if (bitmap == null)
            {
                Messages.Error($"Could not load view cube texture from resource.");
                return;
            }

            var pixmap = PixMapHelper.ConvertFromBitmap(bitmap);
            if (pixmap == null)
            {
                Messages.Error($"Could not load view cube texture into pixmap.");
                return;
            }

            _AisViewCube = new Macad.Occt.Ext.AIS_ViewCubeEx();
            _AisViewCube.SetSize(size * Viewport.DpiScale);
            _AisViewCube.SetBoxFacetExtension(size * Viewport.DpiScale * 0.15);
            _AisViewCube.SetViewAnimation(Viewport.AisAnimationCamera);
            _AisViewCube.SetFixedAnimationLoop(false);
            _AisViewCube.SetDrawAxes(false);
            _AisViewCube.SetDuration(duration);
            _AisViewCube.SetResetCamera(true);
            _AisViewCube.SetFitSelected(true);
            _AisViewCube.SetTexture(pixmap);
            _AisViewCube.SetTransformPersistence(new Graphic3d_TransformPers(Graphic3d_TransModeFlags.Graphic3d_TMF_TriedronPers,
                Aspect_TypeOfTriedronPosition.Aspect_TOTP_RIGHT_UPPER, new Graphic3d_Vec2i(100, 100)));

            var color = new Quantity_Color();
            Quantity_Color.ColorFromHex("d9dfe5", color);
            _AisViewCube.BoxSideStyle().SetColor(color);

            Quantity_Color.ColorFromHex("93a4b6", color);
            _AisViewCube.BoxEdgeStyle().SetColor(color);

            Quantity_Color.ColorFromHex("a6b4c3", color);
            _AisViewCube.BoxCornerStyle().SetColor(color);

            var material = new Graphic3d_MaterialAspect(Graphic3d_NameOfMaterial.Graphic3d_NOM_DEFAULT);
            material.SetAmbientColor(Quantity_NameOfColor.Quantity_NOC_GRAY80.ToColor());
            material.SetDiffuseColor(Quantity_NameOfColor.Quantity_NOC_GRAY20.ToColor());
            material.SetEmissiveColor(Quantity_NameOfColor.Quantity_NOC_BLACK.ToColor());
            material.SetSpecularColor(Quantity_NameOfColor.Quantity_NOC_BLACK.ToColor());
            _AisViewCube.SetMaterial(material);

            _AisViewCube.DynamicHilightAttributes().ShadingAspect().SetColor(Colors.Highlight);
            _AisViewCube.DynamicHilightAttributes().ShadingAspect().SetMaterial(material);

            if (isVisible)
            {
                aisContext.Display(_AisViewCube, false);

                foreach (var viewport in WorkspaceController.Workspace.Viewports)
                {
                    aisContext.SetViewAffinity(_AisViewCube, viewport.V3dView, ReferenceEquals(viewport, Viewport));
                }
            }

            WorkspaceController.Invalidate(true);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Rubberband Selection

        int[] _CalcRectangleSelectionPoints(bool bottomUp)
        {
            int height = 0, width = 0;
            _OcWindow.Size(ref width, ref height);
            int left = Math.Max(0, Math.Min((int) _StartedMousePosition.X, (int) _LastMousePosition.X));
            int right = Math.Min(width, Math.Max((int) _StartedMousePosition.X, (int) _LastMousePosition.X));
            int top = Math.Max(0, Math.Min((int) _StartedMousePosition.Y, (int) _LastMousePosition.Y));
            int bottom = Math.Min(height, Math.Max((int) _StartedMousePosition.Y, (int) _LastMousePosition.Y));

            if (bottomUp)
            {
                top = height - top;
                bottom = height - bottom;
            }

            return new[] {left, bottom, right, top};
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateRubberbandSelection()
        {
            switch (_RubberbandMode)
            {
                case RubberbandSelectionMode.Rectangle:
                    var points = _CalcRectangleSelectionPoints(true);
                    _AisRubberBand.SetRectangle(points[0], points[1], points[2], points[3]);
                    break;

                case RubberbandSelectionMode.Freehand:
                    int height = 0, width = 0;
                    _OcWindow.Size(ref width, ref height);
                    int currentPointX = (int) _LastMousePosition.X.Clamp(0, width);
                    int currentPointY = (int) _LastMousePosition.Y.Clamp(0, height);
                    var (lastPointX, lastPointY) = _RubberbandPoints[_RubberbandPoints.Count - 2];
                    var distX = currentPointX - lastPointX;
                    var distY = currentPointY - lastPointY;
                    if (distX * distX + distY * distY > RubberbandFreehandSelectionThresholdSquared)
                    {
                        _RubberbandPoints.Add((currentPointX, currentPointY));
                    }
                    else
                    {
                        _RubberbandPoints[_RubberbandPoints.Count - 1] = (currentPointX, currentPointY);
                    }
                    Occt.Helper.Ais.SetRubberbandPoints(_OcWindow, _AisRubberBand, _RubberbandPoints);
                    break;
            }

            WorkspaceController.Workspace.AisContext.Redisplay(_AisRubberBand, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void StartRubberbandSelection(RubberbandSelectionMode mode, bool includeTouched)
        {
            _StartedMousePosition = _LastMousePosition;
            _RubberbandIncludeTouched = includeTouched;

            if (_AisRubberBand == null)
            {
                var aisContext = WorkspaceController.Workspace.AisContext;
                _AisRubberBand = new AIS_RubberBand(
                    new Quantity_Color(Quantity_NameOfColor.Quantity_NOC_BLUE1), 
                    Aspect_TypeOfLine.Aspect_TOL_DASH, 
                    new Quantity_Color(Quantity_NameOfColor.Quantity_NOC_BLUE1),
                    0.9, 2, true);

                _RubberbandMode = mode;
                _RubberbandPoints.Clear();
                if (_RubberbandMode != RubberbandSelectionMode.Rectangle)
                {
                    var startPoint = ((int) _LastMousePosition.X, (int) _LastMousePosition.Y);
                    _RubberbandPoints.Add(startPoint);
                    _RubberbandPoints.Add(startPoint);
                }
                _UpdateRubberbandSelection();

                aisContext.Display(_AisRubberBand, false);

                foreach (var viewport in WorkspaceController.Workspace.Viewports)
                {
                    aisContext.SetViewAffinity(_AisRubberBand, viewport.V3dView, ReferenceEquals(viewport, Viewport));
                }
                WorkspaceController.Invalidate(true);
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        void _StopRubberbandSelection()
        {
            if (_AisRubberBand != null)
            {
                WorkspaceController.Workspace.AisContext.Remove(_AisRubberBand, false);
                _AisRubberBand = null;

                switch (_RubberbandMode)
                {
                    case RubberbandSelectionMode.Rectangle:
                        WorkspaceController.SelectByRectangle(_CalcRectangleSelectionPoints(false), _RubberbandIncludeTouched, this);
                        break;
                    case RubberbandSelectionMode.Freehand:
                        // Close polyline
                        _RubberbandPoints.Add(_RubberbandPoints[0]);
                        WorkspaceController.SelectByPolyline(_RubberbandPoints, _RubberbandIncludeTouched, this);
                        break;
                }

                _RubberbandPoints.Clear();
                WorkspaceController.Invalidate(true);
            }
        }

        //--------------------------------------------------------------------------------------------------


        #endregion
    }
}
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Windows;
using System.Windows.Forms;
using System.Windows.Input;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Resources;
using static Macad.Core.Viewport;
using Color = Macad.Common.Color;
using Point = System.Windows.Point;

namespace Macad.Interaction;

public sealed class ViewportController : BaseObject, IDisposable
{
    const int RubberbandFreehandSelectionThresholdSquared = 100;

    #region Enums

    public enum RubberbandSelectionMode
    {
        Rectangle,
        Freehand
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    public WorkspaceController WorkspaceController { get; }

    //--------------------------------------------------------------------------------------------------

    public Viewport Viewport { get; }
    
    //--------------------------------------------------------------------------------------------------

    public V3d_View V3dView { get; private set; }
    
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
                _SetViewCube(!value);
                _SetTrihedron(!value && _ShowTrihedron);
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

    public (int Width, int Height) ScreenSize
    {
        get
        {
            double pixelSize = PixelSize;
            double width = 100, height = 100;
            V3dView?.Size(ref width, ref height);
            return ((int)(width / pixelSize), (int)(height / pixelSize));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double GizmoScale
    {
        get
        {
            double width = 100, height = 100;
            V3dView?.Size(ref width, ref height);
            double scale = Math.Min(width, height) / 10.0f;
            //Debug.WriteLine("w/h/s {0} {1} {2}", width, height, scale);
            return scale;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double PixelSize
    {
        get
        {
            if (V3dView != null && V3dView.IfWindow())
            {
                return V3dView.Convert(1);
            }
            return 1.0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double DpiScale
    {
        get => _DpiScale;
        set
        {
            if (!_DpiScale.IsEqual(value, Precision.Confusion()))
            {
                _DpiScale = value;
                RaisePropertyChanged();
            }
        }
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
    Pnt? _GravityPoint;
    bool _LockedToPlane;
    bool _ShowTrihedron;
    bool _IsSyncingViewport;
    double _DpiScale = 1.0;

    AIS_RubberBand _AisRubberBand;
    RubberbandSelectionMode _RubberbandMode;
    bool _RubberbandIncludeTouched;
    readonly List<ValueTuple<int, int>> _RubberbandPoints = new();

    AIS_AnimationCamera _AisAnimationCamera;
    Macad.Occt.Ext.AIS_ViewCubeEx _AisViewCube;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    internal ViewportController(Viewport viewport, WorkspaceController workspaceController)
    {
        Debug.Assert(viewport != null);

        Viewport = viewport;
        Viewport.PropertyChanged += _Viewport_PropertyChanged;
        WorkspaceController = workspaceController;
        
        Init();
    }

    //--------------------------------------------------------------------------------------------------

    ~ViewportController()
    {
        Dispose();
    }

    public void Dispose()
    {
        ViewportParameterSet.ParameterChanged -= _ViewportParameterSet_ParameterChanged;
        Viewport.PropertyChanged -= _Viewport_PropertyChanged;

        _AisViewCube?.Dispose();
        _AisViewCube = null;

        _AisRubberBand?.Dispose();
        _AisRubberBand = null;

        _AisAnimationCamera?.Dispose();
        _AisAnimationCamera = null;

        if (V3dView != null)
        {
            V3dView.Remove();
            V3dView.Dispose();
            V3dView = null;
        }

        if (_OcWindow != null && !_OcWindow.IsDisposed())
        {
            if (_OcWindow.IsMapped())
                _OcWindow.Unmap();
            _OcWindow.Dispose();
            _OcWindow = null;
        }

        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    void Init()
    {
        if (V3dView != null)
            return;

        V3dView = WorkspaceController.V3dViewer.CreateView();

        ViewportParameterSet.ParameterChanged += _ViewportParameterSet_ParameterChanged;
        var parameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();

        V3dView.SetBgGradientColors(new Color(0.624f, 0.714f, 0.804f).ToQuantityColor(), new Color(0.424f, 0.482f, 0.545f).ToQuantityColor(), Aspect_GradientFillMethod.VER, false);

        var renderParams = V3dView.ChangeRenderingParams();
        renderParams.NbMsaaSamples = parameterSet.EnableAntialiasing ? 4 : 0;
        renderParams.IsAntialiasingEnabled = parameterSet.EnableAntialiasing;
        renderParams.TransparencyMethod = Graphic3d_RenderTransparentMethod.BLEND_OIT;
        renderParams.Method = Graphic3d_RenderingMode.RASTERIZATION;
        renderParams.RaytracingDepth = 3;
        renderParams.IsShadowEnabled = true;
        renderParams.IsReflectionEnabled = true;
        renderParams.IsTransparentShadowEnabled = true;

        _AisAnimationCamera = new(new("ViewCamera"), V3dView);

        _SyncV3dFromViewport();
        _UpdateRenderMode();
    }

    //--------------------------------------------------------------------------------------------------

    internal IntPtr InitWindow(IntPtr parentHWnd, Int32Rect initialRect)
    {
        Debug.Assert(V3dView != null);

        uint style;

        if (_OcWindowClass == null)
        {
            style = Win32Api.CS_OWNDC;
            _OcWindowClass = new WNT_WClass(new TCollection_AsciiString("WorkspaceView"), IntPtr.Zero, style, 0);
        }

        if (initialRect.IsEmpty)
        {
            initialRect = new Int32Rect(0, 0, 64, 64);
        }

        style = Win32Api.WS_VISIBLE | (parentHWnd == IntPtr.Zero ? Win32Api.WS_POPUP : Win32Api.WS_CHILD);
        _OcWindow = new WNT_Window("WorkspaceView", _OcWindowClass, style, initialRect.X, initialRect.Y, initialRect.Width, initialRect.Height, Quantity_NameOfColor.GRAY50, parentHWnd);
        _OcWindow.Map();

        V3dView.SetWindow(_OcWindow);

        if (_ZoomFitAllOnInit)
        {
            _ZoomFitAllOnInit = false;
            ZoomFitAll();
        }
        V3dView.Update();
        V3dView.MustBeResized();
        V3dView.SetImmediateUpdate(false);

        _UpdateFromViewParameterSet();

        var handle = _OcWindow.HWindow();
        return handle;
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
            V3dView.SetProj(dir.X, dir.Y, dir.Z);
            var up = plane.YAxis.Direction;
            V3dView.SetUp(up.X, up.Y, up.Z);
            _SyncViewportFromV3d();
            WorkspaceController.Invalidate();
            return;
        }
        
        // Currently the view cube is needed to execute the rotation. This is
        // ok as long as there is always a view cube present when rotation is allowed.
        if(_LockedToPlane || _AisViewCube == null)
            return;

        V3d_TypeOfOrientation orientation;
        switch (predefinedView)
        {
            case PredefinedViews.Top:
                orientation = V3d_TypeOfOrientation.Zup_Top;
                break;
            case PredefinedViews.Bottom:
                orientation = V3d_TypeOfOrientation.Zup_Bottom;
                break;
            case PredefinedViews.Left:
                orientation = V3d_TypeOfOrientation.Zup_Left;
                break;
            case PredefinedViews.Right:
                orientation = V3d_TypeOfOrientation.Zup_Right;
                break;
            case PredefinedViews.Front:
                orientation = V3d_TypeOfOrientation.Zup_Front;
                break;
            case PredefinedViews.Back:
                orientation = V3d_TypeOfOrientation.Zup_Back;
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

    public void MouseMove(Point pos, ModifierKeys modifierKeys = ModifierKeys.None, MouseMoveMode mode = MouseMoveMode.None)
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
                V3dView.Pan((int) (pos.X - _LastMousePosition.X), -(int) (pos.Y - _LastMousePosition.Y), 1.0, true);
                _SyncViewportFromV3d();
                break;

            case MouseMoveMode.Twisting:
                Rotate(0, 0, (pos.Y - _LastMousePosition.Y) / 12.0);
                break;

            case MouseMoveMode.Rotating:
                // Turntable
                Rotate((_LastMousePosition.X - pos.X) / 6.0, (_LastMousePosition.Y - pos.Y) / 6.0, 0);
                break;

            case MouseMoveMode.Zooming:
                V3dView.ZoomAtPoint((int) _LastMousePosition.X, (int) pos.Y, (int) pos.X, (int) _LastMousePosition.Y);
                _SyncViewportFromV3d();
                break;
        }

        WorkspaceController.MouseMove(this, pos, modifierKeys);
        WorkspaceController.Invalidate();

        _LastMousePosition = pos;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void MouseMove(ModifierKeys modifierKeys = ModifierKeys.None)
    {
        if (_AisRubberBand != null)
            return;

        WorkspaceController.MouseMove(this, _LastMousePosition, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseDown(ModifierKeys modifierKeys = ModifierKeys.None)
    {
        WorkspaceController.MouseDown(this, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseUp(ModifierKeys modifierKeys = ModifierKeys.None)
    {
        if (IsInRubberbandSelection)
        {
            _StopRubberbandSelection();
        }
        WorkspaceController.MouseUp(this, modifierKeys);
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
                _GravityPoint ??= V3dView.GravityPoint();
                break;

            case MouseMoveMode.Twisting:
                _CurrentMouseMoveMode = MouseMoveMode.Twisting;
                break;

            case MouseMoveMode.Zooming:
                V3dView.StartZoomAtPoint((int) (_StartedMousePosition.X), (int) (_StartedMousePosition.Y));
                _CurrentMouseMoveMode = MouseMoveMode.Zooming;
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ResetMouseMoveMode()
    {
        _GravityPoint = null;
        _CurrentMouseMoveMode = MouseMoveMode.None;
    }

    //--------------------------------------------------------------------------------------------------

    public void Rotate(double yawDeg, double pitchDeg, double rollDeg)
    {
        if (!_LockedToPlane)
        {
            if (Math.Abs(yawDeg) > 0.001 || Math.Abs(pitchDeg) > 0.001)
            {
                if (Viewport.Twist == 180)
                {
                    Viewport.Twist = 0;
                }
                    
                var pitch = pitchDeg.ToRad();
                var yaw = yawDeg.ToRad();

                // Constraint polar regions, do not go 'overhead'
                var upDir = Viewport.GetUpDirection();
                var viewDir = Viewport.GetViewDirection();
                var angleLeft = _OrbitProjectionConstraint - Ax2.XOY.Angle(new Ax2(Pnt.Origin, upDir));
                if (viewDir.Z < 0 && pitch < -angleLeft)
                {
                    pitch = -angleLeft;
                }
                else if (viewDir.Z > 0 && pitch > angleLeft)
                {
                    pitch = angleLeft;
                }
                
                var gravityPoint = _GravityPoint ?? V3dView.GravityPoint();
                Trsf trsf1 = new Trsf(new Ax1(gravityPoint, Viewport.GetRightDirection()), pitch);
                V3dView.Camera().Transform(trsf1);
                Trsf trsf2 = new Trsf(new Ax1(gravityPoint, Dir.DZ), yaw);
                V3dView.Camera().Transform(trsf2);
            }

            if (Math.Abs(rollDeg) > 0.001)
            {
                V3dView.Turn(V3d_TypeOfAxe.Z, rollDeg.ToRad(), true);
            }

            WorkspaceController.Invalidate();
            _SyncViewportFromV3d();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Pan(double dX, double dY)
    {
        V3dView.Panning(dX, dY, 1.0, true);
        WorkspaceController.Invalidate();
        _SyncViewportFromV3d();
    }

    //--------------------------------------------------------------------------------------------------

    public void Zoom(Point pos, double value)
    {
        double delta = value * 20.0;
        if (_CurrentMouseMoveMode != MouseMoveMode.Zooming)
        {
            V3dView.StartZoomAtPoint((int) pos.X, (int) (pos.Y - delta));
        }

        V3dView.ZoomAtPoint((int) pos.X, (int) (pos.Y - delta), (int) pos.X, (int) (pos.Y + delta));
        WorkspaceController.Invalidate();
        _SyncViewportFromV3d();
    }

    //--------------------------------------------------------------------------------------------------

    public void Zoom(double value)
    {
        if (value > 0)
        {
            V3dView.SetZoom(1.0 + value, true);
        }
        else if (value < 0)
        {
            V3dView.SetZoom(1.0 / (1.0-value), true);
        }
        WorkspaceController.Invalidate();
        _SyncViewportFromV3d();
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
        V3dView.FitAll(0.1, false);
        V3dView.ZFitAll(1.0);
        WorkspaceController.Invalidate();
        _SyncViewportFromV3d();
    }

    //--------------------------------------------------------------------------------------------------
        
    public void ZoomFitSelected()
    {
        WorkspaceController.VisualObjects.UpdateInvalidatedEntities();
        WorkspaceController.AisContext.FitSelected(V3dView, 0.1, false);
        WorkspaceController.Invalidate();
        _SyncViewportFromV3d();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Usability Tools

    void _SetViewCube(bool isVisible)
    {
        var aisContext = WorkspaceController.AisContext;

        if (_AisViewCube == null)
            return;

        if (isVisible && !aisContext.IsDisplayed(_AisViewCube))
        {
            aisContext.Display(_AisViewCube, false);
            WorkspaceController.Invalidate(true);
        }
        else if (!isVisible && aisContext.IsDisplayed(_AisViewCube))
        {
            aisContext.Remove(_AisViewCube, false);
            WorkspaceController.Invalidate(true);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SetViewCube(bool isVisible, uint size, double duration)
    {
        var aisContext = WorkspaceController.AisContext;
            
        if (_AisViewCube != null)
        {
            _SetViewCube(isVisible);
            return;
        }

        if (!isVisible)
            return;

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

        _AisViewCube = new();
        _AisViewCube.SetSize(size * DpiScale);
        _AisViewCube.SetBoxFacetExtension(size * DpiScale * 0.15);
        _AisViewCube.SetViewAnimation(_AisAnimationCamera);
        _AisViewCube.SetFixedAnimationLoop(false);
        _AisViewCube.SetDrawAxes(false);
        _AisViewCube.SetDuration(duration);
        _AisViewCube.SetResetCamera(true);
        _AisViewCube.SetFitSelected(true);
        _AisViewCube.SetTexture(pixmap);
        _AisViewCube.SetTransformPersistence(new(Graphic3d_TransModeFlags.TriedronPers, Aspect_TypeOfTriedronPosition.RIGHT_UPPER, new(100, 100)));

        var color = new Quantity_Color();
        Quantity_Color.ColorFromHex("d9dfe5", color);
        _AisViewCube.BoxSideStyle().SetColor(color);

        Quantity_Color.ColorFromHex("93a4b6", color);
        _AisViewCube.BoxEdgeStyle().SetColor(color);

        Quantity_Color.ColorFromHex("a6b4c3", color);
        _AisViewCube.BoxCornerStyle().SetColor(color);

        var material = new Graphic3d_MaterialAspect(Graphic3d_NameOfMaterial.DEFAULT);
        material.SetAmbientColor(new Color(0.8f, 0.8f, 0.8f).ToQuantityColor());
        material.SetDiffuseColor(new Color(0.2f, 0.2f, 0.2f).ToQuantityColor());
        material.SetEmissiveColor(Color.Black.ToQuantityColor());
        material.SetSpecularColor(Color.Black.ToQuantityColor());
        _AisViewCube.SetMaterial(material);

        _AisViewCube.DynamicHilightAttributes().ShadingAspect().SetColor(Colors.Highlight.ToQuantityColor());
        _AisViewCube.DynamicHilightAttributes().ShadingAspect().SetMaterial(material);

        if (isVisible)
        {
            aisContext.Display(_AisViewCube, false);

            foreach (var viewport in WorkspaceController.Workspace.Viewports)
            {
                aisContext.SetViewAffinity(_AisViewCube, V3dView, ReferenceEquals(viewport, Viewport));
            }
        }

        WorkspaceController.Invalidate(true);
    }

    //--------------------------------------------------------------------------------------------------
        
    void _SetTrihedron(bool visible)
    {
        if (visible)
        {
            V3dView?.TriedronDisplay(Aspect_TypeOfTriedronPosition.LEFT_LOWER, new Color(0.941f, 0.973f, 1.0f).ToQuantityColor(), 0.1, V3d_TypeOfVisualization.ZBUFFER);
        }
        else
        {
            V3dView?.TriedronErase();
        }
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
                AisHelper.SetRubberbandPoints(_OcWindow, _AisRubberBand, _RubberbandPoints);
                break;
        }

        WorkspaceController.AisContext.Redisplay(_AisRubberBand, false);
    }

    //--------------------------------------------------------------------------------------------------

    public void StartRubberbandSelection(RubberbandSelectionMode mode, bool includeTouched, Point? position=null)
    {
        if (_AisRubberBand != null) 
            return;

        _StartedMousePosition = position ?? _LastMousePosition;
        _RubberbandIncludeTouched = includeTouched;

        var aisContext = WorkspaceController.AisContext;
        _AisRubberBand = new AIS_RubberBand(
            new Color(0.0f, 0.0f, 1.0f).ToQuantityColor(), 
            Aspect_TypeOfLine.DASH, 
            new Color(0.0f, 0.0f, 1.0f).ToQuantityColor(), 
            0.9, 2, true);

        _RubberbandMode = mode;
        _RubberbandPoints.Clear();
        if (_RubberbandMode != RubberbandSelectionMode.Rectangle)
        {
            var startPoint = ((int) _StartedMousePosition.X, (int) _StartedMousePosition.Y);
            _RubberbandPoints.Add(startPoint);
            _RubberbandPoints.Add(startPoint);
        }
        _UpdateRubberbandSelection();

        aisContext.Display(_AisRubberBand, false);

        foreach (var viewport in WorkspaceController.Workspace.Viewports)
        {
            aisContext.SetViewAffinity(_AisRubberBand, V3dView, ReferenceEquals(viewport, Viewport));
        }
        WorkspaceController.Invalidate(true);
    }
        
    //--------------------------------------------------------------------------------------------------

    void _StopRubberbandSelection()
    {
        if (_AisRubberBand != null)
        {
            WorkspaceController.AisContext.Remove(_AisRubberBand, false);
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
        
    #region Rendering

    internal bool PrepareDraw()
    {
        bool needsRedraw = false;
        if (!_AisAnimationCamera.IsStopped())
        {
            _AisAnimationCamera.UpdateTimer();
            _SyncViewportFromV3d();
            needsRedraw = true;
        }

        return needsRedraw;
    }

    //--------------------------------------------------------------------------------------------------

    public Bitmap RenderToBitmap(uint width, uint height)
    {
        if (V3dView == null 
            || !(_OcWindow?.IsMapped() ?? false)
            || width == 0 || height == 0)
            return null;

        try
        {
            _SetTrihedron(false);
            _SetViewCube(false);
            var pixmap = new Image_AlienPixMap();
            pixmap.InitZero(Image_Format.RGB, width, height);
            V3dView?.ToPixMap(pixmap, (int)width, (int)height);
            _SetTrihedron(_ShowTrihedron);
            _SetViewCube(true);

            return PixMapHelper.ConvertToBitmap(pixmap);
        }
        catch (Exception )
        {
            _SetTrihedron(_ShowTrihedron);
            _SetTrihedron(true);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region View Properties

    void _ViewportParameterSet_ParameterChanged(OverridableParameterSet set, string key)
    {
        _UpdateFromViewParameterSet();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateFromViewParameterSet()
    {
        var parameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        _SetViewCube(parameterSet.ShowViewCube, parameterSet.ViewCubeSize, parameterSet.ViewCubeAnimationDuration);
        _SetTrihedron(parameterSet.ShowTrihedron);
        _ShowTrihedron = parameterSet.ShowTrihedron;
    }

    //--------------------------------------------------------------------------------------------------

    void _Viewport_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Viewport.RenderMode))
        {
            _UpdateRenderMode();
            return;
        }

        if (!_IsSyncingViewport)
        {
            switch (e.PropertyName)
            {
                case nameof(Viewport.EyePoint):
                    V3dView.SetEye(Viewport.EyePoint.X, Viewport.EyePoint.Y, Viewport.EyePoint.Z);
                    break;
                case nameof(Viewport.TargetPoint):
                    V3dView.SetAt(Viewport.TargetPoint.X, Viewport.TargetPoint.Y, Viewport.TargetPoint.Z);
                    break;
                case nameof(Viewport.Scale):
                    V3dView.SetScale(Viewport.Scale);
                    _SyncViewportSizeFromV3d();
                    break;
                case nameof(Viewport.Twist):
                    V3dView.SetTwist(Viewport.Twist.ToRad());
                    break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateRenderMode()
    {
        if (V3dView == null)
            return;

        V3dView.SetComputedMode(Viewport.RenderMode == RenderModes.HLR);

        var renderParams = V3dView.ChangeRenderingParams();
        if (Viewport.RenderMode == RenderModes.Raytraced)
        {
            renderParams.Method = Graphic3d_RenderingMode.RAYTRACING;
        }
        else
        {
            renderParams.Method = Graphic3d_RenderingMode.RASTERIZATION;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SyncViewportFromV3d()
    {
        if (V3dView == null)
            return;

        _IsSyncingViewport = true;

        _ValidateViewGeometry();

        double xEye = 0, yEye = 0, zEye = 0;
        V3dView.Eye(ref xEye, ref yEye, ref zEye);
        double xAt = 0, yAt = 0, zAt = 0;
        V3dView.At(ref xAt, ref yAt, ref zAt);
        double scale = V3dView.Scale();
        double twist = V3dView.Twist().ToDeg();
        double width = 100, height = 100;
        V3dView.Size(ref width, ref height);

        Viewport.SetViewParameters(new(xEye, yEye, zEye), new Pnt(xAt, yAt, zAt), twist, scale, width, height);
        RaisePropertyChanged(nameof(ScreenSize));
        RaisePropertyChanged(nameof(PixelSize));

        _IsSyncingViewport = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _SyncV3dFromViewport()
    {
        if (V3dView == null)
            return;

        V3dView.SetEye(Viewport.EyePoint.X, Viewport.EyePoint.Y, Viewport.EyePoint.Z);
        V3dView.SetAt(Viewport.TargetPoint.X, Viewport.TargetPoint.Y, Viewport.TargetPoint.Z);
        V3dView.SetScale(Viewport.Scale);
        V3dView.SetTwist(Viewport.Twist.ToRad());
        _SyncViewportSizeFromV3d();
    }

    //--------------------------------------------------------------------------------------------------

    void _SyncViewportSizeFromV3d()
    {
        double width = 100, height = 100;
        V3dView.Size(ref width, ref height);
        Viewport.Size = (width, height);
        RaisePropertyChanged(nameof(ScreenSize));
        RaisePropertyChanged(nameof(PixelSize));
    }

    //--------------------------------------------------------------------------------------------------

    void _ValidateViewGeometry()
    {
        if (V3dView == null)
            return;

        // If distance is 0, the parameters cannot be restored
        if (V3dView.Camera().Distance() == 0.0)
            V3dView.Camera().SetDistance(0.00001);
    }

    //--------------------------------------------------------------------------------------------------

    public void Resize()
    {
        if (V3dView == null)
            return;

        V3dView.MustBeResized();
        _SyncViewportSizeFromV3d();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Screen Space Conversions

    public bool ScreenToPoint(int screenX, int screenY, out Pnt resultPnt)
    {
        if (V3dView != null)
        {
            try
            {
                var viewPlane = Viewport.GetViewPlane();
                double x = 0, y = 0, z = 0;
                V3dView.Convert(screenX, screenY, ref x, ref y, ref z);
                Pnt convertedPoint = new Pnt(x, y, z);
                Pnt2d convertedPointOnPlane = ProjLib.Project(viewPlane, convertedPoint);

                resultPnt = ElSLib.Value(convertedPointOnPlane.X, convertedPointOnPlane.Y, viewPlane);
                return true;
            }
            catch (Exception)
            {
                Debug.Assert(false);
            }
        }

        resultPnt = Pnt.Origin;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool ScreenToPoint(Pln plane, int screenX, int screenY, out Pnt resultPnt)
    {
        if (V3dView != null)
        {
            try
            {
                _ValidateViewGeometry();

                if (V3dView.IfWindow())
                {
                    double xv = 0, yv = 0, zv = 0;
                    double vx = 0, vy = 0, vz = 0;

                    V3dView.Convert(screenX, screenY, ref xv, ref yv, ref zv);
                    V3dView.Proj(ref vx, ref vy, ref vz);

                    gp_Lin line = new gp_Lin(new Pnt(xv, yv, zv), new Dir(vx, vy, vz));
                    IntAna_IntConicQuad intersection = new IntAna_IntConicQuad(line, plane, Precision.Angular(), 0, 0);

                    if (intersection.IsDone()
                        && !intersection.IsParallel()
                        && intersection.NbPoints() > 0)
                    {
                        resultPnt = intersection.Point(1);
                        return true;
                    }
                }
            }
            catch (Exception e)
            {
                Debug.Assert(false, e.Message);
            }
        }

        resultPnt = new Pnt();
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool PointToScreen(Pnt pnt, out int screenX, out int screenY)
    {
        if (V3dView != null)
        {
            try
            {
                int x = 0, y = 0;
                V3dView.Convert(pnt.X, pnt.Y, pnt.Z, ref x, ref y);
                screenX = x;
                screenY = y;
                return true;
            }
            catch (Exception)
            {
                Debug.Assert(false);
            }
        }

        screenX = 0;
        screenY = 0;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public Ax1 ScreenToViewAxis(int screenX, int screenY)
    {
        if (V3dView == null)
            return Ax1.OX;

        double px = 0, py = 0, pz = 0;
        V3dView.Convert(screenX, screenY, ref px, ref py, ref pz);
        return new Ax1(new Pnt(px, py, pz), Viewport.GetViewDirection());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion


}
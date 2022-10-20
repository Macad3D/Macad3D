using System;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core
{
    [SerializeType]
    public sealed class Viewport : BaseObject, IDisposable
    {
        #region Properties

        [SerializeMember]
        public Pnt EyePoint
        {
            get
            {
                if (V3dView != null)
                {
                    double xEye = 0, yEye = 0, zEye = 0;
                    V3dView.Eye(ref xEye, ref yEye, ref zEye);
                    _EyePoint = new Pnt(xEye, yEye, zEye);
                }
                return _EyePoint;
            }
            set
            {
                _EyePoint = value;
                V3dView?.SetEye(_EyePoint.X, _EyePoint.Y, _EyePoint.Z);
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public Pnt TargetPoint
        {
            get
            {
                if (V3dView != null)
                {
                    double xAt = 0, yAt = 0, zAt = 0;
                    V3dView.At(ref xAt, ref yAt, ref zAt);
                    _TargetPoint = new Pnt(xAt, yAt, zAt);
                }
                return _TargetPoint;
            }
            set
            {
                _TargetPoint = value;
                V3dView?.SetAt(_TargetPoint.X, _TargetPoint.Y, _TargetPoint.Z);
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double Twist
        {
            get
            {
                if (V3dView != null)
                {
                    _Twist = V3dView.Twist().ToDeg();
                }
                return _Twist;
            }
            set
            {
                V3dView?.SetTwist(value.ToRad());
                if(_Twist != value)
                {
                    _Twist = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double Scale
        {
            get
            {
                if (V3dView != null)
                {
                    _Scale = V3dView.Scale();
                }
                return _Scale;
            }
            set
            {
                V3dView?.SetScale(value);
                if(_Scale != value)
                {
                    _Scale = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public RenderModes RenderMode
        {
            get { return _RenderMode; }
            set
            {
                if (_RenderMode != value)
                {
                    _RenderMode = value;
                    Workspace.MarkAsUnsaved();
                    UpdateRenderMode();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public V3d_View V3dView { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public AIS_AnimationCamera AisAnimationCamera { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public Workspace Workspace { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public (double Width, double Height) Size
        {
            get
            {
                double width = 0, height = 0;
                V3dView.Size(ref width, ref height);
                return (width, height);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double GizmoScale
        {
            get
            {
                double width = 0, height = 0;
                V3dView.Size(ref width, ref height);
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
                return V3dView.IfWindow() ? V3dView.Convert(1) : 1.0;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double DpiScale
        {
            get { return _DpiScale; }
            set
            {
                if (_DpiScale != value)
                {
                    _DpiScale = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
            
        #region Enumerations

        public enum RenderModes
        {
            SolidShaded,
            HLR,
            Raytraced
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
        
        #region Events

        public delegate void ViewportChangedEventHandler(Viewport sender);
        
        public static event ViewportChangedEventHandler ViewportChanged;

        void _RaiseViewportChanged()
        {
            ViewportChanged?.Invoke(this);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member Variables

        Pnt _EyePoint = new Pnt(10, 10, 10);
        Pnt _TargetPoint = new Pnt(0, 0, 0);
        double _Twist = 0.0f;
        double _Scale = 100.0f;
        RenderModes _RenderMode;
        double _DpiScale = 1.0;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Initialization

        public Viewport()
        {
            _RenderMode = RenderModes.SolidShaded;
        }

        //--------------------------------------------------------------------------------------------------

        public Viewport(Workspace workspace)
        {
            Workspace = workspace;
        }

        //--------------------------------------------------------------------------------------------------

        public override void OnBeginDeserializing(SerializationContext context)
        {
            Workspace = context.GetInstance<Workspace>();

            base.OnBeginDeserializing(context);
        }

        //--------------------------------------------------------------------------------------------------

        public void Init()
        {
            if (V3dView != null)
                return;

            V3dView = Workspace.V3dViewer.CreateView();

            AisAnimationCamera = new AIS_AnimationCamera(new TCollection_AsciiString("ViewCamera"), V3dView);

            V3dView.SetBgGradientColors(Quantity_NameOfColor.Quantity_NOC_SLATEGRAY3.ToColor(), Quantity_NameOfColor.Quantity_NOC_SLATEGRAY4.ToColor(), Aspect_GradientFillMethod.Aspect_GFM_VER, false);

            var renderParams = V3dView.ChangeRenderingParams();
            renderParams.NbMsaaSamples = 4;
            renderParams.IsAntialiasingEnabled = true;
            renderParams.TransparencyMethod = Graphic3d_RenderTransparentMethod.Graphic3d_RTM_BLEND_OIT;
            renderParams.Method = Graphic3d_RenderingMode.Graphic3d_RM_RASTERIZATION;
            renderParams.RaytracingDepth = 3;
            renderParams.IsShadowEnabled = true;
            renderParams.IsReflectionEnabled = true;
            renderParams.IsAntialiasingEnabled = true;
            renderParams.IsTransparentShadowEnabled = true;

            // Reinit view parameters
            TargetPoint = _TargetPoint;
            EyePoint = _EyePoint;
            Scale = _Scale;
            Twist = _Twist;
            UpdateRenderMode();
        }
        
        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            AisAnimationCamera?.Dispose();
            AisAnimationCamera = null;

            if (V3dView != null)
            {
                V3dView.Remove();
                V3dView.Dispose();
                V3dView = null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Screen Space Conversions

        public bool ScreenToPoint(int screenX, int screenY, out Pnt resultPnt)
        {
            try
            {
                var viewPlane = GetViewPlane();
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

            resultPnt = Pnt.Origin;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool ScreenToPoint(Pln plane, int screenX, int screenY, out Pnt resultPnt)
        {
            try
            {
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

            resultPnt = new Pnt();
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool PointToScreen(Pnt pnt, out int screenX, out int screenY)
        {
            try
            {
                int x = 0, y = 0;
                V3dView.Convert(pnt.X, pnt.Y, pnt.Z, ref x, ref y );
                screenX = x;
                screenY = y;
                return true;
            }
            catch (Exception)
            {
                Debug.Assert(false);
            }

            screenX = 0;
            screenY = 0;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region View Geometry

        void _ValidateViewGeometry()
        {
            // If distance is 0, the parameters cannot be restored
            if(V3dView.Camera().Distance() == 0.0)
                V3dView.Camera().SetDistance(0.00001);
        }

        //--------------------------------------------------------------------------------------------------

        public Pln GetViewPlane()
        {
            var eyeDir = GetViewDirection();
            return new Pln(TargetPoint, eyeDir); 
        }

        //--------------------------------------------------------------------------------------------------

        public Dir GetViewDirection()
        {
            _ValidateViewGeometry();
            var eyeVector = new Vec(EyePoint, TargetPoint);

            return new Dir(eyeVector);
        }

        //--------------------------------------------------------------------------------------------------

        public Ax1 ViewAxis(int screenX, int screenY)
        {
            double px = 0, py = 0, pz = 0;
            V3dView.Convert(screenX, screenY, ref px, ref py, ref pz);
            return new Ax1(new Pnt(px, py, pz), GetViewDirection());
        }
        
        //--------------------------------------------------------------------------------------------------

        public Dir GetUpDirection()
        {
            double xUp = 0, yUp = 0, zUp = 0;
            V3dView.Up(ref xUp, ref yUp, ref zUp);
            return new Dir(xUp, yUp, zUp);
        }
        
        //--------------------------------------------------------------------------------------------------

        public Dir GetRightDirection()
        {
            var upDir = GetUpDirection();
            var eyeDir = GetViewDirection();
            eyeDir.Cross(upDir);

//            Console.WriteLine("ViewRight: {0:0.00} | {1:0.00} | {2:0.00}", eyeDir.X(), eyeDir.Y(), eyeDir.Z());

            return eyeDir;
        }

        //--------------------------------------------------------------------------------------------------

        public Pnt ProjectToGrid(Pnt point)
        {
            double px = 0, py = 0, pz = 0;
            V3dView.ConvertToGrid(point.X, point.Y, point.Z, ref px, ref py, ref pz);
            return new Pnt(px, py, pz);
        }

        //--------------------------------------------------------------------------------------------------

        public Pnt ProjectToGrid(int screenX, int screenY)
        {
            double px = 0, py = 0, pz = 0;
            V3dView.ConvertToGrid(screenX, screenY, ref px, ref py, ref pz);
            return new Pnt(px, py, pz);
        }

        //--------------------------------------------------------------------------------------------------

        public gp_Sphere GetOrbitSphere()
        {
            _ValidateViewGeometry();
            
            double xEye = 0, yEye = 0, zEye = 0, xAt = 0, yAt = 0, zAt = 0;
            V3dView.Eye(ref xEye, ref yEye, ref zEye);
            V3dView.At(ref xAt, ref yAt, ref zAt);
            Pnt eyePoint = new Pnt(xEye, yEye, zEye);
            Pnt atPoint = new Pnt(xAt, yAt, zAt);
            var eyeVector = new Vec(eyePoint, atPoint);

            return new gp_Sphere(new Ax3(atPoint, Dir.DZ, -Dir.DY.Rotated(Ax1.OZ, V3dView.Twist())), eyeVector.Magnitude());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region ViewParameters

        public double[] GetViewParameters()
        {
            _ValidateViewGeometry();

            return new[]
            {
                EyePoint.X, EyePoint.Y, EyePoint.Z,
                TargetPoint.X, TargetPoint.Y, TargetPoint.Z,
                Twist,
                Scale
            };
        }

        //--------------------------------------------------------------------------------------------------

        public void RestoreViewParameters(double[] parameters)
        {
            if (parameters.Length != 8) 
                return;

            EyePoint = new Pnt(parameters[0], parameters[1], parameters[2]);
            TargetPoint = new Pnt(parameters[3], parameters[4], parameters[5]);
            Twist = parameters[6];
            Scale = parameters[7];

            OnViewMoved();
        }

        //--------------------------------------------------------------------------------------------------

        internal void UpdateRenderMode()
        {
            if (V3dView == null)
                return;

            V3dView.SetComputedMode(_RenderMode == RenderModes.HLR);

            var renderParams = V3dView.ChangeRenderingParams();
            if (_RenderMode == RenderModes.Raytraced)
            {
                renderParams.Method = Graphic3d_RenderingMode.Graphic3d_RM_RAYTRACING;
            }
            else
            {
                renderParams.Method = Graphic3d_RenderingMode.Graphic3d_RM_RASTERIZATION;
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        public void Resize()
        {
            V3dView.MustBeResized();
            RaisePropertyChanged(nameof(PixelSize));
            RaisePropertyChanged(nameof(GizmoScale));
            _RaiseViewportChanged();
        }

        //--------------------------------------------------------------------------------------------------
        
        public void OnViewMoved()
        {
            RaisePropertyChanged(nameof(PixelSize));
            RaisePropertyChanged(nameof(GizmoScale));
            RaisePropertyChanged(nameof(EyePoint));
            RaisePropertyChanged(nameof(TargetPoint));
            RaisePropertyChanged(nameof(Twist));
            RaisePropertyChanged(nameof(Scale));
            _RaiseViewportChanged();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}
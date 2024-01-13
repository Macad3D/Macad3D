using System;
using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core
{
    [SerializeType]
    public sealed class Workspace : BaseObject, IDisposable
    {
        #region Properties

        [SerializeMember]
        public List<Viewport> Viewports { get; private set; }

        public V3d_Viewer V3dViewer { get; private set; }
        public AIS_InteractiveContext AisContext { get; private set; }
        public bool NeedsRedraw { get; set; }
        public bool NeedsImmediateRedraw { get; set; }
        public Model Model { get; private set; }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool GridEnabled
        {
            get { return _GridEnabled; }
            set
            {
                if (_GridEnabled != value)
                {
                    _GridEnabled = value;
                    Model.MarkAsUnsaved();
                    RaisePropertyChanged();
                    _RaiseGridChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public GridTypes GridType
        {
            get { return _CurrentWorkingContext.GridType; }
            set
            {
                if (_CurrentWorkingContext.GridType != value)
                {
                    _CurrentWorkingContext.GridType = value;
                    Model.MarkAsUnsaved();
                    RaisePropertyChanged();
                    _RaiseGridChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double GridStep
        {
            get { return _CurrentWorkingContext.GridStep; }
            set
            {
                if (_CurrentWorkingContext.GridStep != value)
                {
                    _CurrentWorkingContext.GridStep = value;
                    Model.MarkAsUnsaved();
                    RaisePropertyChanged();
                    _RaiseGridChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double GridRotation
        {
            get { return _CurrentWorkingContext.GridRotation; }
            set
            {
                if (_CurrentWorkingContext.GridRotation != value)
                {
                    _CurrentWorkingContext.GridRotation = value;
                    Model.MarkAsUnsaved();
                    RaisePropertyChanged();
                    _RaiseGridChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public int GridDivisions
        {
            get { return _CurrentWorkingContext.GridDivisions; }
            set
            {
                if (value == 0)
                    return;

                if (_CurrentWorkingContext.GridDivisions != value)
                {
                    _CurrentWorkingContext.GridDivisions = value;
                    Model.MarkAsUnsaved();
                    RaisePropertyChanged();
                    _RaiseGridChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public Pln WorkingPlane
        {
            get { return _CurrentWorkingContext.WorkingPlane; }
            set
            {
                _CurrentWorkingContext.WorkingPlane = value;
                Model.MarkAsUnsaved();
                _ApplyWorkingContext();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public WorkingContext WorkingContext
        {
            get { return _CurrentWorkingContext; }
            set
            {
                _CurrentWorkingContext = value ?? _GlobalWorkingContext;
                RaisePropertyChanged(nameof(WorkingPlane));
                RaisePropertyChanged(nameof(GridType));
                RaisePropertyChanged(nameof(GridStep));
                RaisePropertyChanged(nameof(GridRotation));
                RaisePropertyChanged(nameof(GridDivisions));
                _RaiseGridChanged();
                _ApplyWorkingContext();
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public WorkingContext GlobalWorkingContext
        {
            get { return _GlobalWorkingContext; }
            set { _GlobalWorkingContext.CopyFrom(value); }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
                
        #region Events

        public delegate void GridChangedEventHandler(Workspace sender);
        
        public event GridChangedEventHandler GridChanged;

        void _RaiseGridChanged()
        {
            GridChanged?.Invoke(this);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Enumerations

        public enum GridTypes
        {
            Rectangular,
            Circular
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member Variables

        bool _GridEnabled;

        readonly WorkingContext _GlobalWorkingContext = new WorkingContext();
        WorkingContext _CurrentWorkingContext;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Initialization

        public Workspace()
        {
            Init();
        }

        //--------------------------------------------------------------------------------------------------

        public Workspace(Model model)
        {
            Init();

            Model = model;

            // Create default setup
            Viewports.Add(new Viewport(this));
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            AisContext?.Dispose();
            AisContext = null;
            if (V3dViewer != null && !V3dViewer.IsDisposed())
            {
                V3dViewer.SetViewOff();
                V3dViewer.Dispose();
                V3dViewer = null;
            }

            Model = null;
        }

        //--------------------------------------------------------------------------------------------------

        void Init()
        {
            Viewports = new List<Viewport>();

            _CurrentWorkingContext = _GlobalWorkingContext;

            _GridEnabled = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void InitV3dViewer()
        {
            if (V3dViewer == null)
            {
                var ocGraphicDriver = Occt.Helper.Graphic3d.CreateOpenGlDriver();
                V3dViewer = new V3d_Viewer(ocGraphicDriver);
            }

            V3dViewer.SetDefaultViewSize(1000.0);
            V3dViewer.SetDefaultViewProj(V3d_TypeOfOrientation.XposYposZpos);
            V3dViewer.SetDefaultBackgroundColor(Quantity_NameOfColor.GRAY30.ToColor());
            V3dViewer.SetDefaultVisualization(V3d_TypeOfVisualization.ZBUFFER);
            V3dViewer.SetLightOn(new V3d_DirectionalLight(V3d_TypeOfOrientation.Zneg, Quantity_NameOfColor.WHITE.ToColor(), true));
            V3dViewer.SetLightOn(new V3d_AmbientLight(Quantity_NameOfColor.WHITE.ToColor()));

            // Reinit viewer parameters
            _ApplyWorkingContext();
        }

        //--------------------------------------------------------------------------------------------------

        public void InitAisContext()
        {
            if (V3dViewer == null)
                InitV3dViewer();

            if (AisContext == null)
            {
                AisContext = new AIS_InteractiveContext(V3dViewer);
                AisContext.UpdateCurrentViewer();
            }

            AisContext.SetAutoActivateSelection(true);
            AisContext.SetToHilightSelected(false);
            AisContext.SetPickingStrategy(SelectMgr_PickingStrategy.OnlyTopmost);
            AisContext.SetDisplayMode((int)AIS_DisplayMode.Shaded, false);
            V3dViewer.DisplayPrivilegedPlane(false, 1.0);
            AisContext.EnableDrawHiddenLine();

            // Reinit ais parameters
            _ApplyWorkingContext();
            AisContext.SetPixelTolerance(2);

            var drawer = AisContext.DefaultDrawer();
            drawer.SetWireAspect(new Prs3d_LineAspect(Colors.Selection, Aspect_TypeOfLine.SOLID, 1.0));
            drawer.SetTypeOfHLR(Prs3d_TypeOfHLR.TOH_PolyAlgo);
        }

        //--------------------------------------------------------------------------------------------------

        public override void OnBeginDeserializing(SerializationContext context)
        {
            Model = context.GetInstance<Model>();

            context.SetInstance(this);
            context.RemoveInstance<Body>();

            base.OnBeginDeserializing(context);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Working Plane

        public Quaternion GetWorkingPlaneRotation()
        {
            var wp = WorkingPlane;
            var mat = new Mat(
                wp.XAxis.Direction.Coord,
                wp.YAxis.Direction.Coord,
                wp.Position.Direction.Coord);

            return new Quaternion(mat);
        }

        //--------------------------------------------------------------------------------------------------

        public void SetDefaultWorkingPlane(AIS_TypeOfPlane type)
        {
            switch (type)
            {
                case AIS_TypeOfPlane.TOPL_XYPlane:
                    WorkingPlane = Pln.XOY;
                    break;

                case AIS_TypeOfPlane.TOPL_YZPlane:
                    WorkingPlane = Pln.YOZ;
                    break;

                case AIS_TypeOfPlane.TOPL_XZPlane:
                    WorkingPlane = Pln.ZOX;
                    break;
            }
        }
        
        //--------------------------------------------------------------------------------------------------
        
        public Pnt2d ComputeGridPoint(Pnt2d coord)
        {
            if (GridType == GridTypes.Circular)
            {
                double angle = gp.DX2d.Angle(coord.ToDir());
                double circStep = Maths.PI / GridDivisions;
                int iseg = (angle / circStep).ToRoundedInt();
                int icirc = (coord.Distance(Pnt2d.Origin) / GridStep).ToRoundedInt();
                return new Pnt2d(GridStep * icirc, 0).Rotated(Pnt2d.Origin, circStep * iseg);
            }
            else // GridTypes.Rectangular
            {
                int ix = (coord.X / GridStep).ToRoundedInt();
                int iy = (coord.Y / GridStep).ToRoundedInt();
                return new Pnt2d(GridStep * ix, GridStep * iy);
            }
        } 
        
        //--------------------------------------------------------------------------------------------------

        public bool ProjectToGrid(Viewport viewport, int screenX, int screenY, out Pnt pnt)
        {
            Pln plane = WorkingPlane;
            if (GridRotation != 0)
            {
                plane.Rotate(WorkingPlane.Axis, GridRotation.ToRad());
            }

            if(!viewport.ScreenToPoint(plane, screenX, screenY, out pnt))
                return false;

            Pnt2d uv = plane.Parameters(pnt);
            Pnt2d gridUv = ComputeGridPoint(uv);
            pnt = plane.Value(gridUv);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Working Context

        void _ApplyWorkingContext()
        {
            if (AisContext != null)
            {
                V3dViewer.SetPrivilegedPlane(_CurrentWorkingContext.WorkingPlane.Position);
            }
            RaisePropertyChanged(nameof(WorkingPlane));
            _RaiseGridChanged();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}


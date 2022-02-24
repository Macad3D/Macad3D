using System;
using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Occt.Ext;

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
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public Pln WorkingPlane
        {
            get { return _CurrentWorkingContext.WorkingPlane; }
            set
            {
                //Console.WriteLine("Old WorkingPlane: {0} {1} {2}", _WorkingPlane.Axis().Direction().X(), _WorkingPlane.Axis().Direction().Y(), _WorkingPlane.Axis().Direction().Z());
                //Console.WriteLine("New WorkingPlane: {0} {1} {2}", value.Axis().Direction().X(), value.Axis().Direction().Y(), value.Axis().Direction().Z());
                if (AisContext != null)
                {
                    V3dViewer.SetPrivilegedPlane(value.Position);
                }

                //Console.WriteLine("New working plane: {0}  {1}  {2}", value.Position().Location().x, value.Position().Location().z, value.Position().Location().z);
                //Console.WriteLine("Global working plane: {0}  {1}  {2}", _GlobalWorkingContext.WorkingPlane.Position().Location().x, _GlobalWorkingContext.WorkingPlane.Position().Location().z, _GlobalWorkingContext.WorkingPlane.Position().Location().z);
                _CurrentWorkingContext.WorkingPlane = value;
                RaisePropertyChanged();
                Model.MarkAsUnsaved();
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
            V3dViewer.SetDefaultViewProj(V3d_TypeOfOrientation.V3d_XposYposZpos);
            V3dViewer.SetDefaultBackgroundColor(Quantity_NameOfColor.Quantity_NOC_GRAY30.ToColor());
            V3dViewer.SetDefaultVisualization(V3d_TypeOfVisualization.V3d_ZBUFFER);
            V3dViewer.SetLightOn(new V3d_DirectionalLight(V3d_TypeOfOrientation.V3d_Zneg, Quantity_NameOfColor.Quantity_NOC_WHITE.ToColor(), true));
            V3dViewer.SetLightOn(new V3d_AmbientLight(Quantity_NameOfColor.Quantity_NOC_WHITE.ToColor()));

            V3dViewer.Grid().SetColors(Quantity_NameOfColor.Quantity_NOC_GRAY45.ToColor(), Quantity_NameOfColor.Quantity_NOC_GRAY30.ToColor());

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
            AisContext.SetPickingStrategy(SelectMgr_PickingStrategy.SelectMgr_PickingStrategy_OnlyTopmost);
            AisContext.SetDisplayMode((int)AIS_DisplayMode.AIS_Shaded, false);
            V3dViewer.DisplayPrivilegedPlane(false, 1.0);
            AisContext.EnableDrawHiddenLine();

            // Reinit ais parameters
            _ApplyWorkingContext();
            AisContext?.SetPixelTolerance(2);

            var drawer = AisContext.DefaultDrawer();
            drawer.SetWireAspect(new Prs3d_LineAspect(Colors.Selection, Aspect_TypeOfLine.Aspect_TOL_SOLID, 1.0));
            //drawer.SetTypeOfHLR(Prs3d_TypeOfHLR.Prs3d_TOH_Algo);
            drawer.SetTypeOfHLR(Prs3d_TypeOfHLR.Prs3d_TOH_PolyAlgo);
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

        #region Isolation

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
                case AIS_TypeOfPlane.AIS_TOPL_XYPlane:
                    WorkingPlane = Pln.XOY;
                    break;

                case AIS_TypeOfPlane.AIS_TOPL_YZPlane:
                    WorkingPlane = Pln.YOZ;
                    break;

                case AIS_TypeOfPlane.AIS_TOPL_XZPlane:
                    WorkingPlane = Pln.ZOX;
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public XY ComputeGridPoint(XY coord)
        {
            double resX = 0, resY = 0;
            V3dViewer.Grid().Compute(coord.X, coord.Y, ref resX, ref resY);
            return new XY(resX, resY);
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Working Context

        void _ApplyWorkingContext()
        {
            WorkingPlane = _CurrentWorkingContext.WorkingPlane;
        }

        //--------------------------------------------------------------------------------------------------

        public void MarkAsUnsaved()
        {
            Model.MarkAsUnsaved();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}


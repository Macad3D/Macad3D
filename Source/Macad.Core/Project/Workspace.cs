using System;
using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core;

[SerializeType]
public sealed class Workspace : BaseObject, IDisposable
{
    #region Properties

    [SerializeMember]
    public List<Viewport> Viewports { get; private set; }

    public Model Model { get; private set; }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool GridEnabled
    {
        get => _GridEnabled;
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
        get => _CurrentWorkingContext.GridType;
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
        get => _CurrentWorkingContext.GridStep;
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
        get => _CurrentWorkingContext.GridRotation;
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
        get => _CurrentWorkingContext.GridDivisions;
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
        get => _CurrentWorkingContext.WorkingPlane;
        set
        {
            _CurrentWorkingContext.WorkingPlane = value;
            Model.MarkAsUnsaved();
            RaisePropertyChanged();
            _RaiseGridChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public WorkingContext WorkingContext
    {
        get => _CurrentWorkingContext;
        set
        {
            _CurrentWorkingContext = value ?? _GlobalWorkingContext;
            RaisePropertyChanged(nameof(WorkingPlane));
            RaisePropertyChanged(nameof(GridType));
            RaisePropertyChanged(nameof(GridStep));
            RaisePropertyChanged(nameof(GridRotation));
            RaisePropertyChanged(nameof(GridDivisions));
            _RaiseGridChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public WorkingContext GlobalWorkingContext
    {
        get => _GlobalWorkingContext;
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

    internal Workspace()
    {
        Init();
    }

    //--------------------------------------------------------------------------------------------------

    internal Workspace(Model model)
    {
        Init();

        Model = model;

        // Create default setup
        Viewports.Add(new Viewport(this));
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
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
 
    #endregion

}
using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class RevolvePropertyPanel : PropertyPanel
{
    public Revolve Revolve { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public int Axis
    {
        get { return _Axis; }
        set
        {
            if (_Axis != value)
            {
                _Axis = value;
                RaisePropertyChanged();
            }
        }
    }

    int _Axis;

    //--------------------------------------------------------------------------------------------------

    public int Frame
    {
        get { return _Frame; }
        set
        {
            if (_Frame != value)
            {
                _Frame = value;
                RaisePropertyChanged();
            }
        }
    }

    int _Frame;

    //--------------------------------------------------------------------------------------------------

    public double OffsetX
    {
        get { return _OffsetX; }
        set
        {
            if (_OffsetX != value)
            {
                _OffsetX = value;
                Revolve.Offset = new Vec(_OffsetX, _OffsetY, _OffsetZ);
                RaisePropertyChanged();
            }
        }
    }

    double _OffsetX;

    //--------------------------------------------------------------------------------------------------

    public double OffsetY
    {
        get { return _OffsetY; }
        set
        {
            if (_OffsetY != value)
            {
                _OffsetY = value;
                Revolve.Offset = new Vec(_OffsetX, _OffsetY, _OffsetZ);
                RaisePropertyChanged();
            }
        }
    }

    double _OffsetY;

    //--------------------------------------------------------------------------------------------------

    public double OffsetZ
    {
        get { return _OffsetZ; }
        set
        {
            if (_OffsetZ != value)
            {
                _OffsetZ = value;
                Revolve.Offset = new Vec(_OffsetX, _OffsetY, _OffsetZ);
                RaisePropertyChanged();
            }
        }
    }

    double _OffsetZ;

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchAxisCommand { get; private set; }

    void ExecuteSwitchAxis(string param)
    {
        Axis = int.Parse(param);
        UpdateAxisToShape();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchFrameCommand { get; private set; }

    void ExecuteSwitchFrame(string param)
    {
        Frame = int.Parse(param);
        UpdateAxisToShape();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateAxisToShape()
    {
        switch (Axis)
        {
            case 0:
                Revolve.Axis = (Frame == 0) ? Revolve.RevolveAxis.WorldX : Revolve.RevolveAxis.LocalX;
                break;
            case 1:
                Revolve.Axis = (Frame == 0) ? Revolve.RevolveAxis.WorldY : Revolve.RevolveAxis.LocalY;
                break;
            case 2:
                Revolve.Axis = (Frame == 0) ? Revolve.RevolveAxis.WorldZ : Revolve.RevolveAxis.LocalZ;
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateFromShape()
    {
        switch (Revolve.Axis)
        {
            case Revolve.RevolveAxis.WorldX: Frame = 0; Axis = 0; break;
            case Revolve.RevolveAxis.WorldY: Frame = 0; Axis = 1; break;
            case Revolve.RevolveAxis.WorldZ: Frame = 0; Axis = 2; break;
            case Revolve.RevolveAxis.LocalX: Frame = 1; Axis = 0; break;
            case Revolve.RevolveAxis.LocalY: Frame = 1; Axis = 1; break;
            case Revolve.RevolveAxis.LocalZ: Frame = 1; Axis = 2; break;
        }

        _OffsetX = Revolve.Offset.X;
        _OffsetY = Revolve.Offset.Y;
        _OffsetZ = Revolve.Offset.Z;

        RaisePropertyChanged(nameof(OffsetX));
        RaisePropertyChanged(nameof(OffsetY));
        RaisePropertyChanged(nameof(OffsetZ));
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Revolve = instance as Revolve;
        Debug.Assert(Revolve != null);

        Revolve.PropertyChanged += Revolve_PropertyChanged;
        UpdateFromShape();

        SwitchAxisCommand = new RelayCommand<string>(ExecuteSwitchAxis);
        SwitchFrameCommand = new RelayCommand<string>(ExecuteSwitchFrame);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void Revolve_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        UpdateFromShape();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (Revolve != null)
        {
            Revolve.PropertyChanged -= Revolve_PropertyChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

}
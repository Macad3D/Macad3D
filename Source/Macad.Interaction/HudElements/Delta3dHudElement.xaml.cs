using Macad.Common;
using Macad.Presentation;

namespace Macad.Interaction;

public partial class Delta3DHudElement : HudElement
{
    public double DeltaX
    {
        get { return _DeltaX; }
        set
        {
            if (_DeltaX != value)
            {
                _DeltaX = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double DeltaY
    {
        get { return _DeltaY; }
        set
        {
            if (_DeltaY != value)
            {
                _DeltaY = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double DeltaZ
    {
        get { return _DeltaZ; }
        set
        {
            if (_DeltaZ != value)
            {
                _DeltaZ = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor Measurement
    {
        get { return _Descriptor; }
        set
        {
            if (_Descriptor != value)
            {
                _Descriptor = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _DeltaX;
    double _DeltaY;
    double _DeltaZ;
    MeasurementDescriptor _Descriptor;

    //--------------------------------------------------------------------------------------------------

    public Delta3DHudElement()
    {
        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetValues(double deltaX, double deltaY, double deltaZ)
    {
        DeltaX = deltaX;
        DeltaY = deltaY;
        DeltaZ = deltaZ;
    }
}
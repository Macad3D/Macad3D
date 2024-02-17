using Macad.Presentation;

namespace Macad.Interaction;

public partial class Delta2DHudElement : HudElement
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

    public ValueUnits Units
    {
        get { return _Units; }
        set
        {
            if (_Units != value)
            {
                _Units = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _DeltaX;
    double _DeltaY;
    ValueUnits _Units;

    //--------------------------------------------------------------------------------------------------

    public Delta2DHudElement()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValues(double deltaX, double deltaY)
    {
        DeltaX = deltaX;
        DeltaY = deltaY;
    }
}
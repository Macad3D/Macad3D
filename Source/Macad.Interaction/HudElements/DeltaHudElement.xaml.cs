using Macad.Presentation;

namespace Macad.Interaction;

public partial class DeltaHudElement : HudElement
{
    public double Delta
    {
        get { return _Delta; }
        set
        {
            if (_Delta != value)
            {
                _Delta = value;
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

    double _Delta;
    ValueUnits _Units;

    //--------------------------------------------------------------------------------------------------

    public DeltaHudElement()
    {
        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetValue(double value)
    {
        Delta = value;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetUnits(ValueUnits valueUnits)
    {
        Units = valueUnits;
    }
}
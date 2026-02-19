using Macad.Common;
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

    public MeasurementDescriptor Measurement { get; set; }


    //--------------------------------------------------------------------------------------------------

    double _Delta;

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
}
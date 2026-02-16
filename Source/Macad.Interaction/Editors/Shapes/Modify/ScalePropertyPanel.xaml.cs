using System.ComponentModel;
using System.Diagnostics;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public partial class ScalePropertyPanel : PropertyPanel
{
    public double ScaleFactorX
    {
        get { return Scale.Factor.X; }
        set
        {
            if (!value.IsEqual(Scale.Factor.X, 1e-9))
            {
                Scale.Factor = new Vec(value, Scale.Factor.Y, Scale.Factor.Z);
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double ScaleFactorY
    {
        get { return Scale.Factor.Y; }
        set
        {
            if (!value.IsEqual(Scale.Factor.Y, 1e-9))
            {
                Scale.Factor = new Vec(Scale.Factor.X, value, Scale.Factor.Z);
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double ScaleFactorZ
    {
        get { return Scale.Factor.Z; }
        set
        {
            if (!value.IsEqual(Scale.Factor.Z, 1e-9))
            {
                Scale.Factor = new Vec(Scale.Factor.X, Scale.Factor.Y, value);
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double ScaleRatioL
    {
        get { return Scale.Factor.X <= 1 ? 1 : Scale.Factor.X; }
        set
        {
            double factor = value / ScaleRatioR;
            if (Scale.Factor.X != factor)
            {
                Scale.Factor = new Vec(factor, Scale.Factor.Y, Scale.Factor.Z);
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public double ScaleRatioR
    {
        get { return Scale.Factor.X >= 1 ? 1 : 1.0 / Scale.Factor.X; }
        set
        {
            double factor = ScaleRatioL / value;
            if (Scale.Factor.X != factor)
            {
                Scale.Factor = new Vec(factor, Scale.Factor.Y, Scale.Factor.Z);
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Scale Scale { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Scale = instance as Scale;
        Debug.Assert(Scale != null);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnApplyTemplate()
    {
        base.OnApplyTemplate();

        if (Scale != null)
        {
            // Avoid duplicate subscriptions if OnApplyTemplate is called more than once
            Scale.PropertyChanged -= _Scale_OnPropertyChanged;
            Scale.PropertyChanged += _Scale_OnPropertyChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Scale_OnPropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Scale.Factor) || string.IsNullOrEmpty(e.PropertyName))
        {
            RaisePropertyChanged(nameof(ScaleFactorX));
            RaisePropertyChanged(nameof(ScaleFactorY));
            RaisePropertyChanged(nameof(ScaleFactorZ));
            RaisePropertyChanged(nameof(ScaleRatioL));
            RaisePropertyChanged(nameof(ScaleRatioR));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (Scale != null)
        {
            Scale.PropertyChanged -= _Scale_OnPropertyChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

}
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Panels;

/// <summary>
/// Interaction logic for TransformablePropertyGroup.xaml
/// </summary>
public partial class TransformablePropertyGroup : PanelBase
{
    public static readonly DependencyProperty TransformableProperty = DependencyProperty.Register(
        "Transformable", typeof(ITransformable), typeof(TransformablePropertyGroup), new PropertyMetadata(default(ITransformable), PropertyChangedStaticCallback));

    public ITransformable Transformable
    {
        get { return (ITransformable) GetValue(TransformableProperty); }
        set { SetValue(TransformableProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public double PositionX
    {
        get { return _PositionX; }
        set
        {
            if (_PositionX != value && Transformable != null)
            {
                _PositionX = value;
                Transformable.Position = new Pnt(_PositionX, Transformable.Position.Y, Transformable.Position.Z);
                RaisePropertyChanged();
            }
        }
    }

    double _PositionX;

    //--------------------------------------------------------------------------------------------------

    public double PositionY
    {
        get { return _PositionY; }
        set
        {
            if (_PositionY != value && Transformable != null)
            {
                _PositionY = value;
                Transformable.Position = new Pnt(Transformable.Position.X, _PositionY, Transformable.Position.Z);
                RaisePropertyChanged();
            }
        }
    }

    double _PositionY;

    //--------------------------------------------------------------------------------------------------

    public double PositionZ
    {
        get { return _PositionZ; }
        set
        {
            if (_PositionZ != value && Transformable != null)
            {
                _PositionZ = value;
                Transformable.Position = new Pnt(Transformable.Position.X, Transformable.Position.Y, _PositionZ);
                RaisePropertyChanged();
            }
        }
    }

    double _PositionZ;

    //--------------------------------------------------------------------------------------------------

    public double RotationYaw
    {
        get { return _RotationYaw; }
        set
        {
            if (_RotationYaw != value && Transformable != null)
            {
                _RotationYaw = value;
                Transformable.Rotation = ConstructRotationQuaternion(0, _RotationYaw);
                RaisePropertyChanged();
            }
        }
    }

    double _RotationYaw;

    //--------------------------------------------------------------------------------------------------

    public double RotationPitch
    {
        get { return _RotationPitch; }
        set
        {
            if (_RotationPitch != value && Transformable != null)
            {
                _RotationPitch = value;
                Transformable.Rotation = ConstructRotationQuaternion(1, _RotationPitch);
                RaisePropertyChanged();
            }
        }
    }

    double _RotationPitch;

    //--------------------------------------------------------------------------------------------------

    public double RotationRoll
    {
        get { return _RotationRoll; }
        set
        {
            if (_RotationRoll != value && Transformable != null)
            {
                _RotationRoll = value;
                Transformable.Rotation = ConstructRotationQuaternion(2, _RotationRoll);
                RaisePropertyChanged();
            }
        }
    }

    double _RotationRoll;

    //--------------------------------------------------------------------------------------------------

    Quaternion ConstructRotationQuaternion(int newpart, double value)
    {
        var euler = Transformable.Rotation.ToEuler();
        var q = new Quaternion( 
            newpart == 0 ? value.ToRad() : euler.yaw,
            newpart == 1 ? value.ToRad() : euler.pitch,
            newpart == 2 ? value.ToRad() : euler.roll);
        return q;
    }
        
    //--------------------------------------------------------------------------------------------------

    void UpdatePositionFromBody()
    {
        _PositionX = Transformable.Position.X;
        _PositionY = Transformable.Position.Y;
        _PositionZ = Transformable.Position.Z;

        RaisePropertyChanged(nameof(PositionX));
        RaisePropertyChanged(nameof(PositionY));
        RaisePropertyChanged(nameof(PositionZ));
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateRotationFromBody()
    {
        var euler = Transformable.Rotation.ToEuler();
        _RotationYaw = euler.yaw.ToDeg();
        _RotationPitch = euler.pitch.ToDeg();
        _RotationRoll = euler.roll.ToDeg();

        RaisePropertyChanged(nameof(RotationYaw));
        RaisePropertyChanged(nameof(RotationPitch));
        RaisePropertyChanged(nameof(RotationRoll));
    }

    //--------------------------------------------------------------------------------------------------

    void Transformable_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (sender == Transformable)
        {
            if (e.PropertyName == nameof(ITransformable.Position))
            {
                UpdatePositionFromBody();
            } 
            else if (e.PropertyName == nameof(ITransformable.Rotation))
            {
                UpdateRotationFromBody();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
    {
        if (eventArgs.Property == TransformableProperty)
        {
            if (eventArgs.OldValue != null)
            {
                ((ITransformable) eventArgs.OldValue).PropertyChanged -= Transformable_PropertyChanged;
            }

            if (Transformable != null)
            {
                UpdatePositionFromBody();
                UpdateRotationFromBody();

                Transformable.PropertyChanged += Transformable_PropertyChanged;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public TransformablePropertyGroup()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}
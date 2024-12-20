using System;
using System.Diagnostics;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core;

[SerializeType]
public sealed class Viewport : BaseObject, IDisposable
{
    #region Properties

    [SerializeMember]
    public Pnt EyePoint
    {
        get => _EyePoint;
        set
        {
            if (!_EyePoint.IsEqual(value, Precision.Confusion()))
            {

                _EyePoint = value;
                RaisePropertyChanged();
                _RaiseViewportChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Pnt TargetPoint
    {
        get => _TargetPoint;
        set
        {
            if (!_TargetPoint.IsEqual(value, Precision.Confusion()))
            {
                _TargetPoint = value;
                RaisePropertyChanged();
                _RaiseViewportChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Twist
    {
        get => _Twist;
        set
        {
            if (!_Twist.IsEqual(value, Precision.Confusion()))
            {
                _Twist = value;
                RaisePropertyChanged();
                _RaiseViewportChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Scale
    {
        get => _Scale;
        set
        {
            if (!_Scale.IsEqual(value, Precision.Confusion()))
            {
                _Scale = value;
                RaisePropertyChanged();
                _RaiseViewportChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public RenderModes RenderMode
    {
        get => _RenderMode;
        set
        {
            if (_RenderMode != value)
            {
                _RenderMode = value;
                Workspace?.Model.MarkAsUnsaved();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Workspace Workspace { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public (double Width, double Height) Size
    {
        get => (_Width, _Height);
        set
        {
            if(!(_Width.IsEqual(value.Width, Precision.Confusion()) && _Height.IsEqual(value.Height, Precision.Confusion())))
            {
                _Width = value.Width;
                _Height = value.Height;
                RaisePropertyChanged();
                _RaiseViewportChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
            
    #region Enumerations

    public enum RenderModes
    {
        SolidShaded,
        HLR,
        Raytraced
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Events

    public delegate void ViewportChangedEventHandler(Viewport sender);
        
    public static event ViewportChangedEventHandler ViewportChanged;

    void _RaiseViewportChanged()
    {
        ViewportChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member Variables

    Pnt _EyePoint = new(10, 10, 10);
    Pnt _TargetPoint = new(0, 0, 0);
    double _Twist = 0.0f;
    double _Scale = 100.0f;
    double _Width, _Height;
    Dir _LastCameraXAxis = Dir.DX;
    Dir _LastCameraZAxis = Dir.DZ;
    RenderModes _RenderMode = RenderModes.SolidShaded;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    internal Viewport()
    {
    }

    //--------------------------------------------------------------------------------------------------

    internal Viewport(Workspace workspace)
    {
        Workspace = workspace;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnBeginDeserializing(SerializationContext context)
    {
        Workspace = context.GetInstance<Workspace>();

        base.OnBeginDeserializing(context);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Workspace = null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region View Geometry

    public Pln GetViewPlane()
    {
        var eyeDir = GetViewDirection();
        return new Pln(TargetPoint, eyeDir);
    }

    //--------------------------------------------------------------------------------------------------

    public Dir GetViewDirection()
    {
        var eyeVector = new Vec(EyePoint, TargetPoint);

        return eyeVector.ToDir();
    }

    //--------------------------------------------------------------------------------------------------

    bool _TryGetCameraAxes(Dir viewDir, Dir upDir, out Dir xAxis, out Dir zAxis)
    {
        xAxis = new();
        zAxis = new();

        Vec xVec = viewDir.Coord.Crossed(upDir.Coord).ToVec();
        if (xVec.Magnitude() <= gp.Resolution)
        {
            return false;
        }
        xVec.Normalize();

        Vec zVec = xVec.Coord.Crossed(viewDir.Coord).ToVec();
        if (zVec.Magnitude() <= gp.Resolution)
        {
            return false;
        }
        zVec.Normalize();

        xAxis = xVec.ToDir();
        zAxis = zVec.ToDir();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public Dir GetUpDirection()
    {
        var eyeDir = GetViewDirection();
        if (_TryGetCameraAxes(eyeDir, Dir.DZ, out _, out var zAxis )
            || _TryGetCameraAxes(eyeDir, Dir.DY, out _, out zAxis)
            || _TryGetCameraAxes(eyeDir, Dir.DX, out _, out zAxis))
        {
            _LastCameraZAxis = zAxis;
        }
        return _LastCameraZAxis;
    }

    //--------------------------------------------------------------------------------------------------

    public Dir GetRightDirection()
    {
        var eyeDir = GetViewDirection();
        if (_TryGetCameraAxes(eyeDir, Dir.DZ, out var xAxis, out _)
            || _TryGetCameraAxes(eyeDir, Dir.DY, out xAxis, out _)
            || _TryGetCameraAxes(eyeDir, Dir.DX, out xAxis, out _))
        {
            _LastCameraXAxis = xAxis;
        }
        return _LastCameraXAxis;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region ViewParameters

    public double[] GetViewParameters(Trsf transform = default)
    {
        var eyePoint = _EyePoint;
        var targetPoint = _TargetPoint;

        if (transform != default)
        {
            eyePoint.Transform(transform);
            targetPoint.Transform(transform);
        }

        return new[]
        {
            eyePoint.X, eyePoint.Y, eyePoint.Z,
            targetPoint.X, targetPoint.Y, targetPoint.Z,
            _Twist,
            _Scale
        };
    }

    //--------------------------------------------------------------------------------------------------

    public void RestoreViewParameters(double[] parameters, Trsf transform = default)
    {
        if (parameters.Length != 8)
            return;

        Pnt eyePoint = new(parameters[0], parameters[1], parameters[2]);
        Pnt targetPoint = new(parameters[3], parameters[4], parameters[5]);

        if (transform != default)
        {
            eyePoint.Transform(transform);
            targetPoint.Transform(transform);
        }

        _EyePoint = eyePoint;
        _TargetPoint = targetPoint;
        _Twist = parameters[6];
        _Scale = parameters[7];

        RaisePropertyChanged(nameof(EyePoint));
        RaisePropertyChanged(nameof(TargetPoint));
        RaisePropertyChanged(nameof(Twist));
        RaisePropertyChanged(nameof(Scale));
        _RaiseViewportChanged();
    }    
    
    //--------------------------------------------------------------------------------------------------

    public void SetViewParameters(Pnt eyePoint, Pnt targetPoint, double twist, double scale, double width, double height)
    {
        _EyePoint = eyePoint;
        _TargetPoint = targetPoint;
        _Twist = twist;
        _Scale = scale;
        _Width = width;
        _Height = height;

        RaisePropertyChanged(nameof(EyePoint));
        RaisePropertyChanged(nameof(TargetPoint));
        RaisePropertyChanged(nameof(Twist));
        RaisePropertyChanged(nameof(Scale));
        RaisePropertyChanged(nameof(Size));
        _RaiseViewportChanged();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
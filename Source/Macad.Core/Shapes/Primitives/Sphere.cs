using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Sphere : Shape
{
    #region Construction Properties

    [SerializeMember]
    public double Radius
    {
        get
        {
            return _Radius;
        }
        set
        {
            if (_Radius != value)
            {
                SaveUndo();
                _Radius = value > 0.0 ? value : 0.001;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SegmentAngle
    {
        get { return _SegmentAngle; }
        set
        {
            if (_SegmentAngle != value)
            {
                SaveUndo();
                _SegmentAngle = value.Clamp(0, 360);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double MaxLatitude
    {
        get { return _MaxLatitude; }
        set
        {
            if (_MaxLatitude != value)
            {
                SaveUndo();
                _MaxLatitude = value.Clamp(-90, 90);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double MinLatitude
    {
        get { return _MinLatitude; }
        set
        {
            if (_MinLatitude != value)
            {
                SaveUndo();
                _MinLatitude = value.Clamp(-90, 90);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    private double _Radius;
    private double _MaxLatitude;
    private double _MinLatitude;
    private double _SegmentAngle;

    #endregion

    #region Initialization
                
    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    public static Sphere Create(double radius)
    {
        return new Sphere()
        {
            _Radius = radius
        };
    }

    //--------------------------------------------------------------------------------------------------

    public Sphere()
    {
        _Radius = 1.0;
        _SegmentAngle = 360;
        _MaxLatitude = 90;
        _MinLatitude = -90;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        var radius = Radius > 0.0 ? Radius : 0.001;

        double? segAngle = null;
        if (SegmentAngle > 0)
            segAngle = SegmentAngle.Clamp(0, 360);

        double? topAngle = null;
        if (MaxLatitude < 90)
            topAngle = MaxLatitude.Clamp(-90, 90);

        double? bottomAngle = null;
        if (MinLatitude > -90)
            bottomAngle = MinLatitude.Clamp(-90, 90);

        bool useLatitudeExtents = (topAngle.HasValue || bottomAngle.HasValue);
        if (useLatitudeExtents)
        {
            topAngle ??= 90;
            bottomAngle ??= -90;

            if (topAngle.Value <= bottomAngle.Value)
            {
                return false;
            }
        }

        BRepPrimAPI_MakeSphere makeSphere;
        if (segAngle.HasValue)
        {
            if (useLatitudeExtents)
            {
                makeSphere = new BRepPrimAPI_MakeSphere(radius, bottomAngle.Value.ToRad(), topAngle.Value.ToRad(), segAngle.Value.ToRad());
            }
            else
            {
                makeSphere = new BRepPrimAPI_MakeSphere(radius, segAngle.Value.ToRad());
            }
        }
        else
        {
            if (useLatitudeExtents)
            {
                makeSphere = new BRepPrimAPI_MakeSphere(radius, bottomAngle.Value.ToRad(), topAngle.Value.ToRad());
            }
            else
            {
                makeSphere = new BRepPrimAPI_MakeSphere(radius);
            }
        }

        BRep = makeSphere.Solid();
        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
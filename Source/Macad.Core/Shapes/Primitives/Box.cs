using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Box : Shape
{
    #region Construction Properties

    [SerializeMember]
    public double DimensionX
    {
        get
        {
            return _DimensionX;
        }
        set
        {
            if (_DimensionX != value)
            {
                SaveUndo();
                _DimensionX = value != 0.0 ? value : 0.001;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double DimensionY
    {
        get
        {
            return _DimensionY;
        }
        set
        {
            if (_DimensionY != value)
            {
                SaveUndo();
                _DimensionY = value != 0.0 ? value : 0.001;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double DimensionZ
    {
        get
        {
            return _DimensionZ;
        }
        set
        {
            if (_DimensionZ != value)
            {
                SaveUndo();
                _DimensionZ = value != 0.0 ? value : 0.001;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    private double _DimensionX;
    private double _DimensionY;
    private double _DimensionZ;

    #endregion

    #region Initialization
                
    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    public static Box Create(double dimX, double dimY, double dimZ)
    {
        return new Box()
        {
            DimensionX = dimX,
            DimensionY = dimY,
            DimensionZ = dimZ
        };
    }

    public Box()
    {
        _DimensionX = 1.0;
        _DimensionY = 1.0;
        _DimensionZ = 1.0;
    }

    #endregion

    #region Make

    protected override bool MakeInternal(Shape.MakeFlags flags)
    {
        var dimX = DimensionX != 0.0 ? DimensionX : 0.001;
        var dimY = DimensionY != 0.0 ? DimensionY : 0.001;
        var dimZ = DimensionZ != 0.0 ? DimensionZ : 0.001;

        var makeBox = new BRepPrimAPI_MakeBox(dimX, dimY, dimZ);
        BRep = makeBox.Solid();

        return base.MakeInternal(flags);
    }

    #endregion

}
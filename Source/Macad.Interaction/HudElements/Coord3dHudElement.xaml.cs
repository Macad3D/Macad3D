namespace Macad.Interaction;

public partial class Coord3DHudElement : HudElement
{
    public double CoordinateX
    {
        get { return _CoordinateX; }
        set
        {
            if (_CoordinateX != value)
            {
                _CoordinateX = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double CoordinateY
    {
        get { return _CoordinateY; }
        set
        {
            if (_CoordinateY != value)
            {
                _CoordinateY = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double CoordinateZ
    {
        get { return _CoordinateZ; }
        set
        {
            if (_CoordinateZ != value)
            {
                _CoordinateZ = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _CoordinateX;
    double _CoordinateY;
    double _CoordinateZ;

    //--------------------------------------------------------------------------------------------------

    public Coord3DHudElement()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValues(double coordX, double coordY, double coordZ)
    {
        CoordinateX = coordX;
        CoordinateY = coordY;
        CoordinateZ = coordZ;
    }
}
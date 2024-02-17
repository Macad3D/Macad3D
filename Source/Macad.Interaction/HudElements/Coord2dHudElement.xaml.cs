namespace Macad.Interaction;

public partial class Coord2DHudElement : HudElement
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

    double _CoordinateX;
    double _CoordinateY;

    //--------------------------------------------------------------------------------------------------

    public Coord2DHudElement()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValues(double coordX, double coordY)
    {
        CoordinateX = coordX;
        CoordinateY = coordY;
    }
}
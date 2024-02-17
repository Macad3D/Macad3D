using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Drawing;

public abstract class DrawingElement : Entity
{
    [SerializeMember(SortKey = -900)]
    public override string Name
    {
        get { return _Name; }
        set
        {
            if (_Name != value)
            {
                SaveUndo();
                _Name = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    string _Name;
    [SerializeMember]
    public Pnt2d Position
    {
        get { return _Position; }
        set
        {
            if (_Position != value)
            {
                SaveUndo();
                _Position = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Rotation
    {
        get { return _Rotation; }
        set
        {
            if (_Rotation != value)
            {
                SaveUndo();
                _Rotation = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Bnd_Box2d Extents
    {
        get
        {
            if (_Extents == null)
            {
                CalculateExtents();
            }

            return _Extents ?? new Bnd_Box2d();
        }
        set
        {
            if (_Extents != value)
            {
                _Extents = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    Pnt2d _Position;
    double _Rotation;
    Bnd_Box2d _Extents;

    //--------------------------------------------------------------------------------------------------

    public abstract bool Render(IDrawingRenderer renderer);

    //--------------------------------------------------------------------------------------------------

    protected abstract void CalculateExtents();
}
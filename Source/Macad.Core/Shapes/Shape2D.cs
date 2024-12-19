using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public abstract class Shape2D : Shape
{
    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Entity BoundTo
    {
        get { return _BoundTo; }
        set
        {
            if (_BoundTo != value)
            {
                _BoundTo = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Pln? BoundToPlane
    {
        get
        {
            return _BoundToPlane;
        }
        private set
        {
            if (_BoundToPlane == value)
                return;

            _BoundToPlane = value;
            Invalidate();
            RaisePropertyChanged();
            RaisePropertyChanged(nameof(Plane));
            if(IsVisible)
                Body?.RaiseVisualChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Pln Plane
    {
        get
        {
            return new Pln(GetCoordinateSystem());
        }
    }

    //--------------------------------------------------------------------------------------------------

    Pln? _BoundToPlane;
    Entity _BoundTo;

    //--------------------------------------------------------------------------------------------------

    public override Trsf GetTransformation()
    {
        if (_BoundToPlane != null)
        {
            var trsf = new Trsf(_BoundToPlane.Value.Rotation(), _BoundToPlane.Value.Location.ToVec());
            return base.GetTransformation().Multiplied(trsf);
        }
        return base.GetTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    public override Ax3 GetCoordinateSystem()
    {
        if (_BoundToPlane != null)
        {
            return _BoundToPlane.Value.Position.Transformed(base.GetTransformation());
        }
        return base.GetCoordinateSystem();
    }

    //--------------------------------------------------------------------------------------------------

    public override void InvalidateTransformation()
    {
        base.InvalidateTransformation();
        RaisePropertyChanged(nameof(Plane));
    }

    //--------------------------------------------------------------------------------------------------

    #region IShapeOperator

    public override bool BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane)
    {
        if (_BoundTo == null)
        {
            _BoundTo = boundTo;
        }
        else
        {
            if (boundTo != _BoundTo)
                return false;
        }
        if (plane == null)
        {
            _BoundTo = null;
            return false;
        }
        BoundToPlane = plane;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Drawing;

public sealed class Drawing : EntityContainer<DrawingElement>
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

    //--------------------------------------------------------------------------------------------------

    public Drawing()
    {
        _Name = CoreContext.Current?.Document?.AddNextNameSuffix(nameof(Drawing)) ?? "Drawing";
    }

    //--------------------------------------------------------------------------------------------------

    public Bnd_Box2d GetBoundingBox()
    {
        Bnd_Box2d aabb = new();
        foreach (var element in this)
        {
            aabb.Add(element.Extents.Transformed(new Trsf2d(element.Position, element.Rotation)));
        }

        // Add border
        aabb.SetGap(10.0); // 1cm on each side

        return aabb;
    }

    //--------------------------------------------------------------------------------------------------

    public void Render(IDrawingRenderer renderer)
    {
        foreach (var element in this)
        {
            element.Render(renderer);
        }
    }
}
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Drawing;

public class BRepDrawing : DrawingElement
{
    [SerializeMember]
    public StrokeStyle Stroke
    {
        get { return _Stroke; }
        set
        {
            if (_Stroke != value)
            {
                SaveUndo();
                _Stroke = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public FillStyle Fill
    {
        get { return _Fill; }
        set
        {
            if (_Fill != value)
            {
                SaveUndo();
                _Fill = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public IBrepSource Source
    {
        get { return _Source; }
        set
        {
            if (_Source != value)
            {
                SaveUndo();
                _Source = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    StrokeStyle _Stroke;
    FillStyle _Fill;
    IBrepSource _Source;

    //--------------------------------------------------------------------------------------------------
        
    void _Invalidate()
    {
        Extents = null;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected override void CalculateExtents()
    {
        // Update bounding rect
        Bnd_Box2d aabb = new Bnd_Box2d();

        var shapes = _Source?.GetBreps();
        if (shapes != null)
        {
            foreach (var shape in shapes)
            {
                double xmin = 0;
                double xmax = 0;
                double ymin = 0;
                double ymax = 0;
                double zmin = 0;
                double zmax = 0;
                shape.BoundingBox()?.Get(ref xmin, ref ymin, ref zmin, ref xmax, ref ymax, ref zmax);
                aabb.Add(new Pnt2d(xmin, ymin));
                aabb.Add(new Pnt2d(xmax, ymax));
            }
        }

        Extents = aabb;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Render(IDrawingRenderer renderer)
    {
        var shapes = _Source?.GetBreps();
        if (shapes == null)
            return true; // nothing to do
            
        if (renderer.RenderElement(this))
            return true;

        renderer.SetStyle(_Stroke, _Fill, null);
        renderer.BeginGroup(Name);

        bool res = true;
        foreach (var shape in shapes)
        {
            res &= BrepRenderHelper.RenderShape(renderer, shape);
        }

        renderer.EndGroup();
        return res;
    }
}
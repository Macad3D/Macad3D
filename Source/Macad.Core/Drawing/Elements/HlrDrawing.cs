using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Drawing;

public class HlrDrawing : DrawingElement
{
    enum LayerType
    {
        Outline = 0,
        Inline = 1,
        HiddenOutline = 2,
        HiddenInline = 3
    }

    //--------------------------------------------------------------------------------------------------

    static readonly StrokeStyle[] _StrokeStyles = 
    {
        new (Color.Black, 0.2f, LineStyle.Solid),
        new (Color.Black, 0.1f, LineStyle.Solid),
        new (Color.Black, 0.1f, LineStyle.Dash),
        new (Color.Black, 0.05f, LineStyle.ShortDash),
    };

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public IBrepSource[] Sources
    {
        get { return _Sources; }
        set
        {
            if (_Sources != value)
            {
                SaveUndo();
                _Sources = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Ax3 Projection
    {
        get { return _Projection; }
        set
        {
            if (_Projection != value)
            {
                SaveUndo();
                _Projection = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public HlrEdgeTypes IncludedEdgeTypes
    {
        get { return _IncludedEdgeTypes; }
        set
        {
            if (_IncludedEdgeTypes != value)
            {
                SaveUndo();
                _IncludedEdgeTypes = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool UseTriangulation
    {
        get { return _UseTriangulation; }
        set
        {
            if (_UseTriangulation != value)
            {
                SaveUndo();
                _UseTriangulation = value;
                _Invalidate();
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    bool _UseTriangulation;
    HlrEdgeTypes _IncludedEdgeTypes;
    Ax3 _Projection;
    IBrepSource[] _Sources;
    TopoDS_Shape[] _Shapes;

    //--------------------------------------------------------------------------------------------------

    public static HlrDrawing Create(Ax3 projection, HlrEdgeTypes includedEdges, params IBrepSource[] sources)
    {
        return new HlrDrawing()
        {
            _Projection = projection,
            _IncludedEdgeTypes = includedEdges,
            _Sources = sources,
        };
    }

    //--------------------------------------------------------------------------------------------------

    void _Invalidate()
    {
        _Shapes = null;
        Extents = null;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected override void CalculateExtents()
    {
        _EnsureShapes();
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureShapes()
    {
        if (_Shapes != null)
            return true; // everything is ready
        _Shapes = new TopoDS_Shape[4];
        Bnd_Box2d aabb = new Bnd_Box2d();

        if (_Sources == null)
            return true; // nothing to do

        var breps = _Sources.SelectMany(s => s.GetBreps());

        // Create algo instance
        HlrBRepAlgoBase hlrAlgo;
        if (_UseTriangulation)
            hlrAlgo = new HlrBRepAlgoPoly(breps);
        else
            hlrAlgo = new HlrBRepAlgo(breps);

        // Set Projection
        hlrAlgo.SetProjection(_Projection);

        // Do it
        hlrAlgo.Update();

        // Fetch layer
        _CreateLayerShape(LayerType.Outline,       HlrEdgeTypes.VisibleOutline, HlrEdgeTypes.VisibleSharp, hlrAlgo, aabb);
        _CreateLayerShape(LayerType.Inline,        HlrEdgeTypes.VisibleSmooth,  HlrEdgeTypes.VisibleSewn,  hlrAlgo, aabb);
        _CreateLayerShape(LayerType.HiddenOutline, HlrEdgeTypes.HiddenOutline,  HlrEdgeTypes.HiddenSharp,  hlrAlgo, aabb);
        _CreateLayerShape(LayerType.HiddenInline,  HlrEdgeTypes.HiddenSmooth,   HlrEdgeTypes.HiddenSewn,   hlrAlgo, aabb);
            
        Extents = aabb;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateLayerShape(LayerType layerType, HlrEdgeTypes edgeType1, HlrEdgeTypes edgeType2, HlrBRepAlgoBase hlrAlgo, Bnd_Box2d aabb)
    {
        TopoDS_Shape shape = null;
        var shape1 = _IncludedEdgeTypes.Has(edgeType1) ? hlrAlgo.GetResult(edgeType1) : null;
        var shape2 = _IncludedEdgeTypes.Has(edgeType2) ? hlrAlgo.GetResult(edgeType2) : null;

        if (shape1 != null && shape2 != null)
        {
            var builder = new BRep_Builder();
            var compound = new TopoDS_Compound();
            builder.MakeCompound(compound);
            builder.Add(compound, hlrAlgo.GetResult(edgeType1));
            builder.Add(compound, hlrAlgo.GetResult(edgeType2));

            shape = compound;
        }
        else if (shape1 != null)
        {
            shape = shape1;
        }
        else if (shape2 != null)
        {
            shape = shape2;
        }

        if (shape == null) 
            return;

        _Shapes[(int) layerType] = shape;

        // Update bounding rect
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

    //--------------------------------------------------------------------------------------------------
        
    public override bool Render(IDrawingRenderer renderer)
    {
        if (!_EnsureShapes())
            return false;

        if (renderer.RenderElement(this))
            return true;

        bool res = _RenderLayer(renderer, LayerType.HiddenInline);
        res &= _RenderLayer(renderer, LayerType.Inline);
        res &= _RenderLayer(renderer, LayerType.HiddenOutline);
        res &= _RenderLayer(renderer, LayerType.Outline);

        return res;
    }

    //--------------------------------------------------------------------------------------------------

    bool _RenderLayer(IDrawingRenderer renderer, LayerType type)
    {
        var shape = _Shapes[(int) type];
        if (shape == null)
            return true; // Nothing to render

        renderer.SetStyle(_StrokeStyles[(int)type], null, null);
        renderer.BeginGroup(type.ToString());

        bool res = BrepRenderHelper.RenderShape(renderer, shape);

        renderer.EndGroup();
        return res;
    }
}
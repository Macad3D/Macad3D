using System.Diagnostics;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Extrude : ModifierBase
{
    #region Properties

    [SerializeMember]
    public double Depth
    {
        get { return _Depth; }
        set
        {
            if (_Depth != value)
            {
                SaveUndo();
                _Depth = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool Symmetric
    {
        get { return _Symmetric; }
        set
        {
            if (_Symmetric != value)
            {
                SaveUndo();
                _Symmetric = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return IsSkipped ? GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown : ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public SubshapeReference Face
    {
        get { return _Face; }
        set
        {
            if (_Face != value)
            {
                SaveUndo();
                _Face = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
       
    [SerializeMember]
    public bool MergeFaces
    {
        get { return _MergeFaces; }
        set
        {
            if (_MergeFaces != value)
            {
                SaveUndo();
                _MergeFaces = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSketchBased
    {
        get { return GetOperand(0).GetShapeType() == ShapeType.Sketch; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Ax1? ExtrusionAxis { get; private set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    double _Depth;        
    bool _Symmetric;
    bool _MergeFaces;
    SubshapeReference _Face;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Extrude()
    {
        _Depth = 1;
    }

    //--------------------------------------------------------------------------------------------------

    public static Extrude Create(Body body)
    {
        Debug.Assert(body != null);
        Debug.Assert(body.Shape.ShapeType == ShapeType.Sketch);

        var extrude = new Extrude()
        {
            MergeFaces = true
        };
        body.AddShape(extrude);

        return extrude;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static Extrude Create(Body body, SubshapeReference faceRef)
    {
        Debug.Assert(body != null);
        Debug.Assert(faceRef != null);
        Debug.Assert(body.Shape.ShapeType == ShapeType.Solid);

        var extrude = new Extrude
        {
            Face = faceRef,
            MergeFaces = true
        };
        body.AddShape(extrude);

        return extrude;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        ExtrusionAxis = null;

        // Currently we work with 1 source shape only
        if (Operands.Count != 1)
        {
            Messages.Error("Extrude needs exactly one source shape.");
            return false;
        }

        bool result = false;
        switch (GetOperand(0).GetShapeType())
        {
            case ShapeType.Sketch:
                result = _Make2D();
                break;

            case ShapeType.Solid:
                result = _Make3D();
                break;
        }

        return result && base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _Make2D()
    {
        // We work with 2D shapes as source
        var faceShape = GetOperand2DFaces(0, null);
        if (faceShape == null)
            return false;

        // Get plane
        if (!FaceAlgo.GetPlaneOfFaces(faceShape, out var plane))
            return false;

        ExtrusionAxis = new Ax1(faceShape.CenterOfMass(), plane.Axis.Direction);

        // If extrusion vector has zero length, just copy the source shape converted to faces
        if (Depth == 0)
        {
            BRep = faceShape;
            return base.MakeInternal(MakeFlags.None);
        }

        // Generate vector
        var vector = plane.Axis.Direction.ToVec().Multiplied(Depth);

        // Offset if symmetric
        if (Symmetric)
        {
            var offset = vector.Reversed().Multiplied(0.5);
            var transform = new BRepBuilderAPI_Transform(faceShape, new Trsf(Pnt.Origin, offset.ToPnt()));
            faceShape = transform.Shape();
        }

        // Do it!
        var makePrism = new BRepPrimAPI_MakePrism(faceShape, vector, false);
        if (!makePrism.IsDone())
        {
            Messages.Error("Extrusion failed.");
            return false;
        }

        // Get final shape
        BRep = makePrism.Shape();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _Make3D()
    {
        // We work with solid shape and face as source
        var solid = GetOperandBRep(0);
        if (solid == null || _Face == null)
            return false;

        // Get face
        var face = GetOperandFace(0, _Face);
        if (face == null)
        {
            Messages.Error("The selected face is lost, please reselect.");
            return false;
        }

        // Generate direction vector
        var axis = FaceAlgo.GetFaceCenterNormal(face);
        var direction = axis.Direction;
        ExtrusionAxis = axis;
            
        // If extrusion vector has zero length, just copy the source shape
        if (Depth == 0)
        {
            BRep = solid;
            return base.MakeInternal(MakeFlags.None);
        }

        // Do it!
        var makePrism = new BRepFeat_MakePrism(solid, face, face, direction, Depth > 0 ? 1 : 0, false);
        makePrism.Perform(Depth);
        if (!makePrism.IsDone())
        {
            Messages.Error("Failed extruding the selected face with this parameters.");
            return false;
        }

        var shape = makePrism.Shape();
        if (shape.Solids().Count == 0)
        {
            Messages.Error("Failed extruding the selected face with this parameters.");
            return false;
        }

        UpdateModifiedSubshapes(solid, makePrism);

        if (_MergeFaces)
        {
            ShapeUpgrade_UnifySameDomain unify = new(shape, true, true);
            unify.Build();
            UpdateModifiedSubshapes(shape, unify.History());
            shape = unify.Shape() ?? shape;
        }

        // Get final shape
        BRep = shape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool GetFinalExtrusionAxis(out Ax1 axis)
    {
        if (ExtrusionAxis == null)
        {
            if (!EnsureHistory() || ExtrusionAxis == null)
            {
                axis = Ax1.OZ;
                return false;
            }
        }

        axis = ExtrusionAxis.Value;
        switch (GetOperand(0).GetShapeType())
        {
            case ShapeType.Sketch:
                axis.Translate(Symmetric 
                                   ? axis.Direction.ToVec(Depth * 0.5) 
                                   : axis.Direction.ToVec(Depth));
                if(Depth < 0)
                    axis.Reverse();
                return true;

            case ShapeType.Solid:
                axis.Translate(axis.Direction.ToVec(Depth));
                return true;

            default:
                return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
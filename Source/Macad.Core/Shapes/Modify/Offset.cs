using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public class Offset : ModifierBase
{
    #region Enums

    public enum CornerType
    {
        Round,
        Angular
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    [SerializeMember]
    public double Distance
    {
        get { return _Distance; }
        set
        {
            if (_Distance != value)
            {
                SaveUndo();
                _Distance = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool KeepOriginal
    {
        get { return _KeepOriginal; }
        set
        {
            if (_KeepOriginal != value)
            {
                SaveUndo();
                _KeepOriginal = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public CornerType Corner
    {
        get { return _Corner; }
        set
        {
            if (_Corner != value)
            {
                SaveUndo();
                _Corner = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get
        {
            return Predecessor?.GetShapeType() ?? ShapeType.Unknown;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    double _Distance;
    bool _KeepOriginal;
    CornerType _Corner;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Offset()
    {
        _Distance = 1.0;
        _Corner = CornerType.Round;
    }

    //--------------------------------------------------------------------------------------------------

    public static Offset Create(Body targetBody, double distance = 1.0)
    {
        Debug.Assert(targetBody != null);

        var offset = new Offset()
        {
            _Distance = distance
        };

        targetBody.AddShape(offset);

        return offset;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        if (_Distance == 0)
            return Skip();

        ClearSubshapeLists();
        
        // We take only one source shape
        if (Operands.Count != 1)
        {
            Messages.Error("This modifier needs exactly one source shape.");
            return false;
        }

        switch (GetOperand(0).GetShapeType())
        {
            case ShapeType.Sketch:
                if (!_MakeSketch())
                    return false;
                break;

            case ShapeType.Solid:
                if (!_MakeSolid())
                    return false;
                break;

            default:
                Messages.Error("The shape type of the preceding shape is not supported.");
                break;
        }

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeSketch()
    {
        var brep = GetOperandBRep(0);
        if (brep == null)
        {
            Messages.Error("The preceding shape does not provide a valid geometry.");
            return false;
        }

        var wires = brep.Wires()
                        .Where(wire =>
                        {
                            var checkWire = new BRepCheck_Wire(wire);
                            return checkWire.Closed() == BRepCheck_Status.NoError;
                        })
                        .ToList();
        if (wires.Count == 0)
        {
            Messages.Error("The preceding shape does not provide closed wires to offset.");
            return false;
        }

        BRepOffsetAPI_MakeOffset offsetAlgo = new();
        offsetAlgo.Init(_GetJoinType(), false);
        foreach (var wire in wires)
        {
            offsetAlgo.AddWire(wire);
        }

        offsetAlgo.Perform(_Distance);
        if (!offsetAlgo.IsDone())
        {
            Messages.Error("The modifier failed to offset the input wires. Please check input sketch and try to vary it.");
            return false;
        }

        if (_KeepOriginal)
        {
            TopoDS_Compound compound = new();
            TopoDS_Builder builder = new();
            builder.MakeCompound(compound);
            builder.Add(compound, brep);
            builder.Add(compound, offsetAlgo.Shape());
            BRep = compound;
        }
        else
        {
            BRep = offsetAlgo.Shape();
            UpdateModifiedSubshapes(brep, offsetAlgo);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeSolid()
    {
        var brep = GetOperandBRep(0);
        if (brep == null)
        {
            Messages.Error("The preceding shape does not provide a valid geometry."); 
            return false;
        }

        var solids = brep.Solids();
        if (solids.Count == 0)
        {
            Messages.Error("The preceding shape does not provide solid geometry to offset.");
            return false;
        }

        List<TopoDS_Shape> resultShapes = new();
        foreach (var solid in solids)
        {
            // Get tolerance
            var anaTolerance = new ShapeAnalysis_ShapeTolerance();
            var tolerance = anaTolerance.Tolerance(brep, 1, TopAbs_ShapeEnum.SHAPE); // Get max of all

            BRepOffsetAPI_MakeOffsetShape offsetAlgo = new();
            offsetAlgo.PerformByJoin(solid, _Distance, tolerance, BRepOffset_Mode.Skin, true, false, _GetJoinType());
            if (!offsetAlgo.IsDone())
            {
                Messages.Error("The modifier failed to offset the input shape. Please check input shape and parameter.", ConstructionMessages.Explain(offsetAlgo.MakeOffset().Error()));
                continue;
            }

            var resultShape = offsetAlgo.Shape();
            if (resultShape.Solids().Count == 0)
            {
                Messages.Error("The modifier failed to offset the input shape (empty result). Please check input shape and parameter.");
                continue;
            }
            resultShapes.Add(resultShape);
            UpdateModifiedSubshapes(solid, offsetAlgo);
        }

        if (resultShapes.Count == 0)
        {
            return false;
        }
        else if (resultShapes.Count == 1)
        {
            BRep = resultShapes[0];
        }
        else
        {
            TopoDS_CompSolid compound = new();
            TopoDS_Builder builder = new();
            builder.MakeCompSolid(compound);
            foreach (var shape in resultShapes)
            {
                builder.Add(compound, shape);
            }

            BRep = compound;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    GeomAbs_JoinType _GetJoinType()
    {
        switch (Corner)
        {
            case CornerType.Round:
                return GeomAbs_JoinType.Arc;
            case CornerType.Angular:
                return GeomAbs_JoinType.Intersection;
            default:
                return GeomAbs_JoinType.Arc;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
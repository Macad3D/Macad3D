using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public class Loft : ModifierBase
{
    #region Enums

    [SerializeType]
    public enum CappingMode
    {
        None,
        Flat
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeType]
    public enum Direction
    {
        Inwards,
        Outwards
    }

    //--------------------------------------------------------------------------------------------------
        
    [SerializeType]
    public enum CornerType
    {
        Round,
        Angular
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    public override ShapeType ShapeType
    {
        get { return IsSkipped ? GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown : ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public CappingMode StartCapping
    {
        get { return _StartCapping; }
        set
        {
            if (_StartCapping != value)
            {
                SaveUndo();
                _StartCapping = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public CappingMode EndCapping
    {
        get { return _EndCapping; }
        set
        {
            if (_EndCapping != value)
            {
                SaveUndo();
                _EndCapping = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Thickness
    {
        get { return _Thickness; }
        set
        {
            if (_Thickness != value)
            {
                SaveUndo();
                _Thickness = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Direction ThickenDirection
    {
        get { return _ThickenDirection; }
        set
        {
            if (_ThickenDirection != value)
            {
                SaveUndo();
                _ThickenDirection = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public CornerType ThickenCornerType
    {
        get { return _ThickenCornerType; }
        set
        {
            if (_ThickenCornerType != value)
            {
                SaveUndo();
                _ThickenCornerType = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    CappingMode _StartCapping;
    CappingMode _EndCapping;
    double _Thickness;
    Direction _ThickenDirection;
    CornerType _ThickenCornerType;

    #endregion

    #region Create

    public Loft()
    {
        _StartCapping = CappingMode.Flat;
        _EndCapping = CappingMode.Flat;
        _Thickness = 1;
        _ThickenDirection = Direction.Inwards;
        _ThickenCornerType = CornerType.Round;
    }

    //--------------------------------------------------------------------------------------------------

    public static Loft Create(Body targetBody, IEnumerable<IShapeOperand> sections)
    {
        Debug.Assert(targetBody != null);

        var loft = new Loft();
        targetBody.AddShape(loft);

        foreach (var operand in sections)
        {
            loft.AddOperand(operand);
        }

        return loft;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static Loft Create(Body targetBody)
    {
        Debug.Assert(targetBody != null);

        var loft = new Loft();
        targetBody.AddShape(loft);

        return loft;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    struct WireInfo
    {
        public TopoDS_Wire Wire;
        public Ax3 CoordinateSystem;
    }

    //--------------------------------------------------------------------------------------------------

    class MakeContext
    {
        public List<WireInfo> Wires;
        public bool AllWiresClosed;
        public TopoDS_Shape Result;

        public TopoDS_Face StartFace;
        public TopoDS_Face EndFace;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        var context = new MakeContext();

        if (!_DoInitContext(context))
            return false;

        if (!_DoBuildWireList(context))
            return false;

        if (!_DoThruSections(context))
            return false;

        if (!_DoThicken(context))
            return false;

        BRep = context.Result;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoInitContext(MakeContext context)
    {
        // We need a minimum of 2 source shapes
        if (Operands.Count < 2)
        {
            Messages.Error("This modifier needs at least two sketches defining the loft start and end sections.");
            return false;
        }

        if (Operands.Any(op => op.GetShapeType() != ShapeType.Sketch))
        {
            Messages.Error("This modifier does only take sketches defining the loft sections as operands.");
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _DoBuildWireList(MakeContext context)
    {
        context.Wires = new List<WireInfo>();
        context.AllWiresClosed = true;
        var edgeCount = 0;

        for (int opIndex = 0; opIndex < Operands.Count; opIndex++)
        {
            var sourceBrep = GetOperandBRep(opIndex);

            var wires = sourceBrep?.Wires();
            if (wires?.Count == 0)
                continue;

            if (wires.Count > 1)
            {
                Messages.Warning($"The loft can be build only through one wire per section, but the operand {opIndex} has more than one wire:");
            }

            var currentEdgeCount = wires[0].Edges().Count;
            if (edgeCount == 0)
            {
                edgeCount = currentEdgeCount;
            }
            else if(currentEdgeCount != edgeCount)
            {
                Messages.Error($"The sketches of all sections must have the same count of segments. The segment count of operand {opIndex} is {currentEdgeCount}, but must be {edgeCount}");
                return false;
            }

            // Reset location, burn it into geometry
            var shapeFix = new ShapeFix_Shape(wires[0]);
            shapeFix.Perform();
            shapeFix.FixWireTool().Perform();
            var wire = shapeFix.Shape().ToWire();
//                BRepLib.BuildCurves3d(wire);

            if (!wire.Closed())
            {
                context.AllWiresClosed = false;
            }

            var wi = new WireInfo
            {
                Wire = wire,
                CoordinateSystem = wires[0].Location().ToAx3()
            };

            // Just append if we do not have at least 2 wires
            if (context.Wires.Count < 2)
            {
                context.Wires.Add(wi);
                continue;
            }

            // Insert at front, if the wire lies behind
            var ownLocation = wi.CoordinateSystem.Location;
            var refLocation = context.Wires[0].CoordinateSystem.Location;
            var dirRef = new Vec(refLocation, context.Wires[1].CoordinateSystem.Location);
            if (new Vec(refLocation, ownLocation).IsOpposite(dirRef, Maths.HalfPI))
            {
                // Is behind
                context.Wires.Insert(0, wi);
                continue;
            }

            // Sort in
            int insertAt = context.Wires.Count;
            for (int i = 0; i < context.Wires.Count-1; i++)
            {
                refLocation = context.Wires[i].CoordinateSystem.Location;
                var distToCur = new Vec(refLocation, ownLocation).SquareMagnitude();
                if (distToCur == 0)
                {
                    Messages.Warning("The sketches of two sections do have the same location. One of the section is skipped.");
                    continue;
                }

                // Sort by distance
                var nextDistance = new Vec(refLocation, context.Wires[i + 1].CoordinateSystem.Location).SquareMagnitude();
                if (distToCur < nextDistance)
                {
                    insertAt = i + 1;
                    break;
                }
            }
            context.Wires.Insert(insertAt, wi);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoThruSections(MakeContext context)
    {
        var maker = new BRepOffsetAPI_ThruSections(context.AllWiresClosed);
        maker.CheckCompatibility(true);
        foreach (var wireInfo in context.Wires)
        {
            maker.AddWire(wireInfo.Wire);
        }

        maker.Build();
        if (!maker.IsDone())
        {
            Messages.Error("Make thru sections failed.");
            return false;
        }

        context.Result = maker.Shape();
        context.StartFace = maker.FirstShape().ToFace();
        context.EndFace = maker.LastShape().ToFace();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoThicken(MakeContext context)
    {
        // Do we need to thicken?
        if (context.AllWiresClosed
            && _StartCapping != CappingMode.None
            && _EndCapping != CappingMode.None)
        {
            return true;
        }

        // Get tolerance
        var anaTolerance = new ShapeAnalysis_ShapeTolerance();
        var tolerance = anaTolerance.Tolerance(context.Result, 1, TopAbs_ShapeEnum.SHAPE); // Get max of all

        var joinType = _ThickenCornerType == CornerType.Round ? GeomAbs_JoinType.Arc : GeomAbs_JoinType.Intersection;

        if (context.AllWiresClosed)
        {
            // Thicken Solid and remove Caps
            var removeFaceList = new TopTools_ListOfShape();
            if (_StartCapping == CappingMode.None)
            {
                removeFaceList.Append(context.StartFace);
            }

            if (_EndCapping == CappingMode.None)
            {
                removeFaceList.Append(context.EndFace);
            }

            // Build thicken solid
            var makeThick = new BRepOffsetAPI_MakeThickSolid();
            var thicknessSign = ThickenDirection == Direction.Inwards ? -1 : 1;
            makeThick.MakeThickSolidByJoin(context.Result, removeFaceList, Thickness * thicknessSign, tolerance, 
                                           BRepOffset_Mode.Skin, true, false, joinType);

            if (!makeThick.IsDone())
            {
                Messages.Error($"Failed to thicken solid: {makeThick.MakeOffset().Error().ToString()}.");
                return false;
            }

            context.Result = makeThick.Shape();
        }
        else
        {
            // Thicken shell
            var shell = context.Result.Shells()[0];
            if (shell == null)
            {
                Messages.Error("Generated shell is invalid.");
                return false;
            }

            var makeThick = new BRepOffset_MakeOffset();
            var thicknessSign = ThickenDirection == Direction.Inwards ? -1 : 1;
            makeThick.Initialize(shell, Thickness * thicknessSign, tolerance, 
                                 BRepOffset_Mode.Skin, true, false, joinType, true);
            makeThick.MakeOffsetShape();

            if (!makeThick.IsDone())
            {
                Messages.Error($"Failed converting shell to thick solid: {makeThick.Error().ToString()}.");
                return false;
            }

            context.Result = makeThick.Shape();
            TopoUtils.UpdateSolidOrientation(context.Result);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
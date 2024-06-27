using System;
using System.Diagnostics;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class FlangeSheet : ModifierBase
{
    #region Enums

    [Flags]
    public enum ReliefFlags
    {
        None = 0,
        OppositeSide  = 1 << 0,
        Rectangular   = 1 << 1,
    }

    #endregion

    #region Properties

    [SerializeMember]
    public double Angle
    {
        get { return _Angle; }
        set
        {
            if ((value >= 0) && (value <= 180) && (_Angle != value))
            {
                SaveUndo();
                _Angle = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Radius
    {
        get { return _Radius; }
        set
        {
            if (value >= 0 && Radius != value)
            {
                SaveUndo();
                _Radius = Math.Max(0.001, value);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Length
    {
        get { return _Length; }
        set
        {
            if (value >= 0 && _Length != value)
            {
                SaveUndo();
                _Length = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool Reverse
    {
        get { return _Reverse; }
        set
        {
            if (_Reverse != value)
            {
                SaveUndo();
                _Reverse = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
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
    public ReliefFlags Relief
    {
        get { return _Relief; }
        set
        {
            if (_Relief != value)
            {
                SaveUndo();
                _Relief = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double StartGap
    {
        get { return _StartGap; }
        set
        {
            if (_StartGap != value)
            {
                SaveUndo();
                _StartGap = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double EndGap
    {
        get { return _EndGap; }
        set
        {
            if (_EndGap != value)
            {
                SaveUndo();
                _EndGap = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public ToolSupportData ToolSupport
    {
        get
        {
            if (_ToolSupport == null && !IsDeserializing)
            {
                EnsureHistory();
            }
            return _ToolSupport;
        }
        private set
        {
            _ToolSupport = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Tool Support

    [SerializeType]
    public class ToolSupportData
    {
        [SerializeMember]
        public Ax2 BendCenterAxis { get; internal set; } = Ax2.XOY;

        [SerializeMember]
        public Ax1 FlangeExtrudeAxis { get; internal set; } = Ax1.OZ;

        [SerializeMember]
        public double Thickness { get; internal set; }

        [SerializeMember]
        public double BendEdgeWidth { get; internal set; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    double _Angle;
    double _Length;
    bool _Reverse;
    double _Radius;
    SubshapeReference _Face;
    ReliefFlags _Relief;
    double _StartGap;
    double _EndGap;
    ToolSupportData _ToolSupport;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public FlangeSheet()
    {
        Name = "Flange Sheet";

        _Angle = 90.0;
        _Length = 10.0;
        _Reverse = false;
        _Radius = 0.5;
        _Relief = ReliefFlags.None;
        _StartGap = 0.0;
        _EndGap = 0.0;
    }

    //--------------------------------------------------------------------------------------------------

    public static FlangeSheet Create(Body targetBody, SubshapeReference face, double angle = 90.0, double length = 10.0, double radius = 0.5)
    {
        Debug.Assert(targetBody != null);
        Debug.Assert(face != null);

        var flangeSheet = new FlangeSheet()
        {
            _Face = face,
            _Angle = angle,
            _Length = length,
            _Radius = radius
        };

        targetBody.AddShape(flangeSheet);

        return flangeSheet;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class MakeContext
    {
        internal Ax1 BendAxis;
        internal TopoDS_Shape TargetShape;
        internal TopoDS_Face TargetFace;
        internal TopoDS_Face FlangeFace;
        internal TopoDS_Edge BendEdge;
        internal TopoDS_Edge OppositeEdge;
        internal double Thickness;
        internal Dir TopDirection;
        internal TopoDS_Shape StartGapFace;
        internal TopoDS_Shape EndGapFace;

        internal TopoDS_Shape ModifiedTargetShape;
        internal TopoDS_Shape BendSectionShape;
        internal TopoDS_Shape FlangeShape;
        internal TopoDS_Shape ResultShape;

        internal ToolSupportData ToolSupport = new();
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        ToolSupport = null;

        // Currently we work with 1 source shape only
        if (Operands.Count != 1 || _Face == null)
            return false;

        // Get Targets
        var context = new MakeContext
        {
            TargetShape = GetOperandBRep(0),
            TargetFace = GetOperandFace(0, Face)
        };

        // Check targets
        if (context.TargetShape == null)
            return false;
        if (context.TargetFace == null)
        {
            Messages.Error("Face for adding flange cannot be found in shape and needs to be reselected.");
            return false;
        }

        // Skip if we have nothing to do
        if (_Angle == 0 && _Length <= 0)
        {
            return Skip();
        }

        // Make it!
        if (!(_FindBendAxis(context)
              && _MakeFlangeFace(context)
              && _MakeBendSection(context)
              && _MakeFlangeSection(context)
              && _BuildResult(context)))
        {
            return false;
        }

        if (context.ResultShape == null)
            return Skip();

        ToolSupport = context.ToolSupport;
        BRep = context.ResultShape;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _FindBendAxis(MakeContext context)
    {
        // Find the longest edge to revolve around
        var foundEdges = EdgeAlgo.FindLongestEdge(context.TargetFace);
        if (!foundEdges.axis.HasValue || !foundEdges.opAxis.HasValue)
        {
            Messages.Error("No linear edge found to bend around.");
            return false;
        }

        context.BendEdge = _Reverse ? foundEdges.opEdge : foundEdges.edge;
        context.OppositeEdge = _Reverse ? foundEdges.edge : foundEdges.opEdge;
        context.BendAxis = _Reverse ? foundEdges.opAxis.Value : foundEdges.axis.Value;

        // Direction of the inner: Get face plane, get cross vector of edge axis and plane normal
        if (!FaceAlgo.GetCenteredPlaneFromFace(context.TargetFace, out var facePlane))
        {
            Messages.Error("Face must be of planar type.");
            return false;
        }

        var distTool = new BRepExtrema_DistShapeShape(context.BendEdge, context.OppositeEdge);
        context.Thickness = distTool.Value();
        context.ToolSupport.Thickness = distTool.Value();
        context.TopDirection = context.BendAxis.Direction.Crossed(facePlane.Axis.Direction);

        // Move axis by radius to the center of the revolve
        var radius = Math.Max(0.001, _Radius);
        context.BendAxis.Translate(context.TopDirection.ToVec().Multiplied(radius));

        // Find tool axis
        context.ToolSupport.BendCenterAxis = new Ax2(facePlane.Location
                                                              .Translated(context.TopDirection
                                                                                 .ToVec()
                                                                                 .Multiplied(radius + context.Thickness * 0.5)),
                                                     context.BendAxis.Direction,
                                                     context.BendEdge.Orientation() == TopAbs_Orientation.FORWARD
                                                         ? context.TopDirection
                                                         : context.TopDirection.Reversed());

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeFlangeFace(MakeContext context)
    {
        // Get points from bend edge and opposite edge
        var points = new Pnt[4];
        var bendEdgeAdaptor = new BRepAdaptor_Curve(context.BendEdge);
        points[0] = bendEdgeAdaptor.Value(bendEdgeAdaptor.FirstParameter());
        points[1] = bendEdgeAdaptor.Value(bendEdgeAdaptor.LastParameter());
        context.ToolSupport.BendEdgeWidth = points[0].Distance(points[1]);

        if (_StartGap <= 0 && _EndGap <= 0)
        {
            // Easy going, just take the whole face
            context.FlangeFace = context.TargetFace;
            return true;
        }

        if (context.ToolSupport.BendEdgeWidth <= _StartGap + _EndGap)
        {
            Messages.Error("The sum of start and end gap is higher than the length of the bending edge.");
            return false;
        }

        if (context.OppositeEdge == null)
        {
            Messages.Error("No opposite edge found for building flange face.");
            return false;
        }

        // Move vertices from bend edge to op edge
        var distTool = new BRepExtrema_DistShapeShape(context.BendEdge, context.OppositeEdge);
        var upVector = context.TopDirection.ToVec().Reversed() * distTool.Value();
        points[2] = points[0].Translated(upVector);
        points[3] = points[1].Translated(upVector);

        // Sort points, Short edges must be 1->2 and 3->0
        if (context.BendEdge.Orientation() == TopAbs_Orientation.REVERSED)
            points.Swap(0, 1);
        if (points[0].Distance(points[3]) > points[0].Distance(points[2]))
            points.Swap(2, 3);

        // Move
        if (_StartGap > 0)
        {
            var startVector = context.BendAxis.Direction.ToVec().Multiplied(_StartGap);
            points[0].Translate(startVector);
            points[3].Translate(startVector);
        }

        if (_EndGap > 0)
        {
            var endVector = context.BendAxis.Direction.ToVec().Multiplied(-_EndGap);
            points[1].Translate(endVector);
            points[2].Translate(endVector);
        }

        // Generate face and new edges
        context.FlangeFace = TopoUtils.MakeFace(points);
        if (context.FlangeFace == null)
        {
            Messages.Error("Failed making flange face with gaps.");
            return false;
        }

        context.BendEdge = new BRepBuilderAPI_MakeEdge(points[0], points[1]).Edge();
        context.OppositeEdge = new BRepBuilderAPI_MakeEdge(points[3], points[2]).Edge();

        // Split original face to avoid problems with additional flanges on the same face
        TopoDS_Edge startGapEdge = null, endGapEdge = null;
        var splitOp = new BRepFeat_SplitShape(context.TargetShape);
        if (_StartGap > 0)
        {
            startGapEdge = new BRepBuilderAPI_MakeEdge(points[0], points[3]).Edge();
            splitOp.Add(startGapEdge, context.TargetFace);
        }
        if (_EndGap > 0)
        {
            endGapEdge = new BRepBuilderAPI_MakeEdge(points[1], points[2]).Edge();
            splitOp.Add(endGapEdge, context.TargetFace);
        }
        splitOp.Build();
        if (!splitOp.IsDone())
        {
            Messages.Error("Failed spliting gap edges into target face.");
            return false;
        }

        UpdateModifiedSubshapes(context.TargetShape, splitOp);

        context.ModifiedTargetShape = splitOp.Shape();

        // Update named shapes
        var splitFaceList = splitOp.Modified(context.TargetFace).ToList();
        foreach (var splitShape in splitFaceList)
        {
            var edges = splitShape.Edges();
            foreach (var edge in edges)
            {
                if (startGapEdge != null && context.StartGapFace == null
                                         && edge.Orientation() == splitShape.Orientation()
                                         && edge.IsSame(startGapEdge))
                {
                    context.StartGapFace = splitShape;
                    break;
                }
                if (endGapEdge != null && context.EndGapFace == null
                                       && edge.Orientation() != splitShape.Orientation()
                                       && edge.IsSame(endGapEdge))
                {
                    context.EndGapFace = splitShape;
                    break;
                }
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeBendSection(MakeContext context)
    {
        if (_Angle <= 0)
            return true;

        // Make face for revolving
        var bendFace = _MakeBendSectionFace(context);
        if (bendFace == null)
            return false;

        // Build bend section
        var makeRevol = new BRepPrimAPI_MakeRevol(bendFace, context.BendAxis, _Angle.Clamp(0.0, 180.0).ToRad());
        if (!makeRevol.IsDone())
        {
            Messages.Error("Failed building bending edge.");
            return false;
        }

        context.BendSectionShape = makeRevol.Shape();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Face _MakeBendSectionFace(MakeContext context)
    {
        if (_Relief == ReliefFlags.None)
            return context.FlangeFace;

        if (context.OppositeEdge == null)
        {
            Messages.Error("No opposite edge found for building relief.");
            return null;
        }

        if (_Relief.HasFlag(Relief & ReliefFlags.Rectangular))
        {
            // Get notch depth = half distance between both bend and op edge
            var notchDepth = context.Thickness * 0.5;
            var notchVector = context.TopDirection.ToVec().Multiplied(-notchDepth);

            // Get edge points
            var points = new Pnt[4];

            var bendEdgeAdaptor = new BRepAdaptor_Curve(context.BendEdge);
            points[0] = bendEdgeAdaptor.Value(bendEdgeAdaptor.FirstParameter());
            points[1] = bendEdgeAdaptor.Value(bendEdgeAdaptor.LastParameter());

            var opEdgeAdaptor = new BRepAdaptor_Curve(context.OppositeEdge);
            points[2] = opEdgeAdaptor.Value(opEdgeAdaptor.LastParameter());
            points[3] = opEdgeAdaptor.Value(opEdgeAdaptor.FirstParameter());

            // Move
            if (_Relief.HasFlag(ReliefFlags.OppositeSide))
            {
                notchVector.Reverse();
                points[2].Translate(notchVector);
                points[3].Translate(notchVector);
            }
            else
            {
                points[0].Translate(notchVector);
                points[1].Translate(notchVector);
            }

            // Make face
            return TopoUtils.MakeFace(points);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    bool _MakeFlangeSection(MakeContext context)
    {
        var brepAdaptor = new BRepAdaptor_Surface(context.FlangeFace);
        if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
        {
            Messages.Error("Flanges can only be added to planar faces.");
            return false;
        }
        var direction = brepAdaptor.Plane().Position.Direction;
        if (context.FlangeFace.Orientation() == TopAbs_Orientation.REVERSED)
            direction.Reverse();

        context.ToolSupport.FlangeExtrudeAxis = FaceAlgo.GetFaceCenterNormal(context.FlangeFace)
                                                        .Rotated(context.BendAxis, _Angle.Clamp(0.0, 180.0).ToRad());

        // Early out: No material to be added
        if (_Length <= 0)
            return true;

        // Extrude
        var makePrism = new BRepPrimAPI_MakePrism(context.FlangeFace, direction.ToVec().Multiplied(_Length));
        if (!makePrism.IsDone())
        {
            Messages.Error("Failed building flange.");
            return false;
        }
        var flangeShape = makePrism.Shape();

        // Rotate if bended
        if (_Angle > 0)
        {
            var trsf = new Trsf(context.BendAxis, _Angle.Clamp(0.0, 180.0).ToRad());
            flangeShape.Location(new TopLoc_Location(trsf));
        }

        context.FlangeShape = flangeShape;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _BuildResult(MakeContext context)
    {
        var shapeListArgs = new TopTools_ListOfShape();
        shapeListArgs.Append(context.ModifiedTargetShape ?? context.TargetShape);

        var shapeListTools = new TopTools_ListOfShape();
        if (context.BendSectionShape != null)
            shapeListTools.Append(context.BendSectionShape);
        if (context.FlangeShape != null)
            shapeListTools.Append(context.FlangeShape);

        var fuseOp = new BRepAlgoAPI_Fuse();
        fuseOp.SetArguments(shapeListArgs);
        fuseOp.SetTools(shapeListTools);
        fuseOp.SetGlue(BOPAlgo_GlueEnum.GlueShift);
        fuseOp.Build();
        if (!fuseOp.IsDone())
        {
            Messages.Error("Failed fusing generated geometry.");
            return false;
        }

        context.ResultShape = fuseOp.Shape();

        if (context.BendSectionShape != null)
            AddNamedSubshapes("Bend", context.BendSectionShape, fuseOp);
        if (context.FlangeShape != null)
            AddNamedSubshapes("Flange", context.FlangeShape, fuseOp);
        if (context.StartGapFace != null)
        {
            AddNamedSubshapes("StartGap", context.StartGapFace, fuseOp);
            if (context.EndGapFace == null)
                AddNamedSubshapes("EndGap", context.StartGapFace, fuseOp);
        }
        if (context.EndGapFace != null)
        {
            AddNamedSubshapes("EndGap", context.EndGapFace, fuseOp);
            if (context.StartGapFace == null)
                AddNamedSubshapes("StartGap", context.EndGapFace, fuseOp);
        }

        UpdateModifiedSubshapes(context.ModifiedTargetShape ?? context.TargetShape, fuseOp);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool Skip()
    {
        var res = base.Skip();

        // Try to build named subshapes from input shape
        if (Operands.Count == 1 && _Face != null)
        {
            var targetFace = GetOperandFace(0, Face);
            if (targetFace != null)
            {
                AddNamedSubshapes("StartGap", targetFace);
                AddNamedSubshapes("EndGap", targetFace);
            }
        }

        return res;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public class Taper : ModifierBase
{
    #region Properties

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
    public SubshapeReference BaseEdgeOrVertex
    {
        get { return _BaseEdgeOrVertex; }
        set
        {
            if (_BaseEdgeOrVertex != value)
            {
                SaveUndo();
                _BaseEdgeOrVertex = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double BaseParameter
    {
        get { return _BaseParameter; }
        set
        {
            if (_BaseParameter != value)
            {
                SaveUndo();
                _BaseParameter = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Angle
    {
        get { return _Angle; }
        set
        {
            if (_Angle != value)
            {
                SaveUndo();
                _Angle = value.Clamp(-89.999, 89.999);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Offset
    {
        get { return _Offset; }
        set
        {
            if (_Offset != value && value >= 0)
            {
                SaveUndo();
                _Offset = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Ax2? ReferenceAxis { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    SubshapeReference _Face;
    SubshapeReference _BaseEdgeOrVertex;
    double _Angle;
    double _Offset;
    double _BaseParameter;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Taper()
    {
        _Angle = 45;
        _Offset = 0;
        _BaseParameter = 0;
    }

    //--------------------------------------------------------------------------------------------------

    public static Taper Create(Body targetBody, SubshapeReference face, SubshapeReference baseEdgeOrVertex, double angle)
    {
        Debug.Assert(targetBody != null);

        var taper = new Taper()
        {
            _Face = face,
            _BaseEdgeOrVertex = baseEdgeOrVertex,
            _Angle = angle
        };

        targetBody.AddShape(taper);

        taper.CalculateBaseParameter(0.5);

        return taper;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class MakeContext
    {
        public TopoDS_Shape Source;
        public TopoDS_Edge BaseEdge;
        public TopoDS_Vertex BaseVertex;
        public TopoDS_Face Face;
        public Pln NeutralPlane;
        public Dir Direction;
        public TopoDS_Shape Result;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        ReferenceAxis = null;

        var context = new MakeContext();
        if (!_DoInitContext(context))
            return false;

        if (!_DoComputeArguments(context))
            return false;

        _DoOffset(context); // Offset is allowed to fail

        if (!_DoDraft(context))
            return false;

        BRep = context.Result;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoInitContext(MakeContext context)
    {
        // We take only one source shapes
        if (Operands.Count != 1)
        {
            Messages.Error("This modifier needs exactly one source shape.");
            return false;
        }

        context.Source = GetOperandBRep(0);
        if (context.Source == null)
        {
            Messages.Error("The preceeding shape does not provide a valid geometry.");
            return false;
        }

        context.Face = GetOperandFace(0, _Face);
        if (context.Face == null)
        {
            Messages.Error("The face is not valid, check source shape or re-select face.");
            return false;
        }

        // Update regularity to enable the algorithm to propagate to tangential faces
        BRepLib.EncodeRegularity(context.Source);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoComputeArguments(MakeContext context)
    {
        switch (_BaseEdgeOrVertex?.Type)
        {
            case SubshapeType.Edge:
                return _DoComputeArgumentsByEdge(context);

            case SubshapeType.Vertex:
                return _DoComputeArgumentsByVertex(context);

            default:
                Messages.Error("The base subshape is invalid or not an edge or a vertex.");
                return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoComputeArgumentsByEdge(MakeContext context)
    {
        context.BaseEdge = GetOperandEdge(0, _BaseEdgeOrVertex, context.Face);
        if (context.BaseEdge == null)
        {
            Messages.Error("The face is not valid, check source shape or re-select face.");
            return false;
        }

        if (!ComputeAxisFromEdge(context.Face, context.BaseEdge, _BaseParameter, out var axis))
        {
            Messages.Error("The axis can not be computed by the base edge. Please re-select edge.");
        }

        context.Direction = axis.Direction;
        context.NeutralPlane = new Pln(new Ax3(axis));
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoComputeArgumentsByVertex(MakeContext context)
    {
        context.BaseVertex = GetOperandVertex(0, _BaseEdgeOrVertex);
        if (context.BaseVertex == null)
        {
            Messages.Error("The vertex is not valid, check source shape or re-select vertex.");
            return false;
        }

        if (!ComputeAxisFromVertex(context.Face, context.BaseVertex, out var axis))
        {
            Messages.Error("The axis can not be computed by the base vertex. Please re-select vertex.");
        }

        // Calc Direction and NeutralPlane
        context.Direction = axis.Direction;
        context.NeutralPlane = new Pln(new Ax3(axis));
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _GetSplitEdgeForFace(TopoDS_Face face, TopoDS_Shape faceOfPlane, out TopoDS_Edge splitEdge)
    {
        splitEdge = null;

        // Create section edge
        var section = new BRepAlgoAPI_Section(face, faceOfPlane);
        section.Build();
        if (!section.IsDone())
        {
            Messages.Warning("The offset can not be performed, section operation failed.");
            return false;
        }

        var newEdge = section.Shape().Edges().FirstOrDefault();
        if (!section.IsDone() || newEdge == null)
        {
            Messages.Warning("The offset value seems to be out of range.");
            return false;
        }

        splitEdge = newEdge;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoOffset(MakeContext context)
    {
        if (_Offset <= 0)
        {
            ReferenceAxis = context.NeutralPlane.Position.ToAx2();
            return false;
        }

        // Move neutral plane
        Pln currentPlane = context.NeutralPlane.Translated(context.Direction.ToVec().Multiplied(_Offset));
        ReferenceAxis = currentPlane.Position.ToAx2();

        // Init algorithm to get connected faces
        var draftAngle = new BRepOffsetAPI_DraftAngle(context.Source);
        draftAngle.Add(context.Face, context.Direction, _Angle.ToRad(), currentPlane);
        if (!draftAngle.AddDone())
        {
            Messages.Error("The tapering has failed due to invalid input data while processing offset. Please review your inputs.");
            return false;
        }

        draftAngle.Build();
        if (!draftAngle.IsDone())
        {
            Messages.Error("Make draft angle failed while processing offset.");
            return false;
        }

        var faces = draftAngle.ConnectedFaces(context.Face)
                              .Select(shape => shape.ToFace())
                              .ToList();

        // Split faces with section edge
        TopoDS_Shape currentShape = context.Source;
        TopoDS_Face currentFace = context.Face;
        var faceOfPlane = new BRepBuilderAPI_MakeFace(new Geom_Plane(currentPlane), Precision.Confusion()).Shape();
        for (var index = 0; index < faces.Count; index++)
        {
            var face = faces[index];
            if (!_GetSplitEdgeForFace(face, faceOfPlane, out var splitEdge))
                return false;

            var splitShape = new BRepFeat_SplitShape(currentShape);
            splitShape.Add(splitEdge, face);
            splitShape.Build();
            if (!splitShape.IsDone())
            {
                Messages.Warning("The offset can not be performed, the face split operation failed.");
                return false;
            }

            UpdateModifiedSubshapes(currentShape, splitShape);
            currentShape = splitShape.Shape();

            // Remap coming faces
            TopTools_ListOfShape modFaces;
            for (var fi = index + 1; fi < faces.Count; fi++)
            {
                modFaces = splitShape.Modified(faces[fi]);
                if (modFaces.Any())
                    faces[fi] = modFaces.First().ToFace();
                if (modFaces.Count() > 1)
                {
                    modFaces.Skip(1).ForEach(newFace => faces.Add(newFace.ToFace()));
                }
            }

            // Update edges and faces
            var builder = new BRep_Builder();
            modFaces = splitShape.Modified(face);
            if (modFaces.Size() != 2)
            {
                continue;
            }

            var face1 = modFaces.First().ToFace();
            var face2 = modFaces.Last().ToFace();
            var edge = FaceAlgo.FindSharedEdge(face1, face2);
            if (edge == null)
            {
                Messages.Warning("The offset can not be performed, the face split operation returned faces not sharing an edge.");
                return false;
            }

            // Reduce continuity of new edges to C0 to allow the draft algo to make a sharp corner
            builder.Continuity(edge, face1, face2, GeomAbs_Shape.C0);

            // Update face selection
            if (face.IsEqual(currentFace))
            {
                if (context.BaseEdge != null)
                {
                    currentFace = face1.Edges().ContainsSame(context.BaseEdge) ? face2 : face1;
                }
                else if (context.BaseVertex != null)
                {
                    currentFace = face1.Vertices().ContainsSame(context.BaseVertex) ? face2 : face1;
                }
            }
        }

        // Set results
        context.Source = currentShape;
        context.Face = currentFace;
        context.NeutralPlane = currentPlane;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoDraft(MakeContext context)
    {
        var draftAngle = new BRepOffsetAPI_DraftAngle(context.Source);
        draftAngle.Add(context.Face, context.Direction, _Angle.ToRad(), context.NeutralPlane);
        if (!draftAngle.AddDone())
        {
            Messages.Error("The tapering has failed due to invalid input data. Please review your inputs.");
            return false;
        }
            
        draftAngle.Build();
        if (!draftAngle.IsDone())
        {
            Messages.Error("Make draft angle failed.");
            return false;
        }

        context.Result = draftAngle.Shape();
        UpdateModifiedSubshapes(context.Source, draftAngle);

        return true;
    }

    //--------------------------------------------------------------------------------------------------


    #endregion

    #region Support Functions

    public void CalculateBaseParameter(double normalizedParameter)
    {
        if (_BaseEdgeOrVertex?.Type == SubshapeType.Edge)
        {
            var edge = GetOperandEdge(0, _BaseEdgeOrVertex);
            if (edge != null)
            {
                BaseParameter = CalculateBaseParameter(edge, normalizedParameter);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static double CalculateBaseParameter(TopoDS_Edge edge, double normalizedParameter)
    {
        var adaptorEdge = edge.Adaptor();
        return (adaptorEdge.FirstParameter() + adaptorEdge.LastParameter()) * 0.5;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ComputeAxisFromEdge(TopoDS_Face face, TopoDS_Edge edge, double parameter, out Ax2 axis)
    {
        axis = new Ax2();

        // Get edge point and tangent
        var adaptorEdge = edge.Adaptor();
        var edgeFirst = adaptorEdge.FirstParameter();
        var edgeLast = adaptorEdge.LastParameter();
        var centerParam = parameter.Clamp(edgeFirst, edgeLast);
        Pnt centerPoint = Pnt.Origin;
        Vec edgeTangent = Vec.Zero;
        adaptorEdge.D1(centerParam, ref centerPoint, ref edgeTangent);

        if (edge.Orientation() == TopAbs_Orientation.REVERSED)
        {
            edgeTangent.Reverse();
        }

        // Get normal at point of edge
        double first = 0, last = 0;
        var curveOnSurface = BRep_Tool.CurveOnSurface(edge, face, ref first, ref last);
        if (curveOnSurface == null)
        {
            return false;
        }

        var paramNormalized = (centerParam - edgeFirst) / (edgeLast - edgeFirst);
        var centerUV = curveOnSurface.Value(first + (last - first) * paramNormalized);
        Vec faceNormal = Vec.Zero;
        new BRepGProp_Face(face).Normal(centerUV.X, centerUV.Y, ref centerPoint, ref faceNormal );

        axis = new Ax2(centerPoint, faceNormal.ToDir().Crossed(edgeTangent.ToDir()), faceNormal.ToDir());
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ComputeAxisFromVertex(TopoDS_Face face, TopoDS_Vertex vertex, out Ax2 axis)
    {
        // Get normal at point of vertex
        var uv = BRep_Tool.Parameters(vertex, face);
        Pnt centerPoint = Pnt.Origin;
        Vec faceNormal = Vec.Zero;
        new BRepGProp_Face(face).Normal(uv.X, uv.Y, ref centerPoint, ref faceNormal );

        // Find edges
        var edges = face.Edges(false).Where(edge => edge.Vertices().ContainsSame(vertex)).ToList();
        if (edges.Count != 2)
        {
            axis = new Ax2();
            return false;
        }

        // Calc direction
        bool order = false; // is false if face is on the left of edge1
        var tangents = new Vec[2];
        for (var edgeIndex = 0; edgeIndex < edges.Count; edgeIndex++)
        {
            var edge = edges[edgeIndex];

            var edgeAdaptor = edge.Adaptor();
            var parameter = BRep_Tool.Parameter(vertex, edge);

            Pnt unusedPoint = Pnt.Origin;
            Vec edgeTangent = Vec.Zero;
            edgeAdaptor.D1(parameter, ref unusedPoint, ref edgeTangent);

            var parameterReversed = parameter > (edgeAdaptor.FirstParameter() + edgeAdaptor.LastParameter()) * 0.5;
            if (parameterReversed)
                edgeTangent.Reverse();

            if (edgeIndex == 0 && parameterReversed != (edge.Orientation() == TopAbs_Orientation.REVERSED))
                order = true; // face is on the right of edge1
                    
            tangents[edgeIndex] = edgeTangent.Normalized();
        }

        var direction = tangents[0].Added(tangents[1]);

        var angleBetweenTangents = tangents[0].AngleWithRef(tangents[1], faceNormal);
        if (order)
            angleBetweenTangents *= -1.0;
        if(angleBetweenTangents < 0)
        {
            // Concave vertex
            direction.Reverse();
        }

        axis = new Ax2(centerPoint, direction.ToDir(), faceNormal.ToDir());
        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool GetReferenceAxis(out Ax2 axis)
    {
        if (ReferenceAxis == null)
        {
            // The ref axis may be valid even if the make has failed
            EnsureHistory();
            if (ReferenceAxis == null)
            {
                axis = Ax2.XOY;
                return false;
            }
        }

        axis = ReferenceAxis.Value;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
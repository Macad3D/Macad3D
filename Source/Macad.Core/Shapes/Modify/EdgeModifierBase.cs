using System.Collections.Generic;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public abstract class EdgeModifierBase : ModifierBase
    {
        [SerializeMember]
        public SubshapeReference[] Edges
        {
            get { return _Edges; }
            set
            {
                if (_Edges != value)
                {
                    SaveUndo();
                    _Edges = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override ShapeType ShapeType
        {
            get { return ShapeType.Solid; }
        }

        //--------------------------------------------------------------------------------------------------

        SubshapeReference[] _Edges = new SubshapeReference[0];
        protected Dictionary<TopoDS_Edge, TopoDS_Edge[]> ContourEdges = new Dictionary<TopoDS_Edge, TopoDS_Edge[]>();

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Edge> GetOcEdges()
        {
            bool inLocalSpace = Operands[0] is Shape;
            foreach (var edgeRef in _Edges)
            {
                foreach (var edge in GetOcEdges(edgeRef))
                    yield return edge;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Edge> GetOcEdges(SubshapeReference edgeRef)
        {
            var edgeList = Operands[0].FindSubshape(edgeRef, GetCoordinateSystem());
            if(edgeList == null)
                yield break;

            foreach (var edge in edgeList.Select(shape => shape.ToEdge()))
            {
                yield return edge;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Edge> GetAllContourEdges()
        {
            EnsureHistory();

            foreach (var baseEdge in GetOcEdges())
            {
                yield return baseEdge;
                if (!ContourEdges.TryGetValue(baseEdge, out var contourEdges))
                    continue;

                foreach (var edge in contourEdges)
                    yield return edge;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public SubshapeReference FindContourReference(TopoDS_Edge contourEdge)
        {
            foreach (var edgeRef in _Edges)
            {
                var edges = GetOcEdges(edgeRef);
                foreach (var baseEdge in edges)
                {
                    if (Equals(baseEdge, contourEdge))
                        return edgeRef;

                    if (!ContourEdges.TryGetValue(baseEdge, out var contourEdges))
                        continue;

                    if(contourEdges.Contains(contourEdge))
                        return edgeRef;
                }
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public void AddEdge(SubshapeReference reference)
        {
            if (_Edges.Contains(reference))
                return;
            var newEdges = new SubshapeReference[_Edges.Length + 1];
            _Edges.CopyTo(newEdges, 0);
            newEdges[newEdges.Length - 1] = reference;
            Edges = newEdges;
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveEdge(SubshapeReference reference)
        {
            if (!_Edges.Contains(reference))
                return;
            Edges = _Edges.Where(sr => sr != reference).ToArray();
        }

        //--------------------------------------------------------------------------------------------------

        public void AddAllEdges()
        {
            var sourceShape = GetOperandBRep(0);
            if (sourceShape == null)
                return;

            var references = new List<SubshapeReference>();
            foreach (var edge in FindValidEdges(sourceShape))
            {
                var edgeRef = Operands[0].GetSubshapeReference(edge, null);
                if(edgeRef != null)
                    references.Add(edgeRef);
            }

            Edges = references.ToArray();
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveAllEdges()
        {
            Edges = new SubshapeReference[0];
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Edge> FindValidEdges(TopoDS_Shape sourceShape)
        {
            var analysis = new ShapeAnalysis_Edge();
            var mapOfEdgesToFaces = new TopTools_IndexedDataMapOfShapeListOfShape(1);
            TopExp.MapShapesAndAncestors(sourceShape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, mapOfEdgesToFaces);

            foreach (var edge in sourceShape.Edges())
            {
                var valid = true;
                var faces = mapOfEdgesToFaces.FindFromKey(edge).ToList();

                // Check if we have no face
                if (faces.Count == 0)
                    continue;

                // Check if it is a seam edge
                foreach (var face in faces)
                {
                    if (analysis.IsSeam(edge, face.ToFace()))
                    {
                        valid = false;
                        break;
                    }
                }

                if (valid)
                    yield return edge;
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected Dictionary<TopoDS_Edge, TopoDS_Face> FindReferenceFaces(TopoDS_Shape sourceShape, IEnumerable<TopoDS_Edge> edges, bool reverseOrientation)
        {
            var dict = new Dictionary<TopoDS_Edge, TopoDS_Face> ();

            // Create a Map of Edges and connected Faces
            var mapOfEdgesToFaces = new TopTools_IndexedDataMapOfShapeListOfShape(1);
            TopExp.MapShapesAndAncestors(sourceShape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, mapOfEdgesToFaces);

            foreach (var edge in edges)
            {
                if (dict.ContainsKey(edge))
                    continue;

                TopoDS_Face face = null;
                var faces = mapOfEdgesToFaces.FindFromKey(edge).ToList();
                if (faces.Count == 0)
                {
                    continue;
                }

                var lastSize = 0.0;
                foreach (var faceShape in faces)
                {
                    var gprops = new GProp_GProps();
                    BRepGProp.SurfaceProperties(faceShape, gprops, false);
                    var size = gprops.Mass() * (reverseOrientation ? -1.0 : 1.0);

                    // Init with the first face
                    if (face == null)
                    {
                        face = faceShape.ToFace();
                        lastSize = size;
                        continue;
                    }

                    // Take the biggest face.
                    if (size < lastSize)
                    {
                        continue;
                    }
                    if (size > lastSize)
                    {
                        face = faceShape.ToFace();
                        lastSize = size;
                        continue;
                    }
                    // If all faces are of equal size, take forward orientated face as reference for distance
                    if (faceShape.Orientation() == (reverseOrientation ? TopAbs_Orientation.REVERSED : TopAbs_Orientation.FORWARD))
                    {
                        face = faceShape.ToFace();
                        lastSize = size;
                    }
                }

                dict.Add(edge, face);
            }
            return dict;
        }

        //--------------------------------------------------------------------------------------------------

        protected void UpdateContourEdges(BRepFilletAPI_LocalOperation filletOp, TopoDS_Edge[] edges)
        {
            var enhEdges = new List<TopoDS_Edge>();
            foreach (var baseEdge in edges)
            {
                if (ContourEdges.ContainsKey(baseEdge))
                    continue;

                int contour = filletOp.Contour(baseEdge);
                int nbEdges = filletOp.NbEdges(contour);
                for (int eIt = 1; eIt <= nbEdges; eIt++)
                {
                    var edge = filletOp.Edge(contour, eIt);
                    if (!edges.Contains(edge))
                        enhEdges.Add(edge);
                }
                if (enhEdges.Any())
                {
                    ContourEdges.Add(baseEdge, enhEdges.ToArray());
                    enhEdges.Clear();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}
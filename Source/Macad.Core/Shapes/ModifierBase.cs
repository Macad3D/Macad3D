using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public abstract class ModifierBase : Shape
{
    #region Properties
        
    [SerializeMember(SortKey = 900)]
    public List<IShapeOperand> Operands { get; }

    //--------------------------------------------------------------------------------------------------

    public override IShapeOperand Predecessor
    {
        get { return Operands.FirstOrDefault();}
        set
        {
            if (Operands.Count > 0)
                ReplaceOperand(0, value);
            else
                AddOperand(value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    protected ModifierBase()
    {
        // Init with placeholder for predecessor shape
        Operands = new List<IShapeOperand>() { null };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Topology

    public override void Remove()
    {
        Operands.ForEach(operand =>
        {
            if (operand != null)
            {
                operand.RemoveDependent(this);
                operand.Remove();
            }
        });
        Operands.Clear();
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Operands

    public bool AddOperand(IShapeOperand operandShape)
    {
        if(operandShape is Shape { Body: not null } shape 
           && shape.Body != Body)
        {
            // Wrap to ensure transformation between different local spaces
            Body foreignBody = shape.Body;
            Shape foreignShape = foreignBody.Shape != shape ? shape : null;
            operandShape = new BodyShapeOperand(foreignBody, foreignShape);
        }
        Operands.Add(operandShape);
        operandShape.AddDependent(this);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool ReplaceOperand(int operandIndex, IShapeOperand operandShape)
    {
        Debug.Assert(operandIndex < Operands.Count);
        Debug.Assert(operandShape != null);

        if (!CanReplaceOperand(operandIndex))
            return false;

        var oldOp = Operands[operandIndex];
        oldOp?.RemoveDependent(this);

        Operands[operandIndex] = operandShape;
        operandShape.AddDependent(this);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool ReplaceOperand(IShapeOperand oldOperand, IShapeOperand newOperand)
    {
        var operandIndex = Operands.IndexOf(oldOperand);
        return ReplaceOperand(operandIndex, newOperand);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool CanReplaceOperand(int operandIndex)
    {
        Debug.Assert(operandIndex < Operands.Count);
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool CanReplaceOperand(IShapeOperand oldOperand)
    {
        var operandIndex = Operands.IndexOf(oldOperand);
        return CanReplaceOperand(operandIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveOperand(int operandIndex)
    {
        var oldOp = Operands[operandIndex];
        oldOp?.RemoveDependent(this);

        Operands.RemoveAt(operandIndex);

        RaisePropertyChanged("ChildCount");
        Body?.RaiseShapeTopologyChanged();
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    protected IShapeOperand GetOperand(int operandIndex)
    {
        if ((operandIndex < 0) || (operandIndex >= Operands.Count))
        {
            Messages.Error("Not enough operands for this modifier.");
            return null;
        }
        return Operands[operandIndex];
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape GetOperandBRep(int operandIndex)
    {
        if ((operandIndex < 0) || (operandIndex >= Operands.Count))
        {
            Messages.Error("Not enough operands for this modifier.");
            return null;
        }

        return Operands[operandIndex].GetBRep(GetCoordinateSystem());
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape GetOperand2DFaces(int operandIndex, Pln? boundToPlane)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        if (boundToPlane.HasValue)
        {
            operand.BindToPlane(GetCoordinateSystem(), this, boundToPlane);
        }

        var sourceBrep = GetOperandBRep(operandIndex);
        if (sourceBrep == null)
            return null;

        // Check if we already have faces
        var exp = new TopExp_Explorer(sourceBrep, TopAbs_ShapeEnum.FACE, TopAbs_ShapeEnum.SHAPE);
        if (exp.More())
        {
            return sourceBrep;
        }

        // Check if we have any wire at all
        exp = new TopExp_Explorer(sourceBrep, TopAbs_ShapeEnum.WIRE, TopAbs_ShapeEnum.SHAPE);
        if (!exp.More())
        {
            TopoDS_Shape shape = new();
            return shape;
        }

        Geom_Plane geomPlane;
        if (!Topo2dUtils.GetPlaneOfEdges(sourceBrep, out geomPlane))
            return null;
        var baseFacesShape = TopoUtils.CreateFacesFromWires(sourceBrep, geomPlane.Pln());

        if (boundToPlane != null && baseFacesShape != null)
        {
            var trsf = new Trsf(boundToPlane.Value.Rotation(), boundToPlane.Value.Location.ToVec());
            baseFacesShape = baseFacesShape.Moved(new TopLoc_Location(trsf));
        }

        return baseFacesShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Face GetOperandFace(int operandIndex, SubshapeReference faceRef)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target face
        var faces = operand.FindSubshape(faceRef, GetCoordinateSystem());
        if (faces == null || faces.Count == 0 || faces.Any(face => face.ShapeType() != TopAbs_ShapeEnum.FACE))
        {
            Messages.Error("The face index is invalid and must be re-selected.");
            return null;
        }

        return faces[0].ToFace();
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Edge GetOperandEdge(int operandIndex, SubshapeReference edgeRef, TopoDS_Face forFace = null)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target edge
        var edges = operand.FindSubshape(edgeRef, GetCoordinateSystem());
        if (edges == null || edges.Count == 0 || edges.Any(edge => edge.ShapeType() != TopAbs_ShapeEnum.EDGE))
        {
            Messages.Error("The edge index is invalid and must be re-selected.");
            return null;
        }

        if (forFace == null)
        {
            return edges[0].ToEdge();
        }

        // Find the proper oriented for the given face
        return forFace.Edges().Find(e => e.IsSame(edges[0]));
    }
        
    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Vertex GetOperandVertex(int operandIndex, SubshapeReference vertexRef)
    {
        var operand = GetOperand(operandIndex);
        if (operand == null)
            return null;

        // Find target vertex
        var vertices = operand.FindSubshape(vertexRef, GetCoordinateSystem());
        if (vertices == null || vertices.Count == 0 || vertices.Any(vertex => vertex.ShapeType() != TopAbs_ShapeEnum.VERTEX))
        {
            Messages.Error("The vertex index is invalid and must be re-selected.");
            return null;
        }

        return vertices[0].ToVertex();
    }

    //--------------------------------------------------------------------------------------------------

    public override void GetReferencedBodies(List<Body> bodyList)
    {
        foreach (var op in Operands)
        {
            op?.GetReferencedBodies(bodyList);
        }
    }

    #endregion

    #region Serialization

    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        foreach (var operand in Operands)
        {
            operand?.AddDependent(this);
        }
        base.OnDeserialized(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool Skip()
    {
        ClearSubshapeLists();

        if (Operands.Any())
        {
            var baseBRep = GetOperandBRep(0);
            if (baseBRep != null)
            {
                // Transform to local space if needed
                BRep = baseBRep;
                HasErrors = false;
                return base.MakeInternal(MakeFlags.None);
            }
            HasErrors = true;
            return true;
        }
        return base.Skip();
    }

    //--------------------------------------------------------------------------------------------------

    public override void InvalidateTransformation()
    {
        bool mustInvalidate = false;
        base.InvalidateTransformation();
        foreach (var operand in Operands)
        {
            if (operand is Shape shape)
                shape.InvalidateTransformation();
            else
                mustInvalidate = true;
        }

        if (mustInvalidate)
            Invalidate();
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Subshapes

    readonly Dictionary<TopoDS_Shape, List<TopoDS_Shape>> _ModifiedShapes = new();

    //--------------------------------------------------------------------------------------------------

    protected void AddModifiedSubshape(TopoDS_Shape original, List<TopoDS_Shape> shapes)
    {
        if ((shapes == null) || (shapes.Count == 0))
            return;

        // Was the original already modified?
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            kvpModif.Value.AddRange(shapes);
            return;
        }

        // Now add
        var realKey = _ModifiedShapes.Keys.FirstOrDefault(s => s.IsSame(original));
        if (realKey != null)
        {
            _ModifiedShapes[realKey].AddRange(shapes);
        }
        else
        {
            _ModifiedShapes.Add(original, shapes);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected List<TopoDS_Shape> GetSubshapeModifications(TopoDS_Shape original)
    {
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Key.IsSame(original));
        if (kvpModif.Key != null)
        {
            return kvpModif.Value;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected TopoDS_Shape FindOriginalSubshape(TopoDS_Shape modifiedOrCreated)
    {
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(modifiedOrCreated)));
        return kvpModif.Key;
    }

    //--------------------------------------------------------------------------------------------------

    protected void RemoveModifiedSubshape(TopoDS_Shape original)
    {
        if (original == null)
            return;

        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            if (kvpModif.Value.Count == 1)
            {
                _ModifiedShapes.Remove(kvpModif.Key);
            }
            else
            {
                kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void UpdateModifiedSubshapes(TopoDS_Shape sourceShape, BRepBuilderAPI_MakeShape makeShape)
    {
        __Process(sourceShape.Faces());
        __Process(sourceShape.Edges());
        __Process(sourceShape.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                var modList = makeShape.Modified(shape);
                if (modList.Size() == 0)
                {
                    // Delete check can result in exception
                    try
                    {
                        if (makeShape.IsDeleted(shape))
                        {
                            RemoveModifiedSubshape(shape);
                        }
                    }
                    catch(SEHException)
                    {
                        // That means that the makeShape has this shape not in list,
                        // so it is NOT deleted and NOT modified
                    }
                }
                else
                {
                    AddModifiedSubshape(shape, modList.ToList());
                    AddModifiedSubshape(shape, makeShape.Generated(shape).ToList());
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void UpdateModifiedSubshapes(TopoDS_Shape sourceShape, BRepTools_History history)
    {
        bool hasModified = history.HasModified();
        bool hasGenerated = history.HasGenerated();
        bool hasRemoved = history.HasRemoved();

        __Process(sourceShape.Faces());
        __Process(sourceShape.Edges());
        __Process(sourceShape.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                if (hasModified)
                {
                    var modList = history.Modified(shape);
                    if (modList.Size() != 0)
                    {
                        AddModifiedSubshape(shape, modList.ToList());
                    }
                }

                if (hasGenerated)
                {
                    AddModifiedSubshape(shape, history.Generated(shape).ToList());
                }

                if (hasRemoved)
                {
                    if (history.IsRemoved(shape))
                    {
                        RemoveModifiedSubshape(shape);
                    }
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddNamedSubshapes(string name, TopoDS_Shape sourceShape, BRepBuilderAPI_MakeShape makeShape)
    {
        __ProcessShapes(sourceShape.Faces());
        __ProcessShapes(sourceShape.Edges());
        __ProcessShapes(sourceShape.Vertices());

        //----

        void __ProcessShapes(IEnumerable<TopoDS_Shape> shapes)
        {
            var index = 0;
            foreach (var shape in shapes)
            {
                var modifiedShapes = makeShape.Modified(shape).ToList();
                if (modifiedShapes.Any())
                {
                    foreach (var modifiedShape in modifiedShapes)
                    {
                        AddNamedSubshape(name, modifiedShape, index);
                    }
                }
                else if (!makeShape.IsDeleted(shape))
                {
                    AddNamedSubshape(name, shape, index);
                }
                index++;
            }
        }

    }

    //--------------------------------------------------------------------------------------------------

    protected override void ClearSubshapeLists()
    {
        _ModifiedShapes.Clear();
        base.ClearSubshapeLists();
    }

    //--------------------------------------------------------------------------------------------------

    public override SubshapeReference GetSubshapeReference(TopoDS_Shape ocSubshape)
    {
        // Do we have modified this shape?
        // Only redirect if the shape wasn't splitted and there is no ambiguity.
        var modList = _ModifiedShapes.Where(kvp => kvp.Value.Any(s => s.IsSame(ocSubshape))).ToArray();
        if (modList.Length == 1 && modList[0].Value.Count == 1)
        {
            ocSubshape = modList[0].Key;
        }

        // Crawl operands
        foreach (var operand in Operands)
        {
            var res = operand.GetSubshapeReference(ocSubshape, GetCoordinateSystem());
            if (res != null)
                return res;
        }

        return base.GetSubshapeReference(ocSubshape);
    }

    //--------------------------------------------------------------------------------------------------

    public override List<TopoDS_Shape> FindSubshape(SubshapeReference reference, Ax3? targetFrame)
    {
        if (Guid.Equals(reference.ShapeId))
            return base.FindSubshape(reference, targetFrame);

        foreach (var operand in Operands)
        {
            var subshapes = operand?.FindSubshape(reference, GetCoordinateSystem());
            if (subshapes == null)
                continue;

            EnsureHistory();
            if (!IsValid)
                return null;
                
            // Do we have modified this shape?
            var mods = _ModifiedShapes
                       .Where(kvp => subshapes.ContainsSame(kvp.Key))
                       .SelectMany(kvp => kvp.Value).ToList();
            if (mods.Count > 0)
            {
                subshapes = mods;
            }

            // Unmodified, find in current shape
            var currents = new List<TopoDS_Shape>();
            switch (reference.Type)
            {
                case SubshapeType.Vertex:
                    var vertices = BRep.Vertices();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = vertices.IndexOfSame(shape);
                        if(sameIndex >= 0)
                            currents.Add(vertices[sameIndex]);
                    }
                    break;

                case SubshapeType.Edge:
                    var edges = BRep.Edges();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = edges.IndexOfSame(shape);
                        if(sameIndex >= 0)
                            currents.Add(edges[sameIndex]);
                    }
                    break;

                case SubshapeType.Face:
                    var faces = BRep.Faces();
                    foreach (var shape in subshapes)
                    {
                        int sameIndex = faces.IndexOfSame(shape);
                        if (sameIndex >= 0)
                            currents.Add(faces[sameIndex]);
                    }
                    break;
            }

            if (currents.Count > 0)
            {
                return currents;
            }
            return null;
        }
        return null;
    }

    #endregion

    #region Forwardings

    public override bool BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane)
    {
        if (Operands[0] == null)
            return false;

        return Operands[0].BindToPlane(targetFrame, boundTo, plane);
    }

    //--------------------------------------------------------------------------------------------------

    public override Ax3 GetCoordinateSystem()
    {
        var opShape = Operands.FirstOrDefault() as Shape;
        return opShape?.GetCoordinateSystem() ?? base.GetCoordinateSystem();
    }

    //--------------------------------------------------------------------------------------------------

    public override Trsf GetTransformation()
    {
        var opShape = Operands.FirstOrDefault() as Shape;
        return opShape?.GetTransformation() ?? base.GetTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Common;

namespace Macad.Core.Shapes;

public enum ShapeType
{
    Unknown,
    Sketch,
    Solid,
    Mesh,
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public abstract class Shape : Entity, IShapeOperand, IShapeDependent
{
    #region Enums

    [Flags]
    public enum MakeFlags
    {
        None = 0,
        DebugOutput = 1 << 1,
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    //--------------------------------------------------------------------------------------------------

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

    [SerializeMember]
    public bool IsSkipped
    {
        get { return _IsSkipped; }
        set
        {
            if (_IsSkipped != value)
            {
                SaveUndo();
                _IsSkipped = value;
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(ShapeType));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Body Body
    {
        get { return _Body; }
        set
        {
            if (_Body != value)
            {
                _Body = value;
                Document = _Body?.Model;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual IShapeOperand Predecessor
    {
        get { return null; }
        set { throw new NotImplementedException(); }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract ShapeType ShapeType { get; }

    //--------------------------------------------------------------------------------------------------

    public override bool HasErrors
    {
        get
        {
            return base.HasErrors;
        }
        set
        {
            base.HasErrors = value;
            Body?.UpdateErrorState();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsVisible
    {
        get
        {
            return _Body?.Shape == this;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool IsValid
    {
        get { return BRep != null; }
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape BRep
    {
        get { return _BRep; }
        set
        {
            _BRep = value;
            _TransformedBRep = BRep?.Moved(new TopLoc_Location(GetTransformation()));                
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    bool _IsSkipped;
    bool _IsLoadedFromCache;
    bool _IsInvalidating;
    Body _Body;
    string _Name;
    TopoDS_Shape _BRep;
    TopoDS_Shape _TransformedBRep;
    readonly List<NamedSubshape> _NamedSubshapes = new();

    #endregion

    #region Initialization

    //--------------------------------------------------------------------------------------------------

    protected Shape()
    {
        _IsSkipped = false;
        _Name = GetType().Name;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        _Body?.RaiseVisualChanged();
        Body = null;
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make
 
    public TopoDS_Shape GetBRep()
    {
        if (_EnsureBRep())
        {
            return BRep;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public TopoDS_Shape GetTransformedBRep()
    {
        if (_EnsureBRep())
        {
            return _TransformedBRep;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureBRep()
    {
        try
        {
            if (!IsValid)
            {
                if (!Make(MakeFlags.None))
                {
                    return false;
                }
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool EnsureHistory()
    {
        try
        {
            if (!IsValid || _IsLoadedFromCache)
            {
                if (!Make(MakeFlags.None))
                {
                    return false;
                }
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual Trsf GetTransformation()
    {
        return (Body != null) ? new Trsf(Body.Rotation, Body.Position.ToVec()) : Trsf.Identity;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual Ax3 GetCoordinateSystem()
    {
        if (Body != null)
            return Body.GetCoordinateSystem();
        return new Ax3(Pnt.Origin, Dir.DX);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Invalidate()
    {
        if (_IsInvalidating)
            return;
        _IsInvalidating = true;

        CoreContext.Current.MessageHandler.ClearEntityMessages(this);
        HasErrors = false;

        BRep = null;
        InvalidateDependents();

        if (IsVisible)
            Body?.RaiseVisualChanged();

        _IsInvalidating = false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void InvalidateTransformation()
    {
        if (_TransformedBRep != null)
        {
            _TransformedBRep.Location(_BRep.Location().Multiplied(new TopLoc_Location(GetTransformation())));
            RaiseShapeChanged();
            if(IsVisible)
                Body?.RaiseVisualChanged();
        }
        foreach (var dependent in GetDependents())
        {
            dependent.OnTransformInvalidated(_Body);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Make(MakeFlags flags)
    {
        CoreContext.Current.MessageHandler.ClearEntityMessages(this);

        if (_IsSkipped)
        {
            if (Skip())
                return true;
        }

        bool result = ProcessingScope.ExecuteWithGuards(this, "Making Shape", () =>
        {
            if (IsValid)
            {
                Invalidate();
                if (IsValid)
                {
                    // This is the case when triggering invalidation leads to recursivly remaking the shape
                    return true;
                }
            }

            if (MakeInternal(flags))
            {
                _IsLoadedFromCache = false;
                RaiseShapeChanged();
                return true;
            }

            Messages.Error("Shape making failed.");
            return false;
        });

        HasErrors = !result;
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool Skip()
    {
        // Skip not supported
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool MakeInternal(MakeFlags flags)
    {
        if (BRep != null)
        {
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------
        
    public delegate void ShapeEventHandler(Shape shape);
    public static event ShapeEventHandler ShapeChanged;

    public void RaiseShapeChanged()
    {
        if (!IsDeserializing)
            ShapeChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IShapeOperand

    TopoDS_Shape IShapeOperand.GetBRep(Ax3 targetFrame)
    {
        // We're not transforming if we are referenced directly by another shape
        // since we have the same body
        return GetBRep();
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane)
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    SubshapeReference IShapeOperand.GetSubshapeReference(TopoDS_Shape ocSubshape, Ax3? sourceFrame)
    {
        return GetSubshapeReference(ocSubshape);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void GetReferencedBodies(List<Body> bodyList)
    {
        // Implementation is empty, because we have no operands.
        // This function is implemented in ModifierBase.
    }

    //--------------------------------------------------------------------------------------------------
        
    public virtual void GetLinkedBodies(List<Body> bodyList)
    {
        // Default implementation
        GetReferencedBodies(bodyList);
    }

    //--------------------------------------------------------------------------------------------------

    ShapeType IShapeOperand.GetShapeType()
    {
        return ShapeType;
    }

    //--------------------------------------------------------------------------------------------------
        
    Shape IShapeOperand.Collapse(Ax3 targetFrame)
    {
        var collapsedBRep = ((IShapeOperand)this).GetBRep(targetFrame);
        if (collapsedBRep == null)
            return null;

        return Solid.Create(collapsedBRep);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
            
    #region IShapeDependent

    void IShapeDependent.OnShapeInvalidated(IShapeOperand operand)
    {
        OnOperandShapeInvalidated(operand);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnOperandShapeInvalidated(IShapeOperand operand)
    {
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void IShapeDependent.OnTransformInvalidated(Body body)
    {
        OnOperandTransformInvalidated(body);
    }
        
    //--------------------------------------------------------------------------------------------------

    protected virtual void OnOperandTransformInvalidated(Body body)
    {
        if(body != _Body)
            Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Dependents

    readonly List<WeakReference<IShapeDependent>> Dependents = new List<WeakReference<IShapeDependent>>();

    //--------------------------------------------------------------------------------------------------

    public void AddDependent(IShapeDependent dependent)
    {
        Dependents.Add(new WeakReference<IShapeDependent>(dependent));
        RaisePropertyChanged("Dependents");
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveDependent(IShapeDependent dependent)
    {
        var index = Dependents.FindIndex(wr => wr.TryGetTarget(out var target) && ReferenceEquals(target, dependent));
        if (index >= 0)
        {
            Dependents.RemoveAt(index);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void InvalidateDependents()
    {
        foreach (var dependent in GetDependents())
        {
            dependent.OnShapeInvalidated(this);
        }

        Body?.InvalidateDependents();
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<IShapeDependent> GetDependents()
    {
        foreach (var reference in Dependents)
        {
            if (reference.TryGetTarget(out var dependent))
            {
                yield return dependent;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property and Undo handling

    protected override void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        if (!IsDeserializing)
        {
            CoreContext.Current?.Document?.MarkAsUnsaved();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Subshapes

    struct NamedSubshape
    {
        internal SubshapeType Type;
        internal string Name;
        internal int Index;
        internal TopoDS_Shape Shape;
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddNamedSubshape(string name, TopoDS_Shape shape, int index)
    {
        var newItem = new NamedSubshape()
        {
            Type = SubshapeTypeHelper.GetType(shape),
            Name = name,
            Index = index,
            Shape = shape
        };

        // Update shape if type/name/index already exists
        var sameIndex = _NamedSubshapes.FindIndex(ns => ns.Name == newItem.Name && ns.Index == newItem.Index && ns.Type == newItem.Type);
        if (sameIndex >= 0)
        {
            _NamedSubshapes[sameIndex] = newItem;
        }
        else
        {
            _NamedSubshapes.Add(newItem);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddNamedSubshapes(string name, TopoDS_Shape sourceShape)
    {
        if (sourceShape == null)
            return;

        __Add(sourceShape.Faces());
        __Add(sourceShape.Edges());
        __Add(sourceShape.Vertices());

        //----

        void __Add(IList shapes)
        {
            for (var index = 0; index < shapes.Count; index++)
            {
                AddNamedSubshape(name, shapes[index] as TopoDS_Shape, index);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddNamedSubshapes(string name, IEnumerable<TopoDS_Shape> sourceShapes)
    {
        var index = 0;
        foreach (var shape in sourceShapes)
        {
            AddNamedSubshapes($"{name}{index}.", shape);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void ClearSubshapeLists()
    {
        _NamedSubshapes.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    public virtual SubshapeReference GetSubshapeReference(SubshapeType type, int index)
    {
        EnsureHistory();

        // Search in freshly built shape
        TopoDS_Shape subshape = null;
        switch (type)
        {
            case SubshapeType.Face:
                var faces = GetBRep()?.Faces();
                if (faces == null || index >= faces.Count)
                    return null;
                subshape = faces[index];
                break;

            case SubshapeType.Edge:
                var edges = GetBRep()?.Edges();
                if (edges == null || index >= edges.Count)
                    return null;
                subshape = edges[index];
                break;

            case SubshapeType.Vertex:
                var vertices = GetBRep()?.Vertices();
                if (vertices == null || index >= vertices.Count)
                    return null;
                subshape = vertices[index];
                break;
        }

        if (subshape == null)
        {
            return null;
        }

        return GetSubshapeReference(subshape) ?? new SubshapeReference(type, Guid, index);
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference GetSubshapeReference(TopoDS_Shape referenceShape, TopoDS_Shape subShape)
    {
        switch (subShape.ShapeType())
        {
            case TopAbs_ShapeEnum.FACE:
                var faceIndex = referenceShape.Faces().IndexOfSame(subShape);
                if (faceIndex >= 0)
                    return GetSubshapeReference(SubshapeType.Face, faceIndex);
                break;

            case TopAbs_ShapeEnum.EDGE:
                var edgeIndex = referenceShape.Edges().IndexOfSame(subShape);
                if (edgeIndex >= 0)
                    return GetSubshapeReference(SubshapeType.Edge, edgeIndex);
                break;

            case TopAbs_ShapeEnum.VERTEX:
                var vertexIndex = referenceShape.Vertices().IndexOfSame(subShape);
                if (vertexIndex >= 0)
                    return GetSubshapeReference(SubshapeType.Vertex, vertexIndex);
                break;

            default:
                throw new NotImplementedException();
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual SubshapeReference GetSubshapeReference(TopoDS_Shape ocSubshape)
    {
        EnsureHistory();

        var type = SubshapeTypeHelper.GetType(ocSubshape);

        // Is this a named subshape?
        var namedSubshapeIndex = _NamedSubshapes.FindIndex(ns => ns.Shape.IsSame(ocSubshape));
        if (namedSubshapeIndex >= 0)
        {
            return new SubshapeReference(type, Guid, _NamedSubshapes[namedSubshapeIndex].Name, _NamedSubshapes[namedSubshapeIndex].Index);
        }

        // Search in shape
        var ocShape = GetBRep();
        if (ocShape == null)
            return null;

        switch (type)
        {
            case SubshapeType.Edge:
                return __FindReferenceInList(ocShape.Edges());

            case SubshapeType.Face:
                return __FindReferenceInList(ocShape.Faces());

            case SubshapeType.Vertex:
                return __FindReferenceInList(ocShape.Vertices());

            default:
                throw new NotImplementedException();
        }

        //----

        SubshapeReference __FindReferenceInList(IList shapes)
        {
            TopoDS_Shape shape = null;
            var sameShapes = shapes.Cast<TopoDS_Shape>().Where(e => e.IsSame(ocSubshape)).ToArray();
            if (sameShapes.Length == 1)
            {
                shape = sameShapes[0];
            }
            else if (sameShapes.Length > 1)
            {
                // Found more than one candidate.
                // This can be the case when two subshapes are generated by using the same underlaying TShape
                // The only way to diffentiate is to check the (localSpace!) location, this can be done
                // using the hash code
                var referenceHash = ocSubshape.GetHashCode();
                shape = sameShapes.FirstOrDefault(e => e.GetHashCode() == referenceHash);
            }

            if (shape != null)
                return new SubshapeReference(type, Guid, shapes.IndexOf(shape));
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual List<TopoDS_Shape> FindSubshape(SubshapeReference reference, Ax3? targetFrame)
    {
        if (reference.Index < 0)
            return null;

        if (!Guid.Equals(reference.ShapeId))
            return null;

        EnsureHistory();

        // Named subshape?
        if (!reference.Name.IsNullOrEmpty())
        {
            var namedSubshapeIndex = _NamedSubshapes.FindIndex(ns => ns.Type == reference.Type && ns.Name == reference.Name && ns.Index == reference.Index);
            if (namedSubshapeIndex >= 0)
            {
                return new List<TopoDS_Shape>(1) {_NamedSubshapes[namedSubshapeIndex].Shape};
            }
            return null;
        }

        // Search in shape
        var ocShape = GetBRep();
        if (ocShape == null)
            return null;

        switch (reference.Type)
        {
            case SubshapeType.Edge:
                var edges = BRep.Edges(); // Get oriented one
                if (reference.Index < edges.Count)
                {
                    return new List<TopoDS_Shape>(1) {edges[reference.Index]};
                }
                break;

            case SubshapeType.Face:
                var faces = BRep.Faces();
                if (reference.Index < faces.Count)
                    return new List<TopoDS_Shape>(1) {faces[reference.Index]};
                break;

            case SubshapeType.Vertex:
                var vertices = BRep.Vertices();
                if (reference.Index < vertices.Count)
                    return new List<TopoDS_Shape>(1) {vertices[reference.Index]};
                break;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialization

    public override void OnBeginDeserializing(SerializationContext context)
    {
        Body = context.GetInstance<Body>();
        context.GetInstanceList<Shape>().Add(this);

        base.OnBeginDeserializing(context);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void SaveShapeCache(FileSystem fileSystem)
    {
        if (!IsValid)
            return;

        var bytes = Occt.Helper.BRepExchange.WriteBinary(BRep, false);
        if (bytes == null)
            return;

        fileSystem.Write($"ShapeCache\\{Guid}.brep", bytes);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void LoadShapeCache(FileSystem fileSystem)
    {
        try
        {
            var bytes = fileSystem.Read($"ShapeCache\\{Guid}.brep");
            if ((bytes == null) || (bytes.Length == 0))
                return;

            BRep = Occt.Helper.BRepExchange.ReadBinary(bytes);
            _IsLoadedFromCache = true;
        }
        catch (Exception)
        {
            BRep = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
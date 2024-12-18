using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using Macad.Core.Shapes;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Topology;

[SerializeType]
[DebuggerDisplay("Body: {Body.Name}, Shape: {Shape?.Name ?? \"<Root>\"}")]
public sealed class BodyShapeOperand : IShapeOperand, IEquatable<BodyShapeOperand>
{
    [SerializeMember(ReaderFunc = nameof(DeserializeBody))]
    public Body Body { get; private set; } // Setter needed for serialization

    //--------------------------------------------------------------------------------------------------

    [SerializeMember(Redirect = true)]
    public Guid ShapeId { get; private set; } // Setter needed for serialization

    //--------------------------------------------------------------------------------------------------

    public Shape Shape
    {
        get
        {
            if (Body == null)
                return null;

            if (ShapeId.Equals(Guid.Empty))
                return Body.Shape;

            var shape = Body.Model?.FindInstance(ShapeId) as Shape;
            if (shape == null || shape.Body != Body)
                return Body.Shape;

            return shape;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public BodyShapeOperand(Body body, Shape shape = null)
        : this(body, shape?.Guid ?? Guid.Empty)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public BodyShapeOperand(Body body, Guid shapeId)
    {
        Body = body;
        ShapeId = shapeId;
    }

    //--------------------------------------------------------------------------------------------------

    BodyShapeOperand()
    {
        // needed for serialization
    }

    //--------------------------------------------------------------------------------------------------
        
    bool DeserializeBody(Reader reader, SerializationContext context)
    {
        IDocument document = context.GetInstance<IDocument>();
        bool reuseModelBodies = false;
        CloneOptions cloneOptions = default;

        switch (context.Scope)
        {
            case SerializationScope.UndoRedo:
                reuseModelBodies = true;
                break;

            case SerializationScope.CopyPaste:
                context.TryGetInstance(out cloneOptions);
                reuseModelBodies = true; // ask later
                break;
        }

        if (reuseModelBodies && document != null)
        {
            // Try to find referenced body shapes in current model
            var anticipated = ClassSerializer.AnticipateType(reader, context);
            if (anticipated.Type != null 
                && typeof(Body).IsAssignableFrom(anticipated.Type)
                && !(cloneOptions?.IsEntityToClone(anticipated.Guid) ?? false))
            {
                // Try finding body in model?
                var body = document.FindInstance(anticipated.Guid) as Body;
                if (body != null)
                {
                    // Ask if options are available, otherwise assume re-using
                    if (!(cloneOptions?.CloneReferencedBodies ?? false))
                    {
                        // operand already in model, use this
                        Body = body;
                        reader.SkipListOrMapValue();
                        return true;
                    }
                }
            }
        }

        Body oldBody = context.GetInstance<Body>();
        Body = reader.ReadType<Body>(null, context);
        context.SetInstance(oldBody);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(BodyShapeOperand other)
    {
        return Equals(Body, other.Body) && ShapeId.Equals(other.ShapeId);
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "NonReadonlyMemberInGetHashCode")]
    public override int GetHashCode()
    {
        unchecked
        {
            return ((Body != null ? Body.GetHashCode() : 0) * 397) ^ ShapeId.GetHashCode();
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Cache for subshape reference finding
    Tuple<Ax3, Ax3, TopLoc_Location> _CachedLocation = new(Ax3.XOY, Ax3.XOY, new TopLoc_Location());
        
    TopLoc_Location _GetCachedLocation(Ax3 targetFrame)
    {
        if (Body == null)
            return null;

        var bodyFrame = Body.GetCoordinateSystem();
        if (_CachedLocation.Item1 == bodyFrame
            && _CachedLocation.Item2 == targetFrame)
        {
            return _CachedLocation.Item3;
        }

        var location = new TopLoc_Location(new Trsf(Body.GetCoordinateSystem(), targetFrame));
        _CachedLocation = new Tuple<Ax3, Ax3, TopLoc_Location>(bodyFrame, targetFrame, location);
        return location;
    }

    //--------------------------------------------------------------------------------------------------

    Shape IShapeOperand.Collapse(Ax3 targetFrame)
    {
        if (Body == null)
            return null;

        var collapsedBRep = ((IShapeOperand)this).GetBRep(targetFrame);
        if (collapsedBRep == null)
            return null;

        return Solid.Create(collapsedBRep);
    }

    //--------------------------------------------------------------------------------------------------

    ShapeType IShapeOperand.GetShapeType()
    {
        return Shape?.ShapeType ?? ShapeType.Unknown;
    }

    //--------------------------------------------------------------------------------------------------

    void IShapeOperand.AddDependent(IShapeDependent dependent)
    {
        Body?.AddDependent(dependent);
    }

    //--------------------------------------------------------------------------------------------------

    void IShapeOperand.RemoveDependent(IShapeDependent dependent)
    {
        Body?.RemoveDependent(dependent);
    }

    //--------------------------------------------------------------------------------------------------

    public void Remove()
    {
        // Empty by intention
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Shape IShapeOperand.GetBRep(Ax3 targetFrame)
    {
        if (Body == null)
            return null;

        return Shape?.GetBRep()?.Moved(_GetCachedLocation(targetFrame));
    }

    //--------------------------------------------------------------------------------------------------

    bool IShapeOperand.BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane)
    {
        if (Body == null)
            return false;

        var shape = Shape;
        if (shape == null)
            return false;

        if (plane.HasValue)
            return shape.BindToPlane(Body.GetCoordinateSystem(), boundTo, plane.Value.Transformed(new Trsf(Body.GetCoordinateSystem(), targetFrame)));
        else
            return shape.BindToPlane(Body.GetCoordinateSystem(), boundTo, null);

    }

    //--------------------------------------------------------------------------------------------------

    SubshapeReference IShapeOperand.GetSubshapeReference(TopoDS_Shape ocSubshape, Ax3? sourceFrame)
    {
        if (Body == null)
            return null;

        var shape = Shape;
        if (shape == null)
            return null;

        if (sourceFrame.HasValue)
        {
            var transformedBrep = shape.GetBRep()?.Moved(_GetCachedLocation(sourceFrame.Value));
            if(transformedBrep != null)
                return shape.GetSubshapeReference(transformedBrep, ocSubshape);
        }
        else
        {
            return shape.GetSubshapeReference(ocSubshape);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    List<TopoDS_Shape> IShapeOperand.FindSubshape(SubshapeReference reference, Ax3? targetFrame)
    {
        if (Body == null)
            return null;

        var shape = Shape;
        if (shape == null)
            return null;

        var shapeList = shape.FindSubshape(reference, Body.GetCoordinateSystem());
        if (shapeList != null && targetFrame.HasValue)
        {
            var location = _GetCachedLocation(targetFrame.Value);
            for (var i = 0; i < shapeList.Count; i++)
            {
                shapeList[i] = shapeList[i].Moved(location);
            }
        }
        return shapeList;
    }

    //--------------------------------------------------------------------------------------------------

    void IShapeOperand.GetReferencedBodies(List<Body> bodyList)
    {
        if (Body == null)
            return;

        var shape = Shape;
        if (shape == null)
            return;

        if (bodyList.Contains(Body))
            return;

        bodyList.Add(Body);

        shape.GetReferencedBodies(bodyList);
    }

    //--------------------------------------------------------------------------------------------------
        
    void IShapeOperand.GetLinkedBodies(List<Body> bodyList)
    {
        (this as IShapeOperand).GetReferencedBodies(bodyList);
    }

    //--------------------------------------------------------------------------------------------------
}
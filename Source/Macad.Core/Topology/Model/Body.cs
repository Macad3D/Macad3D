using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using Macad.Core.Components;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Topology;

public class Body : InteractiveEntity, IUndoableDataBlob, IDecorable, ITransformable
{
    #region Properties

    [SerializeMember]
    public Pnt Position
    {
        get
        {
            return _Position;
        }
        set
        {
            if (!_Position.IsEqual(value, Double.Epsilon))
            {
                SaveUndo();
                _Position = value;
                _InvalidateTransformation();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Quaternion Rotation
    {
        get
        {
            return _Rotation;
        }
        set
        {
            if (!_Rotation.IsEqual(value))
            {
                SaveUndo();
                _Rotation = value;
                _InvalidateTransformation();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Shape RootShape
    {
        get { return _RootShape; }
        private set
        {
            if (_RootShape != value)
            {
                SaveTopologyUndo();
                _RootShape = value;
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged("Shape");
                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Shape Shape
    {
        get { return _CurrentShape ?? _RootShape; }
        set
        {
            if (_CurrentShape != value)
            {
                if (_RootShape == null)
                {
                    // Init root shape, set current shape to top
                    _RootShape = value;
                    _CurrentShape = null;
                }
                else
                {
                    // Check if current shape is part of shape tree root
                    SaveUndo();
                    Debug.Assert(_RootShape.Body == value.Body);
                    _CurrentShape = (_RootShape == value) ? null : value;
                }
                Invalidate();
                RaisePropertyChanged();
                UpdateErrorState();
                RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember(SortKey = 900)]
    public List<Component> Components
    {
        get { return _Components; }
        set
        {
            if (_Components != value)
            {
                SaveUndo();
                _Components = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public Model Model
    {
        get { return Document as Model; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    Shape _CurrentShape;
    Shape _RootShape;
    Pnt _Position = Pnt.Origin;
    Quaternion _Rotation = Quaternion.Identity;
    List<Component> _Components;
    Ax3? _CachedCoordinateSystem;
    Trsf? _CachedTransformation;

    #endregion

    #region ITransformable

    public Trsf GetTransformation()
    {
        _CachedTransformation ??= new Trsf(Rotation, Position.ToVec());
        return _CachedTransformation.Value;
    }

    //--------------------------------------------------------------------------------------------------

    public Ax3 GetCoordinateSystem()
    {
        _CachedCoordinateSystem ??= Rotation.ToAx3(Position);
        return _CachedCoordinateSystem.Value;
    }
        
    //--------------------------------------------------------------------------------------------------

    void _InvalidateTransformation()
    {
        _CachedCoordinateSystem = null;
        _CachedTransformation = null;

        if (IsDeserializing) 
            return;

        Shape?.InvalidateTransformation();

        foreach (var reference in _Dependents)
        {
            if (reference.TryGetTarget(out var dependent))
            {
                dependent.OnTransformInvalidated(this);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ITransformable> GetLinkedTransformables()
    {
        List<Body> bodies = new List<Body>();
        (Shape as IShapeOperand)?.GetLinkedBodies(bodies);
        return bodies;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Shape

    public bool AddShape(Shape shape, bool saveUndo = true)
    {
        if (saveUndo)
            SaveTopologyUndo();

        var modifier = shape as ModifierBase;

        if (shape.Body != null && shape.Body != this)
        {
            var oldBody = shape.Body;
            if (!shape.Body.RemoveShape(shape, saveUndo))
                return false;

            // Switch IShapeOperand from Shape to Body
            Debug.Assert(modifier != null);
            modifier.Predecessor = new BodyShapeOperand(oldBody);
        }

        shape.Body = this;

        // Case 1: First shape
        if (_RootShape == null)
        {
            RootShape = shape;
            return true;
        }

        // If we already have a top-level shape, only modifiers are allowed
        Debug.Assert(modifier != null);
        Debug.Assert(modifier != _RootShape);

        // Case 2: Insert
        if (_CurrentShape != null && _CurrentShape != _RootShape)
        {
            // Change operator of each dependent to new modifier
            foreach (var dependent in _CurrentShape.GetDependents().ToList())
            {
                var dependentModifier = dependent as ModifierBase;
                if(dependentModifier == null)
                    continue;

                for (var opIndex = 0; opIndex < dependentModifier.Operands.Count; opIndex++)
                {
                    if (dependentModifier.Operands[opIndex] == _CurrentShape)
                        dependentModifier.ReplaceOperand(opIndex, modifier);
                }
            }

            // Set new modifier on top of current shape
            modifier.Predecessor = _CurrentShape;
            Shape = modifier;
            return true;
        }

        // Case 3: Prepend
        modifier.Predecessor = _RootShape;
        RootShape = modifier;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool RemoveShape(Shape shape, bool saveUndo = true)
    {
        if (saveUndo)
            SaveTopologyUndo();

        // Only modifiers can be removed    
        var modifier = shape as ModifierBase;
        Debug.Assert(modifier != null);

        var replaceWithShape = modifier.Predecessor as Shape;
        if (replaceWithShape == null)
            return false;

        foreach (var dependent in modifier.GetDependents().ToList())
        {
            var dependentModifier = dependent as ModifierBase;
            if (dependentModifier == null)
                continue;

            for (var opIndex = 0; opIndex < dependentModifier.Operands.Count; opIndex++)
            {
                if (dependentModifier.Operands[opIndex] == modifier)
                    dependentModifier.ReplaceOperand(opIndex, replaceWithShape);
            }
        }

        if (_CurrentShape == modifier)
            _CurrentShape = replaceWithShape;

        if (_RootShape == modifier)
            RootShape = replaceWithShape;

        shape.Body = null;

        Invalidate();
        RaisePropertyChanged("Shape");
        RaiseVisualChanged();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Invalidate()
    {
        if (!IsDeserializing)
        {
            Shape?.Invalidate();
            InvalidateDependents();
        }
        _InvalidateTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    public List<Body> GetReferencedBodies()
    {
        List<Body> bodies = new List<Body>();
        (Shape as IShapeOperand)?.GetReferencedBodies(bodies);
        return bodies;
    }

    //--------------------------------------------------------------------------------------------------

    public void UpdateErrorState()
    {
        HasErrors = Shape?.HasErrors ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    public void CollapseShapeStack(Shape newRootShape, bool saveUndo = true)
    {
        if (saveUndo)
            SaveTopologyUndo();

        Shape shape = RootShape;
        while (shape != null)
        {
            foreach (var dependent in shape.GetDependents().ToList())
            {
                var dependentModifier = dependent as ModifierBase;
                if (dependentModifier == null)
                    continue;

                for (var opIndex = 0; opIndex < dependentModifier.Operands.Count; opIndex++)
                {
                    if (dependentModifier.Operands[opIndex] == shape)
                        dependentModifier.ReplaceOperand(opIndex, shape);
                }
            }
            shape.Body = null;
            shape = (shape as ModifierBase)?.Predecessor as Shape;
        }

        newRootShape.Body = this;
        RootShape = newRootShape;
        _CurrentShape = null;
            
        Invalidate();
        RaisePropertyChanged("RootShape");
        RaisePropertyChanged("Shape");
        RaiseVisualChanged();
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsShapeEffective(Shape shape)
    {
        if(shape.IsSkipped)
            return false;

        var current = Shape;
        while (current != null)
        {
            if (shape == current)
                return true;

            var pred = current.Predecessor;
            switch (pred)
            {
                case BodyShapeOperand bodyOp:
                    current = bodyOp.Shape;
                    break;
                case Shape shapeOp:
                    current = shapeOp;
                    break;
                default:
                    return false;
            }
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization / Serialization
        
    public static Body Create(Shape shape)
    {
        var body = new Body
        {
            Name = CoreContext.Current.Document?.AddNextNameSuffix(shape.Name) ?? shape.Name,
            Layer = CoreContext.Current.Layers?.ActiveLayer,
            Document = CoreContext.Current.Document
        };
        body.AddShape(shape, false);

        return body;
    }

    //--------------------------------------------------------------------------------------------------

    public Body()
    {
        Components = new List<Component>();
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void OnBeginDeserializing(SerializationContext context)
    {
        base.OnBeginDeserializing(context);
        context.SetInstance(this);
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        base.OnDeserialized(context);
        Components.ForEach(c => c.Owner = this);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        _RootShape?.Remove();
        _RootShape = null;
        Components.Clear();
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property and Undo handling

    //--------------------------------------------------------------------------------------------------

    public void SaveTopologyUndo()
    {
        if ((!IsDeserializing) && (Model != null))
        {
            SaveUndo(nameof(Shape));
            CoreContext.Current?.UndoHandler?.AddDataBlockChange(this);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        if (!IsDeserializing)
        {
            CoreContext.Current?.Document?.MarkAsUnsaved();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void RaiseShapeTopologyChanged()
    {
        RaisePropertyChanged(nameof(Shape));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IUndoableDataBlob

    public byte[] GetUndoDataBlob()
    {
        if (_RootShape == null)
            return null;

        var data = Serializer.Serialize(_RootShape, new SerializationContext(SerializationScope.UndoRedo));
        return data.IsNullOrEmpty() ? null : data.ToUtf8Bytes();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetUndoDataBlob(byte[] dataBlob)
    {
        CoreContext.Current.UndoHandler.AddDataBlockChange(this);

        _RootShape?.Remove();
        _RootShape = null;
        _CurrentShape = null;

        if ((dataBlob == null)||(dataBlob.Length == 0))
            return;

        var context = new SerializationContext(SerializationScope.UndoRedo);
        context.SetInstance(Model);
        context.SetInstance<IDocument>(Model);
        context.SetInstance(this);
        context.SetInstance(CoreContext.Current.Workspace);

        RootShape = Serializer.Deserialize<Shape>(dataBlob.FromUtf8Bytes(), context);

        Invalidate();
        RaisePropertyChanged("RootShape");
        RaisePropertyChanged("Shape");
        RaiseVisualChanged();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Components

    public Model GetOwnerModel()
    {
        return Model;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<Component> GetComponents(bool inherited)
    {
        return Components;
    }

    //--------------------------------------------------------------------------------------------------

    public T FindComponent<T>(bool inherited = false) where T : Component
    {
        return (T)Components.Find(c => c is T);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddComponent(Component component)
    {
        Debug.Assert(component != null);

        Components.Add(component);
        component.Owner = this;
        Model?.RegisterInstance(component);
        RaisePropertyChanged(nameof(Components));
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveComponent(Component component)
    {
        Model?.UnregisterInstance(component);
        component.Owner = null;
        Components.Remove(component);
        RaisePropertyChanged(nameof(Components));
    }

    //--------------------------------------------------------------------------------------------------


    #endregion

    #region InteractiveEntity

    public TopoDS_Shape GetBRep()
    {
        return Shape?.GetBRep();
    }

    //--------------------------------------------------------------------------------------------------

    public override TopoDS_Shape GetTransformedBRep()
    {
        return Shape?.GetTransformedBRep();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Dependents

    //--------------------------------------------------------------------------------------------------

    readonly List<WeakReference<IShapeDependent>> _Dependents = new List<WeakReference<IShapeDependent>>();

    //--------------------------------------------------------------------------------------------------

    public void AddDependent(IShapeDependent dependent)
    {
        _Dependents.Add(new WeakReference<IShapeDependent>(dependent));
        RaisePropertyChanged("Dependents");
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveDependent(IShapeDependent dependent)
    {
        var index = _Dependents.FindIndex(wr => wr.TryGetTarget(out var target) && ReferenceEquals(target, dependent));
        if (index >= 0)
        {
            _Dependents.RemoveAt(index);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void InvalidateDependents()
    {
        foreach (var reference in _Dependents)
        {
            if (reference.TryGetTarget(out var dependent))
            {
                dependent.OnShapeInvalidated(null);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public IEnumerable<IShapeDependent> GetDependents()
    {
        foreach (var reference in _Dependents)
        {
            if (reference.TryGetTarget(out var dependent))
            {
                yield return dependent;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
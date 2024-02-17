using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Linq;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

[SerializeType]
public sealed class LayerCollection : Entity, IEnumerable<Layer>, INotifyCollectionChanged, IUndoableTopology
{
    [SerializeMember]
    List<Layer> Layers { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Layer this[int i]
    {
        get { return Layers[i]; }
    }

    //--------------------------------------------------------------------------------------------------

    public Layer Default
    {
        get { return Layers.Count > 0 ? Layers[0] : null; }
    }

    //--------------------------------------------------------------------------------------------------

    public Model Model
    {
        get { return _Model; }
        set
        {
            _Model = value;
            Document = _Model;
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Layer ActiveLayer
    {
        get { return _ActiveLayer ?? Default; }
        set
        {
            if (_ActiveLayer != value)
            {
                var formerLayer = ActiveLayer;
                _ActiveLayer = value;
                RaisePropertyChanged();

                formerLayer?.OnActiveLayerChanged();
                ActiveLayer.OnActiveLayerChanged();

                if (_IsolateActiveLayer)
                {
                    formerLayer?.RaiseInteractivityChanged();
                    ActiveLayer.RaiseInteractivityChanged();
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsolateActiveLayer
    {
        get { return _IsolateActiveLayer; }
        set
        {
            if (_IsolateActiveLayer != value)
            {
                _IsolateActiveLayer = value;
                RaisePropertyChanged();
                foreach (var changedLayer in Layers.Where(layer => layer != _ActiveLayer && !layer.IsLocked && layer.IsVisible))
                {
                    changedLayer.RaiseInteractivityChanged();
                }
            }
        }
    }

    bool _IsolateActiveLayer;
    Layer _ActiveLayer;
    Model _Model;

    //--------------------------------------------------------------------------------------------------

    LayerCollection()
    {
        // Only for deserialization
    }

    //--------------------------------------------------------------------------------------------------

    internal LayerCollection(Model model)
    {
        Model = model;
        // Default layer
        Layers.Add(new Layer()
        {
            Name = "0 (Default)",
            Collection = this
        });
    }

    //--------------------------------------------------------------------------------------------------

    #region Collection Ops

    public Layer Find(Guid? guid)
    {
        if (guid == null)
            return Layers[0];
        return Layers.FirstOrDefault(l => l.Guid == guid) ?? Layers[0];
    }

    //--------------------------------------------------------------------------------------------------

    public void Add(Layer layer)
    {
        if (Layers.Any(l => l.Guid == layer.Guid))
            return;

        CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Added, this, layer);
        layer.Collection = this;
        Layers.Add(layer);
        CollectionChanged?.Invoke(this, new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Add, layer, Layers.IndexOf(layer)));
    }

    //--------------------------------------------------------------------------------------------------

    public void Remove(Layer layer)
    {
        if(ReferenceEquals(layer, Default))
            throw new ArgumentException("The default layer can not be removed.");

        var index = Layers.IndexOf(layer);
        if (index >= 0)
        {
            CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Removed, this, layer);
            Layers.RemoveAt(index);
            layer.Collection = null;
            CollectionChanged?.Invoke(this, new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Remove, layer, index));
        }

        if (_ActiveLayer == layer)
            ActiveLayer = null;

        // Entities are pushed back to the default layer, update them
        foreach (var changedBody in CoreContext.Current?.Document?.Where(body => body.LayerId.Equals(layer.Guid)))
        {
            changedBody.LayerId = Guid.Empty;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool Move(Layer layer, int newIndex)
    {
        int oldIndex = Layers.IndexOf(layer);
        if (layer == null)
            return false;

        if (oldIndex == newIndex)
            return false;

        if (oldIndex < newIndex)
            newIndex--;

        Layers.Remove(layer);
        Layers.Insert(newIndex, layer);

        CollectionChanged?.Invoke(this, new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Remove, layer, oldIndex));
        CollectionChanged?.Invoke(this, new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Add, layer, newIndex));

        return true;
    }

    //--------------------------------------------------------------------------------------------------


    #endregion

    #region IEnumerable

    public IEnumerator<Layer> GetEnumerator()
    {
        return Layers.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return Layers.GetEnumerator();
    }

    //--------------------------------------------------------------------------------------------------
        

    #endregion

    #region INotifyCollectionChanged

    public event NotifyCollectionChangedEventHandler CollectionChanged;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialization

    public override void OnBeginDeserializing(SerializationContext context)
    {
        Model = context.GetInstance<Model>();
        base.OnBeginDeserializing(context);
        context.SetInstance(this);
    }

    //--------------------------------------------------------------------------------------------------

    public void OnActivated()
    {
        RaisePropertyChanged(nameof(ActiveLayer));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IUndoableTopology

    Entity IUndoableTopology.FindInstance(Guid instanceGuid)
    {
        return Find(instanceGuid);
    }

    //--------------------------------------------------------------------------------------------------

    Entity IUndoableTopology.GetParent(Entity instance)
    {
        return Layers.Contains(instance) ? this : null;
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.AddChildFromUndo(Entity instance, Entity parent)
    {
        var typedInstance = instance as Layer;
        Debug.Assert(typedInstance != null);

        Add(typedInstance);
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.RemoveChildFromUndo(Entity instance)
    {
        var typedInstance = instance as Layer;
        Debug.Assert(typedInstance != null);

        Remove(typedInstance);
        typedInstance.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.MoveChildFromUndo(Entity instance, Entity newParent)
    {
        throw new NotImplementedException();
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

}
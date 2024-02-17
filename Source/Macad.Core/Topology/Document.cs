using Macad.Common;
using Macad.Common.Serialization;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Macad.Core.Components;
using System.Collections.Specialized;

namespace Macad.Core.Topology;

public interface IDocument
{
    void RegisterInstance(Entity entity);
    void UnregisterInstance(Entity entity);
    Entity FindInstance(Guid instanceGuid);
    void InstanceChanged(Entity entity);
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public abstract class Document<T> : EntityContainer<T>, IDocument, IUndoableTopology
    where T : Entity
{
    #region Properties

    [SerializeMember]
    Dictionary<string, int> LastNameSuffices { get; set; } = new Dictionary<string, int>();

    //--------------------------------------------------------------------------------------------------

    public override string Name
    {
        get { return _FilePath!=null ? PathUtils.GetFilenameWithoutExtensionAndPoint(_FilePath, false) : "Unnamed"; }
    }

    //--------------------------------------------------------------------------------------------------

    public string FilePath
    {
        get { return _FilePath; }
        set
        {
            _FilePath = value;
            RaisePropertyChanged();
        }
    }

    public bool HasUnsavedChanges { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public void MarkAsUnsaved()
    {
        if (IsDeserializing)
            return;

        HasUnsavedChanges = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void ResetUnsavedChanges()
    {
        HasUnsavedChanges = false;
    }

    //--------------------------------------------------------------------------------------------------

    public UndoHandler UndoHandler
    {
        get
        {
            if (_UndoHandler == null)
                _UndoHandler = new UndoHandler(this);
            return _UndoHandler;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    UndoHandler _UndoHandler;
    string _FilePath;

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region IUndoableTopology

    public Entity FindInstance(Guid instanceGuid)
    {
        if (instanceGuid.Equals(Guid))
            return this;

        if (Instances.TryGetValue(instanceGuid, out var reference)
            && reference.TryGetTarget(out var entity))
            return entity;

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public void InstanceChanged(Entity instance)
    {
        var typedInstance = instance as T;
        int index = IndexOf(typedInstance);
        if(index == -1)
            return;

        NotifyCollectionChangedEventArgs eventArgs = new(NotifyCollectionChangedAction.Replace, typedInstance, typedInstance, index);
        RaiseCollectionChanged(eventArgs);
    }

    //--------------------------------------------------------------------------------------------------

    Entity IUndoableTopology.GetParent(Entity instance)
    {
        // Hierarchies not supported yet
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.AddChildFromUndo(Entity instance, Entity parent)
    {
        var typedInstance = instance as T;
        Debug.Assert(typedInstance != null);

        Add(typedInstance);
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.RemoveChildFromUndo(Entity instance)
    {
        var typedInstance = instance as T;
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

    #region Childs

    public override void Add(T entity, bool update = true)
    {
        CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Added, this, entity);
        base.Add(entity, update);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove(T entity, bool update = true)
    {
        CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Removed, this, entity);
        base.Remove(entity, update);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Instances

    public readonly Dictionary<Guid, WeakReference<Entity>> Instances = new Dictionary<Guid, WeakReference<Entity>>();

    //--------------------------------------------------------------------------------------------------

    public void RegisterInstance(Entity entity)
    {
        if (entity.Guid == Guid.Empty)
            return;

        Instances[entity.Guid] = new WeakReference<Entity>(entity);

        if (entity is IDecorable decorable)
        {
            foreach (var component in decorable.GetComponents(false))
            {
                Instances[component.Guid] = new WeakReference<Entity>(component);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void UnregisterInstance(Entity entity)
    {
        if (Instances.Remove(entity.Guid))
        { 
            if (entity is IDecorable)
            {
                foreach (var component in ((IDecorable) entity).GetComponents(false))
                {
                    Instances.Remove(component.Guid);
                }
            }

            CoreContext.Current?.MessageHandler?.ClearEntityMessages(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string AddNextNameSuffix(string baseName)
    {
        if (!LastNameSuffices.TryGetValue(baseName, out int suffix))
        {
            suffix = 0;
        }

        suffix++;
        LastNameSuffices[baseName] = suffix;
        return baseName + "_" + suffix;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TEntity> FindInstances<TEntity>()
    {
        foreach (var reference in Instances.Values)
        {
            if (reference.TryGetTarget(out var target))
            {
                if(target is TEntity typedEntity)
                    yield return typedEntity;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region File I/O

    public delegate void DocumentFileSystemHandler(Document<T> sender, FileSystem fileSystem);
    public static event DocumentFileSystemHandler AdditionalDataLoading;
    public static event DocumentFileSystemHandler AdditionalDataSaving;

    //--------------------------------------------------------------------------------------------------

    public bool Save()
    {
        if (!FilePath.IsNullOrEmpty())
        {
            return SaveToFile(FilePath);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public abstract bool SaveToFile(string filePath);

    //--------------------------------------------------------------------------------------------------

    protected bool SaveToFile(string filePath, SerializationContext context)
    {
        // Save
        try
        {
            using FileSystem fileSystem = new(filePath);

            if (!fileSystem.Serialize(GetType().Name, this, context))
                return false;

            SaveData(fileSystem);

            fileSystem.Commit();

            ResetUnsavedChanges();
            FilePath = filePath;

            return true;
        }
        catch (Exception e)
        {
            Messages.Error(e.Message);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static TD CreateFromFile<TD>(string filePath, SerializationContext context, Func<Version, bool> verifyVersion)
        where TD : Document<T>
    {
        try
        {
            using FileSystem fileSystem = new(filePath);
            var newDoc = fileSystem.Deserialize<TD>(typeof(TD).Name, context, verifyVersion);

            if (newDoc != null)
            {
                newDoc.FilePath = filePath;
                newDoc.LoadData(fileSystem);
                newDoc.ResetUnsavedChanges();

                if (context.HasErrors)
                {
                    Messages.Error($"The document {Path.GetFileName(filePath)} loaded with errors.", string.Join("\n", context.Errors), newDoc);
                }
            }

            return newDoc;
        }
        catch (Exception e)
        {
            Messages.Error(e.Message);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool SaveData(FileSystem fileSystem)
    {
        AdditionalDataSaving?.Invoke(this, fileSystem);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool LoadData(FileSystem fileSystem)
    {
        AdditionalDataLoading?.Invoke(this, fileSystem);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnBeginDeserializing(SerializationContext context)
    {
        context.SetInstance<IDocument>(this);
        base.OnBeginDeserializing(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
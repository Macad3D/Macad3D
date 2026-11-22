using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Linq;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

/// <summary>
/// Holds all folders of a model. Folders reference their parent by guid, entities reference
/// their folder by guid. An empty or unknown guid means root.
/// </summary>
[SerializeType]
public sealed class FolderCollection : Entity, IEnumerable<Folder>, INotifyCollectionChanged, IUndoableTopology
{
    #region Properties

    [SerializeMember]
    List<Folder> Folders { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Folder this[int i]
    {
        get { return Folders[i]; }
    }

    //--------------------------------------------------------------------------------------------------

    public int Count
    {
        get { return Folders.Count; }
    }

    //--------------------------------------------------------------------------------------------------

    public Model Model
    {
        get;
        set
        {
            field = value;
            Document = field;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members and c'tors

    Dictionary<Guid, Folder> _Lookup;

    //--------------------------------------------------------------------------------------------------

    FolderCollection()
    {
        // Only for deserialization
    }

    //--------------------------------------------------------------------------------------------------

    internal FolderCollection(Model model)
    {
        Model = model;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Collection Ops

    /// <summary>
    /// Returns the folder with the given guid, or null for root or an unknown guid.
    /// </summary>
    public Folder Find(Guid guid)
    {
        if (guid == Guid.Empty)
            return null;

        if (_Lookup == null || _Lookup.Count != Folders.Count)
        {
            _Lookup = Folders.ToDictionary(f => f.Guid);
        }
        return _Lookup.GetValueOrDefault(guid);
    }

    //--------------------------------------------------------------------------------------------------

    public bool Contains(Folder folder)
    {
        return folder != null && Folders.Contains(folder);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Adds the folder, keeping its current parent.
    /// </summary>
    public void Add(Folder folder)
    {
        if (folder == null || Folders.Any(f => f.Guid == folder.Guid))
            return;

        CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Added, this, folder);
        folder.Collection = this;
        Folders.Add(folder);
        _Lookup = null;
        CollectionChanged?.Invoke(this, new (NotifyCollectionChangedAction.Add, folder, Folders.Count - 1));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Adds the folder as child of the parent folder, or at root if parent is null.
    /// </summary>
    public void Add(Folder folder, Folder parent)
    {
        if (folder == null)
            return;

        folder.ParentId = parent?.Guid ?? Guid.Empty;
        Add(folder);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Removes the folder. Its subfolders and entities are moved to the folder's parent.
    /// </summary>
    public void Remove(Folder folder)
    {
        var index = Folders.IndexOf(folder);
        if (index < 0)
            return;

        var newParentId = folder.ParentId;
        foreach (var child in Folders.Where(f => f.ParentId == folder.Guid).ToArray())
        {
            child.ParentId = newParentId;
        }

        if (Model != null)
        {
            foreach (var entity in Model.Where(e => e.FolderId == folder.Guid).ToArray())
            {
                entity.FolderId = newParentId;
            }
        }

        CoreContext.Current?.UndoHandler?.AddTopologyChange(UndoHandler.TopologyAction.Removed, this, folder);
        Folders.RemoveAt(index);
        _Lookup = null;
        folder.Collection = null;
        CollectionChanged?.Invoke(this, new(NotifyCollectionChangedAction.Remove, folder, index));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the direct child folders of the parent, or the root folders if parent is null.
    /// </summary>
    public IEnumerable<Folder> GetChildren(Folder parent)
    {
        var parentId = parent?.Guid ?? Guid.Empty;
        return Folders.Where(f => _ResolveParentId(f) == parentId);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the parent id of the folder, resolving unknown parents to root.
    /// </summary>
    Guid _ResolveParentId(Folder folder)
    {
        return Find(folder.ParentId) == null ? Guid.Empty : folder.ParentId;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns true if candidate is the folder itself or one of its ancestors.
    /// </summary>
    public bool IsSameOrAncestor(Folder candidate, Folder folder)
    {
        if (candidate == null)
            return false;

        int guard = Folders.Count + 1;
        while (folder != null && guard-- > 0)
        {
            if (folder == candidate)
                return true;

            folder = Find(folder.ParentId);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns true if the folder can be moved into target (null = root) without creating a cycle.
    /// </summary>
    public bool CanMove(Folder folder, Folder target)
    {
        if (folder == null)
            return false;

        return !IsSameOrAncestor(folder, target);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns baseName, or baseName with a number appended, so that no other folder of the given
    /// parent has the same name.
    /// </summary>
    public string MakeUniqueName(string baseName, Folder parent, Folder except = null)
    {
        var names = new HashSet<string>(GetChildren(parent).Where(f => f != except).Select(f => f.Name));
        if (!names.Contains(baseName))
            return baseName;

        int i = 2;
        while (names.Contains($"{baseName} {i}"))
        {
            i++;
        }

        return $"{baseName} {i}";
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IEnumerable

    public IEnumerator<Folder> GetEnumerator()
    {
        return Folders.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return Folders.GetEnumerator();
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

    #endregion

    #region IUndoableTopology

    Entity IUndoableTopology.FindInstance(Guid instanceGuid)
    {
        return Find(instanceGuid);
    }

    //--------------------------------------------------------------------------------------------------

    Entity IUndoableTopology.GetParent(Entity instance)
    {
        return Folders.Contains(instance) ? this : null;
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.AddChildFromUndo(Entity instance, Entity parent)
    {
        var typedInstance = instance as Folder;
        Debug.Assert(typedInstance != null);

        Add(typedInstance);
    }

    //--------------------------------------------------------------------------------------------------

    void IUndoableTopology.RemoveChildFromUndo(Entity instance)
    {
        var typedInstance = instance as Folder;
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

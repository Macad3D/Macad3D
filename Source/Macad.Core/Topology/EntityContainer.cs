using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

[SerializeType]
public class EntityContainer<T> : Entity, IEnumerable<T>, INotifyCollectionChanged
    where T : Entity
{
    //--------------------------------------------------------------------------------------------------

    public EntityContainer()
    {
        EntityList = new List<T>();
    }

    //--------------------------------------------------------------------------------------------------

    #region EntityList

    [SerializeMember(SortKey = 1000)]
    List<T> EntityList { get; set; }

    //--------------------------------------------------------------------------------------------------

    public int EntityCount
    {
        get { return EntityList.Count; }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Add(T entity, bool update = true)
    {
        EntityList.Add(entity);
        if (update)
        {
            RaiseCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Add, entity, EntityList.Count-1));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Remove(T entity, bool update = true)
    {
        var index = EntityList.IndexOf(entity);
        if (index < 0)
            return;

        EntityList.RemoveAt(index);
        entity.Remove();
        if (update)
        {
            RaiseCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Remove, entity, index));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual T Get(int index)
    {
        return EntityList[index];
    }
        
    //--------------------------------------------------------------------------------------------------

    public virtual int IndexOf(T entity)
    {
        return EntityList.IndexOf(entity);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        EntityList.ForEach(e => e.Remove());
        EntityList.Clear();
        base.Remove();
    }

    #endregion
        
    #region IEnumerable

    public IEnumerator<T> GetEnumerator()
    {
        return EntityList.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return EntityList.GetEnumerator();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region INotifyCollectionChanged

    public event NotifyCollectionChangedEventHandler CollectionChanged;

    //--------------------------------------------------------------------------------------------------

    protected void RaiseCollectionChanged(NotifyCollectionChangedEventArgs args)
    {
        CollectionChanged?.Invoke(this, args);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
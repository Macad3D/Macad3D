using System;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

[SerializeType]
public abstract class Entity : BaseObject
{
    [SerializeMember]
    [SerializeReferenceId]
    public Guid Guid
    {
        get { return _Guid; }
        set
        {
            _Document?.UnregisterInstance(this);
            _Guid = value;
            _Document?.RegisterInstance(this);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string TypeName
    {
        get { return GetType().Name; }
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "ValueParameterNotUsed")]
    public virtual string Name
    {
        get { return "Unknown"; }
        set { }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool HasErrors
    {
        get { return _HasErrors; }
        set
        {
            if (_HasErrors != value)
            {
                _HasErrors = value;
                RaisePropertyChanged();
                RaiseErrorStateChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected Entity()
    {
        _Guid = Guid.NewGuid();
    }

    //--------------------------------------------------------------------------------------------------

    #region Topology

    internal IDocument Document
    {
        get { return _Document; }
        set
        {
            _Document?.UnregisterInstance(this);
            _Document = value;
            _Document?.RegisterInstance(this);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    IDocument _Document;
    Guid _Guid;
    bool _HasErrors;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    public delegate void EntityChangedEventHandler(Entity entity);

    //--------------------------------------------------------------------------------------------------

    public static event EntityChangedEventHandler EntityRemoved;

    void RaiseEntityRemoved()
    {
        EntityRemoved?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    public static event EntityChangedEventHandler ErrorStateChanged;

    void RaiseErrorStateChanged()
    {
        ErrorStateChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialization

    public override Guid? GetReferenceId()
    {
        return Guid;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        Document = context.GetInstance<IDocument>();
        base.OnDeserialized(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Undo

    protected virtual void SaveUndo([CallerMemberName] string propertyName = "", object value = null)
    {
        if (!IsDeserializing && _Document != null)
        {
            CoreContext.Current?.UndoHandler?.AddPropertyChange(this, propertyName, value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public virtual void Remove()
    {
        RaiseEntityRemoved();
        Document = null;
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        return Name;
    }
}
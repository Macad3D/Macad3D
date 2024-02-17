using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Macad.Common.Serialization;

namespace Macad.Common;

[SerializeType]
public class BaseObject : INotifyPropertyChanged, ISerializable
{
    public bool SuppressPropertyChangedEvent { get; protected set; }

    public event PropertyChangedEventHandler PropertyChanged;

    protected virtual void RaisePropertyChanged([CallerMemberName] String propertyName = "")
    {
        if ((PropertyChanged != null) && (!SuppressPropertyChangedEvent))
        {
            PropertyChanged.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }
    }

    protected bool IsDeserializing = false;

    public virtual void OnBeforeUndo()
    { }

    public virtual void OnAfterUndo()
    { }

    #region ISerializable

    public virtual void OnBeginSerializing(SerializationContext context)
    {
    }

    public virtual void OnSerialized(SerializationContext context)
    {
    }

    public virtual void OnBeginDeserializing(SerializationContext context)
    {
        IsDeserializing = true;
    }

    public virtual void OnDeserialized(SerializationContext context)
    {
        IsDeserializing = false;
    }

    public virtual Guid? GetReferenceId()
    {
        return null;
    }

    #endregion

}
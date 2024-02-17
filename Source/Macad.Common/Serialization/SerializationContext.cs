using System;
using System.Collections.Generic;

namespace Macad.Common.Serialization;

#region Enums
        
public enum SerializationScope
{
    Storage,
    UndoRedo,
    CopyPaste,
}

//--------------------------------------------------------------------------------------------------

public enum SerializationResult
{
    None,
    VersionMismatch
}

//--------------------------------------------------------------------------------------------------

#endregion
        
public class SerializationContext
{
    #region Properties

    public IBlobArchive BlobArchive { get; set; }

    //--------------------------------------------------------------------------------------------------

    public SerializationScope Scope { get; }

    //--------------------------------------------------------------------------------------------------

    public SerializationResult Result { get; set; }

    //--------------------------------------------------------------------------------------------------

    public Version Version { get; set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members / n'tors

    readonly Dictionary<object, object> _Parameters = new Dictionary<object, object>();
    readonly List<string> _Errors = new List<string>();

    //--------------------------------------------------------------------------------------------------

    public SerializationContext(SerializationScope scope = SerializationScope.Storage)
    {
        Scope = scope;
        Result = SerializationResult.None;
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Messages

    public void AddErrors(string message)
    {
        _Errors.Add(message);
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasErrors
    {
        get { return _Errors.Count > 0;  }
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<string> Errors
    {
        get { return _Errors; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Parameter

    public T GetParameter<T>(string key)
    {
        if (_Parameters.TryGetValue(key, out var value))
            return value is T ? (T) value : default(T);

        return default(T);
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryGetParameter<T>(string key, out T value)
    {
        if (_Parameters.TryGetValue(key, out var result))
        {
            value = (T) result;
            return true;
        }

        value = default(T);
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetParameter(string key, object parameter)
    {
        _Parameters[key] = parameter;
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveParameter(string key)
    {
        if(_Parameters.ContainsKey(key))
            _Parameters.Remove(key);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Instances

    public T GetInstance<T>()
    {
        if (_Parameters.TryGetValue(typeof(T), out var result))
            return (T)result;

        return default(T);
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryGetInstance<T>(out T instance)
    {
        if (_Parameters.TryGetValue(typeof(T), out var result))
        {
            instance = (T) result;
            return true;
        }

        instance = default(T);
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetInstance(object instance)
    {
        _Parameters[instance.GetType()] = instance;
    }

    //--------------------------------------------------------------------------------------------------
        
    public void SetInstance<T>(object instance)
    {
        _Parameters[typeof(T)] = instance;
    }

    //--------------------------------------------------------------------------------------------------

    public void RemoveInstance<T>()
    {
        if(_Parameters.ContainsKey(typeof(T)))
            _Parameters.Remove(typeof(T));
    }

    //--------------------------------------------------------------------------------------------------

    public List<T> GetInstanceList<T>()
    {
        if (_Parameters.TryGetValue(typeof(List<T>), out var result))
            return (List<T>)result;

        var list = new List<T>();
        _Parameters.Add(typeof(List<T>), list);
        return list;
    }

    //--------------------------------------------------------------------------------------------------

    public Stack<T> GetInstanceStack<T>()
    {
        if (_Parameters.TryGetValue(typeof(Stack<T>), out var result))
            return (Stack<T>)result;

        var stack = new Stack<T>();
        _Parameters.Add(typeof(Stack<T>), stack);
        return stack;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
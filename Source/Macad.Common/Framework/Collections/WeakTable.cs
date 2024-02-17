using System.Runtime.CompilerServices;

namespace Macad.Common;

public class WeakTable<TKey,TValue> 
    where TKey : class 
    where TValue : class
{
    public TValue this[TKey key]
    {
        get { return GetValue(key); }
        set { SetValue(key, value); }
    }

    //--------------------------------------------------------------------------------------------------

    TValue _NullValue;
    readonly ConditionalWeakTable<TKey, TValue> _Table = new ConditionalWeakTable<TKey, TValue>();

    //--------------------------------------------------------------------------------------------------

    public bool HasValue(TKey key)
    {
        if (key == null)
            return _NullValue != null;

        return _Table.TryGetValue(key, out var _);
    }

    //--------------------------------------------------------------------------------------------------

    public TValue GetValue(TKey key)
    {
        if (key == null)
            return _NullValue;

        if (_Table.TryGetValue(key, out var value))
            return value;

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryGetValue(TKey key, out TValue value)
    {
        if (key == null)
        {
            value = _NullValue;
            return value != null;
        }
        return _Table.TryGetValue(key, out value);
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue(TKey key, TValue value)
    {
        if (key == null)
        {
            _NullValue = value;
        }
        else
        {
            _Table.Remove(key);
            if(value != null)
                _Table.Add(key, value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Remove(TKey key)
    {
        if (key != null)
        {
            _Table.Remove(key);
        }
    }

    //--------------------------------------------------------------------------------------------------

}
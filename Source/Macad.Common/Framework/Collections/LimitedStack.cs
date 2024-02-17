using System;

namespace Macad.Common;

public class LimitedStack<T>
{
    readonly T[] _Items;
    uint _Head;
    uint _Trail;

    //--------------------------------------------------------------------------------------------------

    public uint Count
    {
        get { return _Trail; }
    }

    //--------------------------------------------------------------------------------------------------

    public LimitedStack(uint length)
    {
        _Items = new T[length];
        _Head = 0;
        _Trail = 0;
    }

    //--------------------------------------------------------------------------------------------------

    public void Push(T element)
    {
        if (_Trail < _Items.Length)
        {
            _Trail++;
        }

        _Items[_Head] = element;
        _Head++;

        if (_Head >= _Items.Length)
        {
            _Head = 0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public T Pop()
    {
        if (_Trail == 0)
            return default(T);

        if (_Head == 0)
        {
            _Head = (uint)_Items.Length;
        }
        _Head--;

        T element = _Items[_Head];
        _Trail--;

        return element;
    }

    //--------------------------------------------------------------------------------------------------

    public void Clear()
    {
        _Trail = 0;
        Array.Clear(_Items, 0, _Items.Length);
    }
}
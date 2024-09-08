using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace Macad.Common.Serialization;

[Flags]
public enum ReadOptions
{
    None = 0,
    RecreateGuids = 1 << 0
}

//--------------------------------------------------------------------------------------------------

public class Reader
{
    #region Types

    public struct State
    {
        internal int Position;
        internal bool IsFirstElement;
    }

    //--------------------------------------------------------------------------------------------------
   
    #endregion

    #region Properties

    public ReadOptions Options
    {
        get { return _Options; }
    }

    //--------------------------------------------------------------------------------------------------

    public Dictionary<Guid, Guid> RecreatedGuids
    {
        get { return _RecreatedGuids; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool AnyLeft
    {
        get { return _State.Position < _Length; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    readonly Dictionary<Guid, object> _ReadInstances = new();
    readonly Stack<State> _StateStack = new();
    readonly Dictionary<Guid, Guid> _RecreatedGuids = new();

    readonly string _Source;
    readonly int _Length;
    readonly ReadOptions _Options;
    State _State;

    static readonly char[] _ValueStringLimiter = {' ', '\r', '\n', '\0', ':', ',', '{', '}', '[', ']'};
    static readonly char[] _WhiteSpaceChars = {' ', '\r', '\n', '\t'};

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Reader functions

    public Reader(in string source, ReadOptions options = ReadOptions.None)
    {
        _Source = source;
        _Length = source.Length;
        _Options = options;
        if(options.HasFlag(ReadOptions.RecreateGuids))
            _RecreatedGuids = new Dictionary<Guid, Guid>();
    }

    //--------------------------------------------------------------------------------------------------

    public char PeekChar()
    {
        return _State.Position < _Length ? _Source[_State.Position] : '\0';
    }

    //--------------------------------------------------------------------------------------------------

    public char ReadChar()
    {
        if (_State.Position >= _Length)
            return '\0';

        var c = _Source[_State.Position];
        _State.Position++;
        return c;
    }

    //--------------------------------------------------------------------------------------------------

    public string ReadQuotedString()
    {
        if (PeekChar() != '"')
            return null;

        _State.Position++; // Skip "

        var sb = new StringBuilder();
        var c = ReadChar();
        while ((c != '"') && (c != '\0'))
        {
            if (c == '\\')
            {
                c = ReadChar(); // should only be \ or "
            }
            sb.Append(c);
            c = ReadChar();
        }

        EatWhiteSpaces();

        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public string ReadValueString()
    {
        if (_ValueStringLimiter.Contains(PeekChar()))
            return null;

        var sb = new StringBuilder();
        var c = PeekChar();
        while (!_ValueStringLimiter.Contains(c))
        {
            if (c == '\\')
            {
                _State.Position++;
                c = ReadChar();
            }
            else
            {
                _State.Position++;
            }
            sb.Append(c);
            c = PeekChar();
        }

        EatWhiteSpaces();

        return (sb.Length > 0) ? sb.ToString() : null;
    }

    //--------------------------------------------------------------------------------------------------

    public T ReadType<T>(object obj, SerializationContext context)
    {
        var serializer = Serializer.GetSerializer(typeof(T));
        Debug.Assert(serializer != null);
        T result = (T)serializer.Read(this, obj, context);

        EatWhiteSpaces();
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public void EatWhiteSpaces()
    {
        var c = PeekChar();
        while (_WhiteSpaceChars.Contains(c))
        {
            _State.Position++;
            c = PeekChar();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void PushState()
    {
        _StateStack.Push(_State);
    }

    //--------------------------------------------------------------------------------------------------

    public void PopState()
    {
        _State = _StateStack.Pop();
    }

    //--------------------------------------------------------------------------------------------------

    public State GetState()
    {
        return _State;
    }

    //--------------------------------------------------------------------------------------------------

    public void ResetState(State state = default)
    {
        _State = state;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Map

    public bool BeginMap()
    {
        if (PeekChar() != '{')
            return false;

        _State.Position++; // Skip {
        _State.IsFirstElement = true;

        EatWhiteSpaces();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool EndMap()
    {
        if (PeekChar() != '}')
            return false;

        _State.Position++; // Skip {
        _State.IsFirstElement = false;

        EatWhiteSpaces();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool BeginMapKey()
    {
        if (!_State.IsFirstElement)
        {
            if (PeekChar() != ',')
                return false;
            _State.Position++; // Skip ,
        }
        else
        {
            _State.IsFirstElement = false;
        }

        EatWhiteSpaces();

        return AnyLeft && (PeekChar() != '}');
    }

    //--------------------------------------------------------------------------------------------------

    public bool BeginMapValue()
    {
        if (PeekChar() != ':')
            return false;
        _State.Position++; // Skip :

        EatWhiteSpaces();

        return AnyLeft;
    }

    //--------------------------------------------------------------------------------------------------

    public void SkipListOrMapValue()
    {
        int openMaps = 0;
        int openLists = 0;
        while (AnyLeft)
        {
            char c = PeekChar();
            if (c == '"')
            {
                ReadQuotedString();
            }
            else
            {
                switch (c)
                {
                    case '{':
                        openMaps++;
                        break;

                    case '}':
                        if (openMaps == 0)
                        {
                            return;
                        }

                        openMaps--;
                        break;

                    case '[':
                        openLists++;
                        break;

                    case ']':
                        if (openLists == 0)
                        {
                            return;
                        }

                        openLists--;
                        break;

                    case ',':
                        if ((openMaps == 0) && (openLists == 0))
                        {
                            return;
                        }

                        break;
                }

                _State.Position++;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region List

    public bool BeginList()
    {
        if (PeekChar() != '[')
            return false;

        _State.Position++; // Skip {
        _State.IsFirstElement = true;

        EatWhiteSpaces();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool EndList()
    {
        if (PeekChar() != ']')
            return false;

        _State.Position++; // Skip {
        _State.IsFirstElement = false;

        EatWhiteSpaces();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool BeginListValue()
    {
        if (!_State.IsFirstElement)
        {
            if (PeekChar() != ',')
                return false;
            _State.Position++; // Skip ,
        }
        else
        {
            _State.IsFirstElement = false;
        }

        EatWhiteSpaces();

        return AnyLeft && (PeekChar() != ']');
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Read Instances

    public void AddReadInstance(object instance, ref Guid guid)
    {
        _ReadInstances.Add(guid, instance);

        if (_Options.Has(ReadOptions.RecreateGuids))
        {
            var newGuid = Guid.NewGuid();
            _RecreatedGuids.Add(guid, newGuid);
            guid = newGuid;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool TryGetInstance(out object instance)
    {
        instance = null;

        // Check for reference
        if (PeekChar() != '?')
        {
            return false;
        }

        ReadChar(); // Skip !

        var valuestr = ReadValueString();
        if (valuestr.Equals("null"))
        {
            return true;
        }

        var guid = new Guid(valuestr);

        EatWhiteSpaces();

        if (_ReadInstances.TryGetValue(guid, out var foundObj))
        {
            instance = foundObj;
        }

        return true;
    }
    
    //--------------------------------------------------------------------------------------------------
        
    public bool TryGetInstance(in Guid guid, out object instance)
    {
        return _ReadInstances.TryGetValue(guid, out instance);
    }

    //--------------------------------------------------------------------------------------------------
       
 
    #endregion
}
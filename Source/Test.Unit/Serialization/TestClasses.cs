using System;
using System.Collections;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Test.Unit.Serialization;

[SerializeType]
public class EmptyClass
{
    public bool IsSame(EmptyClass other)
    {
        return true;
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class DerivedClass : EmptyClass
{
    [SerializeMember]
    public EmptyClass MyEmptyClass { get; set; }

    public DerivedClass()
    { }

    public DerivedClass(bool init)
    {
        MyEmptyClass = init ? new DerivedClass(false) : null;
    }

    public bool IsSame(DerivedClass other)
    {
        if(MyEmptyClass == null)
            return other.MyEmptyClass == null;
        return MyEmptyClass.GetType() == other.MyEmptyClass.GetType();
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class PropertyClass
{
    [SerializeMember]
    public string MyStringProperty { get; set; }

    public string ShouldBeIgnoredProperty { get; set; }

    public bool IsSame(PropertyClass other)
    {
        return
            (MyStringProperty == null
                 ? other.MyStringProperty == null
                 : MyStringProperty.Equals(other.MyStringProperty));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class SortedPropertyClass
{
    [SerializeMember(SortKey = 10)]
    public string MyString2Property { get; set; }

    [SerializeMember(SortKey = 20)]
    public string MyString3Property { get; set; }

    [SerializeMember]
    public string MyString1Property { get; set; }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class PropertyClassGuid : PropertyClass, ISerializable
{
    [SerializeMember]
    [SerializeReferenceId]
    public Guid MyGuid { get; set; }

    [SerializeMember(Redirect = true)]
    public Guid ExGuid { get; set; }

    public void OnBeginSerializing(SerializationContext context)
    {}

    public void OnSerialized(SerializationContext context)
    {}

    public void OnBeginDeserializing(SerializationContext context)
    {}

    public void OnDeserialized(SerializationContext context)
    {}
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class CascadedClass
{
    [SerializeMember]
    public EmptyClass MyEmptyClass { get; set; }

    [SerializeMember]
    public PropertyClass MyPropertyClass { get; set; }

    public CascadedClass()
    {
        MyEmptyClass = new EmptyClass();
        MyPropertyClass = new PropertyClass();
    }

    public CascadedClass(PropertyClass myPropertyInstance)
    {
        MyEmptyClass = new EmptyClass();
        MyPropertyClass = myPropertyInstance;
    }

    public bool IsSame(CascadedClass other)
    {
        return
            (MyEmptyClass == null
                 ? other.MyEmptyClass == null
                 : MyEmptyClass.IsSame(other.MyEmptyClass))
            && (MyPropertyClass == null
                    ? other.MyPropertyClass == null
                    : MyPropertyClass.IsSame(other.MyPropertyClass));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ReferencedClass
{
    [SerializeMember]
    public PropertyClassGuid MyPropertyClass { get; set; }

    [SerializeMember]
    public CascadedClass MyCascadedClass { get; set; }

    public ReferencedClass()
    {
        MyPropertyClass = new PropertyClassGuid();
        MyCascadedClass = new CascadedClass(MyPropertyClass);
    }

    public bool IsSame(ReferencedClass other)
    {
        return
            (MyCascadedClass == null
                 ? other.MyCascadedClass == null
                 : MyCascadedClass.IsSame(other.MyCascadedClass))
            && (MyPropertyClass == null
                    ? other.MyPropertyClass == null
                    : MyPropertyClass.IsSame(other.MyPropertyClass));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class CallbackClass : ISerializable
{
    int _TriggeredCallbacks;

    public CallbackClass()
    {
        _TriggeredCallbacks = 0;
    }

    public bool AllSerializeCallbacksTriggered()
    {
        return _TriggeredCallbacks == (1|2);
    }

    public bool AllDeserializeCallbacksTriggered()
    {
        return _TriggeredCallbacks == (4|8);
    }

    public void OnBeginSerializing(SerializationContext context)
    {
        _TriggeredCallbacks |= 1;
    }

    public void OnSerialized(SerializationContext context)
    {
        _TriggeredCallbacks |= 2;
    }

    public void OnBeginDeserializing(SerializationContext context)
    {
        _TriggeredCallbacks |= 4;
    }

    public void OnDeserialized(SerializationContext context)
    {
        _TriggeredCallbacks |= 8;
    }
}

//--------------------------------------------------------------------------------------------------

public enum SimpleEnum
{
    First,
    Second,
    Third,
    Fourth,
    Fifth,
    Sixth,
    Seventh,
}

//--------------------------------------------------------------------------------------------------

[Flags]
public enum FlagsEnum
{
    One = 1 << 1,
    Two = 1 << 2,
    Three = 1 << 3,
    Four = 1 << 4,
    Five = 1 << 5,
    Six = 1 << 6,
    Seven = 1 << 7,
    TwoBits = 3 << 7
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ArrayListClass
{
    [SerializeMember]
    public ArrayList List1 { get; set; }

    public ArrayListClass()
    {
        List1 = new ArrayList();
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class IntListClass
{
    [SerializeMember]
    public List<int> List1 { get; set; }

    public IntListClass()
    { }

    public IntListClass(bool fill)
    {
        List1 = new List<int>();

        if (fill)
        {
            List1.Add(11);
            List1.Add(42);
            List1.Add(65);
        }
    }

    public bool IsSame(IntListClass other)
    {
        if (List1 == null)
        {
            return other.List1 == null;
        }
        if (List1.Count != other.List1.Count)
            return false;

        return (List1.Count == 0) ||
               ((List1[0] == other.List1[0])
                && (List1[1] == other.List1[1])
                && (List1[2] == other.List1[2]));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class IntListClassInitialized : IntListClass
{
    public IntListClassInitialized()
    {
        List1 = new List<int>();
        List1.Add(99);
    }

    public IntListClassInitialized(bool fill)
        : base(fill)
    { }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class IntListClassReferenced : IntListClass
{
    [SerializeMember]
    public List<int> List2 { get; set; }

    public IntListClassReferenced()
        : base()
    { }

    public IntListClassReferenced(bool fill)
        : base(fill)
    {
        List2 = List1;
    }

    public bool IsSame(IntListClassReferenced other)
    {
        return ReferenceEquals(other.List2, other.List1) && base.IsSame(other);
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ArrayClass
{
    [SerializeMember]
    public int[] Array1 { get; set; }

    public ArrayClass()
    {
    }

    public ArrayClass(bool fill)
    {
        if (fill)
        {
            Array1 = new int[3];
            Array1[0] = 11;
            Array1[1] = 42;
            Array1[2] = 65;
        }
        else
        {
            Array1 = new int[0];
        }
    }

    public bool IsSame(ArrayClass other)
    {
        if (Array1 == null)
        {
            return other.Array1 == null;
        }
        if (Array1.Length != other.Array1.Length)
            return false;

        return (Array1.Length == 0) ||
               ((Array1[0] == other.Array1[0])
                && (Array1[1] == other.Array1[1])
                && (Array1[2] == other.Array1[2]));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ArrayClassInitialized : ArrayClass
{
    public ArrayClassInitialized()
    {
        Array1 = new int[3];
    }

    public ArrayClassInitialized(bool fill)
        : base(fill)
    { }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ArrayClassReferenced : ArrayClass
{
    [SerializeMember]
    public int[] Array2 { get; set; }

    public ArrayClassReferenced()
        : base()
    { }

    public ArrayClassReferenced(bool fill)
        : base(fill)
    {
        Array2 = Array1;
    }

    public bool IsSame(ArrayClassReferenced other)
    {
        return ReferenceEquals(other.Array2, other.Array1) && base.IsSame(other);
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class DictionaryClass
{
    [SerializeMember]
    public Dictionary<string, int> Dict1 { get; set; }

    public DictionaryClass()
    { }

    public DictionaryClass(bool fill)
    {
        Dict1 = new Dictionary<string, int>();
        if (fill)
        {
            Dict1["11"] = 11;
            Dict1["42"] = 42;
            Dict1["65"] = 65;
        }
    }

    public bool IsSame(DictionaryClass other)
    {
        if (Dict1 == null)
        {
            return other.Dict1 == null;
        }
        if (Dict1.Count != other.Dict1.Count)
            return false;

        return (Dict1.Count == 0) ||
               ((Dict1["11"] == other.Dict1["11"])
                && (Dict1["42"] == other.Dict1["42"])
                && (Dict1["65"] == other.Dict1["65"]));
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class DictionaryClassInitialized : DictionaryClass
{
    public DictionaryClassInitialized()
    { 
        Dict1 = new Dictionary<string, int>();
    }

    public DictionaryClassInitialized(bool fill)
        : base(fill)
    { }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class DictionaryClassReferenced : DictionaryClass
{
    [SerializeMember]
    public Dictionary<string, int> Dict2 { get; set; }

    public DictionaryClassReferenced()
        : base()
    { }

    public DictionaryClassReferenced(bool fill)
        : base(fill)
    {
        Dict2 = Dict1;
    }

    public bool IsSame(DictionaryClassReferenced other)
    {
        return ReferenceEquals(other.Dict2, other.Dict1) && base.IsSame(other);
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class NullableClass
{
    public NullableClass()
        : base()
    { }

    public NullableClass(bool fill)
    {
        V1 = null;
        V2 = 1.0;
        V3 = null;
        V4 = new Pnt(1, 2, 3);
    }

    [SerializeMember]
    public double? V1 { get; set; } = 2;

    [SerializeMember]
    public double? V2 { get; set; }

    [SerializeMember]
    public Pnt? V3 { get; set; } = new Pnt(4, 5, 6);

    [SerializeMember]
    public Pnt? V4 { get; set; }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public interface ISerializableInterface
{
    double GetValue();
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class InterfaceClass1 : ISerializableInterface
{
    [SerializeMember]
    public double Value1 { get; set; } = 1.0f;

    public double GetValue()
    {
        return Value1;
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class InterfaceClass2 : ISerializableInterface
{
    [SerializeMember]
    public double Value2 { get; set; } = 2.0f;

    public double GetValue()
    {
        return Value2;
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class InterfaceClass3
{
    [SerializeMember]
    public ISerializableInterface C1 { get; set; }

    [SerializeMember]
    public ISerializableInterface C2 { get; set; }

    public InterfaceClass3()
    { }

    public InterfaceClass3(double factor)
    {
        C1 = new InterfaceClass1() {Value1 = factor};
        C2 = new InterfaceClass2() {Value2 = factor * 2.0f};
    }

    public bool? IsSame(InterfaceClass3 result)
    {
        return (C1.GetValue() == result.C1.GetValue()) && (C2.GetValue() == result.C2.GetValue());
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public class CustomPropertySerializerClass
{
    [SerializeMember]
    public bool UseReader { get; set; }

    public bool UseWriter { get; set; }

    [SerializeMember(ReaderFunc = nameof(MyCustomReaderFunc), WriterFunc = nameof(MyCustomWriterFunc))]
    public string TestString { get; set; }

    public CustomPropertySerializerClass()
    {
        TestString = "Test";
    }

    protected bool MyCustomReaderFunc(Reader reader, SerializationContext context)
    {
        if (!UseReader)
            return false;

        TestString = reader.ReadType<string>("Failed", context).ToUpper();
        return true;
    }
        
    protected bool MyCustomWriterFunc(Writer writer, SerializationContext context)
    {
        if (!UseWriter)
            return false;

        return writer.WriteType(TestString.ToUpper(), context);
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public struct InterfaceStruct1 : ISerializableInterface
{
    [SerializeMember]
    public double Value1 { get; set; }

    public double GetValue()
    {
        return Value1;
    }
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public struct InterfaceStruct2 : ISerializableInterface
{
    [SerializeMember]
    public double Value2 { get; set; }

    public double GetValue()
    {
        return Value2;
    }
}
    
//--------------------------------------------------------------------------------------------------

[SerializeType]
public struct InterfaceStruct3
{
    [SerializeMember]
    public ISerializableInterface C1 { get; set; }

    [SerializeMember]
    public ISerializableInterface C2 { get; set; }

    public InterfaceStruct3()
    { }

    public InterfaceStruct3(double factor)
    {
        C1 = new InterfaceStruct1() {Value1 = factor};
        C2 = new InterfaceStruct2() {Value2 = factor * 2.0f};
    }

    public bool? IsSame(InterfaceStruct3 result)
    {
        return (C1.GetValue() == result.C1.GetValue()) && (C2.GetValue() == result.C2.GetValue());
    }
}

//--------------------------------------------------------------------------------------------------
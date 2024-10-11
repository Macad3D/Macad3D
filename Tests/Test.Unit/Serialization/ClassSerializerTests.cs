using System;
using Macad.Common;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class ClassSerializerTests 
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EmptyClass()
    {
        var value = new EmptyClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(EmptyClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.EmptyClass{}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as EmptyClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Property()
    {
        var value = new PropertyClass
        {
            MyStringProperty = "Hello World!"
        };
        var w = new Writer();
        var cs = new ClassSerializer(typeof(PropertyClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.PropertyClass{MyStringProperty:\"Hello World!\"}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as PropertyClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CascadedClass()
    {
        var value = new CascadedClass
        {
            MyPropertyClass = {MyStringProperty = "Hello World!"}
        };
        var w = new Writer();
        var cs = new ClassSerializer(typeof(CascadedClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.CascadedClass{MyEmptyClass:!Test.EmptyClass{},MyPropertyClass:!Test.PropertyClass{MyStringProperty:\"Hello World!\"}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as CascadedClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReferencedClass()
    {
        var value = new ReferencedClass
        {
            MyPropertyClass =
            {
                MyStringProperty = "Hello World!", 
                MyGuid = new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}")
            },
        };
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ReferencedClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ReferencedClass{MyPropertyClass:!Test.PropertyClassGuid{MyGuid:fb82b37ccc56415ebaea773f4bbe7203,MyStringProperty:\"Hello World!\",ExGuid:?null},MyCascadedClass:!Test.CascadedClass{MyEmptyClass:!Test.EmptyClass{},MyPropertyClass:?fb82b37ccc56415ebaea773f4bbe7203}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ReferencedClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NullReferencedClass()
    {
        var value = new CascadedClass(null);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(CascadedClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.CascadedClass{MyEmptyClass:!Test.EmptyClass{},MyPropertyClass:?null}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as CascadedClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializableCallback()
    {
        var value = new CallbackClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(CallbackClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.CallbackClass{}", w.ToString());
        Assert.True(value.AllSerializeCallbacksTriggered());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as CallbackClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(result.AllDeserializeCallbacksTriggered());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DerivedClass()
    {
        var value = new DerivedClass(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DerivedClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DerivedClass{MyEmptyClass:!Test.DerivedClass{MyEmptyClass:?null}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DerivedClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SortedProperties()
    {
        var value = new SortedPropertyClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DerivedClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.SortedPropertyClass{MyString1Property:?null,MyString2Property:?null,MyString3Property:?null}", w.ToString());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeColorStruct()
    {
        var value = new Color(1, 2, 3);
        var w = new Writer();
        Assert.True(w.WriteType(value, null));
        Assert.True(w.IsValid());
        Assert.AreEqual("[1,2,3]", w.ToString());

        var r = new Reader(w.ToString());
        var value2 = r.ReadType<Color>(null, null);
        Assert.IsTrue(value.Equals(value2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MissingProperty()
    {
        var cs = new ClassSerializer(typeof(EmptyClass));
        var r = new Reader("!Test.EmptyClass{MissingProp:1}");
        var result = cs.Read(r, null, null) as EmptyClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MissingClass()
    {
        var r = new Reader("!Test.CascadedClass{MyEmptyClass:!Test.UnknownClass{},MyPropertyClass:!Test.PropertyClass{MyStringProperty:\"Hello World!\"}}");
        var cs = new ClassSerializer(typeof(CascadedClass));
        var context = new SerializationContext();
        var result = cs.Read(r, null, context) as CascadedClass;
        Assert.IsNotNull(result);
        Assert.IsTrue(context.HasErrors);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsNull(result.MyEmptyClass);
        Assert.IsInstanceOf(typeof(PropertyClass), result.MyPropertyClass);
        Assert.AreEqual("Hello World!", result.MyPropertyClass.MyStringProperty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloneClass()
    {
        var value = new ReferencedClass
        {
            MyPropertyClass =
            {
                MyStringProperty = "Hello World!", 
                MyGuid = new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"),
                ExGuid = new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}")
            },
        };
        var w = new Writer();
        Assert.True(Serializer.Serialize(w, value));

        var r = new Reader(w.ToString(), ReadOptions.RecreateGuids);
        var result = Serializer.Deserialize<ReferencedClass>(r);

        Assert.IsNotNull(result);
        Assert.AreNotEqual(value.MyPropertyClass.MyGuid, result.MyPropertyClass.MyGuid);
        Assert.AreEqual(result.MyPropertyClass.ExGuid, result.MyPropertyClass.MyGuid);
        Assert.AreNotEqual((value.MyCascadedClass.MyPropertyClass as PropertyClassGuid)?.MyGuid, (result.MyCascadedClass.MyPropertyClass as PropertyClassGuid)?.MyGuid);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomPropertyWriter()
    {
        var cs = new ClassSerializer(typeof(CustomPropertySerializerClass));
        var obj = new CustomPropertySerializerClass();
        var w = new Writer();
        Assert.IsTrue(cs.Write(w, obj, null));
        Assert.AreEqual("!Test.CustomPropertySerializerClass{UseReader:False,TestString:\"Test\"}", w.ToString());

        obj = new CustomPropertySerializerClass {UseWriter = true};
        w = new Writer();
        Assert.IsTrue(cs.Write(w, obj, null));
        Assert.AreEqual("!Test.CustomPropertySerializerClass{UseReader:False,TestString:\"TEST\"}", w.ToString());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomPropertyReader()
    {
        var cs = new ClassSerializer(typeof(CustomPropertySerializerClass));
        var r = new Reader("!Test.CustomPropertySerializerClass{UseReader:False,TestString:\"Test\"}");
        var result = cs.Read(r, null, null) as CustomPropertySerializerClass;
        Assert.IsNotNull(result);
        Assert.AreEqual("Test", result.TestString);

        r = new Reader("!Test.CustomPropertySerializerClass{UseReader:True,TestString:\"Test\"}");
        result = cs.Read(r, null, null) as CustomPropertySerializerClass;
        Assert.IsNotNull(result);
        Assert.AreEqual("TEST", result.TestString);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AnticipateTypeDefinition()
    {
        var ctx = new SerializationContext();
        var r = new Reader("!Test.PropertyClassGuid{MyGuid:fb82b37ccc56415ebaea773f4bbe7203}");

        var anticipated = ClassSerializer.AnticipateType(r, ctx);
        Assert.AreEqual(new Guid("fb82b37ccc56415ebaea773f4bbe7203"), anticipated.Guid);
        Assert.AreEqual(typeof(PropertyClassGuid), anticipated.Type);
        Assert.IsNull(anticipated.Instance);

        Assert.IsNotNull(r.ReadType<PropertyClassGuid>(null, null));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AnticipateTypeReference()
    {
        var ctx = new SerializationContext();
        var r = new Reader("!Test.PropertyClassGuid{MyGuid:fb82b37ccc56415ebaea773f4bbe7203}?fb82b37ccc56415ebaea773f4bbe7203");
        var obj = r.ReadType<PropertyClassGuid>(null, null);
        Assert.IsNotNull(obj);

        var anticipated = ClassSerializer.AnticipateType(r, ctx);
        Assert.AreEqual(new Guid("fb82b37ccc56415ebaea773f4bbe7203"), anticipated.Guid);
        Assert.AreEqual(typeof(PropertyClassGuid), anticipated.Type);
        Assert.AreSame(obj, anticipated.Instance);

        Assert.AreSame(obj, r.ReadType<PropertyClassGuid>(null, null));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AnticipateSkippedTypeReference()
    {
        var ctx = new SerializationContext();
        var r = new Reader("[!Test.PropertyClassGuid{MyGuid:fb82b37ccc56415ebaea773f4bbe7203},?fb82b37ccc56415ebaea773f4bbe7203]");
        Assert.That(r.BeginList());
        Assert.That(r.BeginListValue());
        var anticipated = ClassSerializer.AnticipateType(r, ctx);
        Assert.AreEqual(new Guid("fb82b37ccc56415ebaea773f4bbe7203"), anticipated.Guid);
        Assert.AreEqual(typeof(PropertyClassGuid), anticipated.Type);
        r.SkipListOrMapValue();

        Assert.That(r.BeginListValue());
        anticipated = ClassSerializer.AnticipateType(r, ctx);
        Assert.AreEqual(new Guid("fb82b37ccc56415ebaea773f4bbe7203"), anticipated.Guid);
        Assert.AreEqual(typeof(PropertyClassGuid), anticipated.Type);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void AnticipateTypeNoContext()
    {
        var r = new Reader("!Test.PropertyClassGuid{MyGuid:fb82b37ccc56415ebaea773f4bbe7203}");

        var anticipated = ClassSerializer.AnticipateType(r, null);
        Assert.AreEqual(new Guid("fb82b37ccc56415ebaea773f4bbe7203"), anticipated.Guid);
        Assert.AreEqual(typeof(PropertyClassGuid), anticipated.Type);
        Assert.IsNull(anticipated.Instance);

        Assert.IsNotNull(r.ReadType<PropertyClassGuid>(null, null));
    }
}
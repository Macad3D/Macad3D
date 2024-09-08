using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class DictionarySerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    [Test]
    public void DictIsNull()
    {
        var value = new DictionaryClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DictionaryClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DictionaryClass{Dict1:?null}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DictionaryClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void EmptyDict()
    {
        var value = new DictionaryClass(false);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DictionaryClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DictionaryClass{Dict1:{}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DictionaryClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void FilledDict()
    {
        var value = new DictionaryClass(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DictionaryClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DictionaryClass{Dict1:{\"11\":11,\"42\":42,\"65\":65}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DictionaryClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void DictAlreadyInstantiated()
    {
        var value = new DictionaryClassInitialized(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DictionaryClassInitialized));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DictionaryClassInitialized{Dict1:{\"11\":11,\"42\":42,\"65\":65}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DictionaryClassInitialized;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void DictReferenced()
    {
        var value = new DictionaryClassReferenced(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(DictionaryClassReferenced));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.DictionaryClassReferenced{Dict1:{\"11\":11,\"42\":42,\"65\":65},Dict2:{\"11\":11,\"42\":42,\"65\":65}}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as DictionaryClassReferenced;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsFalse(value.IsSame(result), "Read back value is not the same.");
    }
}
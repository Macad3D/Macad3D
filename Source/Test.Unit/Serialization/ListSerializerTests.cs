using System;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class ListSerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    [Test]
    public void NonGenericList()
    {
        var value = new ArrayListClass();
        var w = new Writer();
        Assert.Catch<Exception>(() => new ClassSerializer(typeof(ArrayListClass)));
    }

    [Test]
    public void ListIsNull()
    {
        var value = new IntListClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(IntListClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.IntListClass{List1:?null}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as IntListClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void EmptyList()
    {
        var value = new IntListClass(false);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(IntListClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.IntListClass{List1:[]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as IntListClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void FilledList()
    {
        var value = new IntListClass(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(IntListClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.IntListClass{List1:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as IntListClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void ListAlreadyInstantiated()
    {
        var value = new IntListClassInitialized(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(IntListClassInitialized));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.IntListClassInitialized{List1:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as IntListClassInitialized;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void ListReferenced()
    {
        var value = new IntListClassReferenced(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(IntListClassReferenced));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.IntListClassReferenced{List1:[11,42,65],List2:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as IntListClassReferenced;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsFalse(value.IsSame(result), "Read back value is not the same.");
    }

}
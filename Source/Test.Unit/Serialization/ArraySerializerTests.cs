using System;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class ArraySerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    [Test]
    public void ArrayList()
    {
        var value = new ArrayListClass();
        var w = new Writer();
        Assert.Catch<Exception>(() => new ClassSerializer(typeof(ArrayListClass)));
    }

    [Test]
    public void ArrayIsNull()
    {
        var value = new ArrayClass();
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ArrayClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ArrayClass{Array1:?null}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ArrayClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void EmptyArray()
    {
        var value = new ArrayClass(false);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ArrayClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ArrayClass{Array1:[]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ArrayClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void FilledArray()
    {
        var value = new ArrayClass(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ArrayClass));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ArrayClass{Array1:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ArrayClass;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void ArrayAlreadyInstantiated()
    {
        var value = new ArrayClassInitialized(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ArrayClassInitialized));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ArrayClassInitialized{Array1:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ArrayClassInitialized;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
    }

    [Test]
    public void ArrayReferenced()
    {
        var value = new ArrayClassReferenced(true);
        var w = new Writer();
        var cs = new ClassSerializer(typeof(ArrayClassReferenced));
        Assert.True(cs.Write(w, value, null));
        Assert.AreEqual("!Test.ArrayClassReferenced{Array1:[11,42,65],Array2:[11,42,65]}", w.ToString());

        var r = new Reader(w.ToString());
        var result = cs.Read(r, null, null) as ArrayClassReferenced;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
        Assert.IsFalse(value.IsSame(result)); // Reference has been lost
    }
}
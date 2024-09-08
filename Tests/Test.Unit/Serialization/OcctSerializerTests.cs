using Macad.Common.Serialization;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class OcctSerializerTests
{
    [Test]
    public void Serialize_Pnt()
    {
        var originalValue = new Pnt(1.5, 42.3, 11);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Pnt));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3,11]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Pnt?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Pnt2d()
    {
        var originalValue = new Pnt2d(1.5, 42.3);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Pnt2d));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Pnt2d?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Vec()
    {
        var originalValue = new Vec(1.5, 42.3, 11);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Vec));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3,11]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Vec?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Dir()
    {
        var originalValue = new Dir(1, 0, 0);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Dir));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1,0,0]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Dir?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Quaternion()
    {
        var originalValue = new Quaternion(1.5, 42.3, 11, 1);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Quaternion));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3,11,1]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Quaternion?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Ax1()
    {
        var originalValue = new Ax1(new Pnt(1.5, 42.3, 11), new Dir(0.911322376865767, 0.39056673294247157, 0.13018891098082386));
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Ax1));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3,11,0.9113223768657671,0.39056673294247163,0.13018891098082389]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Ax1?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(originalValue, targetValue.Value);
    }

    [Test]
    public void Serialize_Pln()
    {
        var originalValue = new Pln(new Pnt(1.5, 42.3, 11), new Dir(1, 0, -1));
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Pln));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("[1.5,42.3,11,0,0.9238795325112867,0,0.3826834323650898]", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as Pln?;
        Assert.False(r.AnyLeft);
        Assert.True(targetValue.HasValue);
        Assert.AreEqual(0, originalValue.Distance(targetValue.Value));
    }
}
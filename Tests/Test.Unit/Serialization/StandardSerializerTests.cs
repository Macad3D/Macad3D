using System;
using Macad.Common.Serialization;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class StandardSerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("MyString", ExpectedResult = "\"MyString\"")]
    [TestCase("", ExpectedResult = "\"\"")]
    [TestCase(null, ExpectedResult = "?null")]
    public string SerializeString(string value)
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(string));
        Assert.NotNull(serializer);
        Assert.True(serializer.Write(w, value, null));
        Assert.True(w.IsValid());
        return w.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("\"MyString\"", ExpectedResult = "MyString")]
    [TestCase("\"\"", ExpectedResult = "")]
    public string DeserializeString(string input)
    {
        var r = new Reader(input);
        var serializer = Serializer.GetSerializer(typeof(string));
        Assert.NotNull(serializer);
        var result = serializer.Read(r, null, null) as string;
        Assert.IsNotNull(result);
        Assert.IsFalse(r.AnyLeft);
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeserializeNullString()
    {
        var r = new Reader("?null");
        var serializer = Serializer.GetSerializer(typeof(string));
        Assert.NotNull(serializer);
        var result = serializer.Read(r, null, null) as string;
        Assert.IsFalse(r.AnyLeft);
        Assert.IsNull(result);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeBool()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(bool));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, true, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, false, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, true, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[True,False,True]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.True((bool)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.False((bool)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.True((bool)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeChar()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(char));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, 'c', null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, '"', null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, '\\', null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[\"c\",\"\\\"\",\"\\\\\"]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual('c', (char)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual('"', (char)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual('\\', (char)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeByte()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(byte));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, byte.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, byte.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[0,255]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(byte.MinValue, (byte)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(byte.MaxValue, (byte)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeInt16()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Int16));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, 100, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, -100, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[100,-100]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(100, (Int16)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(-100, (Int16)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeUInt16()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(UInt16));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, 100, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, 255, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[100,255]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(100, (UInt16)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(255, (UInt16)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeInt32()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Int32));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, Int32.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, Int32.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[-2147483648,2147483647]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(Int32.MinValue, (Int32)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(Int32.MaxValue, (Int32)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeUInt32()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(UInt32));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, UInt32.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, UInt32.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[0,4294967295]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(UInt32.MinValue, (UInt32)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(UInt32.MaxValue, (UInt32)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeInt64()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Int64));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, Int64.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, Int64.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[-9223372036854775808,9223372036854775807]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(Int64.MinValue, (Int64)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(Int64.MaxValue, (Int64)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeUInt64()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(UInt64));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, UInt64.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, UInt64.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[0,18446744073709551615]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(UInt64.MinValue, (UInt64)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(UInt64.MaxValue, (UInt64)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeGuid()
    {
        var guid = new Guid("8ee3f021a8eb41bfb4874bce2570ff5e");
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Guid));
        Assert.NotNull(serializer);
        Assert.True(serializer.Write(w, guid, null));
        Assert.True(w.IsValid());
        Assert.AreEqual("8ee3f021a8eb41bfb4874bce2570ff5e", w.ToString());

        var r = new Reader(w.ToString());
        Assert.AreEqual(guid, (Guid)serializer.Read(r, null, null));
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeGuidEmpty()
    {
        var guid = new Guid();
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(Guid));
        Assert.NotNull(serializer);
        Assert.True(serializer.Write(w, guid, null));
        Assert.True(w.IsValid());
        Assert.AreEqual("?null", w.ToString());

        var r = new Reader(w.ToString());
        Assert.AreEqual(guid, (Guid)serializer.Read(r, null, null));
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeFloat()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(float));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, 0.0f, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, (float)Math.PI, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, float.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, float.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[0,3.1415927,-3.4028235E+38,3.4028235E+38]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(0.0f, (float)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual((float)Math.PI, (float)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(float.MinValue, (float)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(float.MaxValue, (float)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeDouble()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(double));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, 0.0, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, Math.PI, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, double.MinValue, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, double.MaxValue, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[0,3.141592653589793,-1.7976931348623157E+308,1.7976931348623157E+308]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(0.0, (double)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(Math.PI, (double)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(double.MinValue, (double)serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(double.MaxValue, (double)serializer.Read(r, null, null));
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeByteArray()
    {
        var b1 = new byte[] {0x01, 0x02, 0x03, 0xff, 0x13};
        var b2 = new byte[] { 0xf1, 0xf2, 0xf3, 0x13, 0x45, 0x24, 0xe1, 0xe2, 0x3, 0x13, 0x45, 0x24 };
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(byte[]));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, b1, null));
        w.BeginListValue();
        Assert.True(serializer.Write(w, b2, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[AQID/xM=,8fLzE0Uk4eIDE0Uk]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(b1, (byte[])serializer.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(b2, (byte[])serializer.Read(r, null, null));
        r.BeginListValue();
        r.EndList();
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeNullable()
    {
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(NullableClass));
        Assert.NotNull(serializer);
        serializer.Write(w, new NullableClass(true), null);
        Assert.True(w.IsValid());
        Assert.AreEqual("!Test.NullableClass{V1:?null,V2:1,V3:?null,V4:[1,2,3]}", w.ToString());

        var r = new Reader(w.ToString());
        var res = serializer.Read(r, null, null) as NullableClass;
        Assert.IsNotNull(res);
        Assert.IsNull(res.V1);
        Assert.AreEqual(1.0, res.V2);
        Assert.IsNull(res.V3);
        Assert.AreEqual(new Pnt(1,2,3), res.V4);
        Assert.False(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeDateTime()
    {
        var dt = new DateTime(2020, 06, 07, 01, 37, 25, DateTimeKind.Utc);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(DateTime));
        Assert.NotNull(serializer);
        Assert.True(serializer.Write(w, dt, null));
        Assert.True(w.IsValid());
        Assert.AreEqual(@"2020-06-07T01\:37\:25.0000000Z", w.ToString());

        var r = new Reader(w.ToString());
        var readDt = serializer.Read(r, null, null);
        Assert.IsNotNull(readDt);
        Assert.AreEqual(dt, (DateTime)readDt);
        Assert.False(r.AnyLeft);
    }
}
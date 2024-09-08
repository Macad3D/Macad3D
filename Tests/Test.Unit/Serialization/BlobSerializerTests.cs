using System.Collections.Generic;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class BlobSerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeByteArray()
    {
        var archive = new TestBlobArchive();
        var context = new SerializationContext()
        {
            BlobArchive = archive
        };

        var b1 = new byte[] {0x01, 0x02, 0x03, 0xff, 0x13};
        var b2 = new byte[] {0xf1, 0xf2, 0xf3, 0x13, 0x45, 0x24, 0xe1, 0xe2, 0x3, 0x13, 0x45, 0x24};
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(byte[]));
        Assert.NotNull(serializer);
        w.BeginList();
        w.BeginListValue();
        Assert.True(serializer.Write(w, b1, context));
        w.BeginListValue();
        Assert.True(serializer.Write(w, b2, context));
        w.EndList();
        Assert.True(w.IsValid());

        Assert.AreEqual("[blob_42,blob_43]", w.ToString());
        Assert.AreEqual(b1, archive.SavedBytes[0]);
        Assert.AreEqual(b2, archive.SavedBytes[1]);

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(b1, (byte[]) serializer.Read(r, null, context));
        r.BeginListValue();
        Assert.AreEqual(b2, (byte[]) serializer.Read(r, null, context));
        r.BeginListValue();
        r.EndList();
        Assert.False(r.AnyLeft);
    }
}

//--------------------------------------------------------------------------------------------------

public class TestBlobArchive : IBlobArchive
{
    public List<byte[]> SavedBytes = new List<byte[]>();

    public int WriteBlob(byte[] data)
    {
        SavedBytes.Add(data);
        return 41 + SavedBytes.Count;
    }

    public byte[] ReadBlob(int reference)
    {
        return SavedBytes[reference - 42];
    }
}
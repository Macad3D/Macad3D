using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class ClassEnumTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        var w = new Writer();
        var cs = new EnumSerializer(typeof(SimpleEnum));
        w.BeginList();
        w.BeginListValue();
        Assert.True(cs.Write(w, SimpleEnum.Third, null));
        w.BeginListValue();
        Assert.True(cs.Write(w, SimpleEnum.Fifth, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[Third,Fifth]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(SimpleEnum.Third, (SimpleEnum)cs.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(SimpleEnum.Fifth, (SimpleEnum)cs.Read(r, null, null));
        r.EndList();
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Flags()
    {
        var w = new Writer();
        var cs = new EnumSerializer(typeof(FlagsEnum));
        w.BeginList();
        w.BeginListValue();
        Assert.True(cs.Write(w, FlagsEnum.One | FlagsEnum.Seven, null));
        w.BeginListValue();
        Assert.True(cs.Write(w, FlagsEnum.Four, null));
        w.BeginListValue();
        Assert.True(cs.Write(w, (FlagsEnum)0, null));
        w.EndList();
        Assert.True(w.IsValid());
        Assert.AreEqual("[One|Seven,Four,0]", w.ToString());

        var r = new Reader(w.ToString());
        r.BeginList();
        r.BeginListValue();
        Assert.AreEqual(FlagsEnum.One | FlagsEnum.Seven, (FlagsEnum)cs.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual(FlagsEnum.Four, (FlagsEnum)cs.Read(r, null, null));
        r.BeginListValue();
        Assert.AreEqual((FlagsEnum)0, (FlagsEnum)cs.Read(r, null, null));
        r.EndList();
        Assert.IsFalse(r.AnyLeft, "Any characters left.");
    }

}
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class ReaderTests
{
    [Test]
    public void PeekAndReadChar()
    {
        var r = new Reader("abcd");

        Assert.AreEqual('a', r.PeekChar());
        Assert.AreEqual('a', r.ReadChar());
        Assert.AreEqual('b', r.ReadChar());
        Assert.AreEqual('c', r.ReadChar());
        Assert.AreEqual('d', r.PeekChar());
        Assert.IsTrue(r.AnyLeft);
        Assert.AreEqual('d', r.ReadChar());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(@"MyString", ExpectedResult = @"MyString")]
    [TestCase(@"My\\String", ExpectedResult = @"My\String")]
    [TestCase(@"My\""String", ExpectedResult = @"My""String")]
    [TestCase(@"My\'String", ExpectedResult = @"My'String")]
    [TestCase(@"My\{String", ExpectedResult = @"My{String")]
    [TestCase(@"My\}String", ExpectedResult = @"My}String")]
    [TestCase(@"My\:String", ExpectedResult = @"My:String")]
    [TestCase(@"My\,String", ExpectedResult = @"My,String")]
    public string ReadString(string input)
    {
        var r = new Reader(input);
        var s = r.ReadValueString();
        if(s != null)
            Assert.IsFalse(r.AnyLeft);
        return s;
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(@"MyString", ExpectedResult = null)]
    [TestCase(@"""MyString""", ExpectedResult = @"MyString")]
    [TestCase(@"""My\\String""", ExpectedResult = @"My\String")]
    [TestCase(@"""My\""String""", ExpectedResult = @"My""String")]
    public string ReadQuotedString(string input)
    {
        var r = new Reader(input);
        var s = r.ReadQuotedString();
        if(s != null)
            Assert.IsFalse(r.AnyLeft);
        return s;
    }

    //--------------------------------------------------------------------------------------------------

    #region Map

    [Test]
    public void ReadEmptyMap()
    {
        var r = new Reader("{}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadMapOneItem()
    {
        var r = new Reader("{Key1:Value1}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadMapTwoItems()
    {
        var r = new Reader("{Key1:Value1,Key2:Value2}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key2", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value2", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadMapCascaded()
    {
        var r = new Reader("{Key1:Value1,Key2:{Key3:Value3}}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key2", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());

        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key3", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value3", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsTrue(r.AnyLeft);

        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkipMapValues()
    {
        var r = new Reader("{Key1:Key2{Key3:Value3,Key4{Key5:Value5}},Key6:Value6}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());

        r.BeginMapValue();
        r.SkipListOrMapValue();

        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key6", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value6", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkipMapValueString()
    {
        var r = new Reader("{Key1:\"SkipThis[{}}]\",Key6:Value6}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());

        r.BeginMapValue();
        r.SkipListOrMapValue();

        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key6", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value6", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkipMapValueList()
    {
        var r = new Reader("{Key1:[Key2:Value2,Key3:Value3,Key4{Key5:Value5,Key6:\"Value6\"}],Key7:Value7}");
        Assert.IsTrue(r.BeginMap());
        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key1", r.ReadValueString());

        r.BeginMapValue();
        r.SkipListOrMapValue();

        Assert.IsTrue(r.BeginMapKey());
        Assert.AreEqual("Key7", r.ReadValueString());
        Assert.IsTrue(r.BeginMapValue());
        Assert.AreEqual("Value7", r.ReadValueString());
        Assert.IsFalse(r.BeginMapKey());
        Assert.IsTrue(r.EndMap());
        Assert.IsFalse(r.AnyLeft);
    }
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region List

    [Test]
    public void ReadEmptyList()
    {
        var r = new Reader("[]");
        Assert.IsTrue(r.BeginList());
        Assert.IsFalse(r.BeginListValue());
        Assert.IsTrue(r.EndList());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadListOneItem()
    {
        var r = new Reader("[Value1]");
        Assert.IsTrue(r.BeginList());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsFalse(r.BeginListValue());
        Assert.IsTrue(r.EndList());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadListTwoItems()
    {
        var r = new Reader("[Value1,Value2]");
        Assert.IsTrue(r.BeginList());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value2", r.ReadValueString());
        Assert.IsFalse(r.BeginListValue());
        Assert.IsTrue(r.EndList());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadListCascaded()
    {
        var r = new Reader("[Value1,[Value2,Value3]]");
        Assert.IsTrue(r.BeginList());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value1", r.ReadValueString());
        Assert.IsTrue(r.BeginListValue());

        Assert.IsTrue(r.BeginList());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value2", r.ReadValueString());
        Assert.IsTrue(r.BeginListValue());
        Assert.AreEqual("Value3", r.ReadValueString());
        Assert.IsFalse(r.BeginListValue());
        Assert.IsTrue(r.EndList());
        Assert.IsTrue(r.AnyLeft);

        Assert.IsFalse(r.BeginListValue());
        Assert.IsTrue(r.EndList());
        Assert.IsFalse(r.AnyLeft);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class WriterTests
{
    [TestCase(@"MyString", ExpectedResult = @"MyString")]
    [TestCase(@"My\String", ExpectedResult = @"My\\String")]
    [TestCase(@"My""String", ExpectedResult = @"My\""String")]
    [TestCase(@"My'String", ExpectedResult = @"My\'String")]
    [TestCase(@"My{String", ExpectedResult = @"My\{String")]
    [TestCase(@"My}String", ExpectedResult = @"My\}String")]
    [TestCase(@"My:String", ExpectedResult = @"My\:String")]
    [TestCase(@"My,String", ExpectedResult = @"My\,String")]
    public string WriteString(string input)
    {
        var w = new Writer();
        w.WriteValueString(input);
        return w.ToString();
    }

    [TestCase(@"MyString", ExpectedResult = @"""MyString""")]
    [TestCase(@"My\String", ExpectedResult = @"""My\\String""")]
    [TestCase(@"My""String", ExpectedResult = @"""My\""String""")]
    public string WriteQuotedString(string input)
    {
        var w = new Writer();
        w.WriteQuotedString(input);
        return w.ToString();
    }

    [Test]
    public void WriteEmptyMap()
    {
        var w = new Writer();
        w.BeginMap();
        w.EndMap();

        Assert.True(w.IsValid());
        Assert.AreEqual("{}", w.ToString());
    }

    [Test]
    public void WriteMapOneItem()
    {
        var w = new Writer();
        w.BeginMap();
        w.BeginMapKey();
        w.WriteValueString("Key1");
        w.BeginMapValue();
        w.WriteValueString("Value1");
        w.EndMap();

        Assert.True(w.IsValid());
        Assert.AreEqual("{Key1:Value1}", w.ToString());
    }

    [Test]
    public void WriteMapTwoItems()
    {
        var w = new Writer();
        w.BeginMap();
        w.BeginMapKey();
        w.WriteValueString("Key1");
        w.BeginMapValue();
        w.WriteValueString("Value1");
        w.BeginMapKey();
        w.WriteValueString("Key2");
        w.BeginMapValue();
        w.WriteValueString("Value2");
        w.EndMap();

        Assert.True(w.IsValid());
        Assert.AreEqual("{Key1:Value1,Key2:Value2}", w.ToString());
    }

    [Test]
    public void WriteMapCascaded()
    {
        var w = new Writer();
        w.BeginMap();
        w.BeginMapKey();
        w.WriteValueString("Key1");
        w.BeginMapValue();
        w.WriteValueString("Value1");
        w.BeginMapKey();
        w.WriteValueString("Key2");
        w.BeginMapValue();
        {
            w.BeginMap();
            w.BeginMapKey();
            w.WriteValueString("Key3");
            w.BeginMapValue();
            w.WriteValueString("Value3");
            w.EndMap();
        }
        w.EndMap();

        Assert.True(w.IsValid());
        Assert.AreEqual("{Key1:Value1,Key2:{Key3:Value3}}", w.ToString());
    }

    [Test]
    public void WriteEmptyList()
    {
        var w = new Writer();
        w.BeginList();
        w.EndList();

        Assert.True(w.IsValid());
        Assert.AreEqual("[]", w.ToString());
    }

    [Test]
    public void WriteListOneItem()
    {
        var w = new Writer();
        w.BeginList();
        w.BeginListValue();
        w.WriteValueString("Value1");
        w.EndList();

        Assert.True(w.IsValid());
        Assert.AreEqual("[Value1]", w.ToString());
    }

    [Test]
    public void WriteListTwoItems()
    {
        var w = new Writer();
        w.BeginList();
        w.BeginListValue();
        w.WriteValueString("Value1");
        w.BeginListValue();
        w.WriteValueString("Value2");
        w.EndList();

        Assert.True(w.IsValid());
        Assert.AreEqual("[Value1,Value2]", w.ToString());
    }

    [Test]
    public void WriteListCascaded()
    {
        var w = new Writer();
        w.BeginList();
        w.BeginListValue();
        w.WriteValueString("Value1");
        w.BeginListValue();
        {
            w.BeginList();
            w.BeginListValue();
            w.WriteValueString("Value2");
            w.BeginListValue();
            w.WriteValueString("Value3");
            w.EndList();
        }
        w.EndList();

        Assert.True(w.IsValid());
        Assert.AreEqual("[Value1,[Value2,Value3]]", w.ToString());
    }

}
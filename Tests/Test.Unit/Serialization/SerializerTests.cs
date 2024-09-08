using Macad.Common;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class SerializerTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EmptyClassDocument()
    {
        var root = new EmptyClass();
        var doc = Serializer.Serialize(root, null);

        Assert.NotNull(doc);
        Assert.AreEqual("!Test.EmptyClass{}", doc);

        var readRoot = Serializer.Deserialize<EmptyClass>(doc, null);
        Assert.True(root.IsSame(readRoot));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EmptyDocumentWithHeader()
    {
        var context = new SerializationContext();
        var root = new BaseObject();
        var document = new DocumentHeader()
        {
            ContentType = root.GetType().Name,
            MajorVersion = 1, 
            MinorVersion = 0
        };
        var writer = new Writer();
        Assert.IsTrue(Serializer.Serialize(writer, document, context));
        Assert.IsTrue(Serializer.Serialize(writer, root, context));

        var serialized = writer.ToString();
        Assert.NotNull(serialized);
        Assert.AreEqual("!Common.DocumentHeader{ContentType:\"BaseObject\",MajorVersion:1,MinorVersion:0}!Common.BaseObject{}", serialized);

        var reader = new Reader(serialized);
        var readDoc = Serializer.Deserialize<DocumentHeader>(reader, context);
        Assert.NotNull(readDoc);
        var readRoot = Serializer.Deserialize<BaseObject>(reader, context);
        Assert.NotNull(readRoot);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NamespaceAlias()
    {
        var alias = Serializer.ApplyNamespaceAlias("Macad.Test.Unit.Serialization.MyNamespace.MyClass");
        Assert.AreEqual("Test.MyNamespace.MyClass", alias);

        var full = Serializer.ResolveNamespaceAlias(alias);
        Assert.AreEqual("Macad.Test.Unit.Serialization.MyNamespace.MyClass", full);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatDocument()
    {
        var root = new CascadedClass
        {
            MyPropertyClass = { MyStringProperty = "Hello World!" }
        };
        var doc = Serializer.Format(Serializer.Serialize(root, null));

        Assert.NotNull(doc);
        Assert.AreEqual("!Test.CascadedClass\r\n{\r\n\tMyEmptyClass: !Test.EmptyClass\r\n\t{\r\n\t\t\r\n\t},\r\n\tMyPropertyClass: !Test.PropertyClass\r\n\t{\r\n\t\tMyStringProperty: \"Hello World!\"\r\n\t}\r\n}", doc);

        var readRoot = Serializer.Deserialize<CascadedClass>(doc, null);
        Assert.True(root.IsSame(readRoot));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FormatRespectsQuotedStrings()
    {
        var root = new CascadedClass
        {
            MyPropertyClass = { MyStringProperty = "[a:Hello] {World}!" }
        };
        var doc = Serializer.Format(Serializer.Serialize(root, null));

        Assert.NotNull(doc);
        Assert.AreEqual("!Test.CascadedClass\r\n{\r\n\tMyEmptyClass: !Test.EmptyClass\r\n\t{\r\n\t\t\r\n\t},\r\n\tMyPropertyClass: !Test.PropertyClass\r\n\t{\r\n\t\tMyStringProperty: \"[a:Hello] {World}!\"\r\n\t}\r\n}", doc);

        var readRoot = Serializer.Deserialize<CascadedClass>(doc, null);
        Assert.True(root.IsSame(readRoot));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RootIsNull()
    {
        var doc = Serializer.Serialize(null, null);

        Assert.NotNull(doc);
        Assert.AreEqual("?null", doc);

        var readRoot = Serializer.Deserialize<CascadedClass>(doc, null);
        Assert.IsNull(readRoot);
    }
}
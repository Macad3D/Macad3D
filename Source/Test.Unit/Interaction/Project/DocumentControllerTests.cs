using Macad.Common.Serialization;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Project;

[TestFixture]
public class DocumentControllerTests
{
    const string FileName1 = @"c:\TestData\Data1.model";
    const string FileName2 = @"c:\TestData\Data2.model";
    const string FileName3 = @"c:\TestData\Data3.model";
    const string FileNameCaseInsensitiv = @"c:\TestData\data1.model";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MruListAdd()
    {
        var documentController = InteractiveContext.Current.DocumentController;
        documentController.MruList.Clear();

        documentController.AddToMruList(FileName1);
        documentController.AddToMruList(FileName2);
        documentController.AddToMruList(FileName3);
        Assert.AreEqual(2, documentController.MruList.IndexOf(FileName1));
        Assert.AreEqual(1, documentController.MruList.IndexOf(FileName2));
        Assert.AreEqual(0, documentController.MruList.IndexOf(FileName3));

        documentController.AddToMruList(FileName1);
        Assert.AreEqual(0, documentController.MruList.IndexOf(FileName1));
        Assert.AreEqual(2, documentController.MruList.IndexOf(FileName2));
        Assert.AreEqual(1, documentController.MruList.IndexOf(FileName3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MruListAddCaseInsensitive()
    {
        var documentController = InteractiveContext.Current.DocumentController;
        documentController.MruList.Clear();

        documentController.AddToMruList(FileName1);
        documentController.AddToMruList(FileName2);
        documentController.AddToMruList(FileNameCaseInsensitiv);
        Assert.AreEqual(-1, documentController.MruList.IndexOf(FileName1));
        Assert.AreEqual(1, documentController.MruList.IndexOf(FileName2));
        Assert.AreEqual(0, documentController.MruList.IndexOf(FileNameCaseInsensitiv));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MruListRemove()
    {
        var documentController = InteractiveContext.Current.DocumentController;
        documentController.MruList.Clear();

        documentController.AddToMruList(FileName1);
        documentController.AddToMruList(FileName2);
        documentController.AddToMruList(FileName3);

        documentController.RemoveFromMruList(FileName1);
        Assert.AreEqual(-1, documentController.MruList.IndexOf(FileName1));
        Assert.AreEqual(1, documentController.MruList.IndexOf(FileName2));
        Assert.AreEqual(0, documentController.MruList.IndexOf(FileName3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MruSerialization()
    {
        var documentController = InteractiveContext.Current.DocumentController;
        documentController.MruList.Clear();

        documentController.AddToMruList(FileName1);
        documentController.AddToMruList(FileName2);

        var data = Serializer.Serialize(documentController.MruList, new SerializationContext());
        Assert.AreEqual($"[\"{FileName2.Replace(@"\", @"\\")}\",\"{FileName1.Replace(@"\", @"\\")}\"]", data);
    }

    //--------------------------------------------------------------------------------------------------

}
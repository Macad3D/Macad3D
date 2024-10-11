using Macad.Test.Utils;
using Macad.Core;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class MessageTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EntityMessages()
    {
        var box = TestGeomGenerator.CreateBox();
        Messages.Error("Hello World", null, box);

        Assert.AreEqual(1, Context.Current.MessageHandler.GetEntityMessages(box).Count);
        Assert.AreEqual(1, Context.Current.MessageHandler.MessageItems.Count);

        Context.Current.MessageHandler.ClearEntityMessages(box);
        Assert.IsNull(Context.Current.MessageHandler.GetEntityMessages(box));
        Assert.AreEqual(0, Context.Current.MessageHandler.MessageItems.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EntityRemoved()
    {
        var box = TestGeomGenerator.CreateBox();
        Messages.Error("Hello World", null, box);
        Assert.That(Context.Current.MessageHandler.GetEntityMessages(box).Count == 1);
        Assert.That(Context.Current.MessageHandler.MessageItems.Count == 1);

        box.Remove();
        Assert.IsNull(Context.Current.MessageHandler.GetEntityMessages(box));
        Assert.AreEqual(0, Context.Current.MessageHandler.MessageItems.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ProcessingScopeUsing()
    {
        var box = TestGeomGenerator.CreateBox();
        using(new ProcessingScope(box, "Pro"))
        {
            Messages.Error("Hello World");
        }

        Assert.AreEqual(1, Context.Current.MessageHandler.GetEntityMessages(box).Count);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CascadedProcessingScope()
    {
        var box1 = TestGeomGenerator.CreateBox();
        var box2 = TestGeomGenerator.CreateBox();
        using(new ProcessingScope(box1, "Pro1"))
        {
            Messages.Error("Hello World");
            using(new ProcessingScope(box2, "Pro2"))
            {
                Messages.Error("Hello World");
            }
        }

        Assert.AreEqual(1, Context.Current.MessageHandler.GetEntityMessages(box1).Count);
        Assert.AreEqual(1, Context.Current.MessageHandler.GetEntityMessages(box2).Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ProcessingScopeExecute()
    {
        var box = TestGeomGenerator.CreateBox();
        Assert.IsTrue(ProcessingScope.ExecuteWithGuards(box, "Pro", () =>
        {
            Messages.Error("Hello World");
            return true;
        }));

        Assert.AreEqual(1, Context.Current.MessageHandler.GetEntityMessages(box).Count);
    }
        
    //--------------------------------------------------------------------------------------------------

}
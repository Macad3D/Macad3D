using JetBrains.dotMemoryUnit;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Memory.Interaction;

[TestFixture]
public class ProjectTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupOnNew()
    {
        void __CreateNewModel()
        {
            InteractiveContext.Current.DocumentController.NewModel();
        }

        __CreateNewModel();
        __CreateNewModel();
            
        dotMemory.Check(memory =>
        {
            Assert.AreEqual(1, memory.ObjectsCount<WorkspaceController>(), "Old WorkspaceController is alive");
            Assert.AreEqual(1, memory.ObjectsCount<Workspace>(), "Old Workspace is alive");
            Assert.AreEqual(1, memory.ObjectsCount<Model>(), "Old Model is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CleanupOnNewWithBodies()
    {
        void __CreateAndReleaseModel()
        {
            InteractiveContext.Current.DocumentController.NewModel();

            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            Assert.IsTrue(body.Shape.Make(Shape.MakeFlags.None));

            InteractiveContext.Current.DocumentController.NewModel();
        }

        __CreateAndReleaseModel();
            
        dotMemory.Check(memory =>
        {
            Assert.AreEqual(1, memory.ObjectsCount<Model>(), "Old Model is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "The body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Imprint>(), "The shape is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupContext()
    {
        // Context is already initialized, just re-init
        Context.InitEmpty();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(1, memory.ObjectsCount<Context>(), "Old Context is alive");
            Assert.AreEqual(1, memory.ObjectsCount<ModelController>(), "Old ModelController is alive");
            Assert.AreEqual(0, memory.ObjectsCount<WorkspaceController>(), "Old WorkspaceController is alive");
            Assert.AreEqual(0, memory.ObjectsCount<ViewportController>(), "Old ViewportController is alive");
            Assert.AreEqual(1, memory.ObjectsCount<TestClipboard>(), "Old Clipboard is alive");
            Assert.AreEqual(1, memory.ObjectsCount<ShortcutHandler>(), "Old ShortcutHandler is alive");
        });
    }
}
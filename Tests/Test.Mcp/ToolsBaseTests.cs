using System;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class ToolsBaseTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    #region ResolveBody

    [Test]
    public async Task ResolveBody_ByGuid()
    {
        var body = await FakeTools.Add("Barrel");

        Assert.That(await FakeTools.Resolve(body.Guid.ToString()), Is.SameAs(body));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ResolveBody_ByName()
    {
        var body = await FakeTools.Add("Barrel");

        Assert.That(await FakeTools.Resolve("Barrel"), Is.SameAs(body));
        Assert.That(await FakeTools.Resolve(" Barrel "), Is.SameAs(body));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ResolveBody_AmbiguousName()
    {
        var body1 = await FakeTools.Add("Barrel");
        var body2 = await FakeTools.Add("Other");
        body2.Name = "Barrel"; // The UI allows duplicate names

        var ex = Assert.ThrowsAsync<McpException>(async () => await FakeTools.Resolve("Barrel"));
        Assert.That(ex.Message, Does.Contain("ambiguous")
                                    .And.Contain(body1.Guid.ToString())
                                    .And.Contain(body2.Guid.ToString()));
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("")]
    [TestCase("Unknown")]
    [TestCase("6f9619ff-8b86-d011-b42d-00c04fc964ff")]
    public async Task ResolveBody_NotFound(string reference)
    {
        await FakeTools.Add("Barrel");

        Assert.ThrowsAsync<McpException>(async () => await FakeTools.Resolve(reference));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ResolveBody_RemovedBody()
    {
        var body = await FakeTools.Add("Barrel");
        CoreContext.Current.Document.Remove(body);

        Assert.ThrowsAsync<McpException>(async () => await FakeTools.Resolve(body.Guid.ToString()));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region AddBody

    [Test]
    public async Task AddBody_DefaultNameIsUnique()
    {
        var body1 = await FakeTools.Add(null);
        var body2 = await FakeTools.Add(null);
        body2.Name = body1.Name;
        var body3 = await FakeTools.Add(null);
        await FakeTools.Add(body1.Name);

        Assert.That(body3.Name, Is.Not.EqualTo(body1.Name));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.EqualTo(4));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Rollback

    [Test]
    public void Failure_RevertsChanges()
    {
        Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddThenFail(new McpException("Failed.")));

        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
        Assert.That(CoreContext.Current.UndoHandler.CanUndo, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Failure_KeepsPreviousChanges()
    {
        var body = await FakeTools.Add("Kept");

        Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddThenFail(new McpException("Failed.")));

        Assert.That(CoreContext.Current.Document.EntityCount, Is.EqualTo(1));
        Assert.That(CoreContext.Current.Document.IndexOf(body), Is.Zero);
        Assert.That(CoreContext.Current.UndoHandler.CanUndo, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Failure_KeepsPendingUserChanges()
    {
        var body = await FakeTools.Add("Kept");
        body.Name = "Renamed"; // Changed in the UI, not committed yet

        Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddThenFail(new McpException("Failed.")));

        Assert.That(body.Name, Is.EqualTo("Renamed"));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.EqualTo(1));

        // The user's change became an undo step of its own
        CoreContext.Current.UndoHandler.DoUndo(1);
        Assert.That(body.Name, Is.EqualTo("Kept"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Failure_ReportsCollectedErrors()
    {
        var ex = Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddThenFail(new McpException("Failed."), "Something broke."));

        Assert.That(ex.Message, Does.Contain("Failed.").And.Contain("Something broke."));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Failure_WrapsOtherExceptions()
    {
        var ex = Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddThenFail(new InvalidOperationException("Bad state.")));

        Assert.That(ex.Message, Does.Contain("Bad state."));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EnsureValid_InvalidShape_Throws()
    {
        var ex = Assert.ThrowsAsync<McpException>(async () => await FakeTools.AddInvalid());

        Assert.That(ex.Message, Does.Contain("could not be created"));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    // Exposes the protected helpers of ToolsBase for testing.
    class FakeTools : ToolsBase
    {
        public static Task<Body> Resolve(string reference) 
            => Invoke(() => ResolveBody(reference));

        public static Task<Body> Add(string name)
            => Invoke(() =>
            {
                var body = Body.Create(Box.Create(1, 1, 1));
                AddBody(body, name);
                Commit();
                return body;
            });

        public static Task<int> AddThenFail(Exception exception, string errorMessage = null)
            => Invoke<int>(() =>
            {
                AddBody(Body.Create(Box.Create(1, 1, 1)), "Temporary");
                if (errorMessage != null)
                {
                    Messages.Error(errorMessage);
                }
                throw exception;
            });

        public static Task<int> AddInvalid()
            => Invoke(() =>
            {
                var body = Body.Create(Box.Create(1, 1, 1));
                AddBody(body);
                var fillet = Fillet.Create(body);
                fillet.AddAllEdges();
                fillet.Radius = 10; // Too large for the box
                EnsureValid(body);
                return 0;
            });
    }
}

using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Mcp;
using Macad.Test.Utils;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class SelectionToolsTests
{
    SelectionTools _Tools;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(200);
        _Tools = new SelectionTools();
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task NothingSelected()
    {
        await new PrimitiveTools().CreateBox(10, 10, 10, name: "Box");

        var result = await _Tools.GetSelection();

        Assert.That(result.Bodies, Is.Empty);
        Assert.That(result.ActiveTool, Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SelectedBodies()
    {
        await new PrimitiveTools().CreateBox(10, 10, 10, name: "A");
        await new PrimitiveTools().CreateBox(10, 10, 10, 20, 0, 0, "B");
        var selection = Context.Current.WorkspaceController.Selection;
        selection.SelectEntities([FindBody("A"), FindBody("B")]);

        var result = await _Tools.GetSelection();

        Assert.That(result.Bodies.Select(b => b.Name), Is.EquivalentTo(new[] { "A", "B" }));
        Assert.That(result.Bodies.Single(b => b.Name == "A").Guid, Is.EqualTo(FindBody("A").Guid.ToString()));
        Assert.That(selection.SelectedEntities, Has.Count.EqualTo(2), "selection must not change");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task WithoutViewer_ReturnsEmpty()
    {
        Context.InitWithDefault();
        await new PrimitiveTools().CreateBox(10, 10, 10, name: "Box");

        var result = await _Tools.GetSelection();

        Assert.That(result.Bodies, Is.Empty);
    }
}

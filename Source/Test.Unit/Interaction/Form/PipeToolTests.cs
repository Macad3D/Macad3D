using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Form;

[TestFixture]
public class PipeToolTests
{
    const string _BasePath = @"Interaction\Form\Pipe";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void CreateAndRemoveProfileSketch()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var pipe = TestGeomGenerator.CreatePipe();
        Assert.AreEqual(1, pipe.Operands.Count);
        ctx.WorkspaceController.Selection.SelectEntity(pipe.Body);
        var propPanel = panelMgr.FindFirst<PipePropertyPanel>();

        propPanel.SwitchProfileCommand.Execute(Pipe.ProfileType.Custom);
        Assert.AreEqual(2, pipe.Operands.Count);
        Assert.AreEqual(4, (pipe.Operands[1] as Core.Shapes.Sketch).Points.Count);

        propPanel.SwitchProfileCommand.Execute(Pipe.ProfileType.Circle);
        Assert.AreEqual(1, pipe.Operands.Count);
    }

    //--------------------------------------------------------------------------------------------------

}
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class CopyPasteTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopySameModel()
    {
        var context = InteractiveContext.Current;
        var body1 = Body.Create(Box.Create(1, 1, 1));
        context.Document.Add(body1);

        context.WorkspaceController.Selection.SelectEntity(body1);
        context.WorkspaceController.CopyToClipboard();
        Assert.That(context.Clipboard.ContainsData("Macad.ModelContent.1"));
        Assert.That(context.WorkspaceController.CanPasteFromClipboard());

        var newContent = context.WorkspaceController.PasteFromClipboard();
        Assert.IsNotNull(newContent);
        var body2 = newContent.FirstOrDefault() as Body;
        Assert.IsNotNull(body2);
        Assert.AreNotEqual(body1.Guid, body2.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.Shape.Guid);
        Assert.AreNotEqual(body1.Shape.Guid, body2.RootShape.Guid);
    }

    //--------------------------------------------------------------------------------------------------

}
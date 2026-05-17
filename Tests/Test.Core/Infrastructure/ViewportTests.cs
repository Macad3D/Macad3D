using Macad.Core.Topology;
using NUnit.Framework;
using System.Linq;
using Macad.Core;

namespace Macad.Test.Core.Infrastructure;

[TestFixture]
public class ViewportTests
{
    [Test]
    public void DefaultViewportNames()
    {
        Model model = new();
        Workspace workspace = model.Workspaces.First();
        Assert.That(workspace.Viewports.Count, Is.EqualTo(1));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo(""));
    }

    //--------------------------------------------------------------------------------------------------


}    
using System.Collections.Generic;
using Macad.Interaction;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Memory.Interaction;

[TestFixture]
public class WorkspaceTests
{
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
    public void SwitchingViewportLayouts()
    {
        MemoryAssert.IsCollected(() =>
        {
            HashSet<object> _References = [];

            var ctx = Context.Current;
            TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
            var workspaceController = InteractiveContext.Current.WorkspaceController;
            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, workspaceController.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.DualHorizontal, InteractiveContext.Current.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);
            _References.Add(workspaceController.ViewportControllers[1].V3dView);

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, InteractiveContext.Current.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);
            Assume.That(workspaceController.ViewportControllers[1].V3dView, Is.Null);
            _References.Add(workspaceController.ViewportControllers[2].V3dView);
            _References.Add(workspaceController.ViewportControllers[3].V3dView);
            _References.Add(workspaceController.ViewportControllers[4].V3dView);

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, InteractiveContext.Current.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);
            Assume.That(workspaceController.ViewportControllers[1].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[2].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[3].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[4].V3dView, Is.Null);

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, InteractiveContext.Current.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);
            Assume.That(workspaceController.ViewportControllers[1].V3dView, Is.Null);
            _References.Add(workspaceController.ViewportControllers[2].V3dView);
            _References.Add(workspaceController.ViewportControllers[3].V3dView);
            _References.Add(workspaceController.ViewportControllers[4].V3dView);
            
            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, workspaceController.Workspace);
            Assume.That(workspaceController.ViewportControllers[0].V3dView, Is.Not.Null);
            Assume.That(workspaceController.ViewportControllers[1].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[2].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[3].V3dView, Is.Null);
            Assume.That(workspaceController.ViewportControllers[4].V3dView, Is.Null);

            return _References;
        });
    }
}
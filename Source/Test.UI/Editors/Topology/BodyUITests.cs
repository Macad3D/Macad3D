using System;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Topology
{
    [TestFixture]
    public class BodyUITests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void VisibilityTriggersUndo()
        {
            var _Viewport = MainWindow.Viewport;
            TestDataGenerator.GenerateBox(MainWindow);
            var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.That(bodyPanel, Is.Not.Null);
            var bodyGuid = Pipe.GetValue<Guid>("$Selected.Guid");

            // Hide
            bodyPanel.ClickButton("VisibilityToggle");
            Assert.IsFalse(Pipe.GetValue<bool>($"!{bodyGuid}.IsVisible"));

            // If hidden, then also not selectable
            _Viewport.ClickRelative(0.5, 0.5);
            bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.That(bodyPanel, Is.Null);

            // Undo
            MainWindow.Ribbon.SelectGroup("Edit");
            MainWindow.Ribbon.ClickButton("Undo");

            // Then box is selectable again
            _Viewport.ClickRelative(0.5, 0.5);
            bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.That(bodyPanel, Is.Not.Null);
            Assert.IsTrue(Pipe.GetValue<bool>($"!{bodyGuid}.IsVisible"));
        }
    }
}
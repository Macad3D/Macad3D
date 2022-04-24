using System;
using FlaUI.Core.WindowsAPI;
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
            MainWindow.Ribbon.SelectTab("Edit");
            MainWindow.Ribbon.ClickButton("Undo");

            // Then box is selectable again
            _Viewport.ClickRelative(0.5, 0.5);
            bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.That(bodyPanel, Is.Not.Null);
            Assert.IsTrue(Pipe.GetValue<bool>($"!{bodyGuid}.IsVisible"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ShapeStackDelKey()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.SelectTab("Model");
            MainWindow.Ribbon.ClickButton("CreateOffset");
            Assert.AreEqual("Offset", Pipe.GetValue<string>("$Selected.Shape.Name"));

            var shapePanel = MainWindow.PropertyView.FindPanelByClass("BodyShapePropertyPanel");
            Assert.That(shapePanel, Is.Not.Null);

            shapePanel.SelectTreeItem("ShapeTree", "Offset");
            Pipe.TypeKey(VirtualKeyShort.DELETE);
            Assert.AreEqual("Box", Pipe.GetValue<string>("$Selected.Shape.Name"));
        }

    }
}
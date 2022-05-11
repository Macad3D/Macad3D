﻿using System;
using System.Linq;
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

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ChangeLayer()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.That(bodyPanel, Is.Not.Null);

            var layer = MainWindow.Layers.AddLayer();
            MainWindow.Layers.ToggleIsLocked(layer);
            
            Assert.AreEqual("0 (Default)", Pipe.GetValue<string>("$Selected.Layer.Name"));
            bodyPanel.SelectComboBoxItem("LayerBox", "Unnamed");
            Assert.AreEqual("Unnamed", Pipe.GetValue<string>("$Selected.Layer.Name"));

            // Deselect
            MainWindow.Viewport.ClickRelative(0.1, 0.9);
            Assert.AreEqual(0, MainWindow.Document.GetSelectedItems().Count());

            // Try to reselect, since layer is locked, it should not work
            MainWindow.Viewport.ClickRelative(0.5, 0.5);
            Assert.AreEqual(0, MainWindow.Document.GetSelectedItems().Count());
        }
    }
}
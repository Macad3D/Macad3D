﻿using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Auxiliary
{
    [TestFixture]
    public class DatumPlaneUITests : UITestBase
    {
        [Test]
        public void CreateDatumPlane()
        {
            // Start tool
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateDatumPlane");

            // Check for instance
            Assert.AreEqual(1, Pipe.GetValue<int>("$Context.Document.ChildCount"));
            
            // Check property panel for correct creation
            var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
            Assert.NotNull(panel);
            Assert.AreEqual("DatumPlane_1", panel.GetValue<string>("EntityName"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void PropertyPanelDimension()
        {
            // Start tool
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateDatumPlane");
            var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
            Assert.NotNull(panel);

            // Edit size, keep aspect
            Assert.IsTrue(panel.GetToggle("KeepAspectRatio"));
            panel.EnterValue("DimensionX", 50.0);
            Assert.AreEqual(50.0, panel.GetValue<double>("DimensionY"));
            panel.EnterValue("DimensionY", 25.0);
            Assert.AreEqual(25.0, panel.GetValue<double>("DimensionX"));

            // Edit size, no aspect
            panel.ClickToggle("KeepAspectRatio");
            Assert.IsFalse(panel.GetToggle("KeepAspectRatio"));
            panel.EnterValue("DimensionX", 10.0);
            Assert.AreEqual(25.0, panel.GetValue<double>("DimensionY"));
            panel.EnterValue("DimensionY", 15.0);
            Assert.AreEqual(10.0, panel.GetValue<double>("DimensionX"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LoadImage()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\Image_300x150.png"));

            // Start tool
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateDatumPlane");
            var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
            Assert.NotNull(panel);

            // Load without aspect correction
            Assert.IsTrue(panel.GetToggle("KeepAspectRatio"));
            panel.ClickButton("LoadImageFile");

            Assert.IsTrue(FileDialogAdaptor.IsDialogOpen(MainWindow));
            var fileDialog = new FileDialogAdaptor(MainWindow);
            fileDialog.Load(path);

            Assert.IsTrue(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
            var taskDialog = new TaskDialogAdaptor(MainWindow);
            taskDialog.ClickButton(TaskDialogAdaptor.Button.No);

            Assert.IsNotEmpty(Pipe.GetValue<string>("$Selected.ImageFilePath"));
            Assert.AreEqual(100.0, panel.GetValue<double>("DimensionX"));
            Assert.AreEqual(100.0, panel.GetValue<double>("DimensionY"));

            // Load with aspect correction
            Assert.IsTrue(panel.GetToggle("KeepAspectRatio"));
            panel.ClickButton("LoadImageFile");

            Assert.IsTrue(FileDialogAdaptor.IsDialogOpen(MainWindow));
            fileDialog = new FileDialogAdaptor(MainWindow);
            fileDialog.Load(path);

            Assert.IsTrue(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
            taskDialog = new TaskDialogAdaptor(MainWindow);
            taskDialog.ClickButton(TaskDialogAdaptor.Button.Yes);

            Assert.IsNotEmpty(Pipe.GetValue<string>("$Selected.ImageFilePath"));
            Assert.AreEqual(100.0, panel.GetValue<double>("DimensionX"));
            Assert.AreEqual(50.0, panel.GetValue<double>("DimensionY"));
        }
    }
}
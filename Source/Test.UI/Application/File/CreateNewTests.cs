using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.File
{
    [TestFixture]
    public class CreateNewTests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateNewModelNoChange()
        {
            MainWindow.Ribbon.ClickFileMenuItem("NewModel");

            // Save model?
            Assert.That(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow), Is.False);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateNewModelCancel()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.ClickFileMenuItem("NewModel");

            // Save model?
            var dlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
            dlg.ClickButton(TaskDialogAdaptor.Button.Cancel);

            // Check that button box is still there
            Assert.AreEqual(1, MainWindow.Document.GetBodyItems().Count());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateNewModelNoSave()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.ClickFileMenuItem("NewModel");

            // Save model?
            var dlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
            dlg.ClickButton(TaskDialogAdaptor.Button.No);

            // Check that button box is away
            Assert.AreEqual(0, MainWindow.Document.GetBodyItems().Count());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateNewModelSaveCancel()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.ClickFileMenuItem("NewModel");

            // Save model?
            var taskDlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(taskDlg.Title, Is.EqualTo("Unsaved Changes"));
            taskDlg.ClickButton(TaskDialogAdaptor.Button.Yes);

            var fileDlg = new FileDialogAdaptor(MainWindow);
            Assert.That(fileDlg.Title, Is.EqualTo("Saving Model..."));
            fileDlg.ClickButton(FileDialogAdaptor.Button.Cancel);

            // Check that button box is still there
            Assert.AreEqual(1, MainWindow.Document.GetBodyItems().Count());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateNewModelSave()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.ClickFileMenuItem("NewModel");

            // Save model?
            var taskDlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(taskDlg.Title, Is.EqualTo("Unsaved Changes"));
            taskDlg.ClickButton(TaskDialogAdaptor.Button.Yes);

            FileDialogAdaptor.DoSaveModel(MainWindow);

            // Check that button box is away
            Assert.AreEqual(0, MainWindow.Document.GetBodyItems().Count());
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ModelSaveAs()
        {
            TestDataGenerator.GenerateBox(MainWindow);

            // Save model
            MainWindow.Ribbon.ClickFileMenuItem("SaveModel");
            FileDialogAdaptor.DoSaveModel(MainWindow);

            // Save model as
            MainWindow.Ribbon.ClickFileMenuItem("SaveModelAs");
            var pathname = FileDialogAdaptor.DoSaveModel(MainWindow, "SavedAsModel");
            Assert.That(System.IO.File.Exists(pathname));
            Assert.That(MainWindow.Title.StartsWith("SavedAsModel "));
        }

        //--------------------------------------------------------------------------------------------------

    }
}
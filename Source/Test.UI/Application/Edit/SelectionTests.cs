using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit
{
    [TestFixture]
    public class SelectionTests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SyncAfterDuplicate()
        {
            TestDataGenerator.GenerateBox(MainWindow);
            MainWindow.Ribbon.SelectGroup("Edit");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("Duplicate"));
            MainWindow.Ribbon.ClickButton("Duplicate");

            // Check that box is duplicated
            Assert.AreEqual(2, MainWindow.Document.GetBodyItems().Count());
            Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());

            // Select first item
            MainWindow.Document.SelectItem("Box_1");

            // Only one item should be selected
            Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
            Assert.AreEqual("Box_1", Pipe.GetValue<string>("$Selected.Name"));
        }

        //--------------------------------------------------------------------------------------------------

    }
} 
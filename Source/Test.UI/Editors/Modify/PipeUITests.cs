using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Modifier
{
    [TestFixture]
    public class PipeUITests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateFromSketch()
        {
            _CreatePipe();

            Assert.AreEqual("Pipe", Pipe.GetValue<string>("$Selected.Shape.Name"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void PropertyPanel()
        {
            _CreatePipe();

            var _Panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
            Assert.That(_Panel, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void InitCustomProfileSketch()
        {
            _CreatePipe();

            var _Panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
            Assert.That(_Panel, Is.Not.Null);

            _Panel.ClickButton("ProfileCustom");
            Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
            Assert.AreEqual("Profile", Pipe.GetValue<string>("$Sketch.Name"));
            MainWindow.Ribbon.ClickButton("CloseSketchEditor");

            Assert.AreEqual("Custom", Pipe.GetValue<string>("$Selected.Shape.Name"));
           Assert.AreEqual(2, Pipe.GetValue<int>("$Selected.Shape.Operands.Count"));
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        void _CreatePipe()
        {
            TestDataGenerator.GenerateSketch(MainWindow);
            MainWindow.Ribbon.ClickButton("CloseSketchEditor");

            // Create pipe on existing sketch
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreatePipe");
        }
    }
}
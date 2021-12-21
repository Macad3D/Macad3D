using System.IO;
using Macad.Core.Drawing;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Exchange.Svg;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Drawings
{
    [TestFixture]
    public class PipeDrawingTests
    {
        const string _BasePath = @"Drawing\PipeDrawing";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FindPipe()
        {
            Assert.IsNull(PipeDrawing.FindPipeModifier(null));

            var body1 = TestGeomGenerator.CreateImprint().Body;
            Assert.IsNull(PipeDrawing.FindPipeModifier(body1));

            var pipe = TestGeomGenerator.CreatePipe();
            var body2 = pipe.Body;
            Assert.AreSame(pipe, PipeDrawing.FindPipeModifier(body2));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SimplePipe()
        {
            var pipe = TestGeomGenerator.CreatePipe();
            var drawing = PipeDrawing.Create(pipe.Body);
            Assert.IsNotNull(drawing.Extents);
            var svg = _Export(drawing);
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimplePipe.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectBestPosition()
        {
            var sketch = Sketch.Create();
            SketchBuilder sb = new SketchBuilder(sketch);
            sb.StartPath(0.0, -48.0);
            sb.LineTo(0.0, 5.0);
            sb.LineTo(-9.0, 4.0);
            sb.LineTo(-18.0, -7.0);
            var body = Body.Create(sketch);
            var pipe = Pipe.Create(body);
            Assume.That(pipe.Make(Shape.MakeFlags.None));

            var drawing = PipeDrawing.Create(pipe.Body);
            Assert.IsNotNull(drawing.Extents);
            var svg = _Export(drawing);
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SelectBestPosition.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        #region Helper
        
        public MemoryStream _Export(PipeDrawing pipeDrawing)
        {
            Drawing drawing = new()
            {
                Name = "Pipe"
            };

            drawing.Add(pipeDrawing);

            return SvgDrawingExporter.Export(drawing);
        }

        #endregion
    }
}
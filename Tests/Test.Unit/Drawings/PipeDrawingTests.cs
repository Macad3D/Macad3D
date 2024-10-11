using System.IO;
using Macad.Core.Drawing;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Exchange.Svg;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Drawings;

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
        Assert.That(pipe.Make(Shape.MakeFlags.None));

        var drawing = PipeDrawing.Create(pipe.Body);
        Assert.IsNotNull(drawing.Extents);
        var svg = _Export(drawing);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SelectBestPosition.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(true, true, TestName = "BetweenArcs")]
    [TestCase(true, false, TestName = "AtBegin")]
    [TestCase(false, true, TestName = "AtEnd")]
    public void SkipWarpedLinearSegment(bool startLine, bool endLine)
    {
        var sketch = Sketch.Create();
        SketchBuilder sb = new SketchBuilder(sketch);
        sb.StartPath(-13.32, 38.13);
        if (startLine)
        {
            sb.LineTo(-15.01, 39.52);
        }

        sb.ArcTo(-20.8, 31.19, -24.02, 38.89);
        if (endLine)
        {
            sb.LineTo(-19.21, 29.96);
        }

        var body = Body.Create(sketch);
        var pipe = Pipe.Create(body);
        Assert.That(pipe.Make(Shape.MakeFlags.None));

        var drawing = PipeDrawing.Create(pipe.Body);
        Assert.IsNotNull(drawing.Extents);
        var svg = _Export(drawing);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, $"SkipWarpedLinearSegment{(startLine?1:0)}{(endLine?1:0)}.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
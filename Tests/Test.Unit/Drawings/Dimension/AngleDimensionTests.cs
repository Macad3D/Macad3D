using System.IO;
using Macad.Core.Drawing;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Exchange.Svg;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Drawings.Dimension;

public class AngleDimensionTests
{
    const string _BasePath = @"Drawing\Dimension\Angle";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExtentToBottom()
    {
        var dim = new AngleDimension()
        {
            FirstPoint = new Pnt2d(-8, 5),
            SecondPoint = new Pnt2d(10, 10),
            CenterPoint = new Pnt2d(0, 30),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToBottom.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void ExtentToTop()
    {
        var dim = new AngleDimension()
        {
            FirstPoint = new Pnt2d(-8, -5),
            SecondPoint = new Pnt2d(10, -10),
            CenterPoint = new Pnt2d(0, -30),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToTop.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScaleLabeling()
    {
        var dim = new AngleDimension()
        {
            FirstPoint = new Pnt2d(-1, -5),
            SecondPoint = new Pnt2d(1, -10),
            CenterPoint = new Pnt2d(0, -30),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ScaleLabeling.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNotToScale()
    {
        var dim = new AngleDimension()
        {
            FirstPoint = new Pnt2d(-8, -5),
            SecondPoint = new Pnt2d(10, -10),
            CenterPoint = new Pnt2d(0, -30),
            IsNotToScale = true
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "IsNotToScale.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void ReversedCoordinates()
    {
        var dim = new AngleDimension()
        {
            SecondPoint = new Pnt2d(-8, 5),
            FirstPoint = new Pnt2d(10, 10),
            CenterPoint = new Pnt2d(0, 30),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ReversedCoordinates.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Sense()
    {
        var sketch = Sketch.Create();
        SketchBuilder sb = new SketchBuilder(sketch);
        sb.StartPath(-3, 16);
        sb.LineTo(-4, -7.5);
        sb.LineTo(0, -7.5);
        var body = Body.Create(sketch);
        var pipe = Pipe.Create(body);
        Assert.That(pipe.Make(Shape.MakeFlags.None));

        var pipeDrawing = PipeDrawing.Create(pipe.Body);

        Drawing drawing = new();
        drawing.Add(pipeDrawing);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Sense.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

}
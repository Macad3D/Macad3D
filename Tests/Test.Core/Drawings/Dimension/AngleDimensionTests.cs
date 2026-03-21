using Macad.Core.Drawing;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Exchange.Svg;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System;
using System.IO;
using System.Text;

namespace Macad.Test.Core.Drawings.Dimension;

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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToBottom.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToTop.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ScaleLabeling.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "IsNotToScale.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ReversedCoordinates.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Sense.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    static MemoryStream NormalizeSvg(MemoryStream svg)
    {
        svg.Position = 0;
        string text;

        using (var reader = new StreamReader(svg, Encoding.UTF8, true, 1024, leaveOpen: true))
        {
            text = reader.ReadToEnd();
        }

        const string prefix = "id=\"Drawing_";
        int index = text.IndexOf(prefix, StringComparison.Ordinal);

        if (index >= 0)
        {
            int start = index + prefix.Length;
            int end = text.IndexOf('"', start);

            if (end > start)
            {
                text = text.Remove(index, end - index + 1).Insert(index, "id=\"Drawing\"");
            }
        }

        return new MemoryStream(Encoding.UTF8.GetBytes(text));
    }

    //--------------------------------------------------------------------------------------------------
}
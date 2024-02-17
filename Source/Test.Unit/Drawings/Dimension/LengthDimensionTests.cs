using System.IO;
using Macad.Core.Drawing;
using Macad.Exchange.Svg;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Drawings.Dimension;

[TestFixture]
public class LengthDimensionTests
{
    const string _BasePath = @"Drawing\Dimension\Length";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExtentToBottom()
    {
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, 5),
            SecondPoint = new Pnt2d(10, 10),
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
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, -5),
            SecondPoint = new Pnt2d(10, -10),
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
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-3, -0.5),
            SecondPoint = new Pnt2d(3, -3),
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
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, -5),
            SecondPoint = new Pnt2d(10, -10),
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
        var dim = new LengthDimension()
        {
            SecondPoint = new Pnt2d(-10, 5),
            FirstPoint = new Pnt2d(10, 10),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ReversedCoordinates.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

}
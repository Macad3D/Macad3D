using System.IO;
using Macad.Core.Drawing;
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

}
using Macad.Core.Drawing;
using Macad.Exchange.Svg;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using System;
using System.IO;
using System.Text;

namespace Macad.Test.Core.Drawings.Dimension;

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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToBottom.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExtentToTop.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ScaleLabeling.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "IsNotToScale.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var normalized = NormalizeSvg(svg);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ReversedCoordinates.svg"), normalized, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
using System.Collections.Generic;
using System.Linq;
using Macad.Core.Geom;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Geom;

[TestFixture]
public class PolyAlgoTests
{
    [Test]
    public void PolygonEarClipping()
    {
        /*             6 --- 1
         *           /     /
         *        /     /
         *      5     2
         *        \     \
         *           \     \
         *             4 --- 3
         */
        var vertices = new List<Pnt>
        {
            new Pnt( double.NaN, double.NaN, double.NaN ), // Dummy vertex to test indexing
            new Pnt( 1.0, -1.0, -0.0),
            new Pnt(-0.2,  0.0,  0.0),
            new Pnt( 1.0,  1.0,  0.0),
            new Pnt( 0.0,  1.0,  0.0),
            new Pnt(-1.0,  0.0,  0.0),
            new Pnt( 0.0, -1.0, -0.0),
        };

        var indices = new List<int>
            {1, 2, 3, 4, 5, 6};

        var expected = new List<int>
        {
            1, 6, 5,
            5, 4, 3,
            5, 3, 2,
            5, 2, 1
        };

        var triangulator = new EarClippingTriangulator();
        var result = triangulator.DoTriangulation(vertices, indices);
        Assert.NotNull(result);
        Assert.That(expected.SequenceEqual(result));

        // Change direction
        indices = new List<int>
            {6, 5, 4, 3, 2, 1};
            
        expected = new List<int>
        {
            1, 6, 5,
            5, 4, 3,
            5, 3, 2,
            5, 2, 1
        };

        result = triangulator.DoTriangulation(vertices, indices);
        Assert.NotNull(result);
        Assert.That(expected.SequenceEqual(result));
    }
}
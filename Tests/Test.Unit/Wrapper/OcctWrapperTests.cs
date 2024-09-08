using System.Linq;
using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper;

[TestFixture]
public class OcctWrapperTests
{
    [Test]
    public void TopoDSEquality()
    {
        var shape = new Box
        {
            DimensionX = 10,
            DimensionY = 5,
            DimensionZ = 2
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        var ocShape = shape.GetBRep();

        var edges1 = ocShape.Edges();
        var edges2 = ocShape.Edges();
        Assert.AreNotEqual(edges1[1], edges2[0]);
        Assert.AreEqual(edges1[0], edges2[0]);

        var faces1 = ocShape.Faces();
        var faces2 = ocShape.Faces();
        Assert.AreNotEqual(faces1[1], faces2[0]);
        Assert.AreEqual(faces1[0], faces2[0]);

        var trsf = new Trsf(new Vec(1, 0, 0));
        var ocShape2 = ocShape.Moved(new TopLoc_Location(trsf));
        Assert.AreNotEqual(ocShape.Location(), ocShape2.Location());
        Assert.AreEqual(edges1[0].Location(), edges2[0].Location());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReferenceValues()
    {
        Bnd_Box2d box = new Bnd_Box2d();
        box.Add(new Pnt2d(1, 2));
        box.Add(new Pnt2d(-1, -2));
        double xmin = 0, ymin = 0, xmax = 0, ymax = 0;
        box.Get(ref xmin, ref ymin, ref xmax, ref ymax);
        Assert.AreEqual(-1, xmin);
        Assert.AreEqual(1, xmax);
        Assert.AreEqual(-2, ymin);
        Assert.AreEqual(2, ymax);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DowncastedReturnType()
    {
        var shape = TestGeomGenerator.CreateBox().GetBRep();
        var adaptor = shape.Edges().First().Adaptor();
        var curve = adaptor.Curve().Curve();
        Assert.IsNotNull(curve);
        Assert.IsInstanceOf<Geom_Curve>(curve);
        Assert.IsInstanceOf<Geom_Line>(curve);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IndexEnumerator()
    {
        TColStd_Array1OfInteger arrayOfInt = new TColStd_Array1OfInteger(1,3);
        arrayOfInt.SetValue(1, 11);
        arrayOfInt.SetValue(2, 12);
        arrayOfInt.SetValue(3, 13);

        var list = arrayOfInt.ToList();
        Assert.AreEqual(3, list.Count);
        Assert.AreEqual(11, list[0]);
        Assert.AreEqual(12, list[1]);
        Assert.AreEqual(13, list[2]);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IteratorEnumerator()
    {
        TColStd_ListOfInteger listOfInt = new TColStd_ListOfInteger();
        listOfInt.Append(11);
        listOfInt.Append(12);
        listOfInt.Append(13);

        var list = listOfInt.ToList();
        Assert.AreEqual(3, list.Count);
        Assert.AreEqual(11, list[0]);
        Assert.AreEqual(12, list[1]);
        Assert.AreEqual(13, list[2]);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DumpJsonToString()
    {
        var shape = TestGeomGenerator.CreateBox().GetBRep();
        using StringWriter sw = new();
        shape.DumpJson(sw);
        var s = sw.ToString();
        Assert.That(s.Length > 0);
        Assert.That(s.Contains("className\": \"TopoDS_Shape"));
    }
}
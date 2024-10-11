using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Assemble;

[TestFixture]
public class HalvedJointTests
{
    const string _BasePath = @"Modeling\Assemble\HalvedJoint";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossSameHeight()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CrossSameHeight01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CrossSameHeight02"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossDiffHeight([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, order1 ? 4 : 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, order1 ? 2 : 4), new Pnt(-1, -5, 0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"CrossDiffHeight{filePrefix}1"));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"CrossDiffHeight{filePrefix}2"));
    }    
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossDiffPosition([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 6), new Pnt(-5, -1, order1 ?  0 : -2));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 6), new Pnt(-1, -5, order1 ? -2 :  0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"CrossDiffPosition{filePrefix}1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"CrossDiffPosition{filePrefix}2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossNoWayOut()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 4), new Pnt(-5, -1,  0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 6), new Pnt(-1, -5, -1));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        var messages = Context.Current.MessageHandler.GetEntityMessages(first);
        Assert.IsNotNull(messages);
        Assert.IsTrue(messages[0].Text.Contains("Both shapes need to have a side to be opened by the common."));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossTwoTimes()
    {
        var sketch = Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Rectangle(-10, -10, 10, 10);
        sb.Rectangle(-8,  -8, 8,  8);
        var body1 = Body.Create(sketch);
        var extrude = Extrude.Create(body1);
        extrude.Depth = 2.0;
        var body2 = TestGeomGenerator.CreateBody(Box.Create(22, 2, 2), new Pnt(-11, 0, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CrossTwoTimes01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CrossTwoTimes02"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CornerSameHeight()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-1, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -1, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CornerSameHeight01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CornerSameHeight02"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CornerDiffHeight([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, order1 ? 4 : 2), new Pnt(-1, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, order1 ? 2 : 4), new Pnt(-1, -1, 0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"CornerDiffHeight{filePrefix}1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"CornerDiffHeight{filePrefix}2"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CornerDiffPosition([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 4), new Pnt(-1, -1, order1 ?  0 : -2));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 4), new Pnt(-1, -1, order1 ? -2 : 0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"CornerDiffPosition{filePrefix}1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"CornerDiffPosition{filePrefix}2"));
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TeeSameHeight()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -1, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "TeeSameHeight01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "TeeSameHeight02"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TeeDiffHeight([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, order1 ? 4 : 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, order1 ? 2 : 4), new Pnt(-1, -1, 0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"TeeDiffHeight{filePrefix}1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"TeeDiffHeight{filePrefix}2"));
    }
                    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TeeDiffPosition([Values(true, false)] bool order1, [Values(true, false)] bool order2)
    {
        string filePrefix = order2 ? order1 ? "0" : "1"
                                   : order1 ? "2" : "3";

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 4), new Pnt(-5, -1, order1 ?  0 : -2));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 4), new Pnt(-1, -1, order1 ? -2 :  0));

        var (first, second) = order2 ? HalvedJoint.Create(body1, body2) 
                                     : HalvedJoint.Create(body2, body1);

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"TeeDiffPosition{filePrefix}1"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, $"TeeDiffPosition{filePrefix}2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ParallelSameHeight()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 0, 0, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 8, 0, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "ParallelSameHeight01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "ParallelSameHeight02"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MultifaceSameHeight()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(5,  2, 2), new Pnt(-5, -1, 0));
        var mirror = Mirror.Create(body1, body1.Shape.GetSubshapeReference(SubshapeType.Face, 1));
        mirror.MergeFaces = false;
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "MultifaceSameHeight01"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void Ratio()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        first.Ratio = 0.2;
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "Ratio01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "Ratio02"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CrossRollAngle()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0.5), new XYZ(0, 0, 5.0.ToRad()));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, "CrossRollAngle01"));

        Assert.IsTrue(second.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(second, Path.Combine(_BasePath, "CrossRollAngle02"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OrientationRef([Values(0, 1, 2, 3, 4)] int faceIndex)
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 0, 0, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 8, 0, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        first.ReferenceFaces = new [] { faceIndex };

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(first, Path.Combine(_BasePath, $"OrientationRef{faceIndex}1"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OrientationRefInvalid()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 0, 0, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt( 8, 0, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        first.ReferenceFaces = new [] { 5 };

        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        var messages = Context.Current.MessageHandler.GetEntityMessages(first);
        Assert.IsNotNull(messages);
        Assert.IsTrue(messages[0].Text.Contains("The orientation reference is not valid anymore."));
    }
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void Clone()
    {
        var model = CoreContext.Current.Document;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0));
        model.Add(body1);
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));
        model.Add(body2);
        HalvedJoint.Create(body1, body2);

        var clones = InteractiveContext.Current.DocumentController.Duplicate([body2], new CloneOptions(cloneReferencedBodies: false)).ToList();
        var third = (clones[0] as Body)?.Shape as HalvedJoint;
        Assert.That(third != null);
        third.Body.Position = new Pnt(-5, -5, 0);

        Assert.AreEqual(body1, (third.Operands[1] as BodyShapeOperand)?.Body);
        Assert.AreEqual(third.Body, ((body1.Shape as ModifierBase)?.Operands[1] as BodyShapeOperand)?.Body);

        Assert.IsTrue(body1.Shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(body1.Shape, Path.Combine(_BasePath, "Clone01"));

        Assert.IsTrue(third.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(third, Path.Combine(_BasePath, "Clone03"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CloneBothBodies()
    {        
        var model = CoreContext.Current.Document;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0));
        model.Add(body1);
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));
        model.Add(body2);
        HalvedJoint.Create(body1, body2);
        var clones = InteractiveContext.Current.DocumentController.Duplicate([body1, body2]).ToList();

        Assert.That(clones.Count, Is.EqualTo(2));
        Assert.That(clones, Is.All.Not.Null);
        var clone1 = clones[0] as Body;
        var clone2 = clones[1] as Body;
        Assert.That((clone1.RootShape as HalvedJoint).AssociatedShape.Body, Is.EqualTo(clone2));
        Assert.That((clone2.RootShape as HalvedJoint).AssociatedShape.Body, Is.EqualTo(clone1));
        Assert.That((clone1.RootShape as HalvedJoint).Operands[0], Is.Not.TypeOf<HalvedJoint>());
        Assert.That((clone2.RootShape as HalvedJoint).Operands[0], Is.Not.TypeOf<HalvedJoint>());
        Assert.That(body1.Shape.Make(Shape.MakeFlags.None));
    }
        
    //--------------------------------------------------------------------------------------------------
    
}
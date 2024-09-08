using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils;

public class TestGeomGenerator
{
    public static Body CreateBody(Shape shape, Pnt? position=null, XYZ? rotation=null )
    {
        var body = Body.Create(shape);

        if (position != null)
        {
            body.Position = position.Value;
        }

        if (rotation != null)
        {
            body.Rotation = new Quaternion(rotation.Value.X, rotation.Value.Y, rotation.Value.Z);
        }

        return body;
    }

    //--------------------------------------------------------------------------------------------------

    public static Box CreateBox()
    {
        var box = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };

        var body = Body.Create(box);

        return box;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static Cylinder CreateCylinder()
    {
        var cylinder = new Cylinder()
        {
            Radius = 10,
            Height = 10
        };

        var body = Body.Create(cylinder);

        return cylinder;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static Sphere CreateSphere()
    {
        var sphere = new Sphere()
        {
            Radius = 10,
        };

        var body = Body.Create(sphere);

        return sphere;
    }

    //--------------------------------------------------------------------------------------------------

    public static Imprint CreateImprint(TestSketchGenerator.SketchType sketchType = TestSketchGenerator.SketchType.Circle)
    {
        var baseShape = new Box
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 5,
        };
        var body = CreateBody(baseShape, new Pnt(-10, -10, 0));

        var imprint = Imprint.Create(body, baseShape.GetSubshapeReference(SubshapeType.Face, 5));

        var sketch = imprint.Operands[1] as Sketch;
        Assert.IsNotNull(sketch);

        TestSketchGenerator.FillSketch(sketch, sketchType);

        return imprint;
    }

    //--------------------------------------------------------------------------------------------------

    public static Extrude CreateExtrude(TestSketchGenerator.SketchType sketchType = TestSketchGenerator.SketchType.Circle)
    {
        var sketch = new Sketch();
        var body = CreateBody(sketch);

        TestSketchGenerator.FillSketch(sketch, sketchType);

        return Extrude.Create(body);
    }

    //--------------------------------------------------------------------------------------------------

    public static (Body target, IShapeOperand[] operands) CreateBooleanBodies(bool bigsize)
    {
        var target = Body.Create(new Box()
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 10,
        });
        target.Position = new Pnt(-10, -10, 0);

        var operands = new IShapeOperand[2];
        var body = Body.Create(new Cylinder()
        {
            Radius = bigsize ? 20 : 10,
            Height = 15
        });
        body.Position = new Pnt(10, 10, 0);
        operands[0] = new BodyShapeOperand(body);

        body = Body.Create(new Sphere()
        {
            Radius = 15
        });
        body.Position = new Pnt(-10, -10, 0);
        operands[1] = new BodyShapeOperand(body);

        return (target, operands);
    }
                
    //--------------------------------------------------------------------------------------------------

    public static Body[] CreateBoxCylinderSphere()
    {
        var body1 = Body.Create(new Box()
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 10,
        });
        body1.Position = new Pnt(-20, -10, 0);

        var body2 = Body.Create(new Cylinder()
        {
            Radius = 20,
            Height = 15
        });
        body2.Position = new Pnt(20, -10, 0);

        var body3 = Body.Create(new Sphere()
        {
            Radius = 15
        });
        body3.Position = new Pnt(0, 20, 0);

        return new[] {body1, body2, body3};
    }

    //--------------------------------------------------------------------------------------------------

    public static Pipe CreatePipe()
    {
        var sketch = Sketch.Create();
        var body = Body.Create(sketch);
        var sb = new SketchBuilder(sketch);
        sb.StartPath(0, 0);
        sb.LineTo(10, 0);
        sb.LineTo(15, 5);
        sb.LineTo(25, 10);
        sb.LineTo(22, 3);

        var pipe = Pipe.Create(body);
        pipe.Profile = Pipe.ProfileType.HollowCircle;
        return pipe;
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanCut CreateHollowCylinder()
    {
        var cylinder = new Cylinder()
        {
            Radius = 10,
            Height = 10
        };
        var cylinder2 = new Cylinder()
        {
            Radius = 7,
            Height = 10
        };

        var body = Body.Create(cylinder);
        return BooleanCut.Create(body, cylinder2);
    }

    //--------------------------------------------------------------------------------------------------

    public static Revolve CreateRevolve()
    {
        var sketch = new Sketch();
        var body = CreateBody(sketch, new Pnt(10, 0, 0));

        SketchBuilder sb = new SketchBuilder(sketch);
        sb.StartPath(0, 30);
        sb.LineTo(20, 30);
        sb.ArcTo(30, 0, 30, 20);
        sb.BezierTo(0, -20, 10, 0);
        sb.LineTo(5, 0);
        sb.ClosePath();

        var revolve = Revolve.Create(body);
        revolve.Axis = Revolve.RevolveAxis.LocalY;
        revolve.Offset = new Vec(0, 0, 10);
        return revolve;
    }

    //--------------------------------------------------------------------------------------------------

    public static CrossSection CreateCrossSection()
    {
        var cylinder = new Cylinder()
        {
            Radius = 10,
            Height = 115
        };
        var body = Body.Create(cylinder);
        var cylinder2 = new Cylinder()
        {
            Radius = 3.5,
            Height = 116
        };
        BooleanCut.Create(body, cylinder2);
        body.Position = new Pnt(-140, 0, 26);
        Quaternion rotation = new Quaternion(0.0, -43.0.ToRad(), -34.0.ToRad());
        var plane = new Pln(rotation.ToAx3(new Pnt(0, 0, 22.5)));
        var section = CrossSection.Create(body, plane, true);
        Assert.IsNotNull(section);
        return section;
    }

    //--------------------------------------------------------------------------------------------------

    public static Loft CreateLoft()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});
        Assert.IsNotNull(loft);
        return loft;
    }

    //--------------------------------------------------------------------------------------------------

}
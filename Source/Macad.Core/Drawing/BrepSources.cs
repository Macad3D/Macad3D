using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Drawing;

public interface IBrepSource
{
    IEnumerable<TopoDS_Shape> GetBreps();
}
    
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public readonly struct TopoDSBrepSource : IBrepSource
{
    public TopoDS_Shape[] Shapes { get; }

    public TopoDSBrepSource(params TopoDS_Shape[] shapes)
    {
        Shapes = shapes;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TopoDS_Shape> GetBreps()
    {
        if(Shapes == null)
            yield break;

        foreach (var shape in Shapes)
        {
            yield return shape;
        }
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public readonly struct BodyBrepSource : IBrepSource
{
    public Body Body { get; }

    public BodyBrepSource(Body body)
    {
        Body = body;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TopoDS_Shape> GetBreps()
    {
        var shape = Body?.GetTransformedBRep();
        if(shape == null)
            yield break;
        yield return shape;
    }
}

//--------------------------------------------------------------------------------------------------
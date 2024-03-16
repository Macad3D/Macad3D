using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Drawing;

public class PipeDrawing : DrawingElement
{
    #region Statics

    public static Pipe FindPipeModifier(Body body)
    {
        if (body == null)
        {
            return null;
        }

        var shape = body.RootShape;

        while(shape != null)
        {
            if (shape is Pipe pipe)
            {
                return pipe;
            }

            shape = shape.Predecessor as Shape;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    const double ExtensionLength = 10.0;
    const double BendAllowanceScale = 0.9;
    const double BendAllowanceThreshold = 0.175; // ~10°

    Body _Body;
    TopoDS_Shape _PipeShape;
    IList<Pipe.ArcInfo> _ArcInfos;
    IList<TopoDS_Wire> _SpineWires;
    Geom_Plane _Plane;
    TopoDS_Shape _Section;
    readonly List<DrawingElement> _Elements = new();

    //--------------------------------------------------------------------------------------------------

    public static PipeDrawing Create(Body body)
    {
        return new PipeDrawing
        {
            _Body = body
        };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    public bool _EnsureElements()
    {
        if (_Elements.Count > 0)
            return true;

        _Elements.Clear();

        if (!(_InitMake() 
              && _MakeSection()))
        {
            Messages.Error("The pipe drawing could not be generated.");
            return false;
        }
                        
        // Contour
        _Elements.Add(new BRepDrawing()
        {
            Name = $"Contour",
            Source = new TopoDSBrepSource(_Section),
            Stroke = new StrokeStyle(Color.Black, 0.05f, LineStyle.Solid),
            Fill = new FillStyle(Color.Black)
        });
            
        // Dimensions
        foreach (var wire in _SpineWires)
        {
            _AddDimensions(wire);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _InitMake()
    {
        var pipe = FindPipeModifier(_Body);
        if (pipe == null)
        {
            Messages.Error("Pipe Drawing processor requires a Pipe modifier in the shape stack of the owner body.");
            return false;
        }

        _PipeShape = pipe.GetBRep();
        if (pipe.HasErrors || _PipeShape == null)
        {
            Messages.Error("The shape does not generate valid data.");
            return false;
        }

        _ArcInfos = pipe.GetArcInfos();
        if (_ArcInfos == null || _ArcInfos.Count == 0)
        {
            Messages.Error("The shape does not generate valid data.");
            return false;
        }

        _SpineWires = pipe.GetSpineWires();
        if (_SpineWires == null || _SpineWires.Count == 0)
        {
            Messages.Error("The shape does not generate valid data.");
            return false;
        }

        var edges = pipe.GetOperandWires().SelectMany(wire => wire.Edges());
        if (!Topo2dUtils.GetPlaneOfEdges(edges, out _Plane))
        {
            Messages.Error("The path of the pipe does not lie on the same plane.");
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    bool _MakeSection()
    {
        // Create contour
        var cutPlaneFace = new TopoDS_Face();
        new BRep_Builder().MakeFace(cutPlaneFace, _Plane, 1e-7);

        var common = new BRepAlgoAPI_Common(_PipeShape, cutPlaneFace);
        if (!common.IsDone())
        {
            Messages.Error("Cannot create contour from pipe shape.");
            return false;
        }
        _Section = common.Shape();

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    void _Invalidate()
    {
        _Elements.Clear();
        Extents = null;
    }

    //--------------------------------------------------------------------------------------------------

    AngleDimension _CreateAngleDimension(Pipe.ArcInfo arcInfo, Pnt2d p1, Pnt2d p2)
    {
        double u = 0, v = 0;
        ElSLib.Parameters(Pln.XOY, arcInfo.Center, ref u, ref v);
        Pnt2d pc = new(u, v);
        Dir2d leg1 = new Vec2d(pc, p1).ToDir();
        Dir2d leg2 = new Vec2d(pc, p2).ToDir();

        if (arcInfo.Angle.Abs() > BendAllowanceThreshold)
        {
            // Apply allowance  
            ElSLib.Parameters(Pln.XOY, arcInfo.Tangent1.ToPnt(), ref u, ref v);
            var allowance1 = new Vec2d(u, v).Normalized().Scaled(pc.Distance(p1) * arcInfo.Angle.Abs() * -0.5 * BendAllowanceScale);
            p1.Translate(allowance1);
            ElSLib.Parameters(Pln.XOY, arcInfo.Tangent2.ToPnt(), ref u, ref v);
            var allowance2 = new Vec2d(u, v).Normalized().Scaled(pc.Distance(p2) * arcInfo.Angle.Abs() * -0.5 * BendAllowanceScale);
            p2.Translate(allowance2);

            // Recalc center
            IntAna2d_AnaIntersection intersec = new(new gp_Lin2d(p1, leg1), new gp_Lin2d(p2, leg2));
            if (!intersec.IsDone())
                return null;
            pc = intersec.Point(1).Value();
        }

        // Calc position
        var dir = new Vec2d(pc, p1.Lerped(p2, 0.5)).ToDir();
        var radius = Math.Max(pc.Distance(p1), pc.Distance(p2));
        var position = pc.Translated(dir.ToVec(radius + ExtensionLength));
                    
        // Create dimension
        return new AngleDimension()
        {
            Position = position,
            FirstPoint = p1,
            SecondPoint = p2,
            CenterPoint = pc
        };
    }

    //--------------------------------------------------------------------------------------------------

    double _GetAngleBetweenTangents(Pipe.ArcInfo arcInfo)
    {
        double u = 0, v = 0;
        ElSLib.Parameters(Pln.XOY, arcInfo.Tangent1.ToPnt(), ref u, ref v);
        Vec2d t1 = new(u, v);
        ElSLib.Parameters(Pln.XOY, arcInfo.Tangent2.ToPnt(), ref u, ref v);
        Vec2d t2 = new(u, v);
        return t1.Angle(t2.Reversed());
    }

    //--------------------------------------------------------------------------------------------------

    LengthDimension _CreateLengthDimension(Pnt2d p1, Pnt2d p2, Pipe.ArcInfo nextArc, Pipe.ArcInfo priorArc)
    {
        // Check linearity of current segment, skip if too warped
        if (priorArc != null && nextArc != null)
        {
            if (!priorArc.Tangent2.IsOpposite(nextArc.Tangent1, Maths.PI * 0.1))
                return null;
        }

        // Find direction of bending
        double arcAngle = 0.0;
        if (nextArc != null)
        {
            arcAngle = _GetAngleBetweenTangents(nextArc);
        }
        if (priorArc != null && priorArc.Angle > arcAngle.Abs())
        {
            arcAngle = _GetAngleBetweenTangents(priorArc);
        }

        // Calc position
        var dimDir = new Vec2d(p1, p2).ToDir();
        var extDir = new Dir2d(dimDir.Y, -dimDir.X);
        if (arcAngle < 0.0)
        {
            extDir.Reverse();
        }

        // Apply allowance
        double u = 0, v = 0;
        if (priorArc != null)
        {
            ElSLib.Parameters(Pln.XOY, priorArc.Tangent2.ToPnt(), ref u, ref v);
            Vec2d tangent = new Vec2d(u, v).Normalized();
            if (priorArc.Angle > BendAllowanceThreshold)
            {
                p1.Translate(tangent.Scaled(priorArc.Center.Distance(priorArc.P2) * priorArc.Angle * -0.5 * BendAllowanceScale));
            }

            // Linearity of current segment if nextArc is not present, skip if too warped
            if (nextArc == null && tangent.ToDir().Angle(dimDir) > Maths.PI * 0.1)
            {
                return null;
            }
        }
        if (nextArc != null)
        {
            ElSLib.Parameters(Pln.XOY, nextArc.Tangent1.ToPnt(), ref u, ref v);
            Vec2d tangent = new Vec2d(u, v).Normalized();
            if (nextArc.Angle > BendAllowanceThreshold)
            {
                p2.Translate(tangent.Scaled(nextArc.Center.Distance(nextArc.P1) * nextArc.Angle * -0.5 * BendAllowanceScale));
            }

            // Linearity of current segment if priorArc is not present, skip if too warped
            if (priorArc == null && tangent.ToDir().Angle(dimDir.Reversed()).Abs() > Maths.PI * 0.1)
            {
                return null;
            }
        }

        Pnt2d position = p1.Lerped(p2, 0.5).Translated(extDir.ToVec(ExtensionLength));

        // Create dimension
        return new LengthDimension()
        {
            Position = position,
            FirstPoint = p1,
            SecondPoint = p2
        };
    }

    //--------------------------------------------------------------------------------------------------

    void _AddDimensions(TopoDS_Wire wire)
    {
        foreach (var edge in wire.Edges())
        {
            var vertices = edge.Vertices();
            double u = 0, v = 0;
            ElSLib.Parameters(Pln.XOY, vertices[0].Pnt(), ref u, ref v);
            Pnt2d p1 = new(u, v);
            ElSLib.Parameters(Pln.XOY, vertices[1].Pnt(), ref u, ref v);
            Pnt2d p2 = new(u, v);

            DrawingElement dim;
            var arcInfo = _ArcInfos.FirstOrDefault(si => si.P1.IsEqual(vertices[0].Pnt(), 1e-7) && si.P2.IsEqual(vertices[1].Pnt(), 1e-7));
            if (arcInfo != null)
            {
                /***** Angle dimension *****/
                dim = _CreateAngleDimension(arcInfo, p1, p2);
            }
            else
            {
                /***** Length dimension *****/
                // Get next and prior arc 
                var nextArc = _ArcInfos.FirstOrDefault(si => si.P1.IsEqual(vertices[1].Pnt(), 1e-7));
                var priorArc = _ArcInfos.FirstOrDefault(si => si.P2.IsEqual(vertices[0].Pnt(), 1e-7));
                dim = _CreateLengthDimension(p1, p2, nextArc, priorArc);
            }

            if (dim != null)
            {
                _Elements.Add(dim);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Drawing
        
    public override bool Render(IDrawingRenderer renderer)
    {
        if (!_EnsureElements())
            return false;

        bool result = true;
        foreach (var element in _Elements)
        {
            result &= element.Render(renderer);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void CalculateExtents()
    {
        if (!_EnsureElements())
            return;

        Bnd_Box2d aabb = new Bnd_Box2d();
        foreach (var element in _Elements)
        {
            aabb.Add(element.Extents);
        }

        Extents = aabb;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
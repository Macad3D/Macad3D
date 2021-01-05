using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Occt;

namespace Macad.Core.Geom
{
    public static class Topo2dUtils
    {
        //--------------------------------------------------------------------------------------------------

        public static TopoDS_Shape TransformSketchShape(TopoDS_Shape original, IEnumerable<Trsf2d> transforms, bool includeOriginal)
        {
            // Make copies
            var builder = new BRep_Builder();
            var shapeBuildEdge = new ShapeBuild_Edge();
            var newShape = new TopoDS_Compound();
            builder.MakeCompound(newShape);

            foreach (var transform in transforms)
            {
                foreach (var wire in original.Wires())
                {
                    foreach (var edge in wire.Edges())
                    {
                        if(includeOriginal)
                            builder.Add(newShape, edge);

                        var tedge = edge.TShape() as BRep_TEdge;
                        var curves = tedge.CurvesList();
                        foreach (BRep_CurveOnSurface curveRep in curves.OfType<BRep_CurveOnSurface>())
                        {
                            // Transform PCurve
                            var curve = curveRep.PCurve();
                            double first = curve.FirstParameter();
                            double last = curve.LastParameter();
                            var newCurve = shapeBuildEdge.TransformPCurve(curve, transform, 1.0, ref first, ref last);

                            // Transform UVs
                            Pnt2d uv0 = new Pnt2d();
                            Pnt2d uv1 = new Pnt2d();
                            curveRep.UVPoints(ref uv0, ref uv1);
                            uv0.Transform(transform);
                            uv1.Transform(transform);
                            var makeEdge = new BRepBuilderAPI_MakeEdge2d(newCurve, uv0, uv1);
                            builder.Add(newShape, makeEdge.Edge());
                        }
                    }
                }
            }

            return BuildWiresFromEdges(newShape);
        }

        //--------------------------------------------------------------------------------------------------

        public static TopoDS_Shape BuildWiresFromEdges(TopoDS_Shape shape)
        {
            var edges = new TopTools_HSequenceOfShape();
            foreach (var edge in shape.Edges())
            {
                edges.Append(edge);
            }

            var wires = new TopTools_HSequenceOfShape();
            ShapeAnalysis_FreeBounds.ConnectEdgesToWires(edges, 1e-8, false, wires);
            
            var builder = new BRep_Builder();
            var newShape = new TopoDS_Compound();
            builder.MakeCompound(newShape);
            for (int i = wires.Lower(); i <= wires.Upper(); i++)
            {
                builder.Add(newShape, wires.Value(i));
            }

            return newShape;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
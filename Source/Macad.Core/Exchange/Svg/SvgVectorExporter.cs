using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Exchange.Svg
{
    public class SvgVectorExporter : SvgExporterBase
    {
        public static MemoryStream Export(VectorExportTemplate template, VectorExportLayer[] layers)
        {
            var exporter = new SvgVectorExporter(template);
            return exporter._Export(layers);
        }
        
        //--------------------------------------------------------------------------------------------------

        readonly VectorExportTemplate _Template;
        readonly Dictionary<VectorExportLayerType, SvgStyle> _Styles;

        //--------------------------------------------------------------------------------------------------

        SvgVectorExporter(VectorExportTemplate template)
        {
            _Template = template;
            switch (template)
            {
                case VectorExportTemplate.Drawing:
                    _Styles = new Dictionary<VectorExportLayerType, SvgStyle> 
                    {
                        { VectorExportLayerType.Outline,        new SvgStyle {StrokeColor = Color.Black, StrokeWidth = 0.2f, DashType = SvgDashTypes.Solid }},
                        { VectorExportLayerType.Inline,         new SvgStyle {StrokeColor = Color.Black, StrokeWidth =  0.1f, DashType = SvgDashTypes.Solid }},
                        { VectorExportLayerType.HiddenOutline,  new SvgStyle {StrokeColor = Color.Black, StrokeWidth =  0.1f, DashType = SvgDashTypes.Long }},
                        { VectorExportLayerType.HiddenInline,   new SvgStyle {StrokeColor = Color.Black, StrokeWidth =  0.05f, DashType = SvgDashTypes.Short }},
                    };
                    break;

                case VectorExportTemplate.Contours:
                    _Styles = new Dictionary<VectorExportLayerType, SvgStyle>
                    {
                        { VectorExportLayerType.Outline,        new SvgStyle {StrokeColor = Color.Black, StrokeWidth = 0.1f, DashType = SvgDashTypes.Solid }},
                        { VectorExportLayerType.FilledOutline,  new SvgStyle {StrokeColor = Color.Black, FillColor = Color.Black}},
                    };
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        MemoryStream _Export(VectorExportLayer[] layers)
        {
            // Create group
            var group = new SvgGroupElement
            {
                ID = _Template.ToString(),
                IsLayer = _Template == VectorExportTemplate.Contours
            };
            BoundingBox = new Bnd_Box2d();

            // Export
            foreach (var layer in layers)
            {
                var subgroup = _ExportLayer(layer);
                if(subgroup != null)
                    group.Children.Add(subgroup);
            }

            // Scale
            double width = 100;
            double height = 100;
            if (!BoundingBox.IsVoid())
            {
                BoundingBox.SetGap(10.0); // 1cm on each side
                double xmin = 0, xmax = 0, ymin = 0, ymax = 0;
                BoundingBox.Get(ref xmin, ref ymin, ref xmax, ref ymax);
                width = xmax - xmin;
                height = ymax - ymin;
                group.Transforms.Add(new SvgTranslateTransform(-xmin, -ymax));
            }

            // Create Document
            var doc = new SvgDocument {
                DotsPerInch = DotsPerInch,
                Width = width,
                Height = height
            };
            doc.Children.Add(group);

            return doc.WriteToStream();
        }

        //--------------------------------------------------------------------------------------------------

        SvgGroupElement _ExportLayer(VectorExportLayer layer)
        {
            if (_Styles == null || !_Styles.TryGetValue(layer.Type, out var lineStyle))
                return null;

            CurrentGroup = new SvgGroupElement
            {
                ID = layer.Name,
                Style = lineStyle
            };

            if (layer.BRep == null)
                return null;

            if (_Template == VectorExportTemplate.Contours)
            {
                CurrentGroup.IsLayer = true;
            }
            
            CurrentPath = null;
            if (_Template == VectorExportTemplate.Drawing)
            {
                // Drawings do only contain lines
                CombineToPath = false;
                _ExportEdges(layer.BRep.Edges(), null);
            }
            else
            {
                CombineToPath = layer.Type.HasFlag(VectorExportLayerType.Filled);

                var faces = layer.BRep.Faces();
                foreach (var face in faces)
                {
                    var outerWire = BRepTools.OuterWire(face);
                    if (outerWire == null)
                        continue;

                    _ExportEdges(outerWire.Edges(), face);
                    
                    var wires = face.Wires();
                    foreach (var wire in wires)
                    {
                        if (wire.IsEqual(outerWire))
                            continue;
                        _ExportEdges(wire.Edges(), face);
                    }
                    FinalizePath();
                }
            }

            if (CurrentGroup.Children.Any())
                return CurrentGroup;

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        void _ExportEdges(List<TopoDS_Edge> edges, TopoDS_Face face)
        {
            // Order edges
            var order = new ShapeAnalysis_WireOrder(true, 0.0001);
            foreach (var edge in edges)
            {
                var first = BRep_Tool.Pnt(TopExp.FirstVertex(edge));
                var last = BRep_Tool.Pnt(TopExp.LastVertex(edge));
                if (edge.Orientation() == TopAbs_Orientation.TopAbs_FORWARD)
                    order.Add(first.Coord, last.Coord);
                else
                    order.Add(last.Coord, first.Coord);
            }
            order.Perform(true);

            if (order.IsDone())
            {
                order.SetChains(0.0001);
                for (int chain = 1; chain <= order.NbChains(); chain++)
                {
                    int startIndex = 0, endIndex = 0;
                    order.Chain(chain, ref startIndex, ref endIndex);

                    // Process ordered edges
                    for (int i = startIndex; i <= endIndex; i++)
                    {
                        int orderIndex = order.Ordered(i);
                        int originalIndex = Math.Abs(orderIndex) - 1; // order index is 1-based
                        _ExportEdge(edges[originalIndex], orderIndex < 0, face);
                    }

                    // Add path to group
                    ClosePath();
                    if(!CombineToPath)
                        FinalizePath();
                }
            }
            else
            {
                // Cannot sort, just pump out all edges
                foreach (var edge in edges)
                    _ExportEdge(edge, false, face);

                // Add path to group
                if ((CurrentPath != null) && CurrentPath.Segments.Any())
                    CurrentGroup.Children.Add(CurrentPath);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ExportEdge(TopoDS_Edge edge, bool reverse, TopoDS_Face face)
        {
            reverse ^= edge.Orientation() == TopAbs_Orientation.TopAbs_REVERSED;

            double first = 0, last = 0;
            if (face != null)
            {
                var curve = BRep_Tool.CurveOnSurface(edge, new Geom_Plane(Ax3.XOY), new TopLoc_Location(),  ref first, ref last);
                if (curve == null)
                    return;

                AddCurve(curve, reverse, first, last);
            }
            else
            {
                var tedge = edge.TShape() as BRep_TEdge;
                if (tedge == null)
                    return;

                var curves = tedge.CurvesList();
                if(reverse)
                {
                    curves.Reverse();
                }

                foreach (var curveOnSurface in curves.Cast<BRep_CurveOnSurface>())
                {
                    var curve = curveOnSurface.PCurve();
                    first = curveOnSurface.First();
                    last = curveOnSurface.Last();
                    AddCurve(curve, reverse, first, last);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------
    }
}
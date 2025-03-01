using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core;

#region Class BRepTopologyTreeNodes

public class BRepTopologyTreeNodes : List<BRepTopologyTreeNode>
{
    public BRepTopologyTreeNodes(int capacity) 
        : base(capacity)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public BRepTopologyTreeNodes()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public BRepTopologyTreeNodes(IEnumerable<BRepTopologyTreeNode> collection)
        : base(collection)
    {
    }

}

//--------------------------------------------------------------------------------------------------


#endregion

#region Class BRepTopologyTreeProperty

public class BRepTopologyTreeProperty
{
    public string Category { get; }
    public string Name { get; }
    public string Value { get; }

    public BRepTopologyTreeProperty(string category, string name, string value)
    {
        Category = category;
        Name = name;
        Value = value;
    }
}

//--------------------------------------------------------------------------------------------------


#endregion

#region Class BRepTopologyTreeNode

public class BRepTopologyTreeNode
{
    #region Properties

    public string Name { get; private set; }

    public BRepTopologyTreeNodes Children
    {
        get
        {
            if (_Children is null)
                _InitChildren();
            return _Children;
        }
    }

    public TopoDS_Shape BrepShape { get; }

    public List<BRepTopologyTreeProperty> Properties
    {
        get
        {
            if (_Properties is null)
                _InitProperties();
            return _Properties;
        }
    }

    public Shape Shape { get; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region C'tor and Setter

    public BRepTopologyTreeNode(Shape shape)
    {
        Shape = shape;
        BrepShape = shape?.GetBRep();
        _TopLevelShape = BrepShape;

        Name = "Invalid Shape";
        if (BrepShape != null)
        {
            Name = _GetShapeTypeName(BrepShape.ShapeType());
        }
    }

    //--------------------------------------------------------------------------------------------------

    public BRepTopologyTreeNode(TopoDS_Shape brepShape, TopoDS_Shape topLevelShape = null, Shape shape = null)
    {
        Shape = shape;
        BrepShape = brepShape;
        _TopLevelShape = topLevelShape ?? brepShape;

        Name = "Invalid Shape";
        if (brepShape != null)
        {
            Name = _GetShapeTypeName(brepShape.ShapeType());
        }
    }

    //--------------------------------------------------------------------------------------------------

    public BRepTopologyTreeNode(string name, BRepTopologyTreeNodes containedNodes, TopoDS_Shape topLevelShape, Shape shape = null)
    {
        Shape = shape;
        Name = $"{name} ({containedNodes.Count})";
        _Children = containedNodes;
        _TopLevelShape = topLevelShape;
        _Properties = new List<BRepTopologyTreeProperty>();
    }

    //--------------------------------------------------------------------------------------------------

    public void AddIndexPrefix(int i)
    {
        Name = $"[{i}] {Name}";
    }

    //--------------------------------------------------------------------------------------------------

    string _GetShapeTypeName(TopAbs_ShapeEnum shapeType)
    {
        switch (shapeType)
        {
            case TopAbs_ShapeEnum.COMPOUND:
                return "Compound";
            case TopAbs_ShapeEnum.COMPSOLID:
                return "CompSolid";
            case TopAbs_ShapeEnum.SOLID:
                return "Solid";
            case TopAbs_ShapeEnum.SHELL:
                return "Shell";
            case TopAbs_ShapeEnum.FACE:
                return "Face";
            case TopAbs_ShapeEnum.WIRE:
                return "Wire";
            case TopAbs_ShapeEnum.EDGE:
                return "Edge";
            case TopAbs_ShapeEnum.VERTEX:
                return "Vertex";
            case TopAbs_ShapeEnum.SHAPE:
                return "Shape";
            default:
                throw new ArgumentOutOfRangeException(nameof(shapeType), shapeType, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    BRepTopologyTreeNodes _Children;
    List<BRepTopologyTreeProperty> _Properties;
    readonly TopoDS_Shape _TopLevelShape;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Children

    void _InitChildren()
    {
        if (_Children != null)
            return;

        if (BrepShape == null)
            return;

        _Children = new BRepTopologyTreeNodes();

        switch (BrepShape.ShapeType())
        {
            case TopAbs_ShapeEnum.COMPOUND:
                _AddShapeCollection(BrepShape.Solids(), true);
                _AddShapeCollection(BrepShape.Shells(), true);
                _AddShapeCollection(BrepShape.Faces(), true);
                _AddShapeCollection(BrepShape.Wires(), true);
                _AddShapeCollection(BrepShape.Edges(), true);
                _AddShapeCollection(BrepShape.Vertices(), true);
                break;

            case TopAbs_ShapeEnum.COMPSOLID:
                _AddShapeCollection(BrepShape.Solids());
                break;

            case TopAbs_ShapeEnum.SOLID:
                _AddShapeCollection(BrepShape.Shells(), true);
                _AddShapeCollection(BrepShape.Faces(), true);
                _AddShapeCollection(BrepShape.Wires(), true);
                _AddShapeCollection(BrepShape.Edges(), true);
                _AddShapeCollection(BrepShape.Vertices(), true);
                break;

            case TopAbs_ShapeEnum.SHELL:
                _AddShapeCollection(BrepShape.Faces(), true);
                _AddShapeCollection(BrepShape.Wires(), true);
                _AddShapeCollection(BrepShape.Edges(), true);
                _AddShapeCollection(BrepShape.Vertices(), true);
                break;

            case TopAbs_ShapeEnum.FACE:
                _AddShapeCollection(BrepShape.Wires());
                break;

            case TopAbs_ShapeEnum.WIRE:
                _AddShapeCollection(BrepShape.Edges());
                break;

            case TopAbs_ShapeEnum.EDGE:
                _AddShapeCollection(BrepShape.Vertices());
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Property List

    void _InitProperties()
    {
        if (_Properties != null)
            return;

        _Properties = new List<BRepTopologyTreeProperty>();
        try
        {
            _AddDefaultProperties();

            switch (BrepShape.ShapeType())
            {
                case TopAbs_ShapeEnum.SHELL:
                    _AddShellProperties(BrepShape as TopoDS_Shell ?? BrepShape.ToShell());
                    break;

                case TopAbs_ShapeEnum.FACE:
                    _AddFaceProperties(BrepShape as TopoDS_Face ?? BrepShape.ToFace());
                    break;

                case TopAbs_ShapeEnum.WIRE:
                    _AddWireProperties(BrepShape as TopoDS_Wire ?? BrepShape.ToWire());
                    break;

                case TopAbs_ShapeEnum.EDGE:
                    _AddEdgeProperties(BrepShape as TopoDS_Edge ?? BrepShape.ToEdge());
                    break;

                case TopAbs_ShapeEnum.VERTEX:
                    _AddVertexProperties(BrepShape as TopoDS_Vertex ?? BrepShape.ToVertex());
                    break;
            }
        }
        catch (Exception e)
        {
            Messages.Exception($"Error getting properties for B-Rep shape {Name}", e);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddProperty(string category, string name, string value)
    {
        Properties.Add(new BRepTopologyTreeProperty(category, name, value));
    }

    //--------------------------------------------------------------------------------------------------

    void _AddDefaultProperties()
    {
        var cat = "Shape";

        var trsf = BrepShape.Location().Transformation();
        var translation = trsf.TranslationPart();
        _AddProperty(cat, "Position", $"({translation.X.ToRoundedString()}, {translation.Y.ToRoundedString()}, {translation.Z.ToRoundedString()})");
        var euler = trsf.GetRotation().ToEuler();
        _AddProperty(cat, "Rotation", $"({euler.yaw.ToRoundedString()}, {euler.pitch.ToRoundedString()}, {euler.roll.ToRoundedString()})");

        string flags = "";
        if (BrepShape.Closed())
            flags += "Closed ";
        if (BrepShape.Infinite())
            flags += "Infinite ";
        if (BrepShape.Convex())
            flags += "Convex ";
        if (BrepShape.Orientable())
            flags += "Orientable ";
        if (BrepShape.Free())
            flags += "Free ";
        if (BrepShape.Locked())
            flags += "Locked ";
        if (BrepShape.Modified())
            flags += "Modified ";
        if (!flags.IsEmpty())
            _AddProperty(cat, "Flags", flags);

        if (BrepShape.Orientable())
            _AddProperty(cat, "Orientation", BrepShape.Orientation().ToString().Replace("TopAbs_", ""));
    }

    //--------------------------------------------------------------------------------------------------

    void _AddShellProperties(TopoDS_Shell shell)
    {
        const string cat = "Shell";
        _AddProperty(cat, "Free Edges", $"{(BRep_Tool.IsClosed(shell) ? "Yes" : "No")}");
    }

    //--------------------------------------------------------------------------------------------------

    void _AddFaceProperties(TopoDS_Face face)
    {
        const string facecat = "Face";
        const string surfcat = "Surface";

        if(Shape != null)
        {
            var subshapeRef = Shape.GetSubshapeReference(_TopLevelShape, face);
            _AddProperty(facecat, "SubshapeRef", subshapeRef?.ToString() ?? "null");
        }

        _AddProperty(facecat, "Tolerance", $"{BRep_Tool.Tolerance(face)}");
        _AddProperty(facecat, "Nat.Restrict.", $"{(BRep_Tool.NaturalRestriction(face) ? "Yes" : "No")}");

        var props = new GProp_GProps();
        BRepGProp.SurfaceProperties(BrepShape, props);
        _AddProperty(facecat, "Area", $"{props.Mass()}");

        var surface = BRep_Tool.Surface(face);
        if (surface != null)
        {
            _AddProperty(surfcat, "Class", surface.GetType().Name.Replace("Geom_", ""));
            double u1 = 0, u2 = 0, v1 = 0, v2 = 0;
            surface.Bounds(ref u1, ref u2, ref v1, ref v2);
            _AddProperty(surfcat, "Bounds U", $"({u1}, {u2})");
            _AddProperty(surfcat, "Bounds V", $"({v1}, {v2})");
            _AddProperty(surfcat, "Is Closed", $"U={(surface.IsUClosed() ? "Yes" : "No")}  V={(surface.IsUClosed() ? "Yes" : "No")}");
            if (surface.IsUPeriodic() || surface.IsVPeriodic())
            {
                var s = "";
                if(surface.IsUPeriodic())
                    s += $"U={surface.UPeriod()}  ";
                if (surface.IsVPeriodic())
                    s += $"V={surface.VPeriod()}  ";
                _AddProperty(surfcat, "Period", s);
            }
            _AddProperty(surfcat, "Continuity", surface.Continuity().ToString().Replace("GeomAbs_", ""));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddWireProperties(TopoDS_Wire wire)
    {
        const string cat = "Wire";
        _AddProperty(cat, "Free Vertices", $"{(BRep_Tool.IsClosed(wire) ? "Yes" : "No")}");
    }

    //--------------------------------------------------------------------------------------------------

    void _AddEdgeProperties(TopoDS_Edge edge)
    {
        const string edgecat = "Edge";
        const string curvecat = "Curve";

        if (Shape != null)
        {
            var subshapeRef = Shape.GetSubshapeReference(_TopLevelShape, edge);
            _AddProperty(edgecat, "SubshapeRef", subshapeRef?.ToString() ?? "null");
        }

        var flags = "";
        if (BRep_Tool.Degenerated(edge))
            flags += "Degenerated ";
        if (BRep_Tool.SameParameter(edge))
            flags += "SameParameter ";
        if (BRep_Tool.SameRange(edge))
            flags += "SameRange ";

        _AddProperty(edgecat, "Is Closed", $"{(BRep_Tool.IsClosed(edge) ? "Yes" : "No")}");
        _AddProperty(edgecat, "Curve Type", $"{(BRep_Tool.IsGeometric(edge) ? "Geometric Curve" : "Curve on Surface")}");

        _AddProperty(edgecat, "Tolerance", $"{BRep_Tool.Tolerance(edge)}");
        if (!flags.IsEmpty())
            _AddProperty(edgecat, "Flags", flags);

        if (BRep_Tool.IsGeometric(edge))
        {
            // 3D curve
            double first = 0, last = 0;
            var curve = BRep_Tool.Curve(edge, ref first, ref last);
            if (curve != null)
            {
                _AddProperty(edgecat, "Parameter", $"({first}, {last})");
                _AddProperty(curvecat, "Class", curve.GetType().Name.Replace("Geom_", ""));
                _AddProperty(curvecat, "Is Closed", $"{(curve.IsClosed() ? "Yes" : "No")}");
                if (curve.IsPeriodic())
                    _AddProperty(curvecat, "Period", $"{curve.Period()}");
                _AddProperty(curvecat, "Continuity", curve.Continuity().ToString().Replace("GeomAbs_", ""));

                var props = new GProp_GProps();
                BRepGProp.LinearProperties(BrepShape, props);
                _AddProperty(edgecat, "Length", $"{props.Mass()}");

                switch (curve)
                {
                    case Geom_Line line:
                        const string linecat = "Line";
                        var lineLoc = line.Position().Location;
                        _AddProperty(linecat, "Location", $"({lineLoc.X.ToRoundedString()}, {lineLoc.Y.ToRoundedString()}, {lineLoc.Z.ToRoundedString()})");
                        var lineDir = line.Position().Direction;
                        _AddProperty(linecat, "Direction", $"({lineDir.X.ToRoundedString()}, {lineDir.Y.ToRoundedString()}, {lineDir.Z.ToRoundedString()})");
                        break;

                    case Geom_Circle circle:
                        const string circlecat = "Circle";
                        _AddProperty(circlecat, "Radius", $"{circle.Radius().ToRoundedString()}");
                        var circleLoc = circle.Position().Location;
                        _AddProperty(circlecat, "Location", $"({circleLoc.X.ToRoundedString()}, {circleLoc.Y.ToRoundedString()}, {circleLoc.Z.ToRoundedString()})");
                        var circleDir = circle.Position().Direction;
                        _AddProperty(circlecat, "Direction", $"({circleDir.X.ToRoundedString()}, {circleDir.Y.ToRoundedString()}, {circleDir.Z.ToRoundedString()})");
                        var circleXDir = circle.Position().XDirection;
                        _AddProperty(circlecat, "X-Direction", $"({circleXDir.X.ToRoundedString()}, {circleXDir.Y.ToRoundedString()}, {circleXDir.Z.ToRoundedString()})");
                        var circleYDir = circle.Position().YDirection;
                        _AddProperty(circlecat, "Y-Direction", $"({circleYDir.X.ToRoundedString()}, {circleYDir.Y.ToRoundedString()}, {circleYDir.Z.ToRoundedString()})");
                        break;

                    case Geom_Ellipse ellipse:
                        const string ellipsecat = "Ellipse";
                        _AddProperty(ellipsecat, "Major Radius", $"{ellipse.MajorRadius().ToRoundedString()}");
                        _AddProperty(ellipsecat, "Minor Radius", $"{ellipse.MinorRadius().ToRoundedString()}");
                        _AddProperty(ellipsecat, "Eccentricity", $"{ellipse.Eccentricity().ToRoundedString()}");
                        _AddProperty(ellipsecat, "Focal", $"{ellipse.Focal().ToRoundedString()}");
                        var ellipseFocus = ellipse.Focus1();
                        _AddProperty(ellipsecat, "Focus 1", $"({ellipseFocus.X.ToRoundedString()}, {ellipseFocus.Y.ToRoundedString()}, {ellipseFocus.Z.ToRoundedString()})");
                        ellipseFocus = ellipse.Focus2();
                        _AddProperty(ellipsecat, "Focus 2", $"({ellipseFocus.X.ToRoundedString()}, {ellipseFocus.Y.ToRoundedString()}, {ellipseFocus.Z.ToRoundedString()})");
                        var ellipseLoc = ellipse.Position().Location;
                        _AddProperty(ellipsecat, "Location", $"({ellipseLoc.X.ToRoundedString()}, {ellipseLoc.Y.ToRoundedString()}, {ellipseLoc.Z.ToRoundedString()})");
                        var ellipseDir = ellipse.Position().Direction;
                        _AddProperty(ellipsecat, "Direction", $"({ellipseDir.X.ToRoundedString()}, {ellipseDir.Y.ToRoundedString()}, {ellipseDir.Z.ToRoundedString()})");
                        var ellipseXDir = ellipse.Position().XDirection;
                        _AddProperty(ellipsecat, "X-Direction", $"({ellipseXDir.X.ToRoundedString()}, {ellipseXDir.Y.ToRoundedString()}, {ellipseXDir.Z.ToRoundedString()})");
                        var ellipseYDir = ellipse.Position().YDirection;
                        _AddProperty(ellipsecat, "Y-Direction", $"({ellipseYDir.X.ToRoundedString()}, {ellipseYDir.Y.ToRoundedString()}, {ellipseYDir.Z.ToRoundedString()})");
                        break;

                    case Geom_BezierCurve bezier:
                        const string beziercat = "Bézier Curve";
                        _AddProperty(beziercat, "Degree", $"{bezier.Degree()}");
                        _AddProperty(beziercat, "Pole Count", $"{bezier.NbPoles()}");
                        _AddProperty(beziercat, "Is Rational", $"{(bezier.IsRational() ? "Yes" : "No")}");
                        break;

                    case Geom_BSplineCurve bspline:
                        const string bsplinecat = "B-Spline Curve";
                        _AddProperty(bsplinecat, "Degree", $"{bspline.Degree()}");
                        _AddProperty(bsplinecat, "Pole Count", $"{bspline.NbPoles()}");
                        _AddProperty(bsplinecat, "Knoe Count", $"{bspline.NbKnots()}");
                        _AddProperty(bsplinecat, "Knot Distrib.", bspline.KnotDistribution().ToString().Replace("GeomAbs_", ""));
                        _AddProperty(bsplinecat, "Is Rational", $"{(bspline.IsRational() ? "Yes" : "No")}");
                        break;
                }
            }
        }
        else
        {
            // Curve on surface, currently not supported
        }

        // Get continuity information
        var (face1, face2) = EdgeAlgo.FindAdjacentFaces(_TopLevelShape, edge);
        if (face1 != null && face2 != null)
        {
            _AddProperty(edgecat, "Face Contin.", BRep_Tool.Continuity(edge, face1, face2).ToString().Replace("GeomAbs_", ""));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddVertexProperties(TopoDS_Vertex vertex)
    {
        const string cat = "Vertex";
        var pnt = BRep_Tool.Pnt(vertex);
        _AddProperty(cat, "Pnt", $"({pnt.X.ToRoundedString()}, {pnt.Y.ToRoundedString()}, {pnt.Z.ToRoundedString()})");
        _AddProperty(cat, "Tolerance", $"{BRep_Tool.Tolerance(vertex)}");
    }

    //--------------------------------------------------------------------------------------------------
    #endregion

    #region Collections

    void _AddShapeCollection<T>(IReadOnlyList<T> shapeList, bool group = false) where T: TopoDS_Shape
    {
        if (!shapeList.Any())
            return;

        var collection = group ? new BRepTopologyTreeNodes() : _Children;
        for (var i = 0; i < shapeList.Count; i++)
        {
            var treeNode = new BRepTopologyTreeNode(shapeList[i], _TopLevelShape, Shape);
            treeNode.AddIndexPrefix(i);
            collection.Add(treeNode);
        }

        if (group)
        {
            var name = StringUtils.TrimPrefixes(typeof(T).Name, "TopoDS_") + "s";
            if (name == "Vertexs")
                name = "Vertices";

            _Children.Add(new BRepTopologyTreeNode(name, collection, _TopLevelShape, Shape));
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}

#endregion
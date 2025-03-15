using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Geom;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Shapes;

[SerializeType]
public class Pipe : ModifierBase
{
    #region Enums

    [SerializeType]
    public enum ProfileType
    {
        Circle,
        HollowCircle,
        Rectangle,
        HollowRectangle,
        Custom
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeType]
    [Flags]
    public enum PipeFlags
    {
        SymmetricProfile = 1 << 0,
        AutoBendRadius   = 1 << 1
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    [SerializeMember]
    public ProfileType Profile
    {
        get { return _Profile; }
        set
        {
            if (_Profile != value)
            {
                SaveUndo();
                _Profile = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SizeX
    {
        get { return _SizeX; }
        set
        {
            if (_SizeX != value)
            {
                SaveUndo();
                _SizeX = Math.Max(0.01, value);
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(EffectiveBendRadius));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double SizeY
    {
        get { return _SizeY; }
        set
        {
            if (_SizeY != value)
            {
                SaveUndo();
                _SizeY = Math.Max(0.01, value);
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(EffectiveBendRadius));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Rotation
    {
        get { return _Rotation; }
        set
        {
            if (_Rotation != value)
            {
                SaveUndo();
                _Rotation = value.Clamp(-359.9, 359.9);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Thickness
    {
        get { return _Thickness; }
        set
        {
            if (_Thickness != value)
            {
                SaveUndo();
                _Thickness = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double BendRadius
    {
        get { return _BendRadius; }
        set
        {
            if (_BendRadius != value)
            {
                SaveUndo();
                _BendRadius = Math.Max(0.01, value);
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(EffectiveBendRadius));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public PipeFlags Flags
    {
        get { return _Flags; }
        set
        {
            if (_Flags != value)
            {
                SaveUndo();
                _Flags = value;
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(EffectiveBendRadius));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double MeasuredOverallLength
    {
        get { return _MeasuredOverallLength; }
        private set
        {
            if (_MeasuredOverallLength != value)
            {
                _MeasuredOverallLength = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double EffectiveBendRadius
    {
        get
        {
            return _Flags.HasFlag(PipeFlags.AutoBendRadius)
                ? _Flags.HasFlag(PipeFlags.SymmetricProfile) ? _SizeX : Math.Max(_SizeX, _SizeY)
                : _BendRadius;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return IsSkipped ? GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown : ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    ProfileType _Profile;
    double _SizeX;
    double _SizeY;
    double _Rotation;
    double _Thickness;
    double _BendRadius;
    PipeFlags _Flags;
    double _MeasuredOverallLength;
    List<ArcInfo> _ArcInfos;
    List<TopoDS_Wire> _SpineWires;

    static bool _Debug_ReturnSpineWire = false;
    static bool _Debug_NoWireCheck = false;
    static bool _Debug_NoCutting = false;
    static bool _Debug_WriteoutProfile = false;

    #endregion

    #region Create / x'tor

    public Pipe()
    {
        _Profile = ProfileType.Circle;
        _SizeX = 1.0;
        _SizeY = 1.0;
        _Rotation = 0.0;
        _Thickness = 0.1;
        _BendRadius = 1.0;
        _Flags = PipeFlags.SymmetricProfile | PipeFlags.AutoBendRadius;
    }

    //--------------------------------------------------------------------------------------------------

    public static Pipe Create(Body targetBody, IShapeOperand profile=null)
    {
        Debug.Assert(targetBody != null);

        var pipe = new Pipe();
        targetBody.AddShape(pipe);

        if (profile != null)
        {
            pipe.Profile = ProfileType.Custom;
            pipe.AddOperand(profile);
        }

        return pipe;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Profiles
        
    TopoDS_Shape _CreateProfileFromSketch(Pln plane)
    {
        var baseFacesShape = GetOperand2DFaces(1, plane);
        if (baseFacesShape == null)
        {
            Messages.Error("Cannot create profile from 2D operand.");
            return null;
        }

        return baseFacesShape;
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<Geom_Curve> _CreateCircleProfileCurves(Pln plane, double sx, double sy)
    {
        if (_Flags.HasFlag(PipeFlags.SymmetricProfile))
        {
            yield return new Geom_Circle(plane.Position.ToAx2(), sx);
        }
        else
        {
            yield return sx > sy
                             ? new Geom_Ellipse(plane.Position.Rotated(plane.Axis, _Rotation.ToRad()).ToAx2(), sx, sy)
                             : new Geom_Ellipse(plane.Position.Rotated(plane.Axis, _Rotation.ToRad() + Maths.HalfPI).ToAx2(), sy, sx);
        }
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<Geom_Curve> _CreateRectangleProfileCurves(Pln plane, double sx, double sy)
    {
        if (_Flags.HasFlag(PipeFlags.SymmetricProfile))
        {
            sy = sx;
        }

        Trsf tf = new Trsf(plane.Position.Rotated(plane.Axis, _Rotation.ToRad()), Ax3.XOY);
        Dir dx = Dir.DX.Transformed(tf);
        Dir dy = Dir.DY.Transformed(tf);

        yield return new Geom_TrimmedCurve(new Geom_Line(new Pnt(  0,  sy, 0).Transformed(tf), dx),            -sx, sx);
        yield return new Geom_TrimmedCurve(new Geom_Line(new Pnt( sx,   0, 0).Transformed(tf), dy),            -sy, sy);
        yield return new Geom_TrimmedCurve(new Geom_Line(new Pnt(  0, -sy, 0).Transformed(tf), dx.Reversed()), -sx, sx);
        yield return new Geom_TrimmedCurve(new Geom_Line(new Pnt(-sx,   0, 0).Transformed(tf), dy.Reversed()), -sy, sy);
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<TopoDS_Edge> _CreateProfileEdges(Pln plane, double sx, double sy)
    {
        IEnumerable<Geom_Curve> curves = null;
        switch (_Profile)
        {
            case ProfileType.Circle:
            case ProfileType.HollowCircle:
                curves = _CreateCircleProfileCurves(plane, sx, sy);
                break;

            case ProfileType.Rectangle:
            case ProfileType.HollowRectangle:
                curves = _CreateRectangleProfileCurves(plane, sx, sy);
                break;
        }

        return curves?.Select(curve => new BRepBuilderAPI_MakeEdge(curve).Edge());
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Shape _CreateProfile(TopoDS_Edge firstSpineEdge)
    {

        var firstSpineCurve = firstSpineEdge.Curve(out double firstParam, out double secondParam);
        if (firstSpineCurve == null)
            return null;

        Pnt location = default;
        Vec edgeTangent = default;
        firstSpineCurve.D1(firstParam, ref location, ref edgeTangent);
        Pln plane = new Pln(location, edgeTangent.ToDir());

        return _CreateProfile(plane);
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Shape _CreateProfile(Pln plane)
    {
        // Custom sketch
        if (_Profile == ProfileType.Custom)
        {
            return _CreateProfileFromSketch(plane);
        }

        // Presets
        var edges = _CreateProfileEdges(plane, _SizeX * 0.5, _SizeY * 0.5);

        if (_Debug_WriteoutProfile)
        {
            TopoDS_Builder builder = new();
            TopoDS_Compound compound = new();
            builder.MakeCompound(compound);
            foreach (var edge in edges)
            {
                builder.Add(compound, edge);
            }
            File.WriteAllBytes(@"_Debug_PipeProfile.brep", BRepExchange.WriteASCII(compound, false));
        }

        BRepBuilderAPI_MakeWire wireMaker = new();
        foreach (var edge in _CreateProfileEdges(plane, _SizeX * 0.5, _SizeY * 0.5))
        {
            wireMaker.Add(edge);
        }
        TopoDS_Shape result = wireMaker.Wire();
            
        if (_Profile == ProfileType.HollowCircle
            || _Profile == ProfileType.HollowRectangle)
        {
            var innerSizeX = _SizeX * 0.5 - _Thickness;
            var innerSizeY = _SizeY * 0.5 - _Thickness;
            if (innerSizeX > 0 && (_Flags.HasFlag(PipeFlags.SymmetricProfile) || innerSizeY > 0))
            {
                TopoDS_Builder builder = new();
                TopoDS_Compound compound = new();
                builder.MakeCompound(compound);
                builder.Add(compound, result);

                wireMaker = new();
                foreach (var edge in _CreateProfileEdges(plane, innerSizeX, innerSizeY))
                {
                    wireMaker.Add(edge);
                }
                builder.Add(compound, wireMaker.Wire());
                result = compound;
            }
        }

        var face = TopoUtils.CreateFacesFromWires(result, plane);
        return face;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class EdgeParams
    {
        internal TopoDS_Edge        Shape;
        internal TopoDS_Edge        CutShape;
        internal TopoDS_Edge        Key;
        internal BRepAdaptor_Curve  CurveAdaptor;
        internal bool               IsFirstParam;
        internal Vec                Tangent;
        internal double?            CutPointParameter;
    }
        
    //--------------------------------------------------------------------------------------------------

    class SpineParams
    {
        internal readonly EdgeParams[]  Edges = { new(), new() };
        internal Pnt                    Location;
        internal double                 Angle;
        internal Pnt                    Center;
        internal readonly Pnt[]         ArcPoints = new Pnt[2];
    }

    //--------------------------------------------------------------------------------------------------

    internal class ArcInfo
    {
        internal readonly Pnt           P1;
        internal readonly Vec           Tangent1;
        internal readonly Pnt           P2;
        internal readonly Vec           Tangent2;
        internal readonly Pnt           Center;
        internal readonly double        Angle;

        internal ArcInfo(Pnt p1, Vec tangent1, Pnt p2, Vec tangent2, Pnt center, double angle)
        {
            P1 = p1;
            P2 = p2;
            Center = center;
            Angle = angle;
            Tangent1 = tangent1;
            Tangent2 = tangent2;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AnalyzeEdges(SpineParams spine)
    {
        foreach (var edge in spine.Edges)
        {
            edge.CurveAdaptor = new BRepAdaptor_Curve(edge.Shape);
            edge.IsFirstParam = edge.CurveAdaptor.Value(edge.CurveAdaptor.FirstParameter()).IsEqual(spine.Location, 0.0001);
            double parameter = edge.IsFirstParam ? edge.CurveAdaptor.FirstParameter() : edge.CurveAdaptor.LastParameter();
            Pnt value = default;
            edge.CurveAdaptor.D1(parameter, ref value, ref edge.Tangent);
            if (!edge.IsFirstParam)
            {
                edge.Tangent.Reverse();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Edge _CreateFillArc(SpineParams spine)
    {
        // https://math.stackexchange.com/a/797891
        double bendRadius = EffectiveBendRadius;
        double distToArcCenter = bendRadius / Math.Sin((Maths.PI - spine.Angle) / 2);
        spine.Center = spine.Location.Translated((spine.Edges[1].Tangent.Normalized() + spine.Edges[0].Tangent.Normalized()).Normalized() * distToArcCenter);
        Dir normal = spine.Edges[1].Tangent.Crossed(spine.Edges[0].Tangent).ToDir();
        Dir direction = new Vec(spine.Center, spine.Location).ToDir();
            
        Geom_Circle circle = new(new Ax2(spine.Center, normal, direction), bendRadius);

        spine.ArcPoints[0] = circle.Value(-spine.Angle/2);
        spine.ArcPoints[1] = circle.Value(spine.Angle/2);

        if (spine.Edges.All(e => e.CurveAdaptor.GetCurveType() == GeomAbs_CurveType.Line))
        {
            // Simple case: lines can be connected via arc
            return new BRepBuilderAPI_MakeEdge(circle, -spine.Angle/2, spine.Angle/2).Edge();
        }

        // Complex case: Find cut points and create spline
        for (int it = 0; it < 2; it++)
        {
            var edge = spine.Edges[it];
            GeomAPI_ProjectPointOnCurve projector = new(spine.ArcPoints[it], edge.CurveAdaptor.Curve().Curve());
            if (projector.NbPoints() == 0)
                return null;

            edge.CutPointParameter = projector.LowerDistanceParameter();
            edge.CurveAdaptor.D1(projector.LowerDistanceParameter(), ref spine.ArcPoints[it], ref edge.Tangent);
            if (!edge.IsFirstParam)
            {
                edge.Tangent.Reverse();
            }
        }

        // Create spline
        double tangentScale = -spine.ArcPoints[0].Distance(spine.ArcPoints[1]) / 2;
        TColgp_Array1OfPnt poles = new(1, 4);
        poles.SetValue(1, spine.ArcPoints[0]);
        poles.SetValue(2, spine.ArcPoints[0].Translated(spine.Edges[0].Tangent.Normalized().Multiplied(tangentScale)));
        poles.SetValue(3, spine.ArcPoints[1].Translated(spine.Edges[1].Tangent.Normalized().Multiplied(tangentScale)));
        poles.SetValue(4, spine.ArcPoints[1]);
        Geom_BezierCurve arc = new Geom_BezierCurve(poles);
        return new BRepBuilderAPI_MakeEdge(arc).Edge();
    }

    //--------------------------------------------------------------------------------------------------

    bool _CutEdges(SpineParams spine)
    {
        foreach (var edge in spine.Edges)
        {
            if (_Debug_NoCutting)
            {
                edge.CutShape = edge.Shape;
                continue;
            }

            var p1 = edge.CutPointParameter ?? ElCLib.Parameter(edge.CurveAdaptor.Curve().Line(), spine.ArcPoints[0]);
            var p2 = edge.CutPointParameter ?? ElCLib.Parameter(edge.CurveAdaptor.Curve().Line(), spine.ArcPoints[1]);
            double first=edge.CurveAdaptor.FirstParameter();
            double last=edge.CurveAdaptor.LastParameter();
            if (edge.IsFirstParam)
            {
                if (p1 < first)
                    first = p2;
                else if (p2 < first)
                    first = p1;
                else
                    first = first.Distance(p1) > first.Distance(p2) ? p1 : p2;
            }
            else
            {
                if (p1 > last)
                    last = p2;
                else if (p2 > last)
                    last = p1;
                else
                    last = last.Distance(p1) > last.Distance(p2) ? p1 : p2;
            }

            if (first > last)
            {
                Messages.Warning("A segment of the path is too short to create bending. Enlarge the segment or reduce the bending radius.");
                return false;
            }

            var edgeBuilder = new BRepBuilderAPI_MakeEdge(edge.CurveAdaptor.Curve().Curve(), first, last);
            if (!edgeBuilder.IsDone())
            {
                Messages.Warning("A segment of the path failed to cut for the bending curve.");
                return false;
            }
            edge.CutShape = edgeBuilder.Edge();
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    TopoDS_Wire _CreateSpine(TopoDS_Wire sourceWire)
    {
        if (sourceWire.Edges().Count < 2)
        {
            return sourceWire;
        }

        TopoDS_Builder builder = new();
        BRepBuilderAPI_Copy copyAlgo = new(sourceWire, false);
        var wire = copyAlgo.Shape().ToWire();
        List<TopoDS_Edge> edgesToAdd = new();
        Dictionary<TopoDS_Edge, TopoDS_Edge> edgesToReplace = new();

        foreach (var vertex in wire.Vertices())
        {
            var edges = TopoUtils.FindEdgesByVertex(wire, vertex);
            if (edges.Count != 2)
                continue;

            SpineParams spine = new();
            spine.Location = vertex.Pnt();
            for (int it = 0; it < 2; it++)
            {
                var key = edgesToReplace.Keys.FirstOrDefault(e => e.IsSame(edges[it]));
                spine.Edges[it].Shape = key!=null ? edgesToReplace[key] : edges[it].ToEdge();
                spine.Edges[it].Key = key ?? spine.Edges[it].Shape;
            }
            _AnalyzeEdges(spine);
                
            // Check for G1 continuity
            spine.Angle = Maths.PI - spine.Edges[0].Tangent.Angle(spine.Edges[1].Tangent).Abs();
            if (spine.Angle < 0.01)
            {
                continue;
            }

            // Fillet corner
            var arc = _CreateFillArc(spine);
            if (arc == null)
            {
                continue;
            }

            if (!_CutEdges(spine))
            {
                continue;
            }

            // Everything built, check in
            edgesToAdd.Add(arc);
            foreach (var edge in spine.Edges)
            {
                edgesToReplace[edge.Key] = edge.CutShape;
            }

            // Fill in arc info
            var vertices = arc.Vertices();
            _ArcInfos.Add(new ArcInfo(vertices[0].Pnt(), spine.Edges[0].Tangent, 
                                      vertices[1].Pnt(), spine.Edges[1].Tangent, 
                                      spine.Center, spine.Angle));
        }

        foreach (var edge in edgesToAdd)
        {
            builder.Add(wire, edge);
        }

        foreach (var replacement in edgesToReplace)
        {
            builder.Remove(wire, replacement.Key);
            builder.Add(wire, replacement.Value);
        }

        if (_Debug_NoWireCheck)
        {
            return wire;
        }

        ShapeFix_Wire wireFixer = new(wire, new TopoDS_Face(), 0.0001);
        if (BRep_Tool.IsClosed(sourceWire))
        {
            wireFixer.ClosedWireMode = true;
        }

        wireFixer.Perform();

        return wireFixer.Wire() ?? wire;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        _ArcInfos = new();
        _SpineWires = new();

        if (Operands.Count < 1)
        {
            Messages.Error("Pipe needs at minimum one source shape.");
            HasErrors = true;
            return false;
        }

        if (Profile == ProfileType.Custom && Operands.Count < 2)
        {
            Messages.Error("Pipe needs a second source shape when custom profile is selected.");
            HasErrors = true;
            return false;
        }

        // First operand gives the wires
        var operandBRep = GetOperandBRep(0);
        if (operandBRep == null)
            return false;

        // If the shape is empty, just copy the source shape
        var wires = operandBRep.Wires();
        if (wires.Count == 0)
        {
            Messages.Error("The operand does not contain any valid paths.");
            HasErrors = true;
            return false;
        }

        // Execute
        double overallLength = 0;
        TopoDS_Builder builder = new();
        TopoDS_CompSolid compound = null;
        if (wires.Count > 1)
        {
            compound = new();
            builder.MakeCompSolid(compound);
        }

        foreach (var wire in wires)
        {
            // Ensure curves are 3D
            BRepLib.BuildCurves3d(wire);

            // Create spine
            var spineWire = _CreateSpine(wire);
            if (spineWire == null)
            {
                Messages.Warning("An input path could not be processed. Check the input shape.");
                continue;
            }

            if (_Debug_ReturnSpineWire)
            {
                BRep = spineWire;
                compound = null;
                continue;
            }

            // Get profile
            var profile = _CreateProfile(spineWire?.Edges()[0]);
            if (profile == null)
            {
                Messages.Error("The profile could not be created. Check the profile parameters.");
                HasErrors = true;
                return false;
            }

            // Build Pipe
            BRepOffsetAPI_MakePipe maker = new(spineWire, profile);
            if (!maker.IsDone())
            {
                Messages.Error("Pipe making failed. Check input shape and parameters.");
                HasErrors = true;
                return false;
            }

            if (compound != null)
            {
                builder.Add(compound, maker.Shape());
            }
            else
            {
                BRep = maker.Shape();
            }

            _SpineWires.Add(spineWire);

            // Measure wire
            var gprops = new GProp_GProps();
            BRepGProp.LinearProperties(spineWire, gprops);
            overallLength += gprops.Mass();
        }

        MeasuredOverallLength = overallLength;

        if (compound != null)
        {
            BRep = compound;
        }
            
        if (BRep == null)
        {
            return false;
        }

        // Check it
        BRepCheck_Analyzer analyzer = new(BRep);
        if (!analyzer.IsValid())
        {
            Messages.Warning("The resulting solid is not valid and may cause problems in subsequent operations. Check input shape and parameters.");
        }

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Utils

    internal IList<TopoDS_Wire> GetOperandWires()
    {
        // First operand gives the wires
        var operandBRep = GetOperandBRep(0);
        if (operandBRep == null)
            return null;

        // If the shape is empty, just copy the source shape
        var wires = operandBRep.Wires();
        if (wires.Count == 0)
        {
            return null;
        }

        foreach (var wire in wires)
        {
            // Ensure curves are 3D
            BRepLib.BuildCurves3d(wire);
        }

        return wires;
    }
        
    //--------------------------------------------------------------------------------------------------

    internal IList<TopoDS_Wire> GetSpineWires()
    {
        EnsureHistory();
        return _SpineWires;
    }

    //--------------------------------------------------------------------------------------------------

    internal IList<ArcInfo> GetArcInfos()
    {
        EnsureHistory();
        return _ArcInfos;
    }

    //--------------------------------------------------------------------------------------------------

    public void InitCustomProfile()
    {
        if (_Profile == ProfileType.Custom)
            return;

        var profileSketch = ConvertToEditableSketch.Convert(_CreateProfile(Pln.XOY));
        profileSketch.Body = Body;
        profileSketch.Name = "Profile";
        AddOperand(profileSketch);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
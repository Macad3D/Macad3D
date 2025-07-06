using System;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

public sealed class UnfoldSheet : ModifierBase
{
    #region Properties

    [SerializeMember]
    public SubshapeReference StartFace
    {
        get { return _StartFace; }
        set
        {
            if (!Equals(_StartFace, value))
            {
                SaveUndo();
                _StartFace = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    SubshapeReference _StartFace;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public UnfoldSheet()
    {
        Name = "Unfold Sheet";
    }

    //--------------------------------------------------------------------------------------------------

    public static UnfoldSheet Create(Body targetBody, SubshapeReference startFace = null)
    {
        Debug.Assert(targetBody != null);

        var unfoldSheet = new UnfoldSheet()
        {
            _StartFace = startFace
        };
        targetBody.AddShape(unfoldSheet);

        return unfoldSheet;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanFindStartFace(TopoDS_Shape shape)
    {
        try
        {
            return FaceAlgo.FindFaceNearestToPlane(shape, Pln.XOY) != null;

        }
        catch (Exception)
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class MakeContext
    {
        internal TopoDS_Shape SourceShape;
        internal TopoDS_Face StartFace;
        internal TopoDS_Shape ResultShape;
        internal BendAnalyzer Analyzer;
        internal BRepBuilderAPI_Sewing Sewer;

        internal bool DebugOutput;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();

        // Make it!
        var context = new MakeContext
        {
            DebugOutput = flags.HasFlag(MakeFlags.DebugOutput)
        };

        if (!(_InitContext(context)
              && _AnalyzeTopology(context)))
        {
            return false;
        }

        if (!context.Analyzer.RootSection.Children.Any())
        {
            Messages.Warning("No bend sections found.");
            return Skip();
        }
        
        if (!_BuildResultShape(context))
        {
            return false;
        }

        if (context.ResultShape == null)
            return Skip();

        BRep = context.ResultShape;
        if (context.Analyzer.History != null)
        {
            UpdateModifiedSubshapes(context.SourceShape, context.Analyzer.History);
        }

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _InitContext(MakeContext context)
    {
        // Currently we work with 1 source shape only
        if (Operands.Count != 1)
            return false;

        // Get Targets
        context.SourceShape = GetOperandBRep(0);

        if (context.SourceShape == null)
            return false;

        if (_StartFace == null)
        {
            context.StartFace = FaceAlgo.FindFaceNearestToPlane(context.SourceShape, Pln.XOY);
            if (context.StartFace == null)
            {
                Messages.Error("Start face cannot be automatically detected needs to be manually selected.");
                return false;
            }

            if (context.DebugOutput)
            {
                Messages.Trace($"Automatically detected start face has index {context.SourceShape.Faces().IndexOf(context.StartFace)}");
            }
        }
        else
        {
            context.StartFace = GetOperandFace(0, _StartFace);
            if (context.StartFace == null)
            {
                Messages.Error("Manual start face cannot be found and needs to be reselected.");
                return false;
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AnalyzeTopology(MakeContext context)
    {
        BendAnalyzer.Flags flags = BendAnalyzer.Flags.Default;
        if (context.DebugOutput)
        {
            flags = flags.Added(BendAnalyzer.Flags.DebugOutput);
        }
        context.Analyzer = new();
        return context.Analyzer.FindBendSections(context.SourceShape, context.StartFace, flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _BuildResultShape(MakeContext context)
    {
        context.Sewer = new BRepBuilderAPI_Sewing(1.0e-06);
        if (!_AddSectionToResult(context, context.Analyzer.RootSection, Trsf.Identity))
            return false;

        context.Sewer.Perform();
        var sewedShape = context.Sewer.SewedShape();
        if (sewedShape.ShapeType() != TopAbs_ShapeEnum.SHELL
            || context.Sewer.NbFreeEdges() != 0)
        {
            Messages.Error("Resulting faces could not be sewn.");
            return false;
        }

        var makeSolid = new BRepBuilderAPI_MakeSolid(sewedShape.ToShell());
        if (!makeSolid.IsDone())
        {
            Messages.Error("Resulting faces does not sew to a solid.");
            return false;
        }
        context.ResultShape = makeSolid.Solid();

        // If we have multiple solids, merge the others (not unbent)
        var sourceSolids = context.SourceShape.Solids();
        if (sourceSolids.Count > 1)
        {
            TopoDS_Compound compound = new();
            TopoDS_Builder builder = new();
            builder.MakeCompound(compound);

            foreach (var solid in sourceSolids)
            {
                if (solid.Faces().ContainsSame(context.StartFace))
                {
                    builder.Add(compound, context.ResultShape);
                }
                else
                {
                    builder.Add(compound, solid);
                }
            }
            context.ResultShape = compound;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddSectionToResult(MakeContext context, BendAnalyzer.Section section, Trsf transform)
    {
        if (section.IsBendSection)
        {
            // Calculate k-factor and bend allowance
            // k = 0.65 + 0.5 * log(r/s)
            // This is DIN/ISO value range of 0..2
            var thickness = section.BendParameter.InnerRadius.Distance(section.BendParameter.OuterRadius).Abs();
            var radius = Math.Min(section.BendParameter.InnerRadius, section.BendParameter.OuterRadius);
            var kfac = (0.65 + 0.5 * Math.Log10(radius / thickness)).Clamp(0.0, 1.0);
            var bendAllowance = (radius + thickness * 0.5 * kfac) * section.BendParameter.AngleRad.Abs();
            if (context.DebugOutput)
            {
                Messages.Trace($"The bend section has following parameters:");
                Messages.Trace($"thickness {thickness} radius {radius} kfactor {kfac} angle {section.BendParameter.AngleRad} bend allowance {bendAllowance}.");
                Messages.Trace($"axis {section.BendParameter.Axis}.");
            }

            // Create transform for connected sections
            var axis = section.BendParameter.Axis.Transformed(transform);
            Trsf newTransform = transform;
            var rotTrsf = new Trsf(axis.Axis, -section.BendParameter.AngleRad);
            newTransform.PreMultiply(rotTrsf);
            var dispTrsf = new Trsf(axis.YDirection.ToVec() * bendAllowance);
            newTransform.PreMultiply(dispTrsf);

            // Create no bend section, if bendAllowance==0
            if (!bendAllowance.IsEqual(0.0, 1.0e-7))
            {
                // Reconstruct faces
                var inVtcs = section.BendParameter.ConnectedInEdges.SelectMany(edge => edge.Vertices()).Select(vtx => vtx.Pnt()).ToArray();

                Pnt[] faceVtcs = new Pnt[4];
                foreach (var bendFace in section.BendParameter.Faces)
                {
                    var bendEdges = bendFace.Edges().Where(edge => section.BendParameter.Edges.ContainsSame(edge)).GetEnumerator();
                    if (!bendEdges.MoveNext())
                    {
                        return false;
                    }
                    var bendVtcs = bendEdges.Current.Vertices().Select(vtx => vtx.Pnt()).ToArray();
                    if (inVtcs.Contains(bendVtcs[0]))
                    {
                        faceVtcs[0] = bendVtcs[0];
                        faceVtcs[1] = bendVtcs[1];
                    }
                    else
                    {
                        faceVtcs[0] = bendVtcs[1];
                        faceVtcs[1] = bendVtcs[0];
                    }

                    if (!bendEdges.MoveNext())
                    {
                        return false;
                    }
                    bendVtcs = bendEdges.Current.Vertices().Select(vtx => vtx.Pnt()).ToArray();
                    if (inVtcs.Contains(bendVtcs[0]))
                    {
                        faceVtcs[2] = bendVtcs[1];
                        faceVtcs[3] = bendVtcs[0];
                    }
                    else
                    {
                        faceVtcs[2] = bendVtcs[0];
                        faceVtcs[3] = bendVtcs[1];
                    }

                    faceVtcs[0].Transform(transform);
                    faceVtcs[1].Transform(newTransform);
                    faceVtcs[2].Transform(newTransform);
                    faceVtcs[3].Transform(transform);
                    var face = TopoUtils.MakeFace(faceVtcs);
                    if (face != null)
                    {
                        context.Sewer.Add(face);
                    }
                }

                transform = newTransform;
            }
        }
        else
        {
            // Copy all faces to the result
            foreach (var face in section.Faces)
            {
                var transformedFace = face.Moved(new(transform));
                context.Sewer.Add(transformedFace);
            }
        }

        // Process children
        foreach (var child in section.Children)
        {
            if (!_AddSectionToResult(context, child, transform))
            {
                return false;
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
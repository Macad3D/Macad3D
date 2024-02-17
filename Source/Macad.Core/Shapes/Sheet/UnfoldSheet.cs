using System;
using System.Collections.Generic;
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
            if (_StartFace != value)
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
        internal Section RootSection;
        internal TopoDS_Shape ResultShape;

        internal BRepBuilderAPI_Sewing Sewer;

        internal bool DebugOutput;
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * The section class represents parts of the shape which can be connected.
     * Each section with normal geometry is connected to a number of bend sections,
     * bend sections can have only one further connection (the parent section does not count
     * here), this can be a bend section or normal geometry section.
     */
    class Section
    {
        internal readonly List<TopoDS_Face> Faces = new List<TopoDS_Face>();
        internal readonly List<Section> Children = new List<Section>();

        internal bool IsBendSection
        {
            get { return BendParameter != null; }
        }

        internal BendParameter BendParameter;
    }

    //--------------------------------------------------------------------------------------------------

    class BendParameter
    {
        /*
         * Each bend section has exactly four faces. The numbering is:
         * 0 - top/bottom face
         * 1/2 - side faces
         * 3 - opposite top/bottom face
         */
        internal readonly TopoDS_Face[] Faces = new TopoDS_Face[4];
        /*
         * These edges connect the bend section faces, they are all circular
         */
        internal readonly TopoDS_Edge[] Edges = new TopoDS_Edge[4];
        /*
         * In[0] is the face which has encountered the bend section as a
         * connected face. In[1] is the opposide face belonging to the same
         * section. This is the parent section.
         * Out[0] and Out[1] are the faces connected to the top/bottom face
         * of the section on the other side, they are part of the connected section.
         */
        internal readonly TopoDS_Face[] ConnectedInFaces = new TopoDS_Face[2];
        internal readonly TopoDS_Edge[] ConnectedInSharedEdges = new TopoDS_Edge[2];
        internal readonly TopoDS_Face[] ConnectedOutFaces = new TopoDS_Face[2];
        internal readonly TopoDS_Edge[] ConnectedOutSharedEdges = new TopoDS_Edge[2];
        /*
         * The four edges of a bend section are always circular, we get four different
         * circles. Two of the circles share the same axis, each of them share the same
         * radii with on of the other two circles.
         */
        internal readonly Ax2[] Axes = new Ax2[2];
        internal readonly double[] Radii = new double[2];
        /*
         * The angle of the circle sections in radians.
         */
        internal double AngleRad;
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

        // Skip if we have only one section
        if (!context.RootSection.Children.Any())
        {
            return Skip();
        }

        if (!_BuildResultShape(context))
        {
            return false;
        }

        if (context.ResultShape == null)
            return Skip();

        BRep = context.ResultShape;

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
                Messages.Error("Reference face cannot be automatically detected needs to be manually selected.");
                return false;
            }

            if (context.DebugOutput)
            {
                Messages.Trace($"Automatically detected reference face has index {context.SourceShape.Faces().IndexOf(context.StartFace)}");
            }
        }
        else
        {
            context.StartFace = GetOperandFace(0, _StartFace);
            if (context.StartFace == null)
            {
                Messages.Error("Manual reference face cannot be found and needs to be reselected.");
                return false;
            }
        }


        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * Division of the shape in different sections. Sections contain all faces of a flange, and
     * are connected with bend sections.
     * Start with the start face and examine all connected faces. If an face is part of a bend section,
     * stop here. If not, add it to the current section and add it to the queue of faces whose connected
     * faces are to examined.
     * Don't process any face twice.
     * If a bend section is determined, add it to the list of connected sections and to the queue of
     * sections to process.
     * If a bend section is processed, all connected faces, which are part of the bend section or
     * the parent section, are sorted out by the processedFaces list, so they must be part of the then
     * current section.
     */
    bool _AnalyzeTopology(MakeContext context)
    {
        var queuedSections = new Queue<Section>();
        var queuedFaces = new Queue<TopoDS_Face>();
        var processedFaces = new List<TopoDS_Face>();
        var abandonedFaces = new List<TopoDS_Face>(); // Faces that are falsely detected as side faces of a bend section

        // Init algorithm with root section and reference face
        context.RootSection = new Section();
        context.RootSection.Faces.Add(context.StartFace);
        processedFaces.Add(context.StartFace);
        queuedSections.Enqueue(context.RootSection);

        // Iterate
        while (queuedSections.Any())
        {
            var currentSection = queuedSections.Dequeue();
            queuedFaces.Clear();
            queuedFaces.EnqueueMany(currentSection.Faces);

            while (queuedFaces.Any())
            {
                var currentFace = queuedFaces.Dequeue();
                    
                // Enumerate connected faces
                var connectedFaces = FaceAlgo.FindConnectedFaces(context.SourceShape, currentFace);
                foreach (var connectedFace in connectedFaces.Keys)
                {
                    if (processedFaces.ContainsSame(connectedFace))
                        continue;
                    processedFaces.Add(connectedFace);

                    if (currentSection.IsBendSection)
                    {
                        if(currentSection.Faces.ContainsSame(connectedFace))
                            continue;
                        if (_IsFaceOfBendSection(connectedFace, null))
                            continue;

                        // Add to following section
                        currentSection.Children.First().Faces.Add(connectedFace);
                    }
                    else
                    {
                        // Bend section detection
                        if (_AnalyzeBendSection(context, connectedFace, connectedFaces[connectedFace], out var bendSection))
                        {
                            if (bendSection == null)
                            {
                                // No section was created, face is suspect, but not convicted
                                // Keep it as abandoned until it is clearly part of a bend section
                                abandonedFaces.Add(connectedFace);
                            }
                            else
                            {
                                currentSection.Children.Add(bendSection);
                                processedFaces.AddRange(bendSection.Faces);

                                // Add the opposite face to the processing list,for the case that it is connected only to bend sections
                                var connectedOpFace = bendSection.BendParameter.ConnectedInFaces[1];
                                if (connectedOpFace != null && !currentSection.Faces.ContainsSame(connectedOpFace))
                                {
                                    currentSection.Faces.Add(connectedOpFace);
                                    processedFaces.Add(connectedOpFace);
                                    queuedFaces.Enqueue(connectedOpFace);
                                }

                                // Clear all detected faces out of the abandoned list
                                foreach (var sectionFace in bendSection.Faces)
                                {
                                    var sameFaceId = abandonedFaces.IndexOfSame(sectionFace);
                                    if(sameFaceId >= 0)
                                        abandonedFaces.RemoveAt(sameFaceId);
                                }
                            }
                            continue;
                        }

                        // No bend section detected, take it into this node
                        currentSection.Faces.Add(connectedFace);
                        queuedFaces.Enqueue(connectedFace);
                    }
                }
            }

            // Abandoned faces should now put to the current section
            foreach (var abandonedFace in abandonedFaces)
            {
                if(!currentSection.Faces.ContainsSame(abandonedFace))
                    currentSection.Faces.Add(abandonedFace);
            }
            abandonedFaces.Clear();

            // Add next sections
            queuedSections.EnqueueMany(currentSection.Children);
        }

        // Debug output
        void _PrintSectionInfo(Section section, string id)
        {
            if (section.IsBendSection)
            {
                Messages.Trace($"Analyze: {id} BendSection with {section.Faces.Count} faces, Radii {section.BendParameter.Radii[0]} and {section.BendParameter.Radii[1]} .");
            }
            else
            {
                Messages.Trace($"Analyze: {id} Section with {section.Faces.Count} faces and {section.Children.Count} children.");
            }

            for (var sectionIndex = 0; sectionIndex < section.Children.Count; sectionIndex++)
            {
                _PrintSectionInfo(section.Children[sectionIndex], id + ":" + sectionIndex);
            }
        }

        if (context.DebugOutput)
        {
            _PrintSectionInfo(context.RootSection, "0");
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * Determine if a face belongs to a bend section. To recognise a bend section, it must have the
     * following structure:
     * - Four faces, two of them planar (side faces) and two of them cylinder (top/bottom)
     * - All edges connecting these four faces must be circular
     * - All circles must have coaxial axes with only two different positions
     * - All circles must have one of two radii
     *
     * If a side face is detected, the iteration of faces should stop, but no section is built.
     * If a top/bottom face is detected, the whole section is recovered and all parameters are
     * determined. The faces are found by searching for faces which share the circular edges.
     *
     * This function is called recursively if one of the out-faces is also recognized
     * as part of a connected bend section.
     */
    bool _AnalyzeBendSection(MakeContext context, TopoDS_Face baseFace, TopoDS_Edge sharedEdge, out Section section)
    {
        section = null;

        var bendParams = new BendParameter();
        bendParams.Faces[0] = baseFace;

        if (!_IsFaceOfBendSection(baseFace, bendParams))
            return false;

        var faceAdaptor = new BRepAdaptor_Surface(baseFace);

        // Surface is flat, but two edges are of circle and coplanar
        if (faceAdaptor.GetSurfaceType() == GeomAbs_SurfaceType.Plane)
        {
            // Ignore them for the moment, but sign them as bend section face
            return true;
        }

        if (faceAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Cylinder)
        {
            // Surface must be of type Cylinder, other are not supported currently
            return false;
        }

        // Find side faces
        var facesForEdge0 = EdgeAlgo.FindAdjacentFaces(context.SourceShape, bendParams.Edges[0]);
        bendParams.Faces[1] = facesForEdge0.face1.IsSame(baseFace) ? facesForEdge0.face2 : facesForEdge0.face1;
        if (!_IsFaceOfBendSection(bendParams.Faces[1], bendParams))
            return false;
        var facesForEdge1 = EdgeAlgo.FindAdjacentFaces(context.SourceShape, bendParams.Edges[1]);
        bendParams.Faces[2] = facesForEdge1.face1.IsSame(baseFace) ? facesForEdge1.face2 : facesForEdge1.face1;
        if (!_IsFaceOfBendSection(bendParams.Faces[2], bendParams))
            return false;

        // Find fourth face
        var facesForEdge2 = EdgeAlgo.FindAdjacentFaces(context.SourceShape, bendParams.Edges[2]);
        var facesForEdge3 = EdgeAlgo.FindAdjacentFaces(context.SourceShape, bendParams.Edges[3]);
        if (facesForEdge2.face1.IsSame(facesForEdge3.face1)
            || facesForEdge2.face1.IsSame(facesForEdge3.face2))
        {
            bendParams.Faces[3] = facesForEdge2.face1;
        }
        else if (facesForEdge2.face2.IsSame(facesForEdge3.face1)
                 || facesForEdge2.face2.IsSame(facesForEdge3.face2))
        {
            bendParams.Faces[3] = facesForEdge2.face2;
        }
        else
            return false; // fourth face not found
        if (!_IsFaceOfBendSection(bendParams.Faces[3], bendParams))
            return false;

        // Create Section
        section = new Section();
        section.Faces.AddRange(bendParams.Faces.Where(face => face != null));
        section.BendParameter = bendParams;

        // Find connected faces
        _FindFacesConnectedToBendSection(context, sharedEdge, bendParams);

        // Check if the connected section is also an bend section
        if (bendParams.ConnectedOutFaces[0] != null
            && _AnalyzeBendSection(context, bendParams.ConnectedOutFaces[0], bendParams.ConnectedOutSharedEdges[0], out var connectedBendSection))
        {
            if (connectedBendSection == null)
            {
                Messages.Error("A bend section is connected to another bend section with an perpendicular direction.", 
                               "To fix this, you need to add a small flange between these two bend sections.");
            }
            section.Children.Add(connectedBendSection);
        }
        else
        {
            section.Children.Add(new Section()); // Bend sections have exactly one connected section
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsFaceOfBendSection(TopoDS_Face face, BendParameter bendParams)
    {
        if(bendParams == null)
            bendParams = new BendParameter(); // Temporary usage

        // Each face of a bend section has two circular edges
        var edges = face.Edges();
        var foundCircularEdges = 0;

        foreach (var edge in edges)
        {
            var edgeAdaptor = new BRepAdaptor_Curve(edge);
            if (edgeAdaptor.GetCurveType() == GeomAbs_CurveType.Circle)
            {
                foundCircularEdges++;

                if (bendParams.Edges[0] == null)
                {
                    bendParams.Edges[0] = edge;
                    bendParams.Axes[0] = edgeAdaptor.Circle().Position();
                    bendParams.Radii[0] = edgeAdaptor.Circle().Radius();
                    bendParams.AngleRad = edgeAdaptor.LastParameter() - edgeAdaptor.FirstParameter();
                }
                else
                {
                    if (!bendParams.Axes[0].Axis.IsCoaxial(edgeAdaptor.Circle().Axis(), 0.01f, 0.001f)
                        || !bendParams.AngleRad.IsEqual(edgeAdaptor.LastParameter() - edgeAdaptor.FirstParameter(), 0.01))
                    {
                        return false; // Circular edge with unproper parameters detected
                    }

                    if(bendParams.Edges[1] == null)
                    {
                        // Second edge of bend surface
                        bendParams.Edges[1] = edge;
                        bendParams.Axes[1] = edgeAdaptor.Circle().Position();
                        break;
                    }

                    // Additional edges, find free place
                    for (int edgeIndex = 0; edgeIndex < bendParams.Edges.Length; edgeIndex++)
                    {
                        if (bendParams.Edges[edgeIndex] == null)
                        {
                            bendParams.Edges[edgeIndex] = edge;
                            break;
                        }
                        if (bendParams.Edges[edgeIndex].IsSame(edge))
                            break;
                    }

                    if (!edgeAdaptor.Circle().Radius().IsEqual(bendParams.Radii[0], 0.000001))
                        bendParams.Radii[1] = edgeAdaptor.Circle().Radius();
                }
            }
        }

        // Coaxial circle edges not found, this is not a bend section
        if (foundCircularEdges != 2)
            return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _FindFacesConnectedToBendSection(MakeContext context, TopoDS_Edge sharedEdge, BendParameter bendParams)
    {
        // Find connected section faces
        bendParams.ConnectedInSharedEdges[0] = sharedEdge;
        bendParams.ConnectedInFaces[0] = FaceAlgo.FindConnectedFace(context.SourceShape, bendParams.Faces[0], sharedEdge);
        var opEdge = bendParams.Faces[0].Edges().Find(e => !e.IsSame(sharedEdge) && !e.IsSame(bendParams.Edges[0]) && !e.IsSame(bendParams.Edges[1]));
        if (opEdge != null)
        {
            bendParams.ConnectedOutSharedEdges[0] = opEdge;
            bendParams.ConnectedOutFaces[0] = FaceAlgo.FindConnectedFace(context.SourceShape, bendParams.Faces[0], opEdge);
        }

        // Find the other connection edge
        TopoDS_Vertex sharedVtx1 = null;
        foreach (var edge in bendParams.Faces[1].Edges())
        {
            var vtx = EdgeAlgo.FindSharedVertex(edge, sharedEdge);
            if (vtx != null)
            {
                // Get the other (not shared) vertex
                sharedVtx1 = edge.Vertices().Find(v => !v.IsSame(vtx));
                break;
            }
        }
        TopoDS_Vertex sharedVtx2 = null;
        foreach (var edge in bendParams.Faces[2].Edges())
        {
            var vtx = EdgeAlgo.FindSharedVertex(edge, sharedEdge);
            if (vtx != null)
            {
                // Get the other (not shared) vertex
                sharedVtx2 = edge.Vertices().Find(v => !v.IsSame(vtx));
                break;
            }
        }
        TopoDS_Edge otherSharedEdge = null;
        foreach (var edge in bendParams.Faces[3].Edges())
        {
            var vertices = edge.Vertices();
            if (vertices.ContainsSame(sharedVtx1)
                && vertices.ContainsSame(sharedVtx2))
            {
                otherSharedEdge = edge;
                break;
            }
        }
        if (otherSharedEdge == null)
            return;

        // Find connected section faces for the other edge
        bendParams.ConnectedOutSharedEdges[1] = otherSharedEdge;
        bendParams.ConnectedInFaces[1] = FaceAlgo.FindConnectedFace(context.SourceShape, bendParams.Faces[3], otherSharedEdge);
        var otherOpEdge = bendParams.Faces[3].Edges().Find(e => !e.IsSame(otherSharedEdge) && !e.IsSame(bendParams.Edges[2]) && !e.IsSame(bendParams.Edges[3]));
        if (otherOpEdge != null)
        {
            bendParams.ConnectedOutSharedEdges[1] = otherOpEdge;
            bendParams.ConnectedOutFaces[1] = FaceAlgo.FindConnectedFace(context.SourceShape, bendParams.Faces[3], otherOpEdge);
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _BuildResultShape(MakeContext context)
    {
        context.Sewer = new BRepBuilderAPI_Sewing(1.0e-06);
        if (!_AddSectionToResult(context, context.RootSection, Trsf.Identity))
            return false;

        context.Sewer.Perform();
        var sewedShape = context.Sewer.SewedShape();
        if (sewedShape.ShapeType() == TopAbs_ShapeEnum.SHELL)
        {
            var makeSolid = new BRepBuilderAPI_MakeSolid(sewedShape.ToShell());
            if (makeSolid.IsDone())
            {
                context.ResultShape = makeSolid.Solid();
                return true;
            }
        }

        Messages.Error("Resulting faces could not be sewn to a solid.");
        context.ResultShape = sewedShape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddSectionToResult(MakeContext context, Section section, Trsf transformation)
    {
        if (section.IsBendSection)
        {
                
            // Calculate k-factor and bend allowance
            // k = 0.65 + 0.5 * log(r/s)
            // This is DIN/ISO value range of 0..2
            var thickness = section.BendParameter.Radii[0].Distance(section.BendParameter.Radii[1]).Abs();
            var radius = Math.Min(section.BendParameter.Radii[0], section.BendParameter.Radii[1]);
            var kfac = (0.65 + 0.5 * Math.Log10(radius / thickness)).Clamp(0.0, 1.0);
            var bendAllowance = (radius + thickness * 0.5 * kfac) * section.BendParameter.AngleRad;
            if (context.DebugOutput)
            {
                Messages.Trace($"The bend section has following parameters: thickness {thickness} radius {radius} kfactor {kfac} angle {section.BendParameter.AngleRad} bend allowance {bendAllowance}.");
            }

            var axes = new []
            {
                section.BendParameter.Axes[0],
                section.BendParameter.Axes[1]
            };

            // Which side of the bend section is our in-side?
            // A point translated along the XDirection of the axis using one of the radii must be on the edge.
            var swapSign = 1.0;
            var edgeAdaptor = new BRepAdaptor_Curve(section.BendParameter.ConnectedInSharedEdges[0]);
            var pnt0 = axes[0].Location.Translated(axes[0].XDirection.ToVec() * section.BendParameter.Radii[0]);
            var pnt1 = axes[0].Location.Translated(axes[0].XDirection.ToVec() * section.BendParameter.Radii[1]);
            if (!(edgeAdaptor.Line().Contains(pnt0, 0.000001) || edgeAdaptor.Line().Contains(pnt1, 0.000001)))
            {
                swapSign = -1.0;
                axes[0].Rotate(section.BendParameter.Axes[0].Axis, section.BendParameter.AngleRad);
                axes[1].Rotate(section.BendParameter.Axes[1].Axis, section.BendParameter.AngleRad);
            }
            axes[0].Transform(transformation);
            axes[1].Transform(transformation);

            // Create no bend section, if kfac==0
            if (kfac > 0.0)
            {
                // Reconstruct faces
                var pnts = new Pnt[4]; // Corner points of one section
                pnts[0] = axes[0].Location.Translated(axes[0].XDirection.ToVec() * section.BendParameter.Radii[0]);
                pnts[1] = axes[1].Location.Translated(axes[1].XDirection.ToVec() * section.BendParameter.Radii[0]);
                pnts[2] = axes[0].Location.Translated(axes[0].XDirection.ToVec() * section.BendParameter.Radii[1]);
                pnts[3] = axes[1].Location.Translated(axes[1].XDirection.ToVec() * section.BendParameter.Radii[1]);
                var extrudeVec = axes[0].YDirection.ToVec() * swapSign * bendAllowance; // Vector to extrude to the other section

                // Top/Bottom
                context.Sewer.Add(TopoUtils.MakeFace(new[] {pnts[0], pnts[0].Translated(extrudeVec), pnts[1].Translated(extrudeVec), pnts[1]}));
                context.Sewer.Add(TopoUtils.MakeFace(new[] {pnts[2], pnts[2].Translated(extrudeVec), pnts[3].Translated(extrudeVec), pnts[3]}));
                // Sides
                context.Sewer.Add(TopoUtils.MakeFace(new[] {pnts[0], pnts[0].Translated(extrudeVec), pnts[2].Translated(extrudeVec), pnts[2]}));
                context.Sewer.Add(TopoUtils.MakeFace(new[] {pnts[1], pnts[1].Translated(extrudeVec), pnts[3].Translated(extrudeVec), pnts[3]}));
            }

            // Create transform for connected sections
            var rotTrsf = new Trsf(axes[0].Axis, swapSign * -section.BendParameter.AngleRad);
            transformation.PreMultiply(rotTrsf);
            var dispTrsf = new Trsf(axes[0].YDirection.ToVec() * swapSign * bendAllowance);
            transformation.PreMultiply(dispTrsf);
                
            //section.Faces.ForEach(f => context.Sewer.Add(f));
        }
        else
        {
            // Copy all faces to the result
            foreach (var face in section.Faces)
            {
                var transformedFace = face.Moved(new TopLoc_Location(transformation));
                context.Sewer.Add(transformedFace);
                //context.Sewer.Add(face);
            }
        }

        // Process children
        foreach (var child in section.Children)
        {
            _AddSectionToResult(context, child, transformation);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
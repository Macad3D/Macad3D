using Macad.Common;
using Macad.Occt;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Macad.Core.Geom;

/// <summary>
/// Provides functionality to find and analyze bend sections within a given shape.
/// </summary>
/// <remarks>
/// This class is designed to identify and analyze bend sections in a solid shape.
/// Bend sections are identified using topological criteria. Together with the unbent sections,
/// the recognised bend sections form a hierarchical order in the sequence and dependency of their
/// bends, starting with the section to which the start face is assigned.
///
/// To recognise a bend section, it must have the following structure:
/// - Four faces, two of them cylinder (top/bottom), two of them planar, bezier or bspline (side faces)
/// - All edges connecting these four faces must be a circular or elliptical arc
/// - The circles (projections in case of elliptical arc) of all edges must have coaxial axes with only two different positions
/// - The curves of all edges must have one of two radii (minor radius for elliptical arc)
///
/// This class is particularly useful for applications involving sheet metal design or similar domains
/// where bend sections are a key feature.
/// </remarks>
public class BendAnalyzer
{
    #region API

    [Flags]
    public enum Flags
    {
        /// <summary>
        /// Indicates that debug output should be enabled.
        /// </summary>
        DebugOutput = 1 << 0,
        /// <summary>
        /// Prepare a shape before analysis, e.g. isolate faces of bend sections if they are unified together
        /// with side faces of unbent sections. This may be needed to correctly identify the bend sections.
        /// </summary>
        PrepareShape = 1 << 1,

        /// <summary>
        /// Recommended default set of flags.
        /// </summary>
        Default = PrepareShape
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the history of operations performed on the BRep model. This currently is only valid when
    /// the source shape was modified in the preparation step.
    /// </summary>
    public BRepTools_History History { get; private set; }

    /// <summary>
    /// Gets the root section of the identified bend hierarchy. Valid after successful analyse.
    /// </summary>
    public Section RootSection { get; private set; }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Identifies and analyzes bend sections within the specified shape, starting from the given face.
    /// </summary>
    /// <remarks>This method performs a topology analysis on the provided shape to identify bend sections. If
    /// the parameter includes <see cref="Flags.PrepareShape"/>, the shape will be preprocessed
    /// to split side faces before analysis.</remarks>
    /// <param name="shape">The shape to analyze for bend sections. Cannot be <see langword="null"/>.</param>
    /// <param name="startFace">The face from which the analysis begins. Cannot be <see langword="null"/>.</param>
    /// <param name="flags">Flags that control the behavior of the analysis, such as whether to prepare the shape before processing.</param>
    /// <returns><see langword="true"/> if the bend sections were successfully identified and analyzed; otherwise, <see
    /// langword="false"/>.</returns>
    public bool FindBendSections(TopoDS_Shape shape, TopoDS_Face startFace, Flags flags = Flags.Default)
    {
        _SourceShape = shape;
        _StartFace = startFace;
        _Flags = flags;
        History = null;

        RootSection = null;
        if (_SourceShape == null || _StartFace == null)
        {
            return false;
        }

        if (flags.HasFlag(Flags.PrepareShape))
        {
            _Prepare_SplitSideFaces();
        }

        if (!_AnalyzeTopology())
        {
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    TopoDS_Shape _SourceShape;
    TopoDS_Face _StartFace;
    Flags _Flags;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Split Side Faces

    // ReSharper disable once TypeWithSuspiciousEqualityIsUsedInRecord.Local
    record SideEdgeDescription(List<TopoDS_Vertex> Vertices, EdgeDescription Description);

    //--------------------------------------------------------------------------------------------------
    
    SideEdgeDescription _CreateSideEdgeDescription(TopoDS_Edge edge)
    {
        var edgeAdaptor = new BRepAdaptor_Curve(edge);
        GeomAbs_CurveType curveType = edgeAdaptor.GetCurveType();
        if (!_IsSupported(curveType))
        {
            return null;
        }
        return new(edge.Vertices(), EdgeDescription.Create(edgeAdaptor));
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * Prepare the source shape by healing some problematic topology.
     * 1. Find unified side faces and cut out the parts which belong to bend faces
     * 2. more checks might follow later
     */
    void _Prepare_SplitSideFaces()
    {
        TopoDS_Shape shape = _SourceShape;
        BRepTools_ReShape reshaper = null;
        List<TopoDS_Face> faces = shape.Faces();

        for (var index = 0; index < faces.Count; index++)
        {
            var face = faces[index];

            // Start face is per definition not part of a bend section
            if (face.IsSame(_StartFace))
            {
                continue;
            }

            var edges = BRepTools.OuterWire(face).Edges();
            if (edges.Count <= 4)
            {
                // Faces with 4 edges is the minimum for a bend side face
                continue;
            }

            // Find pairs of circular edges with coaxial position and same angle
            List<SideEdgeDescription> bendEdges = new();
            foreach (var edge in edges)
            {
                var edgeDesc = _CreateSideEdgeDescription(edge);
                if(edgeDesc != null)
                {
                    bendEdges.Add(edgeDesc);
                }
            }

            List<TopoDS_Edge> splitEdges = new();
            while (bendEdges.Count > 1)
            {
                var curEdge = bendEdges[0];
                bendEdges.RemoveAt(0);

                Pnt p11 = curEdge.Vertices[0].Pnt();
                Pnt p12 = curEdge.Vertices[1].Pnt();
                Double maxDistance = double.MaxValue;
                SideEdgeDescription partner = null;

                // Find pair
                foreach (var candidate in bendEdges)
                {
                    if (candidate.Description.CanShareBend(curEdge.Description) != SurfaceType.Side)
                        continue;

                    Pnt pCand1 = candidate.Vertices[0].Pnt();
                    Pnt pCand2 = candidate.Vertices[1].Pnt();
                    double distance = Math.Max(Math.Min(p11.SquareDistance(pCand1), p12.SquareDistance(pCand1)),
                        Math.Min(p11.SquareDistance(pCand2), p12.SquareDistance(pCand2)));
                    if (!distance.IsEqual(0.0, 0.001) && distance < maxDistance)
                    {
                        partner = candidate;
                        maxDistance = distance;
                    }
                }

                if (partner == null)
                {
                    // No partner found
                    continue;
                }
                bendEdges.Remove(partner);

                // Find out which vertices to connect and create edges
                // Since they are lying on concentric circles or ellipses, we can just decide by distance
                TopoDS_Edge cutEdge1;
                TopoDS_Edge cutEdge2;
                var p21 = partner.Vertices[0].Pnt();
                if (p11.IsEqual(p21, Precision.Confusion()) || p12.IsEqual(p21, Precision.Confusion()))
                {
                    // Coincident vertices, can not be a bend section
                    continue;
                }
                if (p11.SquareDistance(p21) < p12.SquareDistance(p21))
                {
                    cutEdge1 = new BRepBuilderAPI_MakeEdge(curEdge.Vertices[0], partner.Vertices[0]).Edge();
                    cutEdge2 = new BRepBuilderAPI_MakeEdge(curEdge.Vertices[1], partner.Vertices[1]).Edge();
                }
                else
                {
                    cutEdge1 = new BRepBuilderAPI_MakeEdge(curEdge.Vertices[0], partner.Vertices[1]).Edge();
                    cutEdge2 = new BRepBuilderAPI_MakeEdge(curEdge.Vertices[1], partner.Vertices[0]).Edge();
                }

                // Split face by new edges
                splitEdges.Add(cutEdge1);
                splitEdges.Add(cutEdge2);
            }

            if (splitEdges.Count == 0)
            {
                continue;
            }

            if (_Flags.HasFlag(Flags.DebugOutput))
            {
                Messages.Trace($"Unified side face {index} detected, splitting with {splitEdges.Count} edges.");
            }

            BOPAlgo_Splitter splitter = new();
            splitter.AddArgument(face);
            splitEdges.ForEach(splitter.AddTool);
            splitter.Perform();
            if (splitter.HasErrors())
            {
                // Dump errors into a string
                var errorDump = new StringWriter();
                splitter.DumpErrors(errorDump);
                Messages.Warning($"Splitting unified side face failed with error: {errorDump}");
                continue;
            }

            // Request replacement of face with newly created faces
            var splittedShape = splitter.Shape();
            reshaper ??= new BRepTools_ReShape();
            reshaper.Replace(face, splittedShape);
        }

        // If faces are requested to replace, do it now
        if (reshaper != null)
        {
            shape = reshaper.Apply(shape);
            History = reshaper.History();
            _SourceShape = shape;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Section Data Model

    /// <summary>
    /// The section class represents parts of the shape which can be connected.
    /// Each section with normal geometry is connected to a number of bend sections,
    /// bend sections can have only one further connection(the parent section does not count
    /// here), this can be a bend section or normal geometry section.
    /// </summary>
    public class Section
    {
        public readonly List<TopoDS_Face> Faces = new();
        public readonly List<Section> Children = new();

        public bool IsBendSection
        {
            get { return BendParameter != null; }
        }

        public BendParameter BendParameter;
    }

    //--------------------------------------------------------------------------------------------------

    public class BendParameter
    {
        /// <summary>
        /// Each bend section has exactly four faces. The numbering is:
        /// 0 - top/bottom face
        /// 1/2 - side faces
        /// 3 - opposite top/bottom face
        /// </summary>
        public readonly TopoDS_Face[] Faces = new TopoDS_Face[4];

        /// <summary>
        /// These edges connect the bend section faces, they are all circular
        /// </summary>
        public readonly TopoDS_Edge[] Edges = new TopoDS_Edge[4];

        /// <summary>
        /// In[0] is the face which has encountered the bend section as a
        /// connected face.In[1] is the opposite face belonging to the same
        /// section. This is the parent section.
        /// </summary>
        public readonly TopoDS_Face[] ConnectedInFaces = new TopoDS_Face[2];

        /// <summary>
        /// Edges the bend faces share with <see cref="ConnectedInFaces"/>,
        /// </summary>
        public readonly TopoDS_Edge[] ConnectedInEdges = new TopoDS_Edge[2];

        /// <summary>
        /// Out[0] and Out[1] are the faces connected to the top/bottom face
        /// of the section on the other side, they are part of the connected section.
        /// </summary>
        public readonly TopoDS_Face[] ConnectedOutFaces = new TopoDS_Face[2];

        /// <summary>
        /// Edges the bend faces share with <see cref="ConnectedOutEdges"/>,
        /// </summary>
        public readonly TopoDS_Edge[] ConnectedOutEdges = new TopoDS_Edge[2];

        /// <summary>
        /// The axis of the bend.
        /// </summary>
        public Ax2 Axis;

        /// <summary>
        /// The inner (smaller) radius of the bend.
        /// </summary>
        public double InnerRadius;

        /// <summary>
        /// The outer (greater) radius of the bend.
        /// </summary>
        public double OuterRadius;

        /// <summary>
        /// The angle of the bend section in radians.
        /// </summary>
        public double AngleRad;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Analyze

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
    bool _AnalyzeTopology()
    {
        var queuedSections = new Queue<Section>();
        var queuedFaces = new Queue<TopoDS_Face>();
        var processedFaces = new List<TopoDS_Face>();
        var abandonedFaces = new List<TopoDS_Face>(); // Faces that are falsely detected as side faces of a bend section

        // Init algorithm with root section and reference face
        RootSection = new Section();
        RootSection.Faces.Add(_StartFace);
        processedFaces.Add(_StartFace);
        queuedSections.Enqueue(RootSection);

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
                var connectedFaces = FaceAlgo.FindConnectedFaces(_SourceShape, currentFace);
                foreach (var connectedFace in connectedFaces.Keys)
                {
                    if (processedFaces.ContainsSame(connectedFace))
                        continue;
                    processedFaces.Add(connectedFace);

                    if (currentSection.IsBendSection)
                    {
                        if (currentSection.Faces.ContainsSame(connectedFace))
                            continue;
                        if (_IsFaceOfBendSection(connectedFace, null))
                            continue;

                        // Add to following section
                        currentSection.Children.First().Faces.Add(connectedFace);
                    }
                    else
                    {
                        // Bend section detection
                        if (_AnalyzeBendSection(connectedFace, connectedFaces[connectedFace], out var bendSection))
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
                                    if (sameFaceId >= 0)
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
                if (!currentSection.Faces.ContainsSame(abandonedFace))
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
                Messages.Trace($"Analyze: {id} BendSection with {section.Faces.Count} faces, Radii {section.BendParameter.InnerRadius} and {section.BendParameter.OuterRadius}.");
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

        if (_Flags.HasFlag(Flags.DebugOutput))
        {
            _PrintSectionInfo(RootSection, "0");
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * Determine if a face belongs to a bend section. 
     *
     * If a side face is detected, the iteration of faces should stop, but no section is built.
     * If a top/bottom face is detected, the whole section is recovered and all parameters are
     * determined. The faces are found by searching for faces which share the circular/elliptical edges.
     *
     * This function calls itself recursively if one of the out-faces is also recognized as part of
     * a connected bend section.
     */
    bool _AnalyzeBendSection(TopoDS_Face baseFace, TopoDS_Edge sharedEdge, out Section section)
    {
        section = null;

        // The shared edge must be straight to be a bend edge
        if (sharedEdge.Adaptor().GetCurveType() != GeomAbs_CurveType.Line)
        {
            return false;
        }

        var bendParams = new BendParameter();
        bendParams.Faces[0] = baseFace;

        if (!_IsFaceOfBendSection(baseFace, bendParams))
        {
            return false;
        }

        // Check surface type
        var faceSurfaceType = new BRepAdaptor_Surface(baseFace).GetSurfaceType();
        if (_IsSupported(faceSurfaceType, SurfaceType.Side))
        {
            // Ignore them for the moment, but sign them as bend section face
            return true;
        }
        if (!_IsSupported(faceSurfaceType, SurfaceType.Bend))
        {
            return false;
        }

        // Find side faces
        var facesForEdge0 = EdgeAlgo.FindAdjacentFaces(_SourceShape, bendParams.Edges[0]);
        bendParams.Faces[1] = facesForEdge0.face1.IsSame(baseFace) ? facesForEdge0.face2 : facesForEdge0.face1;
        if (!_IsFaceOfBendSection(bendParams.Faces[1], bendParams))
        {
            return false;
        }

        var facesForEdge1 = EdgeAlgo.FindAdjacentFaces(_SourceShape, bendParams.Edges[1]);
        bendParams.Faces[2] = facesForEdge1.face1.IsSame(baseFace) ? facesForEdge1.face2 : facesForEdge1.face1;
        if (!_IsFaceOfBendSection(bendParams.Faces[2], bendParams))
        {
            return false;
        }

        // Find fourth face
        var facesForEdge2 = EdgeAlgo.FindAdjacentFaces(_SourceShape, bendParams.Edges[2]);
        var facesForEdge3 = EdgeAlgo.FindAdjacentFaces(_SourceShape, bendParams.Edges[3]);
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
        {
            return false; // fourth face not found
        }

        if (!_IsFaceOfBendSection(bendParams.Faces[3], bendParams))
        {
            return false;
        }

        // Find connected faces
        if (!_FindFacesConnectedToBendSection(sharedEdge, bendParams))
        {
            return false;
        }

        // Which side of the bend section is our in-side?
        // A point translated along the XDirection of the axis using one of the radii must be on the edge.
        var edgeAdaptor = new BRepAdaptor_Curve(bendParams.ConnectedInEdges[0]);
        var pnt0 = bendParams.Axis.Location.Translated(bendParams.Axis.XDirection.ToVec() * bendParams.InnerRadius);
        var pnt1 = bendParams.Axis.Location.Translated(bendParams.Axis.XDirection.ToVec() * bendParams.OuterRadius);
        if (!(edgeAdaptor.Line().Contains(pnt0, 0.000001) || edgeAdaptor.Line().Contains(pnt1, 0.000001)))
        {
            bendParams.Axis.Rotate(bendParams.Axis.Axis, bendParams.AngleRad + Maths.PI);
            bendParams.AngleRad *= -1;
        }

        // Create Section
        section = new Section();
        section.Faces.AddRange(bendParams.Faces.Where(face => face != null));
        section.BendParameter = bendParams;

        // Check if the connected section is also a bend section
        if (bendParams.ConnectedOutFaces[0] != null
            && _AnalyzeBendSection(bendParams.ConnectedOutFaces[0], bendParams.ConnectedOutEdges[0], out var connectedBendSection))
        {
            if (connectedBendSection == null)
            {
                Messages.Error("A bend section is connected to another bend section with a perpendicular direction.",
                    "To fix this, you need to add a small flange between these two bend sections.");
                return false;
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

    /*
     * The four edges of a bend section are always circular or elliptical, we get four different
     * ovals. Two of the ovals share the same axis, each of them share the same radii with
     * one of the other two ovals.
     */
    bool _IsFaceOfBendSection(TopoDS_Face face, BendParameter bendParams)
    {
        if (face == null)
        {
            return false;
        }

        bendParams ??= new BendParameter(); // If not give, create temporary

        // Each face of a bend section has two oval edges
        var edges = BRepTools.OuterWire(face).Edges();
        var foundArcEdges = 0;
        var faceSurfaceType = face.Adaptor().GetSurfaceType();
        bool isSideFace = _IsSupported(faceSurfaceType, SurfaceType.Side);
        if (!isSideFace && !_IsSupported(faceSurfaceType, SurfaceType.Bend))
        {
            return false; // Not support yet
        }

        EdgeDescription firstEdgeDesc = null;
        foreach (var edge in edges)
        {
            var edgeDesc = EdgeDescription.Create(edge);
            if (edgeDesc == null)
            {
                continue;
            }

            foundArcEdges++;
            if (foundArcEdges == 1)
            {
                firstEdgeDesc = edgeDesc;
            }

            if (bendParams.Edges[0] == null)
            {
                bendParams.Edges[0] = edge;
                bendParams.InnerRadius = edgeDesc.Radius;
                bendParams.AngleRad = edgeDesc.ArcAngleRad;
                firstEdgeDesc = edgeDesc;
            }
            else
            {
                SurfaceType surfaceType = firstEdgeDesc.CanShareBend(edgeDesc);
                if(surfaceType == SurfaceType.None)
                {
                    return false; // Edge with unproper parameters detected
                }

                if (foundArcEdges == 2)
                {
                    if (isSideFace != (surfaceType == SurfaceType.Side))
                        return false;
                }

                if (bendParams.Edges[1] == null)
                {
                    // Second edge of bend surface
                    bendParams.Edges[1] = edge;
                    if (!isSideFace)
                    {
                        Dir direction = new Vec(firstEdgeDesc.Location, edgeDesc.Location).ToDir();
                        bendParams.Axis = firstEdgeDesc.GetAxisForDirection(direction);
                    }
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
                    {
                        break;
                    }
                }

                // If radius is different, take it as the second radius
                if (!edgeDesc.Radius.IsEqual(bendParams.InnerRadius, 0.000001))
                {
                    if (edgeDesc.Radius < bendParams.InnerRadius)
                    {
                        bendParams.OuterRadius = edgeDesc.Radius;
                        bendParams.InnerRadius = edgeDesc.Radius;
                    }
                    else
                    {
                        bendParams.OuterRadius = edgeDesc.Radius;
                    }
                }
            }
        }

        return foundArcEdges == 2;
    }

    //--------------------------------------------------------------------------------------------------

    bool _FindFacesConnectedToBendSection(TopoDS_Edge sharedEdge, BendParameter bendParams)
    {
        // Find connected section faces
        bendParams.ConnectedInEdges[0] = sharedEdge;
        bendParams.ConnectedInFaces[0] = FaceAlgo.FindConnectedFace(_SourceShape, bendParams.Faces[0], sharedEdge);
        var opEdge = bendParams.Faces[0].Edges().Find(e => !e.IsSame(sharedEdge) && !e.IsSame(bendParams.Edges[0]) && !e.IsSame(bendParams.Edges[1]));
        if (opEdge != null)
        {
            bendParams.ConnectedOutEdges[0] = opEdge;
            bendParams.ConnectedOutFaces[0] = FaceAlgo.FindConnectedFace(_SourceShape, bendParams.Faces[0], opEdge);
        }

        // Find the other connection edge by using the edge which has a vertex closest to the in-edge vertex
        Pnt refPnt = sharedEdge.Vertices()[0].Pnt();
        double otherSharedEdgeDistance = double.MaxValue;
        TopoDS_Edge otherSharedEdge = null;
        foreach (var edge in bendParams.Faces[3].Edges().Where(edge => !_IsSupported(edge.Adaptor().GetCurveType())))
        {
            foreach (var vertex in edge.Vertices())
            {
                var distance = vertex.Pnt().Distance(refPnt);
                if (distance < otherSharedEdgeDistance)
                {
                    otherSharedEdge = edge;
                    otherSharedEdgeDistance = distance;
                }
            }
        }
        if (otherSharedEdge == null)
            return false;
        
        // Find connected section faces for the other edge
        bendParams.ConnectedInEdges[1] = otherSharedEdge;
        bendParams.ConnectedInFaces[1] = FaceAlgo.FindConnectedFace(_SourceShape, bendParams.Faces[3], otherSharedEdge);
        var otherOpEdge = bendParams.Faces[3].Edges().Find(e => !e.IsSame(otherSharedEdge) && !e.IsSame(bendParams.Edges[2]) && !e.IsSame(bendParams.Edges[3]));
        if (otherOpEdge != null)
        {
            bendParams.ConnectedOutEdges[1] = otherOpEdge;
            bendParams.ConnectedOutFaces[1] = FaceAlgo.FindConnectedFace(_SourceShape, bendParams.Faces[3], otherOpEdge);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Classification functions

    enum SurfaceType
    {
        Bend,
        Side,
        None
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsSupported(GeomAbs_SurfaceType geomSurfaceType, SurfaceType surfaceType)
    {
        switch (surfaceType)
        {
            case SurfaceType.Bend:
                return geomSurfaceType is GeomAbs_SurfaceType.Cylinder;

            case SurfaceType.Side:
                return geomSurfaceType is GeomAbs_SurfaceType.Plane
                    or GeomAbs_SurfaceType.BSplineSurface
                    or GeomAbs_SurfaceType.BezierSurface;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsSupported(GeomAbs_CurveType geomCurveType)
    {
        return geomCurveType is GeomAbs_CurveType.Circle
            or GeomAbs_CurveType.Ellipse;
    }


    //--------------------------------------------------------------------------------------------------

    record EdgeDescription(Pnt Location, double Radius, double ArcAngleRad, Ax2[] Axes)
    {
        internal static EdgeDescription Create(TopoDS_Edge edge)
        {
            return Create(new BRepAdaptor_Curve(edge));
        }

        //--------------------------------------------------------------------------------------------------

        internal static EdgeDescription Create(BRepAdaptor_Curve edgeAdaptor)
        {
            switch (edgeAdaptor.GetCurveType())
            {
                case GeomAbs_CurveType.Circle:
                    gp_Circ circle = edgeAdaptor.Circle();
                    var axis = circle.Position();
                    axis.Rotate(axis.Axis, edgeAdaptor.FirstParameter());
                    return new(axis.Location, circle.Radius(), edgeAdaptor.LastParameter() - edgeAdaptor.FirstParameter(), [axis]);

                case GeomAbs_CurveType.Ellipse:
                    gp_Elips ellipse = edgeAdaptor.Ellipse();
                    var ellipseAxis = ellipse.Position();

                    // Get normal of a plane on which the ellipse get a circle, this is our bend axis
                    // There are two valid solutions. As we cannot decide which is the right one,
                    // take both and compare to the bend axis calculated by the locations later.
                    double theta = Math.Acos(ellipse.MinorRadius() / ellipse.MajorRadius());
                    Ax2 axis1 = ellipseAxis.Rotated(new(ellipseAxis.Location, ellipseAxis.YDirection), theta);
                    axis1.Rotate(axis1.Axis, edgeAdaptor.FirstParameter());
                    Ax2 axis2 = ellipseAxis.Rotated(new(ellipseAxis.Location, ellipseAxis.YDirection), -theta);
                    axis2.Rotate(axis2.Axis, edgeAdaptor.FirstParameter());
                    return new(ellipseAxis.Location, ellipse.MinorRadius(), edgeAdaptor.LastParameter() - edgeAdaptor.FirstParameter(), [axis1, axis2]);

                default:
                    return null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        internal Ax2 GetAxisForDirection(Dir direction)
        {
            for (int i = 1; i < Axes.Length; i++)
            {
                if (direction.IsParallel(Axes[i].Direction, 0.01))
                    return Axes[i];
            }
            return Axes[0];
        }

        //--------------------------------------------------------------------------------------------------
        
        internal SurfaceType CanShareBend(EdgeDescription other)
        {
            if (!ArcAngleRad.IsEqual(other.ArcAngleRad, 0.01))
            {
                return SurfaceType.None;
            }
            if (!Axes.Any(axis1 => other.Axes.Any(axis2 => axis1.Axis.IsCoaxial(axis2.Axis, 0.01, 0.001)
                                                                 || axis1.Axis.IsCoaxial(axis2.Axis.Reversed(), 0.01, 0.001))))
            {
                return SurfaceType.None;
            }
            return Radius.IsEqual(other.Radius, 0.0001) ? SurfaceType.Bend : SurfaceType.Side;
        }
    }

    //--------------------------------------------------------------------------------------------------


    #endregion
}

using System;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core.Geom;

namespace Macad.Core.Shapes;

public sealed class HalvedJoint : AssociatedModifier<HalvedJoint>
{
    #region Properties

    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Ratio
    {
        get { return _Ratio; }
        set
        {
            if (_Ratio != value)
            {
                SaveUndo();
                _Ratio = value.Clamp(0.01, 0.99);
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public int[] ReferenceFaces
    {
        get { return _ReferenceFaces; }
        set
        {
            if (_ReferenceFaces != value)
            {
                SaveUndo();
                _ReferenceFaces = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    double _Ratio;
    int[] _ReferenceFaces;

    // List of orientation candidate faces for tool, cached after Make, but not serialized
    List<TopoDS_Face>[] _CandidateFaces;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public HalvedJoint()
    {
        Name = "Halved Joint";

        _Ratio = 0.5;
        // SyncProperties needs to be updated for every synced property
    }

    //--------------------------------------------------------------------------------------------------

    public new static (HalvedJoint First, HalvedJoint Second) Create(Body body1, Body body2)
    {
        return AssociatedModifier<HalvedJoint>.Create(body1, body2);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    class CommonPart
    {
        internal TopoDS_Solid CommonShape;
        internal List<TopoDS_Face> Faces;
        internal bool ChangeOrder;
    }

    //--------------------------------------------------------------------------------------------------

    class MakeContext
    {
        internal TopoDS_Shape OwnBrep;
        internal TopoDS_Shape OtherBrep;
        internal readonly List<CommonPart> CommonParts = new();
        internal TopoDS_Shape Result;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();
        _CandidateFaces = null;

        // Check if connection is valid
        if (AssociatedShape == null)
            return Skip();

        var context = new MakeContext();

        if (!_DoInitContext(context))
            return false;

        // Build common Solid
        if (!_DoMakeCommon(context))
            return false;

        // Nothing in Common
        if (context.CommonParts.Count == 0)
            return Skip();

        // Cut box pieces out of the shape
        if (!_DoCutout(context))
            return false;

        BRep = context.Result;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoInitContext(MakeContext context)
    {
        // Currently we work with 2 source shape only
        if (Operands.Count != 2)
        {
            Messages.Error("This modifier needs exactly two operands.");
            return false;
        }

        // Get BReps
        context.OwnBrep = GetOperandBRep(0);
        if (context.OwnBrep == null)
        {
            Messages.Error("The predecessor shape is not valid.");
            return false;
        }

        context.OtherBrep = GetAssociatedSourceBRep();
        if (context.OtherBrep == null)
        {
            Messages.Error("The associated shape is not valid.");
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoMakeCommon(MakeContext context)
    {
        var firstBrep = IsFirst ? context.OwnBrep : context.OtherBrep;
        var secondBrep = IsFirst ? context.OtherBrep : context.OwnBrep;

        // Make common
        var makeCommon = new BRepAlgoAPI_Common(firstBrep, secondBrep);
        if (!makeCommon.IsDone())
        {
            Messages.Error("Cannot find a common between both shapes.");
            return false;
        }
        makeCommon.SimplifyResult(true, true);
        var commonBrep = makeCommon.Shape();
        var solids = commonBrep.Solids();
        if (solids.Count == 0)
        {
            // Nothing in common
            return true;
        }

        // It is tried to find a face which is the best guess for being the top or bottom of the
        // cutout solid. For this we look which faces originally came from each input shape
        // and then differ the cases dependent on the count and relation of found faces

        var firstModifiedFaces = firstBrep.Faces().SelectMany(makeCommon.Modified).Distinct().ToArray();
        var secondModifiedFaces = secondBrep.Faces().SelectMany(makeCommon.Modified).Distinct().ToArray();
        var sharedModifiedFaces = firstModifiedFaces.Where(secondModifiedFaces.ContainsSame).ToArray();
        var list = commonBrep.Solids();
        _CandidateFaces = new List<TopoDS_Face>[list.Count];

        for (var partIndex = 0; partIndex < list.Count; partIndex++)
        {
            var commonSolid = list[partIndex];
            var commonFaces = commonSolid.Faces();
            var partFaces = sharedModifiedFaces.Where(commonFaces.ContainsSame)
                                               .Select(s => s.ToFace())
                                               .ToList();
            _CandidateFaces[partIndex] = new List<TopoDS_Face>(partFaces);

            if (ReferenceFaces?.Length > 0 && partIndex < ReferenceFaces.Length)
            {
                int refFaceIndex = ReferenceFaces[partIndex];
                if (refFaceIndex > 0)
                {
                    if (refFaceIndex > partFaces.Count)
                    {
                        Messages.Warning("The orientation reference is not valid anymore. Please reselect the orientation reference.");
                    }
                    else
                    {
                        partFaces.RemoveRange(0, refFaceIndex-1);
                        partFaces.RemoveRange(1, partFaces.Count-1);
                    }
                }
            }

            List<TopoDS_Face> finalFaces = new();
            switch (partFaces.Count)
            {
                case 0:
                {
                    // Both shapes are bigger than the common
                    // We take the faces of the common which are created from our source shape, which gives
                    // us three faces arranged like a U. We need the middle one.
                    var candidateFaces = commonFaces.Where(face => firstModifiedFaces.ContainsSame(face)).ToArray();
                    TopoDS_Face foundFace = null;
                    int foundCount = 0;
                    foreach (var face in candidateFaces)
                    {
                        if (FaceAlgo.FindConnectedFaces(commonSolid, face).Keys.Count(candidateFaces.ContainsSame) == 2)
                        {
                            foundCount++;
                            foundFace = face;
                        }
                    }

                    if (foundCount != 1)
                    {
                        Messages.Warning("Cannot find common faces on one part of the common. Both shapes need to have a side to be opened by the common.");
                        continue;
                    }

                    finalFaces.Add(foundFace);
                    break;
                }

                case 1:
                {
                    // Case: Crossing with different height
                    // Case: Preselected reference face
                    finalFaces.Add(partFaces[0]);
                    break;
                }

                case 2:
                {
                    if (FaceAlgo.FindSharedEdge(partFaces[0], partFaces[1]) != null)
                    {
                        // Case 1: Tee with different height
                        // The faces are adjacent, take one of the faces which have more than one neighbours in the own modified set
                        // Case 2: Corner with different positions
                        // The faces are adjacent, both can be used, there is no precedence
                        foreach (var face in partFaces)
                        {
                            var faceCount = FaceAlgo.FindConnectedFaces(commonSolid, face).Keys.Count(firstModifiedFaces.ContainsSame);
                            if (faceCount is 2 or 3)
                            {
                                finalFaces.Add(face);
                                break;
                            }
                        }
                    }
                    else
                    {
                        // Case: Crossing with same height, take both
                        // The faces are opposite
                        finalFaces.Add(partFaces[0]);
                        finalFaces.Add(partFaces[1]);
                    }

                    break;
                }

                case 3:
                {
                    // Try Case: Tee with equal height
                    int foundCount = 0;
                    foreach (var face in partFaces)
                    {
                        if (FaceAlgo.FindConnectedFaces(commonSolid, face).Keys.Count(partFaces.ContainsSame) == 1)
                        {
                            foundCount++;
                            finalFaces.Add(face);
                        }
                    }

                    if (foundCount != 2)
                    {
                        // Try next Case: Corner with different heights
                        // Take one of the faces which have only three neighbours in the own modified set
                        finalFaces.Clear();
                        foreach (var face in partFaces)
                        {
                            if (FaceAlgo.FindConnectedFaces(commonSolid, face).Keys.Count(firstModifiedFaces.ContainsSame) == 3)
                            {
                                finalFaces.Add(face);
                                break;
                            }
                        }
                    }

                    break;
                }

                case 4:
                {
                    // Case: Corner with equal heights
                    // Take one of the faces which have only two neighbours
                    foreach (var face in partFaces)
                    {
                        if (FaceAlgo.FindConnectedFaces(commonSolid, face).Keys.Count(partFaces.ContainsSame) == 2)
                        {
                            finalFaces.Add(face);
                        }
                    }

                    break;
                }

                default:
                {
                    Messages.Warning("Cannot detect any valid case of input data.");
                    continue;
                }
            }

            if (finalFaces.Count == 0)
            {
                Messages.Warning("Cannot find common faces on one part of the common.");
                continue;
            }

            if (finalFaces.Count == 1)
            {
                // One of the former cases did only find one face.
                // Find the opface to find the half way
                var opFace = FaceAlgo.FindOppositeFace(commonSolid, finalFaces[0], true, angularTolerance: Maths.PI / 4.0);
                if (opFace == null)
                {
                    Messages.Warning("Cannot find second common face on one part of the common. Both shapes need to have a side to be opened by the common.");
                    continue;
                }

                finalFaces.Add(opFace);
            }

            var part = new CommonPart()
            {
                CommonShape = commonSolid,
                Faces = finalFaces,
                ChangeOrder = !secondModifiedFaces.ContainsSame(finalFaces[1])
            };
            context.CommonParts.Add(part);
        }

        if (context.CommonParts.Count == 0)
        {
            Messages.Warning("Cannot find a common between both shapes which can be jointed.");
        }

        RaisePropertyChanged(nameof(ReferenceFaces));

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoCutout(MakeContext context)
    {
        TopoDS_Shape currentShape = context.OwnBrep;

        foreach (var part in context.CommonParts)
        {
            // Find cut plane between
            var normal1 = FaceAlgo.GetFaceCenterNormal(part.Faces[0]);
            var normal2 = FaceAlgo.GetFaceCenterNormal(part.Faces[1]).Reversed();
            var planeLoc = normal1.Location.Translated(new Vec(normal1.Location, normal2.Location)
                                           .Multiplied(IsFirst ? _Ratio : 1.0 - _Ratio));
            var planeDir = normal1.Direction.Slerped(normal2.Direction, 0.5);
            var build = new BRep_Builder();
            var cutPlaneFace = new TopoDS_Face();
            build.MakeFace(cutPlaneFace, new Geom_Plane(new Pln(planeLoc, planeDir)), 1e-7);
            
            // Split common in half
            var listOfArguments = new TopTools_ListOfShape();
            listOfArguments.Append(part.CommonShape);
            var listOfTools = new TopTools_ListOfShape();
            listOfTools.Append(cutPlaneFace);

            var splitter = new BRepAlgoAPI_Splitter();
            splitter.SetArguments(listOfArguments);
            splitter.SetTools(listOfTools);
            splitter.Build();
            if (!splitter.IsDone())
            {
                Messages.Error("Cannot split common in half.");
                return false;
            }

            var cutouts = splitter.Shape().Solids();
            if (cutouts.Count != 2)
            {
                Messages.Error("Cannot split common in half (split result has invalid count).");
                return false;
            }

            // Select cutout
            var firstCutout = IsFirst;
            if(part.ChangeOrder)
            {
                firstCutout = !firstCutout;
            }
            if (!cutouts[1].Faces().ContainsSame(part.Faces[1]))
            {
                firstCutout = !firstCutout;
            }
            var cutout = cutouts[firstCutout ? 0 : 1];

            // Cut from original shape
            listOfArguments = new TopTools_ListOfShape();
            listOfArguments.Append(currentShape);
            listOfTools = new TopTools_ListOfShape();
            listOfTools.Append(cutout);

            var cutter = new BRepAlgoAPI_Cut();
            cutter.SetArguments(listOfArguments);
            cutter.SetTools(listOfTools);
            cutter.Build();
            if (!cutter.IsDone())
            {
                Messages.Error("Cannot cut out of shape.");
                return false;
            }

            UpdateModifiedSubshapes(currentShape, cutter);
            currentShape = cutter.Shape();
        }

        context.Result = currentShape;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Interconnectivity Functions

    protected override void SyncProperties(HalvedJoint source)
    {
        Ratio = 1.0 - source.Ratio;
        ReferenceFaces = source.ReferenceFaces;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper for Tooling

    public List<TopoDS_Face>[] GetOrientationCandidates()
    {
        if (_CandidateFaces == null)
        {
            EnsureHistory();
        }
        return _CandidateFaces;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetOrientationReference(TopoDS_Face face)
    {
        if(_CandidateFaces == null || _CandidateFaces.Length == 0)
            return;

        var refIndices = new int[_CandidateFaces.Length];
        if (_ReferenceFaces != null)
        {
            for (int i = 0; i < Math.Min(_ReferenceFaces.Length, refIndices.Length); i++)
            {
                refIndices[i] = _ReferenceFaces[i];
            }
        }

        for (var i = 0; i < _CandidateFaces.Length; i++)
        {
            int index = _CandidateFaces[i].IndexOfSame(face);
            if (index >= 0)
            {
                refIndices[i] = index+1;
                ReferenceFaces = refIndices;
                break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
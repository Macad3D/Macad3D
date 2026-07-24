using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Test.Utils;

/// <summary>
/// Checks that a subshape reference keeps pointing at the *same* subshape after an
/// upstream parameter was changed and the shape was rebuilt.
///
/// The golden-file comparison pins reference names to bounding boxes for one fixed set
/// of parameters, so it cannot see a reference that slides onto a different face once a
/// parameter moves. That is what this checks instead.
///
/// Ground truth is geometric and computed independently of the references: the parameter
/// change is kept small, so every face of the rebuilt shape can be matched to the face it
/// came from by (same normal direction, nearest centre). The reference is correct only if
/// it resolves to exactly that face.
/// </summary>
public static class SubshapeReferenceStabilityCheck
{
    const double _NormalTolerance = 1e-4;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Checks that all subshape references that resolve to a subshape before a parameter change.
    /// The check is only valid if the parameter change is small enough to not alter the topology of the shape
    /// or to transform it significantly.
    /// </summary>
    public static bool CheckReferencesAfterChange(Shape shape, Action applyChange, out string summary)
    {
        // --- capture the state before the change ---
        var brepBefore = shape.GetBRep();
        Assert.That(brepBefore, Is.Not.Null, "Shape has no BRep before the change");

        var facesBefore = brepBefore.Faces();

        // --- change a parameter and rebuild ---
        applyChange();
        shape.Invalidate();
        Assert.That(shape.Make(Shape.MakeFlags.None), Is.True, "Rebuild after the parameter change failed");

        var brepAfter = shape.GetBRep();
        Assert.That(brepAfter, Is.Not.Null, "Shape has no BRep after the rebuild");

        var facesAfter = brepAfter.Faces();
        var edgesAfter = brepAfter.Edges();
        var verticesAfter = brepAfter.Vertices();

        // The change must not alter the topology, otherwise the geometric matching below
        // has no well-defined answer and the test would be measuring the wrong thing.
        if (facesAfter.Count != facesBefore.Count)
        {
            summary = $"topology changed by the parameter change ({facesBefore.Count} -> {facesAfter.Count} faces) "
                      + "- choose a smaller change";
            return false;
        }

        var edgesBefore = brepBefore.Edges();
        if (edgesAfter.Count != edgesBefore.Count)
        {
            summary = $"topology changed by the parameter change ({edgesBefore.Count} -> {edgesAfter.Count} edges) "
                      + "- choose a smaller change";
            return false;
        }

        var verticesBefore = brepBefore.Vertices();
        if (verticesAfter.Count != verticesBefore.Count)
        {
            summary = $"topology changed by the parameter change ({verticesBefore.Count} -> {verticesAfter.Count} vertices) "
                      + "- choose a smaller change";
            return false;
        }

        // Check face references using the generic helper
        bool result = _CheckSubshapesAfterChange(
            shape,
            facesBefore,
            facesAfter,
            face => FaceAlgo.GetFaceCenterNormal(face).Location,
            face => FaceAlgo.GetFaceCenterNormal(face).Direction,
            "face",
            out int faceChecked,
            out int faceNotSelfResolving,
            out int faceAmbiguous,
            out int faceUnresolved,
            out int faceSlid);

        // Check edge references using the generic helper
        result &= _CheckSubshapesAfterChange(
            shape,
            edgesBefore,
            edgesAfter,
            edge => edge.CenterOfMass(),
            edge => (Dir?)null,
            "edge",
            out int edgeChecked,
            out int edgeNotSelfResolving,
            out int edgeAmbiguous,
            out int edgeUnresolved,
            out int edgeSlid);

        // Check vertex references using the generic helper
        result &= _CheckSubshapesAfterChange(
            shape,
            verticesBefore,
            verticesAfter,
            vertex => vertex.Pnt(),
            vertex => (Dir?)null,
            "vertex",
            out int vertexChecked,
            out int vertexNotSelfResolving,
            out int vertexAmbiguous,
            out int vertexUnresolved,
            out int vertexSlid);

        summary = $"Faces: {faceChecked} refs checked, {faceNotSelfResolving} excluded, {faceAmbiguous} ambiguous, "
                  + $"{faceUnresolved} unresolved, {faceSlid} slid; "
                  + $"Edges: {edgeChecked} refs checked, {edgeNotSelfResolving} excluded, {edgeAmbiguous} ambiguous, "
                  + $"{edgeUnresolved} unresolved, {edgeSlid} slid; "
                  + $"Vertices: {vertexChecked} refs checked, {vertexNotSelfResolving} excluded, {vertexAmbiguous} ambiguous, "
                  + $"{vertexUnresolved} unresolved, {vertexSlid} slid";
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Generic helper that verifies subshape references remain stable after a parameter change.
    /// Filters baseline to only include self-resolving references, establishes geometric ground truth,
    /// then checks each reference resolves to the correct transformed subshape.
    /// </summary>
    static bool _CheckSubshapesAfterChange<TShape>(
        Shape shape,
        IEnumerable<TShape> subshapesBefore,
        List<TShape> subshapesAfter,
        Func<TShape, Pnt> getPosition,
        Func<TShape, Dir?> getDirection,
        string typeName,
        out int checkedCount,
        out int notSelfResolving,
        out int ambiguous,
        out int unresolved,
        out int slid)
        where TShape : TopoDS_Shape
    {
        // Control: a reference is only eligible if it already resolves back to the very subshape
        // it was taken from BEFORE anything is changed.
        var before = new List<(SubshapeReference Reference, Pnt Position, Dir? Direction)>();
        notSelfResolving = 0;

        foreach (var subshape in subshapesBefore)
        {
            var reference = shape.GetSubshapeReference(subshape);
            if (reference == null)
                continue;

            var resolved = shape.FindSubshape(reference, null);
            if (resolved == null || resolved.Count == 0 || !resolved[0].IsSame(subshape))
            {
                var pos = getPosition(subshape);
                var dir = getDirection(subshape);
                TestContext.WriteLine($"[baseline] reference does not resolve to its own {typeName}: {reference}"
                                      + $" - taken from {typeName} {(dir.HasValue ? _Describe(new Ax1(pos, dir.Value)) : _Describe(pos))}"
                                      + (resolved is { Count: > 0 }
                                          ? $", resolves to {(getDirection(resolved[0] as TShape).HasValue ? _Describe(new Ax1(getPosition(resolved[0] as TShape), getDirection(resolved[0] as TShape).Value)) : _Describe(getPosition(resolved[0] as TShape)))}"
                                          : ", resolves to nothing"));
                notSelfResolving++;
                continue;
            }

            before.Add((reference, getPosition(subshape), getDirection(subshape)));
        }

        checkedCount = before.Count;

        // Build geometric ground truth for the subshapes after rebuild
        var positionsAfter = subshapesAfter.Select(getPosition).ToList();
        var directionsAfter = subshapesAfter.Select(getDirection).ToList();

        bool result = true;
        unresolved = 0;
        slid = 0;
        ambiguous = 0;
        var resolvedTo = new Dictionary<int, string>();

        foreach (var (reference, posBefore, dirBefore) in before)
        {
            // --- ground truth: which subshape did this one become? ---
            int expected = _FindCorrespondingSubshape(posBefore, dirBefore, positionsAfter, directionsAfter, out bool unique);
            if (expected < 0 || !unique)
            {
                // Cannot establish ground truth for this subshape - do not judge the reference by it.
                ambiguous++;
                continue;
            }

            // --- what the reference actually resolves to now ---
            var found = shape.FindSubshape(reference, null);
            if (found == null || found.Count == 0)
            {
                TestContext.WriteLine($"Reference no longer resolves after the change: {reference}");
                unresolved++;
                result = false;
                continue;
            }

            int actual = subshapesAfter.FindIndex(s => s.IsSame(found[0]));
            if (actual < 0)
            {
                TestContext.WriteLine($"Reference resolved to a shape that is not a {typeName} of the result: {reference}");
                result = false;
                continue;
            }

            if (actual != expected)
            {
                var posExpected = positionsAfter[expected];
                var dirExpected = directionsAfter[expected];
                var posActual = positionsAfter[actual];
                var dirActual = directionsAfter[actual];

                TestContext.WriteLine($"Reference slid onto a different {typeName}: {reference}");
                TestContext.WriteLine($"    expected {typeName} {(dirExpected.HasValue ? _Describe(new Ax1(posExpected, dirExpected.Value)) : _Describe(posExpected))}");
                TestContext.WriteLine($"    resolved {typeName} {(dirActual.HasValue ? _Describe(new Ax1(posActual, dirActual.Value)) : _Describe(posActual))}");
                slid++;
                result = false;
                continue;
            }

            // Two references must never end up on the same subshape.
            if (resolvedTo.TryGetValue(actual, out var other))
            {
                TestContext.WriteLine($"Two references resolve to the same {typeName}: {reference} and {other}");
                result = false;
            }
            else
            {
                resolvedTo[actual] = reference.ToString();
            }
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static string _Describe(Ax1 axis)
        => $"at ({axis.Location.X:F2}, {axis.Location.Y:F2}, {axis.Location.Z:F2}) "
           + $"dir ({axis.Direction.X:F2}, {axis.Direction.Y:F2}, {axis.Direction.Z:F2})";

    //--------------------------------------------------------------------------------------------------

    static string _Describe(Pnt pnt)
        => $"at ({pnt.X:F2}, {pnt.Y:F2}, {pnt.Z:F2})";

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Finds the subshape the given one turned into, using position and optional direction matching.
    /// When dirBefore is non-null: same direction (within tolerance), nearest centre.
    /// When dirBefore is null: nearest centre only.
    /// Reports whether that match is unique, so an undecidable case is skipped rather than silently judged.
    /// </summary>
    static int _FindCorrespondingSubshape(Pnt posBefore, Dir? dirBefore, List<Pnt> positionsAfter, List<Dir?> directionsAfter, out bool unique)
    {
        unique = false;
        int best = -1;
        double bestDistance = double.MaxValue, secondBestDistance = double.MaxValue;

        for (int i = 0; i < positionsAfter.Count; i++)
        {
            // If direction is required, filter candidates by direction first
            if (dirBefore.HasValue && directionsAfter[i].HasValue)
            {
                if (!directionsAfter[i].Value.IsEqual(dirBefore.Value, _NormalTolerance))
                    continue;
            }
            else if (dirBefore.HasValue != directionsAfter[i].HasValue)
            {
                // Mismatch in whether direction is available
                continue;
            }

            double distance = positionsAfter[i].Distance(posBefore);
            if (distance < bestDistance)
            {
                secondBestDistance = bestDistance;
                bestDistance = distance;
                best = i;
            }
            else if (distance < secondBestDistance)
            {
                secondBestDistance = distance;
            }
        }

        // The nearest candidate must be clearly nearer than the runner-up, otherwise the
        // correspondence is a guess.
        unique = best >= 0 && (secondBestDistance == double.MaxValue || bestDistance < secondBestDistance * 0.5);
        return best;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CheckReferenceSurvivesReload(Body target, SubshapeReference[] refs)
    {
        Assume.That(refs.All(r => r.Type == SubshapeType.Edge));
        var chamfer = Chamfer.Create(target, refs);
        chamfer.Guid = TestData.CreateGuid(20);
        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));

        var before = __TargetedEdgeSignatures(chamfer);
        Assert.That(before, Is.Not.Empty, "Chamfer targeted no edges before reload");

        var after = __TargetedEdgeSignatures(_ReloadChamfer(chamfer));
        Assert.That(after, Is.EqualTo(before), "Boolean reference targeted different edges after save/reload");
        return true;

        //--------------------------------------------------------------------------------------------------

        static List<string> __TargetedEdgeSignatures(EdgeModifierBase mod)
        {
            var sigs = new List<string>();
            foreach (var edge in mod.GetAllContourEdges())
            {
                BRepLib.BuildCurve3d(edge);
                var bb = edge.BoundingBox(); bb.SetGap(0);
                sigs.Add(bb.ToRoundedString());
            }
            sigs.Sort();
            return sigs;
        }

        //--------------------------------------------------------------------------------------------------

        static Chamfer _ReloadChamfer(Chamfer chamfer)
        {
            var serialized = Serializer.Serialize(CoreContext.Current.Document, new SerializationContext());
            Context.InitWithDefault();
            var model = Serializer.Deserialize<Model>(serialized, new SerializationContext());
            Assert.That(model, Is.Not.Null, "Model did not deserialize");
            CoreContext.Current.Document = model;
            var reloaded = model.FindInstance(chamfer.Guid) as Chamfer;
            Assert.That(reloaded, Is.Not.Null, "Chamfer not found after reload");
            Assert.That(reloaded.Make(Shape.MakeFlags.None), Is.True, "Chamfer rebuild after reload failed");
            return reloaded;
        }
    }

    //--------------------------------------------------------------------------------------------------


}

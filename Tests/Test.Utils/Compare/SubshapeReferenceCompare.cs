using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Test.Utils;

public static class SubshapeReferenceCompare
{
    /// <summary>
    /// Checks that every face and edge of the shape yields a reference that is
    /// not a raw index into the shape's own subshape list, and that resolves
    /// back to a valid subshape.
    /// </summary>
    public static bool CheckReferences(Shape shape, bool allowSelfReferencing, bool allowNonInterned, out int indexBasedReferences)
    {
        var brep = shape.GetBRep();
        Assert.That(brep, Is.Not.Null, "Shape has no BRep");

        indexBasedReferences = 0;
        bool result = _CheckReferences(shape, brep.Faces().Select(shape.GetSubshapeReference), allowSelfReferencing, allowNonInterned, ref indexBasedReferences);
        result &= _CheckReferences(shape, brep.Edges().Select(shape.GetSubshapeReference), allowSelfReferencing, allowNonInterned, ref indexBasedReferences);

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _CheckReferences(Shape shape, IEnumerable<SubshapeReference> references, bool allowSelfReferencing, bool allowNonInterned,ref int indexBasedReferences)
    {
        bool result = true;
        var referenceList = references.ToList();

        foreach (var reference in referenceList)
        {
            if(referenceList.Count(r => r.Equals(reference)) > 1)
            {
                TestContext.WriteLine($"Duplicate reference found: {reference}");
                result = false;
            }

            if (reference.Name.IsNullOrEmpty() && reference.Sources == null)
            {
                TestContext.WriteLine($"Raw index reference found: {reference}");
                indexBasedReferences++;
            }
            else
            {
                if (!allowNonInterned && shape != null && shape.Guid.Equals(reference.ShapeId))
                {
                    if (!ReferenceEquals(reference.Name, string.IsInterned(reference.Name)))
                    {
                        TestContext.WriteLine($"Name not interned: {reference}");
                        result = false;
                    }
                }
            }

            if (reference.Sources != null)
            {
                if (reference.Sources.Length == 0)
                {
                    TestContext.WriteLine($"Empty source reference found: {reference}");
                    result = false;
                }
                else
                {
                    // Check for duplicates
                    if (reference.Sources.Distinct().Count() != reference.Sources.Length)
                    {
                        TestContext.WriteLine($"Duplicate sources found: {reference})");
                        result = false;
                    }

                    // We do not check the sources themselves, we only check that they exist.
                    int indexBasedSourceReferences = 0;
                    result &= _CheckReferences(null, reference.Sources, allowSelfReferencing, allowNonInterned, ref indexBasedSourceReferences);
                }
            }

            if (shape != null)
            {
                if (!allowSelfReferencing)
                {
                    // Check that no source references the shape itself, which would be a circular reference.
                    if (reference.Sources != null)
                    {
                        foreach (var source in reference.Sources)
                        {
                            if (shape.Guid.Equals(source.ShapeId))
                            {
                                TestContext.WriteLine($"Self reference found: {reference}");
                                result = false;
                            }
                        }
                    }
                }

                // Check that all references can be resolved back to a valid subshape.
                var found = shape.FindSubshape(reference, null);
                if (found == null || found.Count == 0)
                {
                    TestContext.WriteLine($"Reference could not be resolved: {reference}");
                    result = false;
                }
                else if (found.Count > 1)
                {
                    TestContext.WriteLine($"Reference resolved to more than one subshape: {reference}");
                    result = false;
                }
            }
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CompareReferences(Shape shape, string referenceFile)
    {
        string resultFile = referenceFile + "_TestResult.txt";
        TestData.DeleteTestResult(resultFile);

        bool result = true;

        Dictionary<string, Bnd_Box> subshapes = [];
        foreach (var face in shape.GetBRep().Faces())
        {
            var currentSubshape = shape.GetSubshapeReference(face);
            var bb = face.BoundingBox();
            bb.SetGap(0);
            subshapes.Add(currentSubshape.ToString(), bb);
        }
        foreach (var edge in shape.GetBRep().Edges())
        {
            var currentSubshape = shape.GetSubshapeReference(edge);
            BRepLib.BuildCurve3d(edge);
            var bb = edge.BoundingBox();
            bb.SetGap(0);
            subshapes.Add(currentSubshape.ToString(), bb);
        }

        var expectedList = TestData.GetTestDataSerialized<Dictionary<string, Bnd_Box>>(referenceFile + ".txt");
        if (expectedList == null)
        {
            TestData.WriteTestResultSerialized(subshapes, referenceFile + "_TestResult.txt");
            Assert.Fail("Reference file not found: " + referenceFile);
        }

        foreach (var (reference, bndBox) in subshapes)
        {
            if (!expectedList.TryGetValue(reference, out var expectedBox))
            {
                result = false;
                TestContext.WriteLine($"Unexpected subshape reference found: {reference} / {bndBox.ToRoundedString()}");
                continue;
            }

            if (!_IsSameBounds(expectedBox, bndBox))
            {
                result = false;
                TestContext.WriteLine($"Bounds do not match for reference: {reference}. Bounds: {bndBox.ToRoundedString()}. Expected: {expectedBox?.ToRoundedString()}");
                continue;
            }

            expectedList.Remove(reference);
        }

        if (expectedList.Count > 0)
        {
            result = false;
            foreach (var (reference, bndBox) in expectedList)
            {
                TestContext.WriteLine($"Missing subshape reference: {reference}. Bounds: {bndBox.ToRoundedString()}");
            }
        }

        if (!result)
        {
            TestData.WriteTestResultSerialized(subshapes, resultFile);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsSameBounds(Bnd_Box box1, Bnd_Box box2)
    {
        if (box1 == null || box2 == null)
            return false;

        const double tolerance = 1e-6;
        return box1.CornerMin().Distance(box2.CornerMin()) < tolerance
               && box1.CornerMax().Distance(box2.CornerMax()) < tolerance;
    }
}

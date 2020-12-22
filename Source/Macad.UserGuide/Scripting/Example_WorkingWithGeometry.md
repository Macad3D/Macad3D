---
uid: f11b3aa7-3084-4b49-b11b-6ca48b65ee58
title: Script Examples - Working with Geometry
---
Geometry is accessible through wrapped interfaces of the underlying geometry library. This example shows how to access the geometry of a shape and to work with the geometric library.

# Get the Geometry
In out sample script, we want to sum up the areas of all faces of any given shape. We start our script with the retrieval of the selected body.

```cs
using Macad.Interaction;

// ...

var body = Selection.SelectedEntities.FirstOrDefault() as Body;
if (body == null)
{
  Messages.Error("Please select a body.");
  return;
}
```

We now retrieve the geometry by accessing the shape function [](Macad.Core.Shapes.Shape.GetBRep). The result object holds our geometry in an instance of [](Macad.Occt.TopoDS_Shape), which is already a wrapped type of the geometry library.

```cs
var bRep = body.Shape.GetBRep();
if (bRep == null)
{
  Messages.Error("Body shape is not valid.");
  return;
}
```

# Use the Geometry
The BRep geometry consists of various types of geometry, including faces. They can be accessed from any [](Macad.Occt.TopoDS_Shape) using the extension methods of [](Macad.Core.TopoDSShapeExtensions).

The area of each face is a property which can be calculated using the static class [](Macad.Occt.BRepGProp) and [](Macad.Occt.GProp_GProps). Please consult the documentation of the geometry library for usage of this classes.

```cs
double sumArea = 0.0f;
GProp_GProps massProps = new GProp_GProps();
foreach (var face in bRep.Faces())
{
  BRepGProp.SurfaceProperties(face, massProps);
  sumArea += massProps.Mass();
}
```

Finally, let's print out the sum.

```cs
Messages.Info(string.Format("The sum of all face areas is {0}", sumArea));
```

> [!Note] Working with geometric data demands knowledge of the OpenCASCADE Technology SDK. You can find the latest documentation following in the [links section](xref:#related). Most of the SDK is wrapped in [Macad.Occt](Macad.Occt) namespace. Please note that most of the basic types (beginning with gp_) are wrapped as value types, omitting the prefix (e.g. gp_Pnt is wrapped as value type [](Macad.Occt.Pnt)).

# Complete Script
[!code-cs[Main](Samples/SumFaceAreas.csx)]

# See Also
[](xref:dbef1051-1ced-4b54-89a5-64c02de1722d)
[OpenCASCADE Technology Documentation](https://dev.opencascade.org/doc/overview/html/index.html)
[OpenCASCADE Technology Reference Manual](https://dev.opencascade.org/doc/refman/html/index.html)

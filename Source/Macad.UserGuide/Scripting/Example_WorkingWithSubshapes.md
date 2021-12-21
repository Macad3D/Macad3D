---
uid: 0e4bd8dd-c0f6-4ad6-a251-302a96744c94
title: Script Example - Working with Subshapes
---
Many modifier require the selection of subshapes (vertex, edge or face). This example will show how to deal with it in code using subshape references.

# Create a Box
You should already be familiar with creating shapes and bodies by reading the preceding topic. We want to make an imprint on a box, so we create the box and the body at first.

```cs
var box = Box.Create(10.0, 10.0, 1.0);
var body = Body.Create(box);
Document.Add(body);
```

# Get the Face
We now need to deal with the geometry to find the face we want to imprint. The geometry data is retrieved by using the function [](Macad.Core.Shapes.Shape.GetBRep). We do not cover the structure of the data here, we just need to know that the result object holds our geometry in the form of an instance of [](Macad.Occt.TopoDS_Shape), which is used as input to other functions later.

```cs
var boxBRep = box.GetBRep();
```

At this point we need to decide which face we want to imprint. Normally this is interactively selected by the user, for this example we assume that we want to imprint the face with the greatest area. We use a helper function to find the proper face. It takes the geometry of our box and a custom comparison function as parameters.

```cs
using Macad.Core.Geom;

// ...

var findFaceResult = FaceAlgo.FindFaceByAreaSize(boxBRep, (area1, area2) => area1 > area2);
```

We have the face we need, it is given as the first item in the result tuple. The other items are: the plane of the face, the opposite face (if found) and the plane of the opposite face.

Geometric data is volatile, it is recreated every time any parameter is changed on any item in the shape stack. To get a permanent reference to it, we need to get a [](Macad.Core.Shapes.SubshapeReference) to it. The reference must be requested from the shape we got the geometric data from.

```cs
var subshapeReference = box.GetSubshapeReference(findFaceResult.Item1);
```

# Adding the Modifier
Now we have the subshape reference, we can create the imprint modifier. We decide to make a complete cut out.

```cs
var imprint = Imprint.Create(body, subshapeReference);
imprint.Mode = Imprint.ImprintMode.Cutout;
```

The imprint modifier uses a sketch for defining the profile. This sketch is created automatically centered on the referenced shape, and set as operand to the modifier. We can get the sketch by accessing the operand list of the modifier. The imprint modifier helps us here by providing a property to get the sketch. We add a simple circle to the sketch.

```cs
var sketch = imprint.Sketch;
sketch.Points.Add(0, new Pnt2d( 0.0, 0.0));
sketch.Points.Add(1, new Pnt2d( 0.0, 2.5));
sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));
```

We now have a script which creates a box, finds the greatest area face and imprint a hole through it.

# Complete Script
[!code-cs[Main](Samples/CreateImprint.csx)]

# See Also
[](xref:dbef1051-1ced-4b54-89a5-64c02de1722d)
[](xref:cb7fcf59-b5d0-42c4-938e-e8cdbe3edd05)

---
uid: cb7fcf59-b5d0-42c4-938e-e8cdbe3edd05
title: Script Example - Creating Bodies and Shapes
---
This example will show the basic operations to create bodies and shapes, and add modifiers to it.

# Create a Sketch
A sketch is a shape, and all shapes define static `Create` functions. Always use this functions instead of instantiating the class yourself. It makes sure that it is correctly initialized and linked inside the body.

```cs
var sketch = Sketch.Create();
```

After we have created the sketch, we can fill it. A sketch is defined by three components: points, segments and constraints. Points are just that - 2d points. They are represented by the value class [](Macad.Occt.Pnt2d) and referenced by an index. The profile we want to define is a half circle, so we need three points: Two corner points and a rim point of the half circle.

```cs
sketch.Points.Add(0, new Pnt2d(-5.0, 0.0)); // Corner 1
sketch.Points.Add(1, new Pnt2d( 0.0, 5.0)); // Rim point of circle arc
sketch.Points.Add(2, new Pnt2d( 5.0, 0.0)); // Corner 2
```

Now we want to define the segments. A segment is represented by a class derived from [](Macad.Core.Shapes.SketchSegment). The following segments are available:

Segment Type | Description
-------------|-----------
[](Macad.Core.Shapes.SketchSegmentLine) | A straight line connecting two points.
[](Macad.Core.Shapes.SketchSegmentBezier) | A quadratic or cubic Bézier curve connecting two points, taking another one or two control points.
[](Macad.Core.Shapes.SketchSegmentCircle) | A complete circle, described by the center point and a rim point.
[](Macad.Core.Shapes.SketchSegmentArc) | A circle arc, described by the end points and a rim point.
[](Macad.Core.Shapes.SketchSegmentEllipse) | A complete ellipse, described by the center point, a rim point and the point on the major axis.
[](Macad.Core.Shapes.SketchSegmentEllipticalArc) | A elliptical arc, described by the end points and the center point. The start point must be a rim point, the end point on the major axis.

For our profile, we need a circle arc, and a line segment.

```cs
sketch.Segments.Add(0, new SketchSegmentArc(0, 2, 1));
sketch.Segments.Add(1, new SketchSegmentLine(2, 0));
```

> [!Tip] The utility class [](Macad.Core.Shapes.SketchBuilder) can also be used for the programmatic creation of sketches. This offers simple functions for creating polylines and creates all the necessary points and segments.

The code for the sketch using [](Macad.Core.Shapes.SketchBuilder) then looks as follows:
```cs
var sb = new SketchBuilder(sketch);
sb.StartPath(-5.0, 0.0);
sb.ArcTo(5.0, 0.0, 0.0, 5.0);
sb.LineTo(-5.0, 0.0);
sb.ClosePath();
```

# Create a Body
Now we have an initial shape (primitive), we can create a body. For this, we use again the static `Create` function. This function takes the initial shape as parameter, this is why we need to create the shape first.

```cs
var body = Body.Create(sketch);
```

The body needs to be added to the current model to get available outside the script.

```cs
Document.Add(body);
```

That's it, we have created a new sketch with a simple profile.

# Adding a Modifier
Now we have a sketch profile, we want to extrude it to get a solid. We create a new shape, this time not a primitive, but a modifier. Modifier shapes always take the body as creation parameter and takes care for the whole topology work for you. The only task you need to do is to tune the parameters of the modifier.

```cs
var extrude = Extrude.Create(body);
extrude.Depth = 100.0;
```

# Complete Script
[!code-cs[Main](Samples/CreateProfile.csx)]

# See Also
[](xref:dbef1051-1ced-4b54-89a5-64c02de1722d)

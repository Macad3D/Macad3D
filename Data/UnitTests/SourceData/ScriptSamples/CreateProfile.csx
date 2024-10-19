// This script creates a simple half circle profile.
// It shows how to create a sketch, add a extrude to it
// and create a body for it.

// Create new Sketch
var sketch = Sketch.Create();

// Add profile points
sketch.Points.Add(0, new Pnt2d(-5.0, 0.0));
sketch.Points.Add(1, new Pnt2d( 0.0, 5.0));
sketch.Points.Add(2, new Pnt2d( 5.0, 0.0));

// Add profile segments
sketch.Segments.Add(0, new SketchSegmentArc(0, 2, 1));
sketch.Segments.Add(1, new SketchSegmentLine(2, 0));

// Create Body and add to model
var body = Body.Create(sketch);
Document.Add(body);

// Extrude
var extrude = Extrude.Create(body);
extrude.Depth = 100.0;

using Macad.Core.Geom;

// This script creates a box and imprints a hole through
// it's greatest face.
// It shows how to deal with submesh references in code.

// Create new Box and Body
var box = Box.Create(10.0, 10.0, 1.0);
var body = Body.Create(box);
Document.Add(body);

// Get geometry from box
var boxBRep = box.GetBRep();

// Find top and bottom face by searching for the greatest area
var findFaceResult = FaceAlgo.FindFaceByAreaSize(boxBRep, (area1, area2) => area1 > area2);

// Create reference to the found brep subshape
var subshapeReference = box.GetSubshapeReference(findFaceResult.Item1);

// Create imprint
var imprint = Imprint.Create(body, subshapeReference);
imprint.Mode = Imprint.ImprintMode.Cutout;

// Fill sketch
var sketch = imprint.Sketch;
sketch.Points.Add(0, new Pnt2d( 0.0, 0.0));
sketch.Points.Add(1, new Pnt2d( 0.0, 2.5));
sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));

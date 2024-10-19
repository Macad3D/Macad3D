using System.Linq;
using Macad.Interaction;

// Get selected body
var body = Selection.SelectedEntities.FirstOrDefault() as Body;
if (body == null)
{
    Messages.Error("Please select a body.");
    return;
}

// Get geometry from body
var bRep = body.Shape.GetBRep();
if (bRep == null)
{
    Messages.Error("Body shape is not valid.");
    return;
}

// Sum up face area
double sumArea = 0.0f;
GProp_GProps massProps = new GProp_GProps();
foreach (var face in bRep.Faces())
{
    // We could use face.Area() to get the area, but we want to show how interaction
    // with OCCT works, so we do it manually 
    BRepGProp.SurfaceProperties(face, massProps);
    sumArea += massProps.Mass();
}

// Printout
Messages.Info(string.Format("The sum of all face areas is {0}", sumArea));

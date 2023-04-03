---
uid: 8bd40f7f-0687-46fe-ba84-2faf6bc91571
title: Script Example - Creating Interactive Tools
---
In the preceding example we have created a script which cuts a hole into a shape using a face found in code. Normally the face would be selected interactively by the user. This example shows how to create a tool to let the user select the face to imprint.

# Get the selected Body
This time we do not create the body ourselves, but we expect that a body is already selected.

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

# Create the Tool
All interactions in the workspace are driven by a tool class, which we need to implement in our script. It is derived from the abstract class [](Macad.Interaction.Tool). There is only one function which must be implemented ([](Macad.Interaction.Tool.OnStart)) and which is called when our tool is being started.

```cs
public class HoleOnFaceTool : Tool
{
  protected override bool OnStart()
  {
    // ...
  }
}
```

First, let's define the constructor. It takes the body from the calling script and saves it for later usage.

```cs
readonly Body _TargetBody;

public HoleOnFaceTool(Body targetBody)
{
  _TargetBody = targetBody;
}
```
Now let's fill our start function. The tool does not need to implement the concrete interaction with the viewport, it just controls them by using so called ToolActions. We use the class [](Macad.Interaction.SelectSubshapeAction) which provides an implementation of selecting any subshape from a set of bodies. Here, we ask for selecting a face out of the shape of the target body.

The action is started by calling the base class function [](Macad.Interaction.Tool.StartAction). 

Finally, we set a help text and a special face selection cursor, so it is clear to the user what we expect from him to do.

```cs
public override bool Start()
{
  var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody);
  if (!StartAction(toolAction))
    return false;
  toolAction.Finished += _OnActionFinished;

  StatusText = "Select face.";
  WorkspaceController.HudManager.SetCursor(Cursors.SelectFace);
  return true;
}
```

# Handling the Selection
Once the user has selected a face, we get the event callback from the action that it has finished it's job.

```cs
public override void OnActionFinished(SelectSubshapeAction toolAction, SelectSubshapeAction.EventArgs args)
{
  if (args.SelectedSubshapeType == SubshapeTypes.Face)
  {
    // ...
  }
}
```

If the ToolAction has found a face, we can close our Tool. The ToolAction is closed automatically together with the Tool it belongs to.

```cs
Stop();
```

Now we take the selected face from the ToolAction and perform the same procedure to get the subshape reference and to add the modifier as described in the preceding example.

> [!Caution] The ToolAction works with the geometry transformed to the world coordinate system. In the preceding example we worked with the shape in the local coordinate system. This must be taken into account when asking the shape for the subshape reference. Here we need to specify the geometry explicitely, which is the transformed one.

```cs
// Create face reference
var faceRef = _TargetBody.Shape.GetSubshapeReference(_TargetBody.Shape.GetTransformedBRep(), args.SelectedSubshape);
if (faceRef == null)
{
  Messages.Error("A subshape reference could not be produced for this face.");
  return;
}

// Create imprint
var imprint = Imprint.Create(_TargetBody, faceRef);
imprint.Mode = Imprint.ImprintMode.Cutout;

// Fill sketch
var sketch = imprint.Operands[1] as Sketch;
sketch.Points.Add(0, new Pnt2d(0.0, 0.0));
sketch.Points.Add(1, new Pnt2d(0.0, 0.5));
sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));
```

> [!Important] After calling a script run function, the host does automatically commit all changes for us. Since the tool runs outside of this call, we need to do this ourselves, when we are finished with all changes. This is mandatory for the undo/redo system to save our changes to a single step.

```cs
CommitChanges();
```

# Calling our Tool
Finally we need to go back to the entry level of our script and call our new tool.

```cs
WorkspaceController.StartTool(new HoleOnFaceTool(body));
```

# Complete Script
[!code-cs[Main](Samples/HoleOnFaceTool.csx)]

# See Also
[](xref:dbef1051-1ced-4b54-89a5-64c02de1722d)
[](xref:0e4bd8dd-c0f6-4ad6-a251-302a96744c94)

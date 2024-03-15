namespace Macad.Interaction.Editors.Shapes;

public class SketchSegmentCreator : SketchTool
{
    protected override bool OnStart()
    {
        SketchEditorTool.Elements.ConstraintsVisible = false;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool Continue(int continueWithPoint)
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

}
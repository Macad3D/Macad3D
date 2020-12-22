namespace Macad.Interaction.Editors.Shapes
{
    public interface ISketchTool
    {
        public abstract bool Start(SketchEditorTool sketchEditorTool);

        //--------------------------------------------------------------------------------------------------

        public abstract void Stop();

        //--------------------------------------------------------------------------------------------------
    }
}
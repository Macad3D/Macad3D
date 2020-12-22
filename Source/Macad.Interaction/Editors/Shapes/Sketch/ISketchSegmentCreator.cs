namespace Macad.Interaction.Editors.Shapes
{
    public interface ISketchSegmentCreator : ISketchTool
    {
        bool Continue(int continueWithPoint);
    }
}
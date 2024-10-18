using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Interaction.Editors.Shapes;

namespace Macad.Interaction;

public sealed class SelectSketchElementAction : ToolAction
{
    #region Events

    public delegate void EventHandler(SelectSketchElementAction sender);
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    public bool IsActive { get; set; } = true;

    //--------------------------------------------------------------------------------------------------

    readonly SketchEditorTool _SketchEditorTool;

    //--------------------------------------------------------------------------------------------------

    public SelectSketchElementAction(SketchEditorTool sketchEditorTool) 
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        return _SketchEditorTool != null;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsActive)
            return false;

        if (!IsFinished)
        {
            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsActive)
            return false;

        if (!IsFinished)
        {
            if (!data.ModifierKeys.Has(ModifierKeys.Shift))
            {
                _SketchEditorTool.Elements.DeselectAll();
            }

            foreach (var detectedObject in data.DetectedElements.Select(element => element.AisObject).WhereNotNull())
            {
                _SketchEditorTool.Elements.Select(detectedObject);
            }

            Finished?.Invoke(this);
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnKeyPressed(Key key, ModifierKeys modifierKeys)
    {
        if (!IsActive)
            return false;

        if (key == Key.Delete && modifierKeys == ModifierKeys.None)
        {
            _SketchEditorTool.Delete();
            Finished?.Invoke(this);
            return true;
        }
        return base.OnKeyPressed(key, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

}
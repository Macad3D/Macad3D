using Macad.Core;

namespace Macad.Interaction;

/// <summary>
/// The base class for all scripts running in an interactive environment.
/// The script class will be derived from this and can access all members directly.
/// This is the usual base class when running scripts in the application.
/// </summary>
public class InteractiveScriptContext : ScriptContext
{
    internal static ScriptContext Default { get; } = new InteractiveScriptContext();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Controller for the workspace, implements all functions for interactive workspace management.
    /// </summary>
    public WorkspaceController WorkspaceController => InteractiveContext.Current.WorkspaceController;

    /// <summary>
    /// Handles workspace selection of bodies.
    /// </summary>
    public SelectionManager Selection => InteractiveContext.Current.WorkspaceController.Selection;
        
    /// <summary>
    /// Controller for the document (e.g. the model), implements all functions for document management.
    /// </summary>
    public ModelController DocumentController => InteractiveContext.Current.DocumentController;
        
    /// <summary>
    /// Holds the state of several editing functions.
    /// </summary>
    public EditorState EditorState => InteractiveContext.Current.EditorState;
}
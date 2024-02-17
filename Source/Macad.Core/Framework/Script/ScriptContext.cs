using Macad.Core.Topology;

namespace Macad.Core;

/// <summary>
/// This is the base class for scripts.
/// Every script class can access these members directly.
/// </summary>
public class ScriptContext
{
    internal static ScriptContext Default { get; } = new ScriptContext();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The model holds all bodies, and references to every entity.
    /// </summary>
    public Model Document => CoreContext.Current.Document;
        
    /// <summary>
    /// The layer collection is a collection of layers defining shared attributes
    /// regarding visibility, interactivity and visualization of bodies.
    /// </summary>
    public LayerCollection Layers => CoreContext.Current.Layers;

    /// <summary>
    /// The workspace holds all functionality for visualization and interactivity.
    /// </summary>
    public Workspace Workspace => CoreContext.Current.Workspace;
        
    /// <summary>
    /// The viewport is the window into a workspace.
    /// </summary>
    public Viewport Viewport => CoreContext.Current.Viewport;
}
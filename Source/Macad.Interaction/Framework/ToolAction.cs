using System.Collections.Generic;
using System.Diagnostics;
using Macad.Core.Topology;

namespace Macad.Interaction;

public abstract class ToolAction : WorkspaceControl
{
    #region Properties

    public bool IsFinished { get; protected set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Start / Stop

    public bool Start()
    {
        return OnStart();
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool OnStart()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Reset()
    {
        IsFinished = false;
    }

    //--------------------------------------------------------------------------------------------------

    public void Stop()
    {
        OnStop();
        Cleanup();

        Debug.Assert(CleanedUp);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnStop()
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Overrides

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
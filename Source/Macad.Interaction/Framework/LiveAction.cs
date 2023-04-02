using System.Diagnostics;

namespace Macad.Interaction;

public abstract class LiveAction : WorkspaceControl
{
    #region Properties

    public bool IsActive { get; private set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Start / Stop

    public bool Start()
    {
        if (WorkspaceController == null)
            return false;

        OnStart();

        IsActive = true;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Stop()
    {
        if (!IsActive)
            return;

        IsActive = false;
        OnStop();
        Cleanup();

        Debug.Assert(CleanedUp);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnStart()
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnStop()
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
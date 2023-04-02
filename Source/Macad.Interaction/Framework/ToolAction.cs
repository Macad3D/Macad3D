using System.Collections.Generic;
using System.Diagnostics;
using Macad.Core.Topology;

namespace Macad.Interaction;

public abstract class ToolAction : WorkspaceControl
{
    #region Properties

    public MouseEventData LastMouseEventData { get; private set; }

    public bool IsFinished
    {
        get { return _IsFinished; }
        protected set
        {
            _IsFinished = value;
            if (_IsFinished)
            {
                RaiseFinished();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual SnapMode SupportedSnapModes => SnapMode.None;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    bool _IsFinished;

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

    protected override void Cleanup()
    {
        Previewed = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Overrides

    public override bool OnMouseMove(MouseEventData data)
    {
        LastMouseEventData = data;
        RaisePreviewed();
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    public delegate void ToolActionEventHandler(ToolAction toolAction);

    //--------------------------------------------------------------------------------------------------

    public event ToolActionEventHandler Previewed;

    protected void RaisePreviewed()
    {
        Previewed?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    public event ToolActionEventHandler Finished;

    protected void RaiseFinished()
    {
        Finished?.Invoke(this);
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

}
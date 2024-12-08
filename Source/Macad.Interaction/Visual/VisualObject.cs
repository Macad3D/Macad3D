using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Visual;

public abstract class VisualObject
{
    protected VisualObject(WorkspaceController workspaceController, InteractiveEntity entity)
    {
        WorkspaceController = workspaceController;
        Entity = entity;
    }

    //--------------------------------------------------------------------------------------------------

    protected WorkspaceController WorkspaceController { get; }

    //--------------------------------------------------------------------------------------------------

    protected AIS_InteractiveContext AisContext => WorkspaceController.AisContext;

    //--------------------------------------------------------------------------------------------------

    public abstract AIS_InteractiveObject AisObject { get; }

    //--------------------------------------------------------------------------------------------------

    public virtual bool IsSelectable
    {
        get { return false; }
        // ReSharper disable once ValueParameterNotUsed
        set {  }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSelected
    {
        set
        {
            if (AisContext.IsSelected(AisObject) != value)
            {
                AisContext.AddOrRemoveSelected(AisObject, false);
            }
        }
        get
        {
            return AisContext.IsSelected(AisObject);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public object Tag { get; set; }

    //--------------------------------------------------------------------------------------------------
        
    public InteractiveEntity Entity { get; }
        
    //--------------------------------------------------------------------------------------------------

    public abstract void Remove();

    //--------------------------------------------------------------------------------------------------

    public abstract void Update();

    //--------------------------------------------------------------------------------------------------

    public void SetLocalTransformation(Trsf? transformation)
    {
        if (AisObject == null) 
            return;

        if (transformation != null)
        {
            AisObject.SetLocalTransformation(transformation.Value);
        }
        else
        {
            AisObject.ResetTransformation();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    #region Events

    public delegate void AisObjectChangedEventHandler(VisualObject visualObject);

    //--------------------------------------------------------------------------------------------------

    public static event AisObjectChangedEventHandler AisObjectChanged;

    //--------------------------------------------------------------------------------------------------

    protected void RaiseAisObjectChanged()
    {
        AisObjectChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
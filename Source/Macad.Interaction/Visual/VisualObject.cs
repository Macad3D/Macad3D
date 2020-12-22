using Macad.Occt;

namespace Macad.Interaction.Visual
{
    public abstract class VisualObject
    {
        protected VisualObject(WorkspaceController workspaceController)
        {
            WorkspaceController = workspaceController;
        }

        //--------------------------------------------------------------------------------------------------

        protected WorkspaceController WorkspaceController { get; private set; }

        //--------------------------------------------------------------------------------------------------

        protected AIS_InteractiveContext AisContext { get { return WorkspaceController.Workspace.AisContext; } }

        //--------------------------------------------------------------------------------------------------

        public abstract AIS_InteractiveObject AisObject { get; }

        //--------------------------------------------------------------------------------------------------

        public virtual bool IsActive
        {
            get { return false; }
            set { return; }
        }

        //--------------------------------------------------------------------------------------------------

        public object Tag { get; set; }

        //--------------------------------------------------------------------------------------------------

        public abstract void Remove();

        //--------------------------------------------------------------------------------------------------

    }
}
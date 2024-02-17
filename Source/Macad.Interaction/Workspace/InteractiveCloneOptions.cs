using Macad.Core.Topology;

namespace Macad.Interaction;

internal class InteractiveCloneOptions : CloneOptions
{
    public override bool CloneReferencedBodies { 
        get {
            if(!_AskedForCloneReferencedBodies)
                CloneReferencedBodies = AskForCloneReferencedBodies();
            return base.CloneReferencedBodies;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsCanceled { get; private set; }

    //--------------------------------------------------------------------------------------------------

    bool _AskedForCloneReferencedBodies;

    //--------------------------------------------------------------------------------------------------

    public InteractiveCloneOptions() 
        : base(false)
    {
    }

    //--------------------------------------------------------------------------------------------------

    bool AskForCloneReferencedBodies()
    {
        _AskedForCloneReferencedBodies = true;

        // Do asking
        var dlgResult = Dialogs.Dialogs.AskBodyCloneBehaviour();
        if (!dlgResult.HasValue)
        {
            IsCanceled = true;
            return false;
        }
        return dlgResult.Value;
    }

    //--------------------------------------------------------------------------------------------------

}
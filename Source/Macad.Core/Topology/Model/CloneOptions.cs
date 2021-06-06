namespace Macad.Core.Topology
{
    public class CloneOptions
    {
        public virtual bool CloneReferencedBodies
        {
            get { return _CloneReferencedBodies; }
            protected set { _CloneReferencedBodies = value; }
        }

        //--------------------------------------------------------------------------------------------------

        bool _CloneReferencedBodies;

        //--------------------------------------------------------------------------------------------------

        public CloneOptions(bool cloneReferencedBodies)
        {
            _CloneReferencedBodies = cloneReferencedBodies;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
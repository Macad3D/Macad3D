using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Core.Topology;

public class CloneOptions
{
    public virtual bool CloneReferencedBodies
    {
        get { return _CloneReferencedBodies; }
        protected set { _CloneReferencedBodies = value; }
    }

    //--------------------------------------------------------------------------------------------------

    bool _CloneReferencedBodies;
    readonly List<Guid> _EntitiesToClone = [];

    //--------------------------------------------------------------------------------------------------

    public CloneOptions(bool cloneReferencedBodies)
    {
        _CloneReferencedBodies = cloneReferencedBodies;
    }
    
    //--------------------------------------------------------------------------------------------------

    public void AddEntitiesToClone(IEnumerable<Entity> entities)
    {
        _EntitiesToClone.AddRange(entities.Select(entity => entity.Guid));
    }

    //--------------------------------------------------------------------------------------------------

    public void AddEntitiesToClone(IEnumerable<Guid> entities)
    {
        _EntitiesToClone.AddRange(entities);
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEntityToClone(Guid guid)
    {
        return _EntitiesToClone.Contains(guid);
    }

    //--------------------------------------------------------------------------------------------------

}
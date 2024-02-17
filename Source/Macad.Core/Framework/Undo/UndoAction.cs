using System;
using Macad.Core.Topology;

namespace Macad.Core;

public abstract class UndoAction
{
    public Guid InstanceGuid { get; protected set; }

    public abstract void Restore(Entity instance, UndoHandler undoHandler);
}
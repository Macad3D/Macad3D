using System;
using Macad.Core.Topology;

namespace Macad.Core;

public interface IUndoableTopology
{
    Guid Guid { get; }

    Entity FindInstance(Guid instanceGuid);
    Entity GetParent(Entity instance);
    void AddChildFromUndo(Entity instance, Entity parent);
    void RemoveChildFromUndo(Entity instance);
    void MoveChildFromUndo(Entity instance, Entity newParent);
}
using System;
using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Common;

namespace Macad.Core;

public class TopologyUndoAction : UndoAction
{
    string _StoredData;
    UndoHandler.TopologyAction _TopoAction;
    Guid _ChildGuid;
    Guid? _ParentGuid;

    //--------------------------------------------------------------------------------------------------

    public TopologyUndoAction(Guid instanceGuid)
    {
        InstanceGuid = instanceGuid;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Set(Entity child, IUndoableTopology container, UndoHandler.TopologyAction action)
    {
        _ChildGuid = child.Guid;
        InstanceGuid = container.Guid;

        _ParentGuid = null;
        var parent = container.GetParent(child);
        if (parent != null)
            _ParentGuid = parent.Guid;

        _TopoAction = action;
        _StoredData = null;

        switch (action)
        {
            case UndoHandler.TopologyAction.Added:
                // Counter-Action: Remove. We need only the instance to get it removed later.
                return true;

            case UndoHandler.TopologyAction.Removed:
                // Counter-Action: Add. We need the instance, the parent and its data to add it later.
                var data = Serializer.Serialize(child, new SerializationContext(SerializationScope.UndoRedo));
                if (!data.IsNullOrEmpty())
                {
                    _StoredData = data;
                    //Debug.WriteLine(_StoredData);
                    return true;
                }
                break;

            case UndoHandler.TopologyAction.Moved:
                // Counter-Action: Move back. We need instance and parent.
                return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Restore(Entity instance, UndoHandler undoHandler)
    {
        var container = undoHandler.FindEntityInstance(InstanceGuid) as IUndoableTopology;
        Debug.Assert(container != null, "container != null");

        var child = undoHandler.FindEntityInstance(_ChildGuid);
        var parent = _ParentGuid.HasValue ? undoHandler.FindEntityInstance(_ParentGuid.Value) : null;

        switch (_TopoAction)
        {
            case UndoHandler.TopologyAction.Added:
                Debug.Assert(child != null);

                // Counter-Action: Remove. 
                container.RemoveChildFromUndo(child);
                break;

            case UndoHandler.TopologyAction.Removed:
                Debug.Assert(child == null);

                // Counter-Action: Add.
                var context = new SerializationContext(SerializationScope.UndoRedo);
                context.SetInstance(CoreContext.Current.Document);
                context.SetInstance<IDocument>(CoreContext.Current.Document);
                context.SetInstance(CoreContext.Current.Workspace);

                child = Serializer.Deserialize<Entity>(_StoredData, context);
                if (child != null)
                {
                    container.AddChildFromUndo(child, parent);
                        
                    foreach(var entity in context.GetInstanceList<InteractiveEntity>())
                        entity.RaiseVisualChanged();
                }
                break;

            case UndoHandler.TopologyAction.Moved:
                Debug.Assert(child != null);

                // Counter-Action: Move back.
                undoHandler.AddTopologyChange(UndoHandler.TopologyAction.Moved, container, child);

                container.MoveChildFromUndo(child, parent);
                break;
        }
    }
}
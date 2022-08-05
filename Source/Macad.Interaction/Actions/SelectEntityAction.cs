using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Topology;

namespace Macad.Interaction;

public class SelectEntityAction<T> : ToolAction where T: InteractiveEntity
{
    public T SelectedEntity { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public delegate bool SelectionFilter(T entity);

    SelectionContext _SelectionContext;
    SelectionFilter _FilterFunc;

    //--------------------------------------------------------------------------------------------------

    public SelectEntityAction(object owner)
        : base(owner)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Start()
    {
        _SelectionContext = WorkspaceController.Selection.OpenContext(SelectionContext.Options.None);

        foreach (var entity in WorkspaceController.VisualObjects.GetVisibleEntities())
        {
            if(!entity.IsVisible)
                continue;

            var castedEntity = entity as T;
            if(castedEntity == null)
                continue;
                
            if (_FilterFunc != null)
                if(!_FilterFunc(entity as T))
                    continue;
                
            _SelectionContext.Include(entity);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Exclude(InteractiveEntity excludeShape)
    {
        if (excludeShape != null)
        {
            _SelectionContext.Exclude(excludeShape);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetFilter(SelectionFilter filterFunc)
    {
        Debug.Assert(_SelectionContext == null);
        _FilterFunc = filterFunc;
    }

    //--------------------------------------------------------------------------------------------------

    void ProcessMouseInput(MouseEventData data)
    {
        if (data.DetectedEntities.Count == 1)
        {
            SelectedEntity = data.DetectedEntities[0] as T;
        }
        else
        {
            SelectedEntity = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);

            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);
            IsFinished = SelectedEntity!=null;
        }
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        return true; // Supress Rubberband Selection
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        var selectedEntity = entitiesToSelect.FirstOrDefault();
        if (selectedEntity != null)
        {
            SelectedEntity = selectedEntity as T;
            IsFinished = SelectedEntity!=null;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        WorkspaceController.Selection.CloseContext(_SelectionContext);
        _SelectionContext = null;

        base.Stop();
    }

    //--------------------------------------------------------------------------------------------------

}
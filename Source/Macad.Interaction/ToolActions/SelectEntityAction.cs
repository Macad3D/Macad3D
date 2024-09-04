using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Topology;

namespace Macad.Interaction;

public class SelectEntityAction<T> : ToolAction where T: InteractiveEntity
{
    public class EventArgs
    {
        public T SelectedEntity { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(SelectEntityAction<T> sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;

    //--------------------------------------------------------------------------------------------------

    public delegate bool SelectionFilter(T entity);

    SelectionContext _SelectionContext;
    SelectionFilter _FilterFunc;
    T _SelectedEntity;

    //--------------------------------------------------------------------------------------------------

    public SelectEntityAction(object owner)
        : base()
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _SelectionContext = OpenSelectionContext();

        foreach (var entity in WorkspaceController.VisualObjects.GetVisibleEntities())
        {
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
    
    protected override void Cleanup()
    {
        Preview = null;
        Finished = null;
        base.Cleanup();
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
        _SelectedEntity = data.DetectedEntity as T;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);

            EventArgs args = new()
            {
                SelectedEntity = _SelectedEntity,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);

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

            if (_SelectedEntity != null)
            {
                IsFinished = true;
                EventArgs args = new()
                {
                    SelectedEntity = _SelectedEntity,
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);
            }
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
            _SelectedEntity = selectedEntity as T;
            IsFinished = _SelectedEntity!=null;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
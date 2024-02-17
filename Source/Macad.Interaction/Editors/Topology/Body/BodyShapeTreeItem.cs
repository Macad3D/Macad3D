using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Topology;

#region BodyShapeTreeItem

public abstract class BodyShapeTreeItem : BaseObject
{
    public BodyShapeTreeItem ParentItem { get; }

    //--------------------------------------------------------------------------------------------------

    public bool IsExpanded { get; set; }

    //--------------------------------------------------------------------------------------------------

    public bool IsInactive { get; set; }

    //--------------------------------------------------------------------------------------------------

    protected BodyShapeTreeItem(BodyShapeTreeItem parentItem)
    {
        ParentItem = parentItem;
    }

    //--------------------------------------------------------------------------------------------------

    public static BodyShapeTreeItem CreateItem(object obj, BodyShapeTreeItem parent, ObservableCollection<BodyShapeTreeItem> parentList)
    {
        switch (obj)
        {
            case Shape shape:
                return new BodyShapeTreeShape(shape, parent, parentList);

            case BodyShapeOperand bodyOperand:
                return new BodyShapeTreeBody(bodyOperand, parent, parentList);
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual Editor CreateEditor()
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual string GetTooltip()
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual BodyShapeTreeItem FindSame(Object obj)
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void UpdateExpandedState(List<object> list, bool bSaveState)
    {
        return;
    }

    //--------------------------------------------------------------------------------------------------

}

#endregion

#region BodyShapeTreeShape

public class BodyShapeTreeShape : BodyShapeTreeItem
{
    public Shape Shape { get; }
    public ObservableCollection<BodyShapeTreeItem> Children { get; } = new ObservableCollection<BodyShapeTreeItem>();

    //--------------------------------------------------------------------------------------------------

    public BodyShapeTreeShape(Shape shape, BodyShapeTreeItem parent, ObservableCollection<BodyShapeTreeItem> currentList) 
        : base(parent)
    {
        Shape = shape;

        // Set inactive, if
        // - the parent was not active
        // - the last sibling was not active
        // - the shape itself is not the current shape of the body
        if ((parent == null || parent.IsInactive)
            && (!currentList.Any() || currentList.Last().IsInactive)
            && (shape.Body.Shape != shape))
        {
            IsInactive = true;
        }

        currentList.Add(this);

        if (shape is ModifierBase modifierBase)
        {
            // The first children is the predecessor, sort it into the current list
            CreateItem(modifierBase.Operands[0], parent, currentList);

            for (int i = 1; i < modifierBase.Operands.Count; i++)
            {
                CreateItem(modifierBase.Operands[i], this, Children);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override Editor CreateEditor()
    {
        return Editor.CreateEditor(Shape);
    }

    //--------------------------------------------------------------------------------------------------

    public override string GetTooltip()
    {
        var messageList = InteractiveContext.Current.MessageHandler.GetEntityMessages(Shape);
        if (messageList?.Count > 0)
        {
            return string.Join("\n", messageList.Select(mi => mi.ToShortString()));
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override BodyShapeTreeItem FindSame(object obj)
    {
        if (obj.Equals(Shape)
            || ((obj is BodyShapeTreeShape) && ((BodyShapeTreeShape)obj).Shape.Equals(Shape)))
            return this;

        foreach (var child in Children)
        {
            var res = child.FindSame(obj);
            if (res != null)
                return res;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override void UpdateExpandedState(List<object> list, bool bSaveState)
    {
        if (bSaveState)
        {
            if (IsExpanded)
                list.Add(Shape);
        }
        else
        {
            if (list.Contains(Shape))
                IsExpanded = true;
        }

        foreach (var child in Children)
        {
            child.UpdateExpandedState(list, bSaveState);
        }
    }

    //--------------------------------------------------------------------------------------------------

}

#endregion

#region BodyShapeTreeBody

public class BodyShapeTreeBody : BodyShapeTreeItem
{
    public ModifierBase ParentShape { get; }

    //--------------------------------------------------------------------------------------------------

    public BodyShapeOperand BodyOperand { get; private set; }

    //--------------------------------------------------------------------------------------------------
        
    public string ShapeDescription
    {
        get
        {
            var shapeId = BodyOperand?.ShapeId;
            if (shapeId == Guid.Empty)
            {
                return "Top";
            }

            var shape = BodyOperand?.Shape;
            if(shape == null)
                return "Top";
                
            if(shape == BodyOperand?.Body.Shape)
            {
                return "Current";
            }

            return $"{shape.Name}";
        }
    }

    //--------------------------------------------------------------------------------------------------


    public BodyShapeTreeBody(BodyShapeOperand bodyOperand, BodyShapeTreeItem parent, ObservableCollection<BodyShapeTreeItem> currentList)
        : base(parent)
    {
        BodyOperand = bodyOperand;
        if (parent == null)
        {
            // Are we operand 0?
            var supposedParent = currentList.LastOrDefault();
            var supposedParentShape = (supposedParent as BodyShapeTreeShape)?.Shape as ModifierBase;
            if (supposedParentShape?.Operands.FirstOrDefault() == bodyOperand)
            {
                ParentShape = supposedParentShape;
            }
        }
        else
        {
            ParentShape = (parent as BodyShapeTreeShape)?.Shape as ModifierBase;
        }

        // Set inactive, if
        // - the parent was not active
        // - the last sibling was not active
        if ((parent == null || parent.IsInactive)
            && (!currentList.Any() || currentList.Last().IsInactive))
        {
            IsInactive = true;
        }

        currentList.Add(this);
    }

    //--------------------------------------------------------------------------------------------------

    public override BodyShapeTreeItem FindSame(object obj)
    {
        if (obj.Equals(BodyOperand)
            || ((obj is BodyShapeTreeBody) && ((BodyShapeTreeBody)obj).BodyOperand.Equals(BodyOperand)))
            return this;
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public void UpdateBodyOperand(BodyShapeOperand newOp)
    {
        if (newOp != BodyOperand)
        {
            BodyOperand = newOp;
            RaisePropertyChanged();
        }

        RaisePropertyChanged(nameof(ShapeDescription));
    }
}

#endregion
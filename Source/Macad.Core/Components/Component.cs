using System.Runtime.CompilerServices;
using Macad.Core.Topology;

namespace Macad.Core.Components;

public abstract class Component : Entity
{
    IDecorable _Owner;

    #region Properties

    public virtual IDecorable Owner
    {
        get { return _Owner; }
        set
        {
            var oldOwner = _Owner;
            _Owner = value;
            OwnerChanged(oldOwner, _Owner);
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OwnerChanged(IDecorable oldOwner, IDecorable newOwner)
    {
    }

    //--------------------------------------------------------------------------------------------------
        
    public override void Remove()
    {
        if (_Owner != null)
        {
            _Owner.RemoveComponent(this);
            Owner = null;
        }
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Property and Undo handling

    protected override void SaveUndo([CallerMemberName] string propertyName = "", object value = null)
    {
        if (!IsDeserializing && (CoreContext.Current.UndoHandler != null) && (Owner != null))
        {
            CoreContext.Current.UndoHandler.AddPropertyChange(this, propertyName, value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        if (!IsDeserializing)
        {
            CoreContext.Current?.Document?.MarkAsUnsaved();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
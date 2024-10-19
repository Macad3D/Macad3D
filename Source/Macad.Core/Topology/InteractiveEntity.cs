using System;
using Macad.Common.Serialization;
using Macad.Core.Components;
using Macad.Occt;

namespace Macad.Core.Topology;

[SerializeType]
public abstract class InteractiveEntity : Entity
{
    #region Properties
        
    [SerializeMember(SortKey = -900)]
    public override string Name
    {
        get { return _Name; }
        set
        {
            if (_Name != value)
            {
                SaveUndo();
                _Name = value;
                RaisePropertyChanged();
                if (!IsDeserializing && CoreContext.Current != null)
                {
                    Document?.InstanceChanged(this);
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsVisible
    {
        get { return _IsVisible; }
        set
        {
            if (_IsVisible != value)
            {
                SaveUndo();
                _IsVisible = value;
                RaisePropertyChanged();
                if (!IsDeserializing && CoreContext.Current != null && CoreContext.Current.Workspace != null)
                {
                    Document?.InstanceChanged(this);
                    RaiseVisualChanged();
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Guid LayerId
    {
        get { return _LayerId; }
        set
        {
            if (_LayerId != value)
            {
                SaveUndo();
                _LayerId = value;
                Invalidate();
                RaisePropertyChanged();
                RaisePropertyChanged("Layer");
                if (!IsDeserializing && CoreContext.Current != null && CoreContext.Current.Workspace != null)
                {
                    RaiseVisualChanged();
                    Document?.InstanceChanged(this);
                }
            }
        }
    }

    public Layer Layer
    {
        get { return CoreContext.Current?.Layers?.Find(_LayerId); }
        set
        {
            var layers = CoreContext.Current?.Layers;
            LayerId = (value == layers?.Default || value == null) ? Guid.Empty : value.Guid;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Initialization / Serialization

    Guid _LayerId;
    string _Name;
    bool _IsVisible;

    //--------------------------------------------------------------------------------------------------

    protected InteractiveEntity()
    {
        _Name = "Unnamed";
        _IsVisible = true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnBeginDeserializing(SerializationContext context)
    {
        base.OnBeginDeserializing(context);
        context.GetInstanceList<InteractiveEntity>().Add(this);
        context.SetInstance(this);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        base.Remove();
    }

    //--------------------------------------------------------------------------------------------------

    public virtual TopoDS_Shape GetTransformedBRep()
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public virtual void Invalidate()
    {
        // Nothing to do here
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void InteractiveChangedEventHandler(InteractiveEntity entity);
    public static event InteractiveChangedEventHandler VisualChanged;

    public void RaiseVisualChanged()
    {
        if (!IsDeserializing)
            VisualChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

}
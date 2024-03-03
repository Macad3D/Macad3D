using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Components;

public class VisualStyle : Component
{
    #region Properties

    [SerializeMember]
    public Color Color
    {
        get { return _Color; }
        set
        {
            if (_Color != value)
            {
                SaveUndo();
                _Color = value;
//                    InvalidateVisual();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public float Transparency
    {
        get { return _Transparency; }
        set
        {
            if (_Transparency != value)
            {
                SaveUndo();
                _Transparency = value;
                //InvalidateVisual();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Body Body
    {
        get { return Owner as Body; }
    }

    //--------------------------------------------------------------------------------------------------

    public override IDecorable Owner
    {
        get
        {
            return base.Owner;

        }
        set
        {
            if (value == Owner) return;
            Body?.RaiseVisualChanged();
            base.Owner = value;
            if (value != null)
            {
                Debug.Assert(Body != null);
                Body?.RaiseVisualChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member

    Color _Color;
    float _Transparency;

    //--------------------------------------------------------------------------------------------------

    #endregion

    public VisualStyle() 
    {
        _Color = Colors.Default;
        _Transparency = 0;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OwnerChanged(IDecorable oldOwner, IDecorable newOwner)
    {
        base.OwnerChanged(oldOwner, newOwner);

        if (newOwner != null)
        {
        }
        else
        {
//            InvalidateVisual();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static VisualStyle Create(Body ownerBody)
    {
        var component = ownerBody.FindComponent<VisualStyle>(true);
        if ((component != null) && (component.Owner == ownerBody))
            return component;

        component = new VisualStyle();
        ownerBody.AddComponent(component);


        return component;
    }

    //--------------------------------------------------------------------------------------------------

    #region Events

    public delegate void VisualStyleChangedEventHandler(Body body, VisualStyle visualStyle);

    public event VisualStyleChangedEventHandler VisualStyleChanged;

    void _RaiseVisualStyleChanged()
    {
        VisualStyleChanged?.Invoke(Owner as Body, this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}
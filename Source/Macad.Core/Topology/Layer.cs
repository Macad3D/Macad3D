using System.Diagnostics;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

[SerializeType]
[DebuggerDisplay("Layer: {Name,nq}")]
public class Layer : Entity
{
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
                RaiseInteractivityChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsLocked
    {
        get { return _IsLocked; }
        set
        {
            if (_IsLocked != value)
            {
                SaveUndo();
                _IsLocked = value;
                RaisePropertyChanged();
                RaiseInteractivityChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public PresentationMode PresentationMode
    {
        get { return _PresentationMode; }
        set
        {
            if (_PresentationMode != value)
            {
                SaveUndo();
                _PresentationMode = value;
                RaisePropertyChanged();
                RaisePresentationChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

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
                RaisePropertyChanged();
                RaisePresentationChanged();
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
                RaisePropertyChanged();
                RaisePresentationChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public LineStyle LineStyle
    {
        get { return _LineStyle; }
        set
        {
            if (_LineStyle != value)
            {
                SaveUndo();
                _LineStyle = value;
                RaisePropertyChanged();
                RaisePresentationChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public LineThickness LineThickness
    {
        get { return _LineThickness; }
        set
        {
            if (_LineThickness != value)
            {
                SaveUndo();
                _LineThickness = value;
                RaisePropertyChanged();
                RaisePresentationChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public LayerCollection Collection
    {
        get { return _Collection; }
        set
        {
            _Collection = value;
            Document = _Collection?.Model;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsActive
    {
        get { return this == CoreContext.Current?.Layers?.ActiveLayer; }
    }

    internal void OnActiveLayerChanged()
    {
        RaisePropertyChanged("IsActive");
    }

    //--------------------------------------------------------------------------------------------------

    #region Events

    public delegate void LayerChangedEventHandler(Layer layer);

    public static event LayerChangedEventHandler PresentationChanged;
    public static event LayerChangedEventHandler InteractivityChanged;

    public void RaisePresentationChanged()
    {
        PresentationChanged?.Invoke(this);
    }

    public void RaiseInteractivityChanged()
    {
        InteractivityChanged?.Invoke(this);
    }

    #endregion

    #region Members

    string _Name;
    bool _IsLocked;
    bool _IsVisible;
    PresentationMode _PresentationMode;
    Color _Color;
    float _Transparency;
    LineStyle _LineStyle;
    LineThickness _LineThickness;
    LayerCollection _Collection;

    //--------------------------------------------------------------------------------------------------

    #endregion

    public Layer()
    {
        _IsVisible = true;
        _IsLocked = false;
        _PresentationMode = PresentationMode.SolidWithBoundary;
        _Color = Colors.Default;
        _Transparency = 0;
        _LineStyle = LineStyle.Solid;
        _LineThickness = LineThickness.Normal;
    }

    //--------------------------------------------------------------------------------------------------

    #region Property and Undo handling

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

    //--------------------------------------------------------------------------------------------------

    #region Serialization

    public override void OnBeginDeserializing(SerializationContext context)
    {
        Collection = context.GetInstance<LayerCollection>();

        base.OnBeginDeserializing(context);
    }

    #endregion
}
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;

namespace Macad.Presentation.TreeView;

public class DragContent : INotifyPropertyChanged
{
    bool _CanDrop;
    bool _CanInsert;
    readonly List<object> _DraggedItems;

    public DragContent()
    {
        _DraggedItems = new List<object>();
    }

    public void Add(object draggedItem)
    {
        _DraggedItems.Add(draggedItem);
        RaisePropertyChanged("Count");
    }

    public bool CanInsert
    {
        get { return _CanInsert; }
        set
        {
            if (_CanInsert != value)
            {
                _CanInsert = value;
                RaisePropertyChanged("CanInsert");
            }
        }
    }
        
    public IEnumerable<object> Items => _DraggedItems.AsEnumerable<object>();

    public int Count => _DraggedItems.Count;

    public bool CanDrop
    {
        get { return _CanDrop; }
        set
        {
            if (_CanDrop != value)
            {
                _CanDrop = value;
                RaisePropertyChanged("CanDrop");
            }
        }
    }

    public event PropertyChangedEventHandler PropertyChanged;

    private void RaisePropertyChanged(string propertyName)
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

}
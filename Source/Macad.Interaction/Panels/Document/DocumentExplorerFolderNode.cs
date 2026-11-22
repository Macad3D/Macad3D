using System.Collections.ObjectModel;
using System.ComponentModel;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction.Panels;

/// <summary>
/// Represents a folder in the tree of the document explorer.
/// </summary>
public sealed class DocumentExplorerFolderNode : BaseObject
{
    public Folder Folder { get; }

    //--------------------------------------------------------------------------------------------------

    public ObservableCollection<object> Children { get; } = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// While the explorer is filtered, all shown folders are expanded and the stored state is kept.
    /// </summary>
    public bool IsExpanded
    {
        get { return _IsFiltering || Folder.IsExpanded; }
        set
        {
            if (_IsFiltering || value == Folder.IsExpanded)
                return;
            Folder.IsExpanded = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsFiltering;

    //--------------------------------------------------------------------------------------------------

    internal DocumentExplorerFolderNode(Folder folder)
    {
        Folder = folder;
        Folder.PropertyChanged += _Folder_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    internal void Detach()
    {
        Folder.PropertyChanged -= _Folder_PropertyChanged;
        Children.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    internal void SetFiltering(bool isFiltering)
    {
        if (_IsFiltering == isFiltering)
            return;
        _IsFiltering = isFiltering;
        RaisePropertyChanged(nameof(IsExpanded));
    }

    //--------------------------------------------------------------------------------------------------

    void _Folder_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Folder.IsExpanded))
        {
            RaisePropertyChanged(nameof(IsExpanded));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        return Folder.Name;
    }
}

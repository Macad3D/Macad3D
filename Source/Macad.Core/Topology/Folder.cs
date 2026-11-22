using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Macad.Common.Serialization;

namespace Macad.Core.Topology;

/// <summary>
/// A folder organizes interactive entities and other folders in the document explorer.
/// It has no effect on geometry, appearance or interaction.
/// </summary>
[SerializeType]
[DebuggerDisplay("Folder: {Name,nq}")]
public class Folder : Entity
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

    /// <summary>
    /// The guid of the parent folder, or <see cref="Guid.Empty"/> if the folder is at root.
    /// </summary>
    [SerializeMember]
    public Guid ParentId
    {
        get { return _ParentId; }
        set
        {
            if (_ParentId != value)
            {
                SaveUndo();
                _ParentId = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(Parent));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Folder Parent
    {
        get { return _Collection?.Find(_ParentId); }
        set { ParentId = value?.Guid ?? Guid.Empty; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsExpanded
    {
        get { return _IsExpanded; }
        set
        {
            if (_IsExpanded != value)
            {
                _IsExpanded = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public FolderCollection Collection
    {
        get { return _Collection; }
        internal set
        {
            _Collection = value;
            Document = _Collection?.Model;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public const string DefaultFolderName = "New Folder";

    //--------------------------------------------------------------------------------------------------

    string _Name;
    Guid _ParentId;
    bool _IsExpanded;
    FolderCollection _Collection;

    //--------------------------------------------------------------------------------------------------

    public Folder()
    {
        _Name = "New Folder";
        _IsExpanded = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);

        // The expanded state is saved with the model, but changing it alone does not make it unsaved
        if (!IsDeserializing && propertyName != nameof(IsExpanded))
        {
            _Collection?.Model?.MarkAsUnsaved();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnBeginDeserializing(SerializationContext context)
    {
        var collection = context.GetInstance<FolderCollection>();
        if (collection != null)
        {
            Collection = collection;
        }

        base.OnBeginDeserializing(context);
    }

    //--------------------------------------------------------------------------------------------------
}

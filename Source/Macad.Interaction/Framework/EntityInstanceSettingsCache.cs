using Macad.Common.Serialization;
using Macad.Common;
using Macad.Core.Topology;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Interaction;

public class EntityInstanceSettingsCache<T> : IEntityInstanceSettingsSnapshotSource where T : class, new()
{
    readonly WeakTable<Entity, T> _Settings = new();
    readonly ISerializer _SettingsSerializer = Serializer.GetSerializer(typeof(T));
    readonly ISerializer _GuidSerializer = Serializer.GetSerializer(typeof(Guid));
    readonly string _FilePath;
    readonly string _Version;

    //--------------------------------------------------------------------------------------------------

    public EntityInstanceSettingsCache(string filePath, int version)
    {
        _FilePath = filePath;
        _Version = version.ToString();

        Model.AdditionalDataSaving += _Model_OnAdditionalDataSaving;
        Model.AdditionalDataLoading += _Model_OnAdditionalDataLoading;
        Serializer.Deserialized += _Serializer_Deserialized;
        EntityInstanceSettingsSnapshot.Register(this);
    }

    //--------------------------------------------------------------------------------------------------

    public T GetOrCreate(Entity entity)
    {
        if (_Settings.TryGetValue(entity, out var settings))
            return settings;

        settings = new T();
        _Settings.SetValue(entity, settings);
        return settings;
    }

    //--------------------------------------------------------------------------------------------------

    #region Entries

    string _WriteEntries(IEnumerable<Entity> entities, bool skipIfEmpty)
    {
        var writer = new Writer();
        writer.BeginMap();

        // Version info
        writer.BeginMapKey();
        writer.WriteRawString("Version");
        writer.BeginMapValue();
        writer.WriteRawString(_Version);

        bool isEmpty = true;
        foreach (var entity in entities)
        {
            if (_Settings.TryGetValue(entity, out var settings))
            {
                writer.BeginMapKey();
                _GuidSerializer.Write(writer, entity.Guid, null);
                writer.BeginMapValue();
                _SettingsSerializer.Write(writer, settings, null);
                isEmpty = false;
            }
        }

        writer.EndMap();

        return isEmpty && skipIfEmpty ? null : writer.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    void _ReadEntries(string source, Func<Guid, Entity> resolveEntity)
    {
        if (source.IsNullOrEmpty())
            return;

        var reader = new Reader(source);
        if (!(reader.BeginMap()
              && reader.BeginMapKey()
              && reader.ReadValueString() == "Version"
              && reader.BeginMapValue()
              && reader.ReadValueString() == _Version))
            return;

        while (reader.BeginMapKey())
        {
            var guid = _GuidSerializer.Read(reader, null, null);
            if (!reader.BeginMapValue())
                return; // Malformed

            var settings = _SettingsSerializer.Read(reader, null, null) as T;
            if (guid == null || settings == null)
                continue;

            var instance = resolveEntity((Guid)guid);
            if (instance == null)
                continue;

            _Settings.SetValue(instance, settings);
        }
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Document File

    void _Model_OnAdditionalDataSaving(Document<InteractiveEntity> document, FileSystem filesystem)
    {
        var s = Serializer.Format(_WriteEntries(document.FindInstances<Entity>(), false));
        if (s.IsNullOrEmpty())
            return;

        filesystem.Write(_FilePath, s.ToUtf8Bytes());
    }

    //--------------------------------------------------------------------------------------------------

    void _Model_OnAdditionalDataLoading(Document<InteractiveEntity> document, FileSystem filesystem)
    {
        _ReadEntries(filesystem.Read(_FilePath)?.FromUtf8Bytes(), document.FindInstance);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Cloning

    string IEntityInstanceSettingsSnapshotSource.Key => _FilePath;

    //--------------------------------------------------------------------------------------------------

    string IEntityInstanceSettingsSnapshotSource.WriteSnapshot(IEnumerable<Entity> entities)
    {
        return _WriteEntries(entities, true);
    }

    //--------------------------------------------------------------------------------------------------

    void _Serializer_Deserialized(object result, SerializationContext context)
    {
        // Entities were cloned with recreated GUIDs, so let the clones inherit the settings of their originals
        var guidMap = context?.GetInstance<Dictionary<Guid, Guid>>();
        var document = context?.GetInstance<IDocument>();
        if (guidMap == null || document == null)
            return;

        // Settings taken at copy time (clipboard), or else the current settings of the originals (duplicate).
        // Writing and reading them back also makes the clones' settings independent copies.
        var entries = context.TryGetInstance(out EntityInstanceSettingsSnapshot snapshot)
                          ? snapshot.Get(_FilePath)
                          : _WriteEntries(guidMap.Keys.Select(document.FindInstance).Where(entity => entity != null), true);

        // Recreated GUIDs are always new, so they resolve to clones only
        _ReadEntries(entries, originalGuid => guidMap.TryGetValue(originalGuid, out var cloneGuid) ? document.FindInstance(cloneGuid) : null);
    }

    #endregion
}

using Macad.Common.Serialization;
using Macad.Common;
using Macad.Core.Topology;
using System;

namespace Macad.Interaction;

public class EntityInstanceSettingsCache<T> where T : class, new()
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

    void _Model_OnAdditionalDataSaving(Document<InteractiveEntity> document, FileSystem filesystem)
    {
        var instances = document.FindInstances<Entity>();
        var writer = new Writer();
        writer.BeginMap();

        // Version info
        writer.BeginMapKey();
        writer.WriteRawString("Version");
        writer.BeginMapValue();
        writer.WriteRawString(_Version);

        foreach (var entity in instances)
        {
            if (_Settings.TryGetValue(entity, out var settings))
            {
                writer.BeginMapKey();
                _GuidSerializer.Write(writer, entity.Guid, null);
                writer.BeginMapValue();
                _SettingsSerializer.Write(writer, settings, null);
            }
        }

        writer.EndMap();

        var s = Serializer.Format(writer.ToString());
        if (s.IsNullOrEmpty())
            return;

        filesystem.Write(_FilePath, s.ToUtf8Bytes());
    }

    //--------------------------------------------------------------------------------------------------

    void _Model_OnAdditionalDataLoading(Document<InteractiveEntity> document, FileSystem filesystem)
    {
        var s = filesystem.Read(_FilePath)?.FromUtf8Bytes();
        if (s.IsNullOrEmpty())
            return;

        var reader = new Reader(s);
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

            var instance = document.FindInstance((Guid)guid);
            if (instance == null)
                continue;

            _Settings.SetValue(instance, settings);
        }
    }

    //--------------------------------------------------------------------------------------------------

}
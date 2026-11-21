using System.Collections.Generic;
using Macad.Core.Topology;

namespace Macad.Interaction;

internal interface IEntityInstanceSettingsSnapshotSource
{
    string Key { get; }
    string WriteSnapshot(IEnumerable<Entity> entities);
}

//--------------------------------------------------------------------------------------------------

/// <summary>
/// Settings of entity instances taken at copy time, e.g. to carry them through the clipboard.
/// If set in the serialization context when cloning, the clones get their settings from it
/// instead of from their originals.
/// </summary>
internal sealed class EntityInstanceSettingsSnapshot
{
    static readonly List<IEntityInstanceSettingsSnapshotSource> _Sources = [];

    readonly Dictionary<string, string> _Data;

    //--------------------------------------------------------------------------------------------------

    public EntityInstanceSettingsSnapshot(Dictionary<string, string> data)
    {
        _Data = data ?? [];
    }

    //--------------------------------------------------------------------------------------------------

    internal static void Register(IEntityInstanceSettingsSnapshotSource source)
    {
        _Sources.Add(source);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Takes the settings of all given entities, keyed by settings source. Returns null if no entity has settings.
    /// </summary>
    public static Dictionary<string, string> Take(IEnumerable<Entity> entities)
    {
        Dictionary<string, string> data = null;
        var entityList = entities as IReadOnlyCollection<Entity> ?? [..entities];
        foreach (var source in _Sources)
        {
            var snapshot = source.WriteSnapshot(entityList);
            if (snapshot == null)
                continue;

            data ??= [];
            data[source.Key] = snapshot;
        }
        return data;
    }

    //--------------------------------------------------------------------------------------------------

    internal string Get(string key)
    {
        return _Data.GetValueOrDefault(key);
    }
}

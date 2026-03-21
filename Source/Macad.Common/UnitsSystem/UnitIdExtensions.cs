using System;
using System.Collections.Concurrent;
using System.Linq;
using System.Reflection;

namespace Macad.Common;

public static class UnitIdExtensions
{
    static readonly ConcurrentDictionary<UnitId, PhysicalQuantity> _Cache = new();

    public static PhysicalQuantity GetQuantity(this UnitId id)
    {
        return _Cache.GetOrAdd(id, key =>
        {
            var member = typeof(UnitId).GetMember(key.ToString()).First();
            var attr = member.GetCustomAttributes(typeof(QuantityAttribute), false)
                             .Cast<QuantityAttribute>()
                             .FirstOrDefault();

            if (attr == null)
                throw new InvalidOperationException($"UnitId {key} has no QuantityAttribute.");

            return attr.Quantity;
        });
    }
}

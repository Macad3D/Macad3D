using System;

namespace Macad.Common;

[AttributeUsage(AttributeTargets.Field)]
public sealed class QuantityAttribute : Attribute
{
    public PhysicalQuantity Quantity { get; }

    public QuantityAttribute(PhysicalQuantity quantity)
    {
        Quantity = quantity;
    }
}

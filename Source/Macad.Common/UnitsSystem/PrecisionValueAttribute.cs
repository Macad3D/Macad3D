using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Common;

[AttributeUsage(AttributeTargets.Field)]
public sealed class PrecisionValueAttribute : Attribute
{
    public int Value { get; }
    public PrecisionValueAttribute(int value)
    {
        Value = value;
    }
}

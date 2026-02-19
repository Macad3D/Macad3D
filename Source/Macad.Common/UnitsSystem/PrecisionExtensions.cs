using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Common;

public static class PrecisionExtensions
{
    public static int GetPrecisionValue(this Enum precision)
    {
        var member = precision.GetType().GetMember(precision.ToString()).First();
        var attr = member.GetCustomAttributes(typeof(PrecisionValueAttribute), false)
                         .Cast<PrecisionValueAttribute>()
                         .FirstOrDefault();

        return attr?.Value ?? 0;   // 0 = auto mode or fallback
    }
}

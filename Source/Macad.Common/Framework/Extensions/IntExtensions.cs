using System;

namespace Macad.Common
{
    public static class IntExtensions
    {
        public static int Clamp(this int value, int min, int max)
        {
            return Math.Min(max, Math.Max(min, value));
        }
    }
}
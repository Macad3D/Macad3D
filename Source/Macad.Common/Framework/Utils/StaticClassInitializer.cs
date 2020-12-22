using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace Macad.Common
{
    [AttributeUsage(AttributeTargets.Class, Inherited = false, AllowMultiple = false)]
    public sealed class InitializeAtStartupAttribute : Attribute
    {
    }

    //--------------------------------------------------------------------------------------------------

    public static class StaticClassInitializer
    {
        public static void InitializeStaticClasses(Assembly assembly)
        {
            foreach (var type in assembly.GetTypes().Where(t => t.IsClass && t.GetCustomAttribute<InitializeAtStartupAttribute>() != null))
            {
                System.Runtime.CompilerServices.RuntimeHelpers.RunClassConstructor(type.TypeHandle);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}
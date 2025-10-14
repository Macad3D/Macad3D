using System;

namespace Macad.Common;

/// <summary>
/// Specifies that a class represents a parameter set for a specific part of the application.
/// </summary>
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class ParameterSetAttribute : Attribute
{
}

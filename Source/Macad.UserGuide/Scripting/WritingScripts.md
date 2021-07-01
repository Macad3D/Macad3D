---
uid: dbef1051-1ced-4b54-89a5-64c02de1722d
title: Writing Scripts
---
Macad\|3D uses C# as the primary language for writing scripts. You can use any language targeting the .Net framework by pre-compiling an assembly and referencing this assembly inside your script.

Instead of providing an abstract API on top of the internal classes, scripts are referencing the Macad\|3D assemblies and using the same API Macad\|3D is using internally. However, you should try to keep at the documented classes and functions, as all other interfaces are subject to change in further development.

Scripts are compiled at run-time and loaded into the context of the main application. That means they cannot be unloaded. If a script or it's referenced code files are changed, they are compiled into a new assembly again, which is referenced instead. Doing this very often will increase memory usage, so the application should be restarted from time to time when developing scripts.

Since scripts run in the context of the main application, debugging scripts is very easy. Just attach the debugger to the running Macad\|3D process, set breakpoints in your script, and run it.

# Writing a Script
Scripts are built using the common Roslyn C# Scripting format, which is supported by many editors out of the box (e.b. Visual Studio Code). Source files do not need to contain any class or namespace declaration, just write the code. Classes or functions can be declared and used as they were an inner part of your script class. All scripts are derived from [ScriptContext](Macad.Interaction.InteractiveScriptContext) class and can access it's members directly.
If you want to write an extension script, you can register your extensions at the entry code, and use classes to encapsulate functionality.

The following script shows the minimum code to start with, writing `Hello World!` to the Macad\|3D log.

[!code-cs[Main](Samples/HelloWorld.csx)]

# Preprocessor
Scripts are based on a single code file in the first place, with some referenced assemblies and imported namespaces by default. When scripts are getting more complex, or need to reference other assemblies, it will need to ask the compiler to include more code files or references to other assemblies. This is done using a preprocessor, which evaluates commands embedded in comment lines preceding the first code line.

## Additional Files
Additional source files can be included by adding the line `#load MyAdditionalSource.csx` at the beginning of the source file. The additional file is compiled into the same assembly and can be referenced by all other files. The file path must be relative to the current file. The additional file is also processed by the preprocessor, so file importing can be cascaded.

## Additional References
To add referenced assemblies, add the line `#r MyAdditionalAssembly.dll` at the beginning of the source file. 

The referenced assemblies will be searched in the following paths:
1. Directory of the script
2. Directory of the Macad\|3D application
3. Global Assembly Cache

## Version Dependency
The API of Macad\|3D will be enhanced and may also change with newer versions. If your script is concerned by a change or enhancement and you want to deal with multiple versions, you can use standard preprocessor directives to distinguish the version on code level. The directives need to follow the following format:
```cs
#if version >= 2.0
  // Code for major version 2 (and newer)
#elif version == 1.1
  // Code for version 1.1
#elif
  // Code for all others
#endif              
```

# Examples
The API of Macad\|3D is not really documented yet. To get a starting point for writing scripts, a couple of example scripts demonstrating some typical use cases are provided in this user guide. These examples have a basic documentation, and show how to interact with various parts of the application.

> [!Tip] * All shapes have static factory methods to create a primitive or modifier shape. Use them instead of creating shapes yourself. This is also true for [Body](Macad.Core.Topology.Body).
> * Do not call the undo commitment method yourself. All changes your script makes will be committed automatically after execution of the script.
> * You can get the geometric data of every shape by the function [GetBRep](Macad.Core.Shapes.Shape#GetBRep). Working with geometric data demands knowledge of the _OpenCASCADE Technology SDK_. You can find the latest documentation following in the [links section](xref:#see-Also). Most of the SDK is wrapped in __Macad.Occt__ namespace, which is imported by default. Please note that most of the basic types (beginning with `gp_`) are wrapped as value types, omitting the prefix (e.g. `gp_Pnt` is wrapped as value type [](Macad.Occt.Pnt).

# See Also
[OpenCASCADE Technology Documentation](https://dev.opencascade.org/doc/overview/html/index.html)
[OpenCASCADE Technology Reference Manual](https://dev.opencascade.org/doc/refman/html/index.html)

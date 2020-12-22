# Welcome to Macad\|3D

Macad\|3D is a free and open-source 3D construction program which implements easy-to-handle workflows specific to the model making hobbyist. Design and arrange your model, export perspective drawings and create source data for printing, laser cutting, milling or photo etching.

Macad\|3D is mainly based on the technologies .Net, C#, C++/CLI and OpenCASCADE Technology (OCCT). Contributions are welcome, either by submitting via GitHub, or by sending a patch file to tobias@macad3d.net.

Official homepage and download: http://macad3d.net

![Screenshot](https://macad3d.net/img/screenshot1.png)

## Development requirements

- Visual Studio 2019 Community Edition 
  - .Net Desktop workload
  - C++ Desktop workload
  - C++/CLI support component 
- OpenCASCADE Technology (OCCT) 7.4.0
  - Get it from [OpenCASCADE Download Center](https://old.opencascade.com/content/download-center)

## Building from source

Start ```ScriptConsole.cmd``` and enter the following commands:
   
1. Get dependencies from web and nuget.

    ```> build restore```
   
2. Import OCCT into the repository and patch the header files. 

    ```> occt import <pathToOcct>```

3. Build the whole thing.

    ```> build all```

## Regenerating OCCT wrapper

Generating the OCCT wrapper code depends on several packages to work hand in hand. If any of this packages changes, it can be at least time-consuming to track down the error and either update other packages as well or find a way around.

For this reason, the generated wrapper code for the above mentioned version of the library is checked in. If you want to re-generate the wrapper code, this is the procedure:

1. The include files of OCCT must be fixed to work with the compilation step of the wrapper generator. You find a patch file [here](Build/Patches/OcctCompilationFixes.patch), just apply it to `ThirdParty\OCCT\inc`. 
   
2. Start the wrapper code generation.

    ```> occt generate```

If you are missing something in the wrapper, it maybe excluded because of several reasons: Maybe it cannot be automatically wrapped yet, it did make trouble in any prior version, or it was simply not needed yet and excluded for saving compilation (and especially linking) time. Check the [configuration file](Source/WrapperGenerator/Configuration.cs) for the wrapper generator and enable what you need, then regenerate the wrapper code.
# Welcome to Macad\|3D

Macad\|3D is a free and open-source 3D construction program which implements easy-to-handle workflows specific to the model making hobbyist. Design and arrange your model, export perspective drawings and create source data for printing, laser cutting, milling or photo etching.

Macad\|3D is mainly based on the technologies .Net, C#, C++/CLI and OpenCASCADE Technology (OCCT). Contributions are welcome, either by submitting via GitHub, or by sending a patch file to info@macad3d.net.

Official homepage and download: https://macad3d.net

![Screenshot](https://macad3d.net/img/screenshot1.png)

## Development requirements

- Visual Studio 2026 Community Edition 
  - .Net Desktop workload
  - C++ Desktop workload
  - .Net 10 support component
  - C++/CLI support component 

## Building from source

Start ```ScriptConsole.cmd``` and enter the following commands:
   
1. Update dependencies from nuget servers.

        > restore

2. Build the whole thing. Replace `all` with `debug` or `release` if only one these should be built.

        > build all

3. Optionally run tests to verify your build.

        > test all

## Documentation

The user guide documentation is hosted in its own [repository](https://github.com/Macad3D/UserGuide) and is [available online](https://macad3d.net/userguide/).

## About OpenCASCADE Technology

The restore script downloads a pre-built version of OpenCASCADE Technology (OCCT) so that the project can be built immediately. This package contains only the parts that are used in this project. The complete distribution can be cloned from the [OCCT github repo](https://github.com/Open-Cascade-SAS/OCCT). This allows to use additional parts, build the library with other build options or to make code changes. The currently used version can be found in the about dialog. 

To use an own build of OCCT, you need to configure the path to OCCT build directory using the following script console command:

    > occt config <pathToOcct>
    
To use the pre-built package again, use the following command:

    > occt config package

Generating the OCCT wrapper code depends on several packages to work hand in hand. If any of this packages changes, it can be at least time-consuming to track down the error and either update other packages as well or find a way around. For this reason, the generated wrapper code for the above mentioned version of the library is checked in. If you have to to re-generate the wrapper code, start the generation with the following script console command:

    > occt generate

If you are missing something in the wrapper, it maybe excluded because of several reasons: Maybe it cannot be automatically wrapped yet, it did make trouble in any prior version, or it was simply not needed yet and excluded for saving compilation (and especially linking) time. Check the [configuration files](Tools/WrapperGenerator/Configuration) for the wrapper generator and enable what you need, then regenerate the wrapper code.


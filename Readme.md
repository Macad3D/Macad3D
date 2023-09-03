# Welcome to Macad\|3D

Macad\|3D is a free and open-source 3D construction program which implements easy-to-handle workflows specific to the model making hobbyist. Design and arrange your model, export perspective drawings and create source data for printing, laser cutting, milling or photo etching.

Macad\|3D is mainly based on the technologies .Net, C#, C++/CLI and OpenCASCADE Technology (OCCT). Contributions are welcome, either by submitting via GitHub, or by sending a patch file to info@macad3d.net.

Official homepage and download: https://macad3d.net

![Screenshot](https://macad3d.net/img/screenshot1.png)

## Development requirements

- Visual Studio 2022 Community Edition 
  - .Net Desktop workload
  - C++ Desktop workload
  - .Net 6 support component
  - C++/CLI support component 

## Building from source

Start ```ScriptConsole.cmd``` and enter the following commands:
   
1. Update dependencies from nuget servers.

        > restore

2. Build the whole thing. Replace `all` with `debug` or `release` if only one these should be built.

        > build all

3. Optionally run tests to verify your build.

        > test all

## About OpenCASCADE Technology

The restore script downloads a pre-built version of OpenCASCADE Technology (OCCT) so that the project can be built immediately. This package contains only the parts that are used in this project. The complete OCCT distribution can be downloaded from the [OpenCASCADE Download Center](https://dev.opencascade.org/release). This allows to use additional parts, build the library with other build options or to make code changes. The currently used version can be found in the about dialog. 

To use an own build of OCCT, you need to configure the path to OCCT and it's dependencies using the following script console command:

    > occt config <pathToOcct>
    
To use the pre-built package again, use the following command:

    > occt config package

Please note: The OCCT installer only contains a release build, if a debug build is to be used, it must be created yourself. For this, please refer to the documentation from OCCT.

Generating the OCCT wrapper code depends on several packages to work hand in hand. If any of this packages changes, it can be at least time-consuming to track down the error and either update other packages as well or find a way around. For this reason, the generated wrapper code for the above mentioned version of the library is checked in. If you have to to re-generate the wrapper code, start the generation with the following script console command:

    > occt generate

If you are missing something in the wrapper, it maybe excluded because of several reasons: Maybe it cannot be automatically wrapped yet, it did make trouble in any prior version, or it was simply not needed yet and excluded for saving compilation (and especially linking) time. Check the [configuration files](Source/WrapperGenerator/Configuration) for the wrapper generator and enable what you need, then regenerate the wrapper code.

## Acknowledgments

Thanks to [JetBrains](https://www.jetbrains.com) for providing a free license of [ReSharper](https://www.jetbrains.com/resharper/).

[<img src="https://resources.jetbrains.com/storage/products/company/brand/logos/ReSharper_icon.svg" height="50" alt="ReSharper logo.">](https://www.jetbrains.com/resharper/)

---
uid: 0857be7d-eabe-40e1-bda3-a3415b29a4cd
title: Running Scripts
---
Macad\|3D supports running scripts using C# as the primary language. Scripts can be used to extent the functionality of the modeling tools or to implement a very special workflow.

With scripts you can:
* Automate repetitive tasks
* Implement customized calculation of values
* Create new modifier or interactive tools
* Provide additional file formats for import and export

Generally there are two different kinds of scripts: Interactive scripts do a one-time job and are called explicitly by the user. Extension scripts do register new functionality, which is then available via the usual user interface.

# Running Interactive Scripts
1. Select __Run Script__ from ribbon menu page __Edit__, group __Toolbox__.
2. Find the script file with extension `.csx` to run.
3. The script will now be run. Depending on the script content, it maybe show some ui or make other changes to your model.
4. If you are unhappy with what the script did, you can revert it's work with one single __Undo__ step.

# Running Scripts via Command Line
Scripts can be started via command line to enable automated processes. For this the path to the script is passed as follows:

`Macad.exe /runscript=<scriptfile.csx>`

The script will be executed immediately after program start. If a document is passed for opening via the command line at the same time, the document is opened first, then the script is executed.

# Running Extension Scripts
Extension scripts do not work immediately, but register extensions with the application. This can be a new importer or exporter supporting a new file format, for example. Currently, this scripts must run once to register it's extension, using the same procedure as interactive scripts. Registration of extensions cannot be reverted via __Undo__.
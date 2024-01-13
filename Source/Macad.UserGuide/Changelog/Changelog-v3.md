---
uid: f5697cf2-acbd-47e9-86d5-0af8c66973f2
title: What's new in Macad\|3D Release 3
---
This page lists all new features and changes of the version 3.0 compared to the previous version.

# Live Tools

The biggest expansion is the introduction of Live Tools. These are interactive tools for setting the parameters of the currently selected shape. The tools are displayed in the viewport and can be operated there directly; the results are usually immediately visible. This allows parameter settings to be aligned with the model much more intuitively and adjusted more quickly.

The live tools are provided by almost every shape and modifier that can meaningfully map parameters in the viewport.

![_Live Tool_ of _Flange Sheet_ in action](LiveToolsDemo.apng)

# Modelling

## New Modifier

* **[Offset](xref:af5f6317-5201-4c55-b56d-da368f359324)** makes a sketch or solid thicker or thinner by creating parallel copies of each curve or face at a specified distance and closing the resulting gaps.

* **[Cross Section](xref:86065e4d-c0fc-46e2-aae4-4b385fb47409)** creates a sketch by cutting the solid with a plane.

* **[Halved Joint](xref:ee35e475-eb9c-4871-9da8-e04e53faef6a)** is for the connection between two solids. It builds a junction by removing half of the thickness from each part.

* **[Scale](xref:5974b87b-8ce2-4454-b400-377b936650bb)** to modify the size of a sketch, solid or mesh uniformly or non-uniformly.

## New Features

* **[Mirror](xref:6578fa5e-7536-4df2-96fc-18a31a4cee9c)** gets three new options: 
    - _Keep Original_ can be deselected to discard the original shape. 
    - _Merge Faces_ create contiguous surfaces from the mirrored and the original face.     
    - Also one of the standard planes can now be selected as the mirror plane.

* **[Revolve](xref:74c0aab4-7847-4dcb-83e9-6ed639f4591c)**:  When creating the modifier, the rotation axis can now be selected interactively in the viewport.

* **[Linear Array](xref:c867c6ad-f4ce-432b-a097-99596e31fea1)** and **[Circular Array](xref:07407809-3236-4469-ad99-526aab13b6e7)**: When creating the modifier, the level on which the copies are distributed can be selected interactively in the viewport.

* **[Shape Stack Converter](xref:e0d6ed71-f1fa-481b-94b4-c7f76591b1b4#shape-stack-converter)**: There are two new tools available to collapse the shape stack and replace it with a solid or a sketch containing the result of the former shape stack.

* **[Boolean Fuse](xref:dff138bf-06a6-485c-a94d-890ef71a1372)**: New option _Merge Faces_ to merge contiguous faces. 

* **[Extrude](xref:240a3c08-f9a0-4e31-88e0-7b034c1d9f9d)**: New option _Merge Faces_ to merge contiguous faces. 

* **[Slice Contour](xref:0c834add-faf4-48f0-a8c3-e6dce411774c#cut-plan-(slice-contour))**: The slice layer positions can now be freely defined as an option.

# Workflow

* The **[Transform tool](xref:e0d6ed71-f1fa-481b-94b4-c7f76591b1b4#transform)** has been given a new look and feel to harmonize it with the new live tools and to improve usability.

* **[Sketch Editor](xref:0dc12d15-5450-460c-909b-f25ed1cf4b7e#sketch-editor)**: 
    - The tool for translating points and segments has been adapted to the new style and has been given an additional rotation function.
    - The _Create Sketch_ tool offers the three standard plans for selection in the center of the working plane.
    - View settings of the sketch editor are retained even after transformation of the sketch.

* **[Fillet](xref:9b151212-b7f3-43ab-ad5a-bb03c8c8b083)** and **[Chamfer](xref:28fda54f-4380-45f4-b55e-23093b6dc6de)** have been given new tooling: 
    - The selection and deselection of edges has been simplified so that selected edges are no longer hidden.
    - The radius or distance can also be set visually in the tool.

* **[Slice Contour](xref:0c834add-faf4-48f0-a8c3-e6dce411774c#cut-plan-(slice-contour))**: New option to display the reconstruction or the original shape.

* **[Box](xref:5da4906e-c86b-4f91-8b30-f5163e152d0e)**, **[Cylinder](xref:5da4906e-c86b-4f91-8b30-f5163e152d1e)** and **[Sphere](xref:eecb316b-a4da-441b-b9a6-3fadf9275889)**
    - The tool for creating has been given an option to round the sizes according to grid size.
    - During creation, the preview shapes are already displayed in the visualization of the active layer.

* **[Align Working Plane](xref:e0d6ed71-f1fa-481b-94b4-c7f76591b1b4#working-plane)**:
    - The currently selected plane is displayed as a preview.
    - Vertices and edges determine the location of the plane, but do not change its orientation. This allows the alignment to be defined precisely by first moving to the associated face whose alignment is to be used as orientation and then to the vertex or edge to move the plane to this location.
    - Edges and vertices of sketches can also be selected. The resulting plane is coplanar to the sketch plane.

* **Grid**
    - In the bottom right-hand corner of the viewport you will now find the current grid stepping together with a scale ruler. Scrolling with the mouse wheel on this display changes the grid stepping for quick adjustment.
    - The zero line in the X and Y directions are marked as a red and green line respectively for better orientation.

* **Layers** can be sorted in the layer editor using drag'n'drop.

* **Workspace**
    - The selection behavior has been adjusted to match the windows standard: __LMB__ selects exclusively, __Shift + LMB__ extends the selection, __Ctrl + LMB__ toggles the selection. Mouse movement with the left mouse button pressed starts the rubberband selection.
    - Rotation now always takes place around the center of gravity. This is determined at the start of the rotation and remains in place until the individual rotation process is completed.
    - The shortcut __E__ is used to start editing a shape if a corresponding tool is available (e.g. Sketch, Fillet, Chamfer).

* **Document Explorer**
    - At the top of the document explorer there is an input field for searching the list of all entities by name.
    - On the right-hand side of this line there is also a button which provides a menu for setting filters and sorting.

# Exchange

* The **[Create Drawing From View](xref:0c834add-faf4-48f0-a8c3-e6dce411774c#drawings)** dialogue now offers the option of transferring only the selected entities to the drawing.

# Scripting

* The version of the CAD kernel OCCT was increased to 7.8.0. This results in some changes which can be looked up on the OpenCASCADE website.

* There are the following changes in the mapping of OCCT classes:
    - Most collections can be iterated as usual in C# via `foreach`, LINQ extensions are available.
    - The method `GetType()`, already reserved in C#, has been renamed to `GetGeomType()` in earlier versions. This has been changed to `GetCurveType()` or `GetSurfaceType()` depending on the return type.
    - The names of enum members have been shortened by the repetition of the enum name for better readability.

The class structure of tools and actions has changed slightly. Adjustments may be necessary here. The new usage method is shown in the [scripting tutorial](xref:8bd40f7f-0687-46fe-ba84-2faf6bc91571).


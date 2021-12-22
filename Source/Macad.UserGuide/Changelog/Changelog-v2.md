---
uid: 1d99404b-3c0d-4c51-af29-258459c9a236
title: What's new in Macad\|3D 2.0
---
This page lists all new features and changes of the version 2.0 compared to the previous version.

# Modelling

* **[Pipe modifier](xref:69425fd0-ff1a-4dc3-9014-12860684e057)** creates a pipe along a path defined in a sketch. With a free choice of predefined or user-defined profiles and the automatic generation of bending radii, this allows the modelling not only of pipes, but also of wires, cables and ropes.

* Based on the result, a pipe drawing can be created and exported, which contains the complete dimensions of the bending points and radii.
  
* **[Datum Plane](xref:322f5cc2-0fc7-43f9-bb80-5e87cb3e3651)** is a new auxiliary object that can be used to create planes as a reference for modelling, which are available in tools as a visible and also selectable reference. Datum planes can contain images and can be used as a tool to save and restore working planes.

# Sketch Editor

## New Features

* **Split Segments** New tool for splitting segments into two sub-segments. The split point can b:e determined interactively. 
  
* **Split Points:** New tool to split points used by more than one segment into separate points for each segment. So, the opposite of 'merge points'.
* **Weld:** New tool for welding several points into one point, points within segments, and segments among each other, e.g. via intersection points.
  
* **Convert Segments:** New tool for converting segment types into other segment types. This can be an upgrade (e.g. from line to bezier) or a reduction (from bezier to line).
  
* **Smooth Corner constraint** for keeping corners smooth, as far as the involved segment types allow it.
  
* **Vector drawings** can now be opened directly via the file menu or via drag'n'drop. A new sketch is created in the working plane and the drawing is imported there.

## Changes

* If a point is deleted that is used by two segments, then an attempt is made to create a replacement segment that is as close as possible to the original course. Until now, the two segments were simply deleted.
  
* When creating segments, the keyboard input can be used, for example, to specify the exact length of a line.
  
* Points at unconnected ends of a segment are drawn with a square marker. This allows for faster location of disconnected segments.

# Workflow

## New Features

* **Rubberband Selection:** This tool has got a new mode setting that determines whether touched entities or only completely enclosed entities are selected.
  
* **Horiz. Mouse Wheel:** The use of the horizontal mouse wheel is supported and rotates the model around the vertical axis.
  
* **Touch:** Viewport navigation via touch devices is supported.
  
* **Grid Step:** The selected grid step is shown in the lower-right corner of the viewport and can be changed interactively with the mouse wheel.

# Exchange

## New Features

* **PDF / 3D-PDF:** The new PDF exporter offers not only the export of vector drawings but also the export of bodies or the entire model in a 3D PDF. This makes it easy to transmit a vivid and interactive representation as accompanying information for production data.
  
* **U3D:** The mesh-based export in Universal 3D (U3D), a file format that is rarely used on its own, but is used as the basis for a 3D PDF. These files can be embedded using the appropriate tools when creating your own pdf.
  
## Changes

* The menu for import and export has been extended to allow faster and direct access to the desired function.

# Bug Fixes

A long number of bug fixes have been made and overall stability has been increased.

# System Requirements

Macad\|3D is now based on the latest framework .Net 6, therefore the operating system requirements increase to: 
Windows 8.1 64-bit and newer is supported.

---
uid: e0d6ed71-f1fa-481b-94b4-c7f76591b1b4
title: Editing
---
This page explains some of the standard editing tools.

# Working Plane

One of the most relevant helper in modelling is the working plane. On this plane the grid is laid out and new primitives and sketches are made. Even if there is always the possibility of changing the position and orientation of bodies, it is very helpful to have the plane and the snapping grid available when creating new bodies.

The working plane can be moved using commands in the __Working Plane__ ribbon group in the __Edit__ tab or using the context menu in the viewport. The three world maps are available as a default; the plane can also be aligned with a face, an edge or a vertex.

# Transform

_Transform_ is one of the most important tools. It works on bodies and offer the opportunity to change their position and orientation in the model.

The tool is started via the ribbon button __Transform__ in the __Edit__ tab, via the context menu in the viewport or via the keyboard shortcut __T__. The transform tool has two modes, which can be switched through by repeatedly pressing the buttons or the __T__ key: move and rotate. The change is made by touching the axes, planes between the axes or circles and moving the mouse. By holding down the __Ctrl__ key, the change is discretized to the stepping of the grid in _move_ mode or to 5° in _rotation_ mode.

![_Transform_ in _move_ mode](StandardToolsMoveGizmo.png)

The pivot has a special meaning: this is the point at which the gizmo originates, and at this point the rotation is carried out. A number of options are available for setting the pivot.

Another option is whether bodies referenced in the shape stack - so-called foreign bodies - should also be moved. This is necessary if the shape itself must not change.

# Duplicate / Reference

The _Duplicate_ and _Create Reference_ tools also require some explanation. Both apparently lead to the same result at first: The selected body is twice in the model. 

With _Duplicate_, the entire body including the entire shape stack is duplicated. If a change is made to the new or old body, this does not affect the other. 

With _Create Reference_ also a new body is created, but this refers to the shape of the original body. If the shape of the original body is changed, the shape of the new body also changes. Regardless of this, the new body can again accept new modifiers in order to further edit the inherited shape.

![Shape stack of a _Reference_](StandardToolsReferenceStack.png)

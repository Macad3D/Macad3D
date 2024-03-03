using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Visual;

public class Trihedron : VisualObject
{
    [Flags]
    public enum Components
    {
        AxisX  = 1 << 0,
        AxisY  = 1 << 1,
        AxisZ  = 1 << 2,
        PlaneXY = 1 << 3,
        PlaneZX = 1 << 4,
        PlaneYZ = 1 << 5,

        Axes = AxisX | AxisY | AxisZ,
        Planes = PlaneXY | PlaneZX | PlaneYZ,
        All = Axes | Planes
    }

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject => null;

    //--------------------------------------------------------------------------------------------------

    readonly WorkspaceController _WorkspaceController;
    readonly Ax3 _CoordinateSystem;
    readonly List<VisualObject> _Gizmos = new();

    //--------------------------------------------------------------------------------------------------

    public Trihedron(WorkspaceController workspaceController, Ax3 coordinateSystem, Components components)
        : base(workspaceController, null)
    {
        _WorkspaceController = workspaceController;
        _CoordinateSystem = coordinateSystem;
        _CreateVisuals(components);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        _Gizmos.ForEach(obj => obj.Remove());
        _Gizmos.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Update()
    {
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateVisuals(Components components)
    {
        void __CreatePlane(Components component, Color color)
        {
            var plane = new Plane(_WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
            {
                IsSelectable = true,
                Size = new XY(2, 2),
                Margin = new Vec2d(1.25, 1.25),
                Color = color,
                Tag = component
            };
            plane.Set(new Pln(GetCoordinateSystem(component)));
            _Gizmos.Add(plane);
        }

        //--------------------------------------------------------------------------------------------------

        void __CreateAxis(Components component, Color color)
        {
            var axis = new Axis(WorkspaceController, Axis.Style.NoResize | Axis.Style.Topmost)
            {
                Color = color,
                IsSelectable = true,
                Width = 4.0,
                Length = 2.0,
                Margin = 0.25,
                Tag = component
            };
            axis.Set(GetCoordinateSystem(component).Axis);
            _Gizmos.Add(axis);
        }

        //--------------------------------------------------------------------------------------------------

        if (components.HasFlag(Components.PlaneXY))
        {
            __CreatePlane(Components.PlaneXY, Colors.ActionBlue);
        }
        if (components.HasFlag(Components.PlaneZX))
        {
            __CreatePlane(Components.PlaneZX, Colors.ActionGreen);
        }
        if (components.HasFlag(Components.PlaneYZ))
        {
            __CreatePlane(Components.PlaneYZ, Colors.ActionRed);
        }
        if (components.HasFlag(Components.AxisX))
        {
            __CreateAxis(Components.AxisX, Colors.ActionRed);
        }
        if (components.HasFlag(Components.AxisY))
        {
            __CreateAxis(Components.AxisY, Colors.ActionGreen);
        }
        if (components.HasFlag(Components.AxisZ))
        {
            __CreateAxis(Components.AxisZ, Colors.ActionBlue);
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public Ax3 GetCoordinateSystem(Components component)
    {
        return component switch
        {
            Components.AxisX => new Ax3(_CoordinateSystem.Location, _CoordinateSystem.XDirection, _CoordinateSystem.Direction),
            Components.AxisY => new Ax3(_CoordinateSystem.Location, _CoordinateSystem.YDirection, _CoordinateSystem.Direction),
            Components.AxisZ => _CoordinateSystem,
            Components.PlaneXY => _CoordinateSystem,
            Components.PlaneZX => new Ax3(_CoordinateSystem.Location, _CoordinateSystem.YDirection, _CoordinateSystem.Direction),
            Components.PlaneYZ => new Ax3(_CoordinateSystem.Location, _CoordinateSystem.XDirection, _CoordinateSystem.YDirection),
            _ => throw new ArgumentOutOfRangeException(nameof(component), component, null)
        };
    }
    
    //--------------------------------------------------------------------------------------------------

    public Components? GetComponent(AIS_InteractiveObject aisObj)
    {
        if (aisObj == null)
            return null;

        var obj = _Gizmos.FirstOrDefault(obj => aisObj.Equals(obj.AisObject));
        return obj?.Tag as Components?;
    }

    //--------------------------------------------------------------------------------------------------

    public Ax3? GetCoordinateSystem(AIS_InteractiveObject aisObj)
    {
        if (aisObj == null)
            return null;

        var obj = _Gizmos.FirstOrDefault(obj => aisObj.Equals(obj.AisObject));
        var component = obj?.Tag as Components?;
        if (component == null)
            return null;

        return GetCoordinateSystem(component.Value);
    }

    //--------------------------------------------------------------------------------------------------

    public ISelectionFilter GetSelectionFilter()
    {
        return new InstanceSelectionFilter(_Gizmos);
    }

    //--------------------------------------------------------------------------------------------------

}
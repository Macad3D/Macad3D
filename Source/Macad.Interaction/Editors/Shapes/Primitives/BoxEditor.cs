using System;
using System.Collections.Specialized;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class BoxEditor : Editor<Box>
{
    BoxScaleLiveAction _ScaleAction;
    BitVector32 _ScaleAxisReversed;
    LabelHudElement[] _HudElements = new LabelHudElement[3];

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<BoxPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _HudElements.Fill(null);
        _ScaleAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateActions();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #region Scale Action

    void _ShowActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _ScaleAction = null;
            return;
        }
            
        if (_ScaleAction == null)
        {
            _ScaleAction = new BoxScaleLiveAction();
            _ScaleAction.Preview += _ScaleAction_Preview;
            _ScaleAction.Finished += _ScaleAction_Finished;
            StartAction(_ScaleAction);
        }
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_ScaleAction == null)
            return;

        Bnd_Box box = new Bnd_Box(Pnt.Origin, new Pnt(Entity.DimensionX, Entity.DimensionY, Entity.DimensionZ));
        _ScaleAction.Box = box;
        _ScaleAction.Transformation = Entity.Body.GetTransformation();
        _ScaleAxisReversed[1 << 3] = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Preview(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        SetHintMessage("__Scale box__ using gizmo, press `k:Ctrl` to round to grid stepping, press `k:Shift` to scale relative to center.");

        if (!_ScaleAxisReversed[1 << 3])
        {
            _ScaleAxisReversed[1 << 0] = Math.Sign(args.Direction.X) != Math.Sign(Entity.DimensionX);
            _ScaleAxisReversed[1 << 1] = Math.Sign(args.Direction.Y) != Math.Sign(Entity.DimensionY);
            _ScaleAxisReversed[1 << 2] = Math.Sign(args.Direction.Z) != Math.Sign(Entity.DimensionZ);
            _ScaleAxisReversed[1 << 3] = true;
        }

        XYZ scale = new XYZ(args.Delta * args.Direction.X * (_ScaleAxisReversed[1 << 0] ? -1 : 1),
                            args.Delta * args.Direction.Y * (_ScaleAxisReversed[1 << 1] ? -1 : 1),
                            args.Delta * args.Direction.Z * (_ScaleAxisReversed[1 << 2] ? -1 : 1));
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            if (scale.X != 0)
            {
                var newDimX = Entity.DimensionX + scale.X;
                newDimX = Maths.RoundToNearest(newDimX, WorkspaceController.Workspace.GridStep);
                scale.X = newDimX - Entity.DimensionX;
                if (scale.X == 0)
                    return;
            }
            if (scale.Y != 0)
            {
                var newDimY = Entity.DimensionY + scale.Y;
                newDimY = Maths.RoundToNearest(newDimY, WorkspaceController.Workspace.GridStep);
                scale.Y = newDimY - Entity.DimensionY;
                if (scale.Y == 0)
                    return;
            }
            if (scale.Z != 0)
            {
                var newDimZ = Entity.DimensionZ + scale.Z;
                newDimZ = Maths.RoundToNearest(newDimZ, WorkspaceController.Workspace.GridStep);
                scale.Z = newDimZ - Entity.DimensionZ;
                if (scale.Z == 0)
                    return;
            }
        }

        bool center = args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift);
        if (center)
            scale.Multiply(2.0);

        Vec offset = new();
           
        if (scale.X != 0) 
        {
            Entity.DimensionX += scale.X;
            if (_ScaleAxisReversed[1 << 0] || center)
            {
                offset.X -= scale.X;
            }

            if (_HudElements[0] == null)
            {
                _HudElements[0] = new LabelHudElement();
                Add(_HudElements[0]);
            }
            _HudElements[0].SetValue($"Length: {Entity.DimensionX.ToInvariantString("F2")} mm");
        }

        if (scale.Y != 0)
        {
            Entity.DimensionY += scale.Y;
            if (_ScaleAxisReversed[1 << 1] || center)
            {
                offset.Y -= scale.Y;
            }

            if (_HudElements[1] == null)
            {
                _HudElements[1] = new LabelHudElement();
                Add(_HudElements[1]);
            }
            _HudElements[1].SetValue($"Width:  {Entity.DimensionY.ToInvariantString("F2")} mm");
        }
            
        if (scale.Z != 0)
        {
            Entity.DimensionZ += scale.Z;
            if (_ScaleAxisReversed[1 << 2] || center)
            {
                offset.Z -= scale.Z;
            }

            if (_HudElements[2] == null)
            {
                _HudElements[2] = new LabelHudElement();
                Add(_HudElements[2]);
            }
            _HudElements[2].SetValue($"Height:  {Entity.DimensionZ.ToInvariantString("F2")} mm");
        }

        if (center)
        {
            offset.Scale(0.5);
        }
        Entity.Body.Position = Entity.Body.Position.Translated(offset.Transformed(new Trsf(Entity.Body.Rotation)));
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
        {
            CommitChanges();
        }
        _HudElements.ForEach(Remove);
        _HudElements.Fill(null);
        RemoveHintMessage();
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<BoxEditor>();
    }

}
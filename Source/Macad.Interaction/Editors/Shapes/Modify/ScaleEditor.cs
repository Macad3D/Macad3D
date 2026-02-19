using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;

namespace Macad.Interaction.Editors.Shapes;

public sealed class ScaleEditor : Editor<Scale>
{
    TranslateAxisLiveAction[] _TranslateActions;
    LabelHudElement _HudElementX;
    LabelHudElement _HudElementY;
    LabelHudElement _HudElementZ;
    bool _IsMoving;
    double _StartLength;
    Vec _StartFactor;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        base.OnStart();

        CreatePanel<ScalePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
        _HudElementX = null;
        _HudElementY = null;
        _HudElementZ = null;
        _TranslateActions = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Tools
    
    void _ShowActions()
    {
        //--------------------------------------------------------------------------------------------------

        if (Entity?.Body == null)
        {
            StopAllActions();
            _TranslateActions = null;
            return;
        }

        _CreateActions();
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateActions()
    {
        if (_TranslateActions != null || Entity == null)
            return;

        _TranslateActions = new TranslateAxisLiveAction[Entity.ShapeType == ShapeType.Sketch ? 2 : 3];
        _TranslateActions[0] = _CreateAction(Colors.ActionRed);
        _TranslateActions[1] = _CreateAction(Colors.ActionGreen);
        if (Entity.ShapeType != ShapeType.Sketch)
        {
            _TranslateActions[2] = _CreateAction(Colors.ActionBlue);
        }
    }

    //--------------------------------------------------------------------------------------------------

    TranslateAxisLiveAction _CreateAction(Color color)
    {
        TranslateAxisLiveAction action = new(Entity.Body)
        {
            Color = color,
            Cursor = Cursors.SetHeight
        };
        action.Preview += _TranslateAction_Preview;
        action.Finished += _TranslateActionFinished;
        StartAction(action);
        return action;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_TranslateActions == null || Entity == null)
        {
            StopAllActions();
            _TranslateActions = null;
            return;
        }

        var trsf = Entity.GetTransformation();
        var brep = Entity.GetBRep();
        if(brep == null)
            return;
        
        if (Entity.ShapeType == ShapeType.Sketch
            && Topo2dUtils.GetPlaneOfEdges(brep, out Geom_Plane plane))
        {
            brep = brep.Located(new TopLoc_Location(new Trsf(Ax3.XOY, plane.Position())));
            trsf.Multiply(new Trsf(plane.Position(), Ax3.XOY));
        }

        var bbox = brep.BoundingBox();
        
        var axis = Ax3.XOY.Transformed(trsf);

        _TranslateActions[0].Axis = new Ax1(axis.Location, axis.XDirection);
        _TranslateActions[0].Length = Math.Max(bbox.CornerMax().X, 1.0) * 1.2;
        _TranslateActions[0].SnapOffset = bbox.CornerMax().X;
        _TranslateActions[1].Axis = new Ax1(axis.Location, axis.YDirection);
        _TranslateActions[1].Length = Math.Max(bbox.CornerMax().Y, 1.0) * 1.2;
        _TranslateActions[1].SnapOffset = bbox.CornerMax().Y;

        if (_TranslateActions.Length == 3)
        {
            _TranslateActions[2].Axis = new Ax1(axis.Location, axis.Direction);
            _TranslateActions[2].Length = Math.Max(bbox.CornerMax().Z, 1.0) * 1.2;
            _TranslateActions[2].SnapOffset = bbox.CornerMax().Z;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            _StartFactor = Entity.Factor;
            _StartLength = sender.Length / 1.2;
            SetHintMessage("__Adjust scale factor__ using gizmos, press `k:Ctrl` to round to 5%.");
        }

        double scale = (_StartLength + args.Distance) / _StartLength;
        Vec newFactor = _StartFactor;
        bool round = args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control);

        if (Entity.Uniform)
        {
            newFactor.X *= scale;
            if (round)
            {
                newFactor.X = Maths.RoundToNearest(newFactor.X, 0.05);
            }
            newFactor.Y = newFactor.X;
            newFactor.Z = newFactor.X;
        }
        else
        {
            switch (Array.IndexOf(_TranslateActions, sender))
            {
                case 0: 
                    newFactor.X *= scale;
                    if (round)
                    {
                        newFactor.X = Maths.RoundToNearest(newFactor.X, 0.05);
                    }
                    break;
                case 1: 
                    newFactor.Y *= scale;
                    if (round)
                    {
                        newFactor.Y = Maths.RoundToNearest(newFactor.Y, 0.05);
                    }
                    break;
                case 2: 
                    newFactor.Z *= scale;
                    if (round)
                    {
                        newFactor.Z = Maths.RoundToNearest(newFactor.Z, 0.05);
                    }
                    break;
            }
        }

        if (Entity.Factor != newFactor)
        {
            Entity.Factor = newFactor;
        }
        else
        {
            // Update is not triggered by property
            _UpdateActions();
        }

        if (_HudElementX == null)
        {
            _HudElementX = new LabelHudElement();
            Add(_HudElementX);
        }
        _HudElementX?.Label = "Scale X";
        _HudElementX?.Value = Entity.Factor.X * 100.0;
        _HudElementX?.Measurement = DescriptorPercent0dp;

        if (!Entity.Uniform)
        {
            if (_HudElementY == null)
            {
                _HudElementY = new LabelHudElement();
                Add(_HudElementY);
            }
            _HudElementY.Label = "Scale Y";
            _HudElementY.Value = Entity.Factor.Y * 100.0;
            _HudElementY.Measurement = DescriptorPercent0dp;
            
            if (Entity.ShapeType != ShapeType.Sketch)
            {
                if (_HudElementZ == null)
                {
                    _HudElementZ = new LabelHudElement();
                    Add(_HudElementZ);
                }
                _HudElementZ.Label = "Scale Z";
                _HudElementZ.Value = Entity.Factor.Z * 100.0;
                _HudElementZ.Measurement = DescriptorPercent0dp;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        Remove(_HudElementX);
        Remove(_HudElementY);
        Remove(_HudElementZ);
        _HudElementX = null;
        _HudElementY = null;
        _HudElementZ = null;
        RemoveHintMessage();
        CommitChanges();
        _UpdateActions();
    }
    
    //--------------------------------------------------------------------------------------------------
    

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ScaleEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Shapes;

public abstract class AssociatedModifier<TModifier> : ModifierBase where TModifier : AssociatedModifier<TModifier>, new()
{
    #region Properties

    public TModifier AssociatedShape
    {
        get { return _AssociatedShape ?? _UpdateAssociatedShape(); }
    }

    //--------------------------------------------------------------------------------------------------
    
    [SerializeMember]
    public bool IsFirst
    {
        get { return _IsFirst; }
        set
        {
            if (_IsFirst != value)
            {
                SaveUndo();
                _IsFirst = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    #endregion

    #region Members

    TModifier _AssociatedShape;
    bool _IsFirst;

    //--------------------------------------------------------------------------------------------------

    #endregion

    protected static (TModifier First, TModifier Second) Create(Body body1, Body body2)
    {
        Debug.Assert(body1 != null);
        Debug.Assert(body2 != null);

        var first = new TModifier();
        var second = new TModifier();

        first.AddOperand(new BodyShapeOperand(body2, second));
        second.AddOperand(new BodyShapeOperand(body1, first));

        body1.AddShape(first);
        body2.AddShape(second);

        first._UpdateAssociatedShape();
        second._UpdateAssociatedShape();

        first.IsFirst = true;
        second.IsFirst = false;

        return (first, second);
    }

    //--------------------------------------------------------------------------------------------------

    protected TopoDS_Shape GetAssociatedSourceBRep()
    {
        // Operand 1 must be a body
        var op1Body = GetOperand(1) as BodyShapeOperand;
        if (op1Body == null)
        {
            Messages.Error("The associated operand is not a valid body.");
            return null;
        }

        if (AssociatedShape.Body != op1Body.Body)
        {
            Messages.Error("The associated shape is not found on the operand body.");
            return null;
        }

        var transformedBrep = AssociatedShape.GetOperandBRep(0)?.Moved(new TopLoc_Location(new Trsf(AssociatedShape.Body.GetCoordinateSystem(), GetCoordinateSystem())));
        return transformedBrep;
    }

    //--------------------------------------------------------------------------------------------------
    
    TModifier _UpdateAssociatedShape()
    {
        if (_AssociatedShape != null)
        {
            _AssociatedShape.PropertyChanged -= _AssociatedShape_PropertyChanged;
            _AssociatedShape.RemoveDependent(this);
        }

        _AssociatedShape = null;

        if (Operands.Count != 2)
            return null;

        var secondBodyOperand = GetOperand(1) as BodyShapeOperand;
        if(secondBodyOperand == null)
            return null;

        _AssociatedShape = secondBodyOperand.Shape as TModifier;
        if (_AssociatedShape == null)
            return null;

        _AssociatedShape.PropertyChanged += _AssociatedShape_PropertyChanged;
        _AssociatedShape.AddDependent(this);

        return _AssociatedShape;
    }

    //--------------------------------------------------------------------------------------------------

    void _AssociatedShape_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (sender != _AssociatedShape)
            return;

        if (e.PropertyName == nameof(Body))
        {
            if (_AssociatedShape?.Body == null)
            {
                if (Operands.Count > 1)
                {
                    Operands[1] = null;
                }
                _UpdateAssociatedShape();
                Body?.RemoveShape(this);
            }
        }
        else
        {
            SyncProperties(_AssociatedShape);
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        base.OnDeserialized(context);
        
        if (context.Scope == SerializationScope.CopyPaste 
            && _UpdateAssociatedShape() != null
            && _AssociatedShape.AssociatedShape != null)
        {
            // Check if the back reference is still valid
            if (_AssociatedShape.AssociatedShape.Guid != Guid)
            {
                // This is only the case when cloned with reusing the shapes inside the model
                context.TryGetInstance(out CloneOptions cloneOptions);
                if (!(cloneOptions?.CloneReferencedBodies ?? false)
                    && !(cloneOptions?.IsEntityToClone(_AssociatedShape.Guid) ?? false))
                {
                    var associatedModifier = new TModifier();
                    associatedModifier.AddOperand(new BodyShapeOperand(Body, _AssociatedShape.Operands[0] as Shape));
                    associatedModifier.IsFirst = !_IsFirst;
                    associatedModifier.SyncProperties(this as TModifier);

                    _AssociatedShape.Body.AddShape(associatedModifier);
                    Operands[1] = new BodyShapeOperand(associatedModifier.Body, associatedModifier);
                }
            }
        }
        
        _UpdateAssociatedShape();
    }

    //--------------------------------------------------------------------------------------------------
    
    public override bool CanReplaceOperand(int operandIndex)
    {
        return operandIndex == 0;
    }

    //--------------------------------------------------------------------------------------------------
    
    protected override void OnOperandShapeInvalidated(IShapeOperand operand)
    {
        // Only invalidate if this comes directly from our associated shape
        // or our direct predecessor, 
        // since we're not interested in changed in shapes after that.
        // Also not in the general body notification (e.g. changes to root shape)
        if (operand != Predecessor && operand != _AssociatedShape)
            return;

        base.OnOperandShapeInvalidated(operand);
    }

    //--------------------------------------------------------------------------------------------------

    protected abstract void SyncProperties(TModifier source);
}
using System;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for ReferencePropertyPanel.xaml
/// </summary>
public partial class ReferencePropertyPanel : PropertyPanel
{
    #region Properties

    public bool HasBodyReference
    {
        get
        {
            return Reference?.Operands.Count > 1 && Reference?.Operands[1] is BodyShapeOperand;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Body ReferencedBody
    {
        get
        {
            if (!HasBodyReference)
                return null;
            return (Reference.Operands[1] as BodyShapeOperand).Body;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Guid ReferencedShapeId
    {
        get
        {
            if(!HasBodyReference)
                return Guid.Empty;
            return (Reference.Operands[1] as BodyShapeOperand).ShapeId;
        }
        set
        {
            if (!HasBodyReference)
                return;
            Reference.Body.SaveTopologyUndo();
            Reference.ReplaceOperand(1, new BodyShapeOperand(ReferencedBody, value));
            RaisePropertyChanged();
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Reference Reference { get; private set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Init and Cleanup

    public override void Initialize(BaseObject instance)
    {
        Reference = instance as Reference;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
}
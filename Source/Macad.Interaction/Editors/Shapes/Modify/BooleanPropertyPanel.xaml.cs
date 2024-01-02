using System;
using System.Diagnostics;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public partial class BooleanPropertyPanel : PropertyPanel
{
    public BooleanBase Shape { get; private set; }
    
    //--------------------------------------------------------------------------------------------------
    
    public string ModifierName => ModelCommands.CreateBoolean.Header(Operation);

    //--------------------------------------------------------------------------------------------------

    public string HelpTopic => ModelCommands.CreateBoolean.HelpTopic(Operation);

    //--------------------------------------------------------------------------------------------------
    
    public bool HasMergeFacesOption => Shape is BooleanFuse;

    //--------------------------------------------------------------------------------------------------

    BooleanOperationTool.Operation Operation
    {
        get
        {
            return Shape switch
            {
                BooleanCommon _ => BooleanOperationTool.Operation.Common,
                BooleanCut _ => BooleanOperationTool.Operation.Cut,
                BooleanFuse _ => BooleanOperationTool.Operation.Fuse,
                _ => throw new ArgumentOutOfRangeException()
            };
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsToolActive
    {
        get { return _IsToolActive; }
        set
        {
            if (_IsToolActive != value)
            {
                _IsToolActive = value;
                RaisePropertyChanged();
            }
        }
    }

    bool _IsToolActive;

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Shape = instance as BooleanBase;
        Debug.Assert(Shape != null);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }

    //--------------------------------------------------------------------------------------------------

}
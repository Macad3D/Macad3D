using System.Diagnostics;
using System.Windows;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Topology;

public partial class BodyPropertyPanel : PropertyPanel
{
    public Body Body
    {
        get { return _Body; }
        set
        {
            if (_Body != value)
            {
                _Body = value;
                RaisePropertyChanged();
            }
        }
    }

    Body _Body;
        
    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Body = instance as Body;
        Debug.Assert(Body != null);

        if(Application.Current != null)
            InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        Body = null;
    }

    //--------------------------------------------------------------------------------------------------

}
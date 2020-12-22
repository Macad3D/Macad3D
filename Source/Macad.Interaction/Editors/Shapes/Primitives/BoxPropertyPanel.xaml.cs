using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    /// <summary>
    /// Interaction logic for BoxPropertyPanel.xaml
    /// </summary>
    public partial class BoxPropertyPanel : PropertyPanel
    {
        public Box Box { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            Box = instance as Box;
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
        }
        
        //--------------------------------------------------------------------------------------------------
    }
}

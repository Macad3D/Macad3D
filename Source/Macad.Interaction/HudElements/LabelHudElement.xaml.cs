using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;

namespace Macad.Interaction
{
    public partial class LabelHudElement : HudElement
    {
        public static readonly DependencyProperty TextProperty = DependencyProperty.Register("Text", typeof (string), typeof (LabelHudElement), new PropertyMetadata(default(string)));

        public string Text
        {
            get { return (string) GetValue(TextProperty); }
            set { SetValue(TextProperty, value); }
        }

        //--------------------------------------------------------------------------------------------------

        protected override void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public LabelHudElement()
        {
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public void SetValue(string text)
        {
            Text = text;
        }
    }
}

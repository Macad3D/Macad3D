using System.Windows;
using System.Windows.Media;

namespace Macad.Presentation.TreeView;

class InsertContent
{
    public bool Before { get; set; }

    public Point Position { get; set; }

    public Brush InsertionMarkerBrush { get; set; }

    public TreeViewExItem Item { get; set; }
}
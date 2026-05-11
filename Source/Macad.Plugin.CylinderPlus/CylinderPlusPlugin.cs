using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Core;
using Macad.Core.Plugin;
using Macad.Interaction;

namespace CylinderPlus
{
    public class CylinderPlusPlugin : IPlugin, IPluginRibbonContributor
    {
        public string Name => "Cylinder Plus";
        public string Description => "Adds an enhanced cylinder shape";
        public Version Version => new Version(1, 0, 0);

        public void Initialize(IPluginContext context)
        {
            // Output a message to the Messages panel so the user knows it's loaded
            Messages.Info($"Plugin '{Name}' v{Version} has been loaded successfully!");

            // Register namespace
            context.RegisterNamespaceAlias("CylPlus", "CylinderPlus.Types");
            
            // Register serializable assembly
            context.RegisterSerializableAssembly(typeof(CylinderPlus.Types.CylinderPlus).Assembly);
            
            // Register editor
            context.RegisterEditor(typeof(CylinderPlus.Editors.CylinderPlusEditor));
        }

        public void Shutdown()
        {
            // Cleanup
        }

        public IEnumerable<RibbonGroupModel> GetRibbonGroups(string tabName)
        {
            if (tabName == "PLUGINS")
            {
                // Create a ribbon group to add to PLUGINS tab
                var groupBox = new Fluent.RibbonGroupBox()
                {
                    Header = "Plugin Shapes"
                };

                var btn = new Fluent.Button()
                {
                    Header = "Cyl+",
                    ToolTip = "Create Cylinder Plus",
                    LargeIcon = new System.Windows.Media.Imaging.BitmapImage(new Uri("pack://application:,,,/Macad.Plugin.CylinderPlus;component/CylinderPlusIcon.png"))
                };
                
                btn.Click += (sender, e) =>
                {
                    // Action when the button is clicked
                    var shape = CylinderPlus.Types.CylinderPlus.Create(5, 10);
                    var body = Macad.Core.Topology.Body.Create(shape);
                    Macad.Core.CoreContext.Current.Document.Add(body);
                    Macad.Interaction.InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
                };
                
                groupBox.Items.Add(btn);

                yield return new RibbonGroupModel(groupBox);
            }
        }

        public IEnumerable<Uri> GetResourceDictionaryUris()
        {
            yield break;
        }
    }
}
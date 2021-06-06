using System.Collections.Generic;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Topology
{
    [SerializeType]
    public class Model : Document<InteractiveEntity>
    {
        [SerializeMember]
        public List<Workspace> Workspaces { get; private set; }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public LayerCollection Layers { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public const string FileExtension = "model";
        public const uint FileVersionMajor = 1;
        public const uint FileVersionMinor = 0;

        //--------------------------------------------------------------------------------------------------

        public Model()
        {
            Layers = new LayerCollection(this);

            // Create default setup
            Workspaces = new List<Workspace> {new (this)};
            
            CoreContext.Current.MessageHandler.ClearAllEntityMessages();
        }

        //--------------------------------------------------------------------------------------------------

        #region File IO

        public override void OnBeginDeserializing(SerializationContext context)
        {
            context.SetInstance(this);
            base.OnBeginDeserializing(context);
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool SaveData(FileSystem fileSystem)
        {
            _SaveThumbnailImage(fileSystem);
            _SaveShapeCaches(fileSystem);
            return base.SaveData(fileSystem);
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool LoadData(FileSystem fileSystem)
        {
            _LoadShapeCaches(fileSystem);
            return base.LoadData(fileSystem);
        }

        //--------------------------------------------------------------------------------------------------

        void _SaveShapeCaches(FileSystem fileSystem)
        {
            foreach (var reference in Instances.Values)
            {
                if (reference.TryGetTarget(out var entity))
                {
                    var shape = entity as Shape;
                    if ((shape == null) || !shape.IsVisible || shape.HasErrors)
                        continue;

                    shape.SaveShapeCache(fileSystem);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _LoadShapeCaches(FileSystem fileSystem)
        {
            foreach (var reference in Instances.Values)
            {
                if (reference.TryGetTarget(out var entity))
                {
                    var shape = entity as Shape;
                    if ((shape == null) || (!shape.IsVisible))
                        continue;

                    shape.LoadShapeCache(fileSystem);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _SaveThumbnailImage(FileSystem fileSystem)
        {
            if (CoreContext.Current?.Document != this)
                return; // This model is not active

            var bitmap = CoreContext.Current?.Viewport?.RenderToBitmap(500, 500);
            if (bitmap == null)
                return;

            using (var ms = new MemoryStream())
            {
                bitmap.Save(ms, ImageFormat.Png);
                fileSystem.Write("thumbnail.png", ms.GetBuffer());
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static Model CreateFromFile(string filePath, SerializationContext context)
        {
            return CreateFromFile<Model>(filePath, context, _VerifyVersion);
        }

        //--------------------------------------------------------------------------------------------------

        static bool _VerifyVersion(uint major, uint minor)
        {
            if (major > FileVersionMajor
                || major == FileVersionMajor && minor > FileVersionMinor)
            {
                return false;
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool SaveToFile(string filePath)
        {
            var context = new SerializationContext(SerializationScope.Storage)
            {
                MajorVersion = FileVersionMajor,
                MinorVersion = FileVersionMinor
            };
            return base.SaveToFile(filePath, context);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public void SafeDelete(IEnumerable<InteractiveEntity> entitiesToDelete)
        {
            var bodies = entitiesToDelete.OfType<Body>().ToArray();
            foreach (var body in bodies)
            {
                foreach (var dependent in body.GetDependents().ToArray()) // Enumeration may be changed
                {
                    if (dependent is ModifierBase modifierBase 
                        && modifierBase.Body != null 
                        && !bodies.Contains(modifierBase.Body))
                    {
                        foreach (var operand in modifierBase.Operands.ToArray())
                        {
                            if (operand is BodyShapeOperand bodyShapeOperand 
                                && body == bodyShapeOperand.Body)
                            {
                                // Create Solid
                                var solid = operand.Collapse(modifierBase.GetCoordinateSystem());
                                solid.Body = modifierBase.Body;
                                modifierBase.Body.SaveTopologyUndo();
                                modifierBase.ReplaceOperand(operand, solid);
                            }
                        }
                    }
                }

                RemoveChild(body);
                body.Remove();
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}
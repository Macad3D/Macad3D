using System;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes
{
    [SerializeType]
    internal class SketchEditorSettings
    {
        [SerializeMember]
        public double[] ViewParameters { get; set; }

        [SerializeMember]
        public WorkingContext WorkingContext  { get; set; }

        [SerializeMember]
        public bool ClipPlaneEnabled  { get; set; } = true;

        [SerializeMember]
        public double ViewRotation  { get; set; } = 0;
    }

    //--------------------------------------------------------------------------------------------------

    internal static class SketchEditorSettingsCache
    {
        static readonly WeakTable<Sketch, SketchEditorSettings> _Settings = new WeakTable<Sketch, SketchEditorSettings>();
        static readonly ISerializer _SettingsSerializer = Serializer.GetSerializer(typeof(SketchEditorSettings));
        static readonly ISerializer _GuidSerializer = Serializer.GetSerializer(typeof(Guid));

        const string _FilePath = @"Tools\SketchEditorSettings";

        //--------------------------------------------------------------------------------------------------

        [ModuleInitializer]
        public static void Init()
        {
            Model.AdditionalDataSaving += _Model_OnAdditionalDataSaving;
            Model.AdditionalDataLoading += _Model_OnAdditionalDataLoading;
        }

        //--------------------------------------------------------------------------------------------------

        public static SketchEditorSettings GetOrCreate(Sketch sketch)
        {
            if (_Settings.TryGetValue(sketch, out var settings))
                return settings;

            settings = new SketchEditorSettings();
            _Settings.SetValue(sketch, settings);
            return settings;
        }

        //--------------------------------------------------------------------------------------------------

        static void _Model_OnAdditionalDataSaving(Document<InteractiveEntity> sender, FileSystem filesystem)
        {
            var sketches = sender.FindInstances<Sketch>();
            var writer = new Writer();
            writer.BeginMap();

            // Version info
            writer.BeginMapKey();
            writer.WriteRawString("Version");
            writer.BeginMapValue();
            writer.WriteRawString("1");

            foreach (var sketch in sketches)
            {
                if (_Settings.TryGetValue(sketch, out var settings))
                {
                    writer.BeginMapKey();
                    _GuidSerializer.Write(writer, sketch.Guid, null);
                    writer.BeginMapValue();
                    _SettingsSerializer.Write(writer, settings, null);
                }
            }

            writer.EndMap();

            var s = Serializer.Format(writer.ToString());
            if (s.IsNullOrEmpty())
                return;

            filesystem.Write(_FilePath, s.ToUtf8Bytes());
        }

        //--------------------------------------------------------------------------------------------------
        
        static void _Model_OnAdditionalDataLoading(Document<InteractiveEntity> sender, FileSystem filesystem)
        {
            var s = filesystem.Read(_FilePath)?.FromUtf8Bytes();
            if(s.IsNullOrEmpty())
                return;

            var reader = new Reader(s);
            if (!(reader.BeginMap() 
                  && reader.BeginMapKey()
                  && reader.ReadValueString() == "Version"
                  && reader.BeginMapValue()
                  && reader.ReadValueString() == "1"))
                return;

            while (reader.BeginMapKey())
            {
                var guid = _GuidSerializer.Read(reader, null, null);
                if(!reader.BeginMapValue())
                    return; // Malformed

                var settings = _SettingsSerializer.Read(reader, null, null) as SketchEditorSettings;
                if(guid == null || settings == null)
                    continue;

                var sketch = sender.FindInstance((Guid)guid) as Sketch;
                if (sketch == null)
                    continue;

                _Settings.SetValue(sketch, settings);
            }
        }

        //--------------------------------------------------------------------------------------------------

    }

    //--------------------------------------------------------------------------------------------------

}
using System;
using System.Collections.Generic;
using System.IO;
using Macad.Common;

namespace Macad.Core.Exchange.Dxf
{
    [Flags]
    public enum DxfFlags
    {
        None = 0,
        ExportBinaryFile = 1 << 0,
        ExportSplineAsPolygon = 1 << 1,
        ExportEllipseAsPolygon = 1 << 2,
        ImportDoNotMergePoints = 1 << 3
    }

    //--------------------------------------------------------------------------------------------------

    public sealed class DxfDomDocument
    {
        #region Properties and Members

        public DxfVersion Version { get; private set; }
        public DxfFlags Flags { get; private set; }

        public List<DxfDomEntity> Entities { get; } = new List<DxfDomEntity>();
        public List<DxfDomLayer> Layers { get; } = new List<DxfDomLayer>();
        public List<DxfDomLinetype> Linetypes { get; } = new List<DxfDomLinetype>();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region c'tor

        public DxfDomDocument(DxfVersion version = DxfVersion.Latest, DxfFlags flags = DxfFlags.None)
        {
            Version = version == DxfVersion.Latest ? DxfVersion.AC1015 : version;
            Flags = flags;

            if (Version < DxfVersion.AC1012)
            {
                Flags = flags.Added(DxfFlags.ExportSplineAsPolygon)
                             .Added(DxfFlags.ExportEllipseAsPolygon);
            }

            Layers.Add(new DxfDomLayer("0"));
            Linetypes.Add(new DxfDomLinetype("BYBLOCK", "", 0.0, new double[0]));
            Linetypes.Add(new DxfDomLinetype("BYLAYER", "", 0.0, new double[0]));
            Linetypes.Add(new DxfDomLinetype("CONTINUOUS", "Solid line", 0.0, new double[0]));
        }

        #endregion

        #region Writer

        public MemoryStream WriteToStream()
        {
            var writer = new DxfWriter(Version, Flags.HasFlag(DxfFlags.ExportBinaryFile));
            Write(writer);
            return writer.Finish();
        }

        //--------------------------------------------------------------------------------------------------

        public void Write(DxfWriter writer)
        {
            if (Version >= DxfVersion.AC1012)
            {
                _WriteHeader(writer);
                _WriteClasses(writer);
                _WriteTables(writer);
                _WriteBlocks(writer);
            }

            _WriteEntities(writer);

            if (Version >= DxfVersion.AC1012)
            {
                _WriteObjects(writer);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteHeader(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "HEADER");

            writer.Write(9, "$ACADVER");
            writer.Write(1, Version.ToString()); // AutoCad R13 (SPLINE,Layer.Lineweight)
            writer.Write(9, "$HANDSEED");
            writer.Write(5, "FFFFFF");
            writer.Write(9, "$ANGDIR");
            writer.Write(70, 1); // Clockwise Angles
            writer.Write(9, "$MEASUREMENT");
            writer.Write(70, 1); // Metric

            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteClasses(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "CLASSES");

            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteTables(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "TABLES");

            // VPORT
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "VPORT");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 0);
            }
            writer.Write(0, "ENDTAB");

            // LTYPE
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "LTYPE");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, Linetypes.Count);
                {
                    Linetypes.ForEach(linetype => linetype.Write(writer));
                }
            }
            writer.Write(0, "ENDTAB");

            // LAYER
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "LAYER");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, Layers.Count);
                Layers.ForEach(layer => layer.Write(writer));
            }
            writer.Write(0, "ENDTAB");

            // STYLE
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "STYLE");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 1);
                {
                    writer.Write(0, "STYLE");
                    writer.WriteHandle();
                    writer.WriteSubclass("AcDbSymbolTableRecord");
                    writer.WriteSubclass("AcDbTextStyleTableRecord");
                    writer.Write(2, "STANDARD");
                    writer.Write(70, 0);
                    writer.Write(40, 0.0);
                    writer.Write(41, 1.0);
                    writer.Write(50, 0.0);
                    writer.Write(71, 0);
                    writer.Write(42, 2.5);
                    writer.Write(3, "txt");
                    writer.Write(4, "");
                }
            }
            writer.Write(0, "ENDTAB");

            // VIEW
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "VIEW");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 0);
            }
            writer.Write(0, "ENDTAB");

            // UCS
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "UCS");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 0);
            }
            writer.Write(0, "ENDTAB");

            // APPID
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "APPID");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 1);
                {
                    writer.Write(0, "APPID");
                    writer.WriteHandle();
                    writer.WriteSubclass("AcDbSymbolTableRecord");
                    writer.WriteSubclass("AcDbRegAppTableRecord");
                    writer.Write(2, "ACAD");
                    writer.Write(70, 0);
                }
            }
            writer.Write(0, "ENDTAB");

            // DIMSTYLE
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "DIMSTYLE");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 1);
                if (Version >= DxfVersion.AC1015)
                {
                    writer.WriteSubclass("AcDbDimStyleTable");
                }

                {
                    writer.Write(0, "DIMSTYLE");
                    writer.WriteHandle(105);
                    writer.WriteSubclass("AcDbSymbolTableRecord");
                    writer.WriteSubclass("AcDbDimStyleTableRecord");
                    writer.Write(2, "STANDARD");
                    writer.Write(70, 0);
                }
            }
            writer.Write(0, "ENDTAB");

            // BLOCK_RECORD
            writer.Write(0, "TABLE");
            {
                writer.Write(2, "BLOCK_RECORD");
                writer.WriteHandle();
                writer.WriteSubclass("AcDbSymbolTable");
                writer.Write(70, 2);
                {
                    writer.Write(0, "BLOCK_RECORD");
                    writer.WriteHandle();
                    writer.WriteSubclass("AcDbSymbolTableRecord");
                    writer.WriteSubclass("AcDbBlockTableRecord");
                    writer.Write(2, "*MODEL_SPACE");

                    writer.Write(0, "BLOCK_RECORD");
                    writer.WriteHandle();
                    writer.WriteSubclass("AcDbSymbolTableRecord");
                    writer.WriteSubclass("AcDbBlockTableRecord");
                    writer.Write(2, "*PAPER_SPACE");
                }
            }
            writer.Write(0, "ENDTAB");
        
            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteBlocks(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "BLOCKS");

            writer.Write(0, "BLOCK");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbEntity");
            writer.Write(8, "0");
            writer.WriteSubclass("AcDbBlockBegin");
            writer.Write(2, "*Model_Space");
            writer.Write(70, 0);
            writer.Write(10, 0.0);
            writer.Write(20, 0.0);
            writer.Write(30, 0.0);
            writer.Write(3, "*Model_Space");
            writer.Write(1, "");

            writer.Write(0, "ENDBLK");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbEntity");
            writer.Write(8, "0");
            writer.WriteSubclass("AcDbBlockEnd");
            
            writer.Write(0, "BLOCK");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbEntity");
            writer.Write(8, "0");
            writer.WriteSubclass("AcDbBlockBegin");
            writer.Write(2, "*Paper_Space");
            writer.Write(70, 0);
            writer.Write(10, 0.0);
            writer.Write(20, 0.0);
            writer.Write(30, 0.0);
            writer.Write(3, "*Paper_Space");
            writer.Write(1, "");

            writer.Write(0, "ENDBLK");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbEntity");
            writer.Write(8, "0");
            writer.WriteSubclass("AcDbBlockEnd");

            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteEntities(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "ENTITIES");

            Entities.ForEach(entity => entity.Write(writer));

            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        void _WriteObjects(DxfWriter writer)
        {
            writer.Write(0, "SECTION");
            writer.Write(2, "OBJECTS");

            writer.Write(0, "DICTIONARY");
            int lastHandle = writer.WriteHandle();
            writer.WriteSubclass("AcDbDictionary");
            writer.Write(281, 1);
            writer.Write(3, "ACAD_GROUP");
            writer.Write(350, (lastHandle + 1).ToString("X") );

            writer.Write(0, "DICTIONARY");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbDictionary");
            writer.Write(281, 1);

            writer.Write(0, "ENDSEC");
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Reader
        
        public bool ReadFromStream(Stream stream, double scale)
        {
            var reader = new DxfReader(stream, scale);
            _Read(reader);
            reader.Close();
            return Entities.Count > 0;
        }

        //--------------------------------------------------------------------------------------------------

        void _Read(DxfReader reader)
        {
            while (reader.GroupCode >= 0)
            {
                if (reader.GroupCode != 0)
                {
                    reader.Skip();
                    continue;
                }

                var type = reader.ReadString()?.ToUpper();
                if (type == null)
                    continue;

                if (type.Equals("EOF"))
                    break;

                if (type.Equals("SECTION") && reader.GroupCode == 2)
                {
                    var name = reader.ReadString()?.ToUpper();
                    if (name == null)
                        continue;

                    if (name.Equals("HEADER"))
                    {
                        _ReadHeader(reader);
                    }
                    else if (name.Equals("ENTITIES"))
                    {
                        _ReadEntities(reader);
                    }
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ReadHeader(DxfReader reader)
        {
            while (reader.GroupCode > 0)
            {
                if (reader.GroupCode != 9)
                {
                    reader.Skip();
                    continue;
                }

                var variableName = reader.ReadString()?.ToUpper();
                if (variableName == null)
                    continue;

                switch (variableName)
                {
/*                    case "$MEASUREMENT":
                        var measurement = reader.ReadInteger();
                        break;*/

                    default:
                        reader.Skip();
                        break;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ReadEntities(DxfReader reader)
        {
            while (reader.GroupCode >= 0)
            {
                if (reader.GroupCode != 0)
                {
                    reader.Skip();
                    continue;
                }

                var type = reader.ReadString()?.ToUpper();
                if (type == null)
                    continue;

                DxfDomEntity entity = null;
                switch (type)
                {
                    case "ENDSEC":
                        return;

                    case "LINE":
                        entity = new DxfDomLine();
                        break;

                    case "CIRCLE":
                    case "ARC":
                        entity = new DxfDomCircle();
                        break;

                    case "ELLIPSE":
                        entity = new DxfDomEllipse();
                        break;

                    case "LWPOLYLINE":
                        entity = new DxfDomLwPolyline();
                        break;

                    case "POLYLINE":
                        entity = new DxfDomPolyline();
                        break;

                    case "SPLINE":
                        entity = new DxfDomSpline();
                        break;
                }

                if(entity == null)
                    continue;

                if (entity.Read(reader))
                {
                    Entities.Add(entity);
                }
                else
                {
                    Messages.Error($"DxfReader: Incomplete entity description at line {reader.Line}.");
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
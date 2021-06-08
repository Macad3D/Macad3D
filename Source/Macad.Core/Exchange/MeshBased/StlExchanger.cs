using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Exchange
{
    public sealed class StlExchanger : IBodyExporter, IBodyImporter
    {
        #region Exchanger

        public string Description { get; } =  "Stereo Lithography (Mesh)";
        public string[] Extensions { get; } = {"stl"};

        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is StlSettings newSettings)
                    Settings = newSettings;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool CanExportToClipboard()
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool CanImportFromClipboard(Clipboard clipboard)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Settings

        [SerializeType]
        public class StlSettings : IExchangerSettings
        {
            [SerializeMember]
            public bool ExportBinaryFormat { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        public StlSettings Settings { get; private set; } = new StlSettings();

        //--------------------------------------------------------------------------------------------------

        #endregion
            
        #region Registration

        [ModuleInitializer]
        public static void Register()
        {
            ExchangeRegistry.Register(new StlExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IBodyExport

        interface IStlWriter
        {
            void Init(string headLine, int sumTriangleCount);
            void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3);
            bool WriteToFile(string fileName);
        }

        //--------------------------------------------------------------------------------------------------

        class StlAsciiWriter : IStlWriter
        {
            StringBuilder _Sb;
            string _HeadLine;

            public void Init(string headLine, int sumTriangleCount)
            {
                Debug.Assert(_Sb == null);
                _Sb = new StringBuilder();
                _HeadLine = headLine;
                _Sb.AppendLine("solid " + headLine);
            }

            public void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3)
            {
                _Sb.AppendLine($" facet normal {normal.X.ToInvariantString("G14")} {normal.Y.ToInvariantString("G14")} {normal.Z.ToInvariantString("G14")}");
                _Sb.AppendLine( "  outer loop");

                _Sb.AppendLine($"   vertex {vertex1.X.ToInvariantString("G14")} {vertex1.Y.ToInvariantString("G14")} {vertex1.Z.ToInvariantString("G14")}");
                _Sb.AppendLine($"   vertex {vertex2.X.ToInvariantString("G14")} {vertex2.Y.ToInvariantString("G14")} {vertex2.Z.ToInvariantString("G14")}");
                _Sb.AppendLine($"   vertex {vertex3.X.ToInvariantString("G14")} {vertex3.Y.ToInvariantString("G14")} {vertex3.Z.ToInvariantString("G14")}");

                _Sb.AppendLine( "  endloop");
                _Sb.AppendLine( " endfacet");
            }

            public bool WriteToFile(string fileName)
            {
                _Sb.AppendLine("endsolid " + _HeadLine);
                File.WriteAllText(fileName, _Sb.ToString(), Encoding.ASCII);
                _Sb = null;
                return true;
            }
        }

        //--------------------------------------------------------------------------------------------------

        class StlBinaryWriter : IStlWriter
        {
            MemoryStream _MemStream;
            BinaryWriter _Writer;

            public void Init(string headLine, int sumTriangleCount)
            {
                Debug.Assert(_MemStream == null);
                Debug.Assert(headLine.Length < 80);
                _MemStream = new MemoryStream();
                _Writer = new BinaryWriter(_MemStream, Encoding.ASCII, true);
                _Writer.Write(headLine.PadRight(80, ' ').ToCharArray());
                _Writer.Write((UInt32)sumTriangleCount);
            }

            public void AddFacet(Vec normal, Pnt vertex1, Pnt vertex2, Pnt vertex3)
            {
                _Writer.Write((float)normal.X);
                _Writer.Write((float)normal.Y);
                _Writer.Write((float)normal.Z);
                _Writer.Write((float)vertex1.X);
                _Writer.Write((float)vertex1.Y);
                _Writer.Write((float)vertex1.Z);
                _Writer.Write((float)vertex2.X);
                _Writer.Write((float)vertex2.Y);
                _Writer.Write((float)vertex2.Z);
                _Writer.Write((float)vertex3.X);
                _Writer.Write((float)vertex3.Y);
                _Writer.Write((float)vertex3.Z);
                _Writer.Write((UInt16)0);
            }

            public bool WriteToFile(string fileName)
            {
                _Writer.Close();
                using (var fs = new FileStream(fileName, FileMode.Create, FileAccess.Write))
                {
                    _MemStream.WriteTo(fs);
                    fs.Close();
                }
                _MemStream.Close();
                _MemStream = null;
                return true;
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
        {
            try
            {
                var sumTriangleCount = 0;
                var triangulations = new List<TriangulationData>();
                foreach (var body in bodies)
                {
                    var shape = body.Shape.GetTransformedBRep();
                    if (shape == null)
                        continue;

                    var triangulation = TriangulationHelper.GetTriangulation(shape);
                    if (triangulation.TriangleCount == 0)
                        continue;

                    triangulations.Add(triangulation);
                    sumTriangleCount += triangulation.TriangleCount;
                }

                if (sumTriangleCount == 0)
                    return false;

                IStlWriter writer;
                if (Settings.ExportBinaryFormat)
                    writer = new StlBinaryWriter();
                else
                    writer = new StlAsciiWriter();

                writer.Init("Written by Macad3D STL-Export", sumTriangleCount);

                foreach (var triangulation in triangulations)
                {
                    var index = 0;
                    for (int triangle = 0; triangle < triangulation.TriangleCount; triangle++)
                    {
                        // Get vertices
                        var vertex1 = triangulation.Vertices[triangulation.Indices[index]];
                        var vertex2 = triangulation.Vertices[triangulation.Indices[index+1]];
                        var vertex3 = triangulation.Vertices[triangulation.Indices[index+2]];
                        index += 3;

                        // Calculate normal of facet
                        var vec1 = new Vec(vertex1, vertex2);
                        var vec2 = new Vec(vertex1, vertex3);
                        var normal = vec1.Crossed(vec2);
                        if (normal.SquareMagnitude() > gp.Resolution)
                        {
                            normal.Normalize();
                        }
                        else
                        {
                            normal = default;
                        }

                        // Write out facet
                        writer.AddFacet(normal, vertex1, vertex2, vertex3);
                    }
                }

                return writer.WriteToFile(fileName);
            }
            catch (Exception e)
            {
                Messages.Exception($"Exception occured while exporting {fileName}.", e);
                return false;
            }
        }

        #endregion

        #region IBodyImporter

        interface IStlReader
        {
            Vec CurrentNormal { get; }
            Pnt[] CurrentVertices { get; }

            int Init(FileStream fs);
            bool MoveNext();
        }

        //--------------------------------------------------------------------------------------------------

        class StlBinaryReader : IStlReader
        {
            public Vec CurrentNormal { get; private set; }
            public Pnt[] CurrentVertices { get; } = new Pnt[3];

            BinaryReader _Reader;
            int _TrianglesLeft;

            //--------------------------------------------------------------------------------------------------

            public int Init(FileStream fs)
            {
                _Reader = new BinaryReader(fs, Encoding.ASCII);
                _TrianglesLeft = (int)_Reader.ReadUInt32();
                return _TrianglesLeft;
            }

            //--------------------------------------------------------------------------------------------------

            public bool MoveNext()
            {
                if (_TrianglesLeft == 0)
                    return false;
                _TrianglesLeft--;

                try
                {
                    CurrentNormal = new Vec(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
                    CurrentVertices[0] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
                    CurrentVertices[1] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
                    CurrentVertices[2] = new Pnt(_Reader.ReadSingle(), _Reader.ReadSingle(), _Reader.ReadSingle());
                    _Reader.ReadUInt16(); // Ignore Attribute
                    return true;
                }
                catch (EndOfStreamException)
                {
                    return false;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        class StlAsciiReader : IStlReader
        {
            public Vec CurrentNormal { get; private set; }
            public Pnt[] CurrentVertices { get; } = new Pnt[3];

            StreamReader _Reader;
            string[] _Words;
            int _WordIndex;

            static readonly char[] _Whitespaces = {' ', '\t', '\n', '\r'};

            //--------------------------------------------------------------------------------------------------

            public int Init(FileStream fs)
            {
                fs.Seek(0, SeekOrigin.Begin);
                _Reader = new StreamReader(fs, Encoding.ASCII);
                _Reader.ReadLine(); // Skip intro line
                _Words = new string[0];
                return 0;
            }

            //--------------------------------------------------------------------------------------------------

            public bool MoveNext()
            {
                if (!(_GetNextWord().Equals("facet", StringComparison.OrdinalIgnoreCase)
                    &&_GetNextWord().Equals("normal", StringComparison.OrdinalIgnoreCase)))
                    return false;

                double x, y, z;
                if (!_GetNextValueTriple(out x, out y, out z))
                    return false;
                CurrentNormal = new Vec(x, y, z);

                if (!(_GetNextWord().Equals("outer", StringComparison.OrdinalIgnoreCase)
                      && _GetNextWord().Equals("loop", StringComparison.OrdinalIgnoreCase)))
                    return false;

                if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
                      && _GetNextValueTriple(out x, out y, out z)))
                    return false;
                CurrentVertices[0] = new Pnt(x, y, z);

                if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
                      && _GetNextValueTriple(out x, out y, out z)))
                    return false;
                CurrentVertices[1] = new Pnt(x, y, z);

                if (!(_GetNextWord().Equals("vertex", StringComparison.OrdinalIgnoreCase)
                      && _GetNextValueTriple(out x, out y, out z)))
                    return false;
                CurrentVertices[2] = new Pnt(x, y, z);

                if (!(_GetNextWord().Equals("endloop", StringComparison.OrdinalIgnoreCase)
                      && _GetNextWord().Equals("endfacet", StringComparison.OrdinalIgnoreCase)))
                    return false;

                return true;
            }

            //--------------------------------------------------------------------------------------------------

            bool _GetNextValueTriple(out double x, out double y, out double z)
            {
                x = y = z = 0;
                return double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out x)
                       && double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out y)
                       && double.TryParse(_GetNextWord(), NumberStyles.Float, CultureInfo.InvariantCulture, out z);
            }

            //--------------------------------------------------------------------------------------------------

            string _GetNextWord()
            {
                while (_WordIndex >= _Words.Length)
                {
                    if (_Reader.EndOfStream)
                        return "";

                    _Words = _Reader.ReadLine()?.Split(_Whitespaces, StringSplitOptions.RemoveEmptyEntries);
                    if (_Words == null)
                        return "";

                    _WordIndex = 0;
                }

                return _Words[_WordIndex++];
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool IBodyImporter.DoImport(string fileName, out IEnumerable<Body> bodies)
        {
            bodies = null;
            try
            {
                using (var fs = new FileStream(fileName, FileMode.Open, FileAccess.Read))
                {
                    IStlReader reader;

                    // Binary or Ascii?
                    var tempBuffer = new byte[80];
                    fs.Read(tempBuffer, 0, 80);

                    var header = Encoding.ASCII.GetString(tempBuffer).TrimStart(' ');
                    if(header.StartsWith("solid", StringComparison.InvariantCultureIgnoreCase))
                        reader = new StlAsciiReader();
                    else
                        reader = new StlBinaryReader();
                    var predictedTriangleCount = reader.Init(fs);

                    // Read facets
                    var vertices = new List<Pnt>(predictedTriangleCount*3);
                    while (reader.MoveNext())
                    {
                        vertices.Add(reader.CurrentVertices[0]);
                        vertices.Add(reader.CurrentVertices[1]);
                        vertices.Add(reader.CurrentVertices[2]);
                    }

                    // Create Shape
                    var face = TriangulationHelper.CreateFaceFromTriangulation(new TriangulationData(null, vertices.ToArray()));
                    var body = Body.Create(Mesh.Create(face));
                    body.Name = Path.GetFileNameWithoutExtension(fileName);

                    bodies = new[] {body};

                    // Cleanup
                    fs.Close();
                }

                return true;
            }
            catch (Exception e)
            {
                Messages.Exception($"Exception occured while importing {fileName}.", e);
                return false;
            }
        }

        #endregion
    }
}
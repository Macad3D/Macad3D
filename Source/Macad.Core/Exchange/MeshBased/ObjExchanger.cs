using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Exchange
{
    [InitializeAtStartup]
    public class ObjExchanger : IBodyExporter, IBodyImporter
    {
        #region Exchanger

        public string Description { get; } =  "Wavefront Object (Mesh)";
        public string[] Extensions { get; } = {"obj"};

        //--------------------------------------------------------------------------------------------------

        IExchangerSettings IExchanger.Settings
        {
            get { return Settings; }
            set
            {
                if (value is ObjSettings newSettings)
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
        public class ObjSettings : IExchangerSettings
        {
            [SerializeMember]
            public bool ExportSmoothEdges { get; set; }
            [SerializeMember]
            public bool ImportSingleBody { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        public ObjSettings Settings { get; private set; } = new ObjSettings();

        //--------------------------------------------------------------------------------------------------

        #endregion
            
        #region C'tor

        static ObjExchanger()
        {
            ExchangeRegistry.Register(new ObjExchanger());
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IBodyExport

        class ObjAsciiWriter
        {
            StringBuilder _Sb;

            public void Init(string headLine)
            {
                Debug.Assert(_Sb == null);
                _Sb = new StringBuilder();
                _Sb.AppendLine("# " + headLine);
            }

            public void AddObject(string name)
            {
                _Sb.AppendLine("");
                _Sb.AppendLine($"o {name}");
            }

            public void AddVertex(Pnt vertex)
            {
                _Sb.AppendLine($"v {vertex.X.ToInvariantString()} {vertex.Y.ToInvariantString()} {vertex.Z.ToInvariantString()}");
            }

            public void AddFace(int index1, int index2, int index3)
            {
                _Sb.AppendLine($"f {index1} {index2} {index3}");
            }

            public bool WriteToFile(string fileName)
            {
                File.WriteAllText(fileName, _Sb.ToString(), Encoding.ASCII);
                _Sb = null;
                return true;
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
        {
            try
            {
                ObjAsciiWriter writer = new ObjAsciiWriter();
                writer.Init("Written by Macad3D OBJ-Export");

                var indexOffset = 1; // OBJ list index starts with 1
                var vertexMap = new Dictionary<Pnt,int>(); // Written vertex to resulting index
                var indexList = new List<int>();
                foreach (var body in bodies)
                {
                    var shape = body.Shape.GetTransformedBRep();
                    if (shape == null)
                        continue;

                    var triangulation = TriangulationHelper.GetTriangulation(shape);
                    if (triangulation.TriangleCount == 0)
                        continue;

                    writer.AddObject(body.Name);

                    if (Settings.ExportSmoothEdges) // Export smooth edges
                    {
                        for (var vtxIndex = 0; vtxIndex < triangulation.Vertices.Length; vtxIndex++)
                        {
                            var vertex = triangulation.Vertices[vtxIndex];
                            int newIndex;
                            if (!vertexMap.TryGetValue(vertex, out newIndex))
                            {
                                writer.AddVertex(vertex);
                                newIndex = vertexMap.Count + indexOffset;
                                vertexMap.Add(vertex, newIndex);
                            }

                            indexList.Add(newIndex);
                        }

                        for (int i = 0; i < triangulation.Indices.Length; i+=3)
                        {
                            writer.AddFace(indexList[triangulation.Indices[i]], indexList[triangulation.Indices[i+1]], indexList[triangulation.Indices[i+2]]);
                        }
                    }
                    else // Export face by face
                    {   
                        foreach (var vertex in triangulation.Vertices)
                        {
                            writer.AddVertex(vertex);
                        }

                        for (int i = 0; i < triangulation.Indices.Length; i+=3)
                        {
                            writer.AddFace(triangulation.Indices[i]+indexOffset, triangulation.Indices[i+1]+indexOffset, triangulation.Indices[i+2]+indexOffset);
                        }
                    }


                    indexOffset += Settings.ExportSmoothEdges ? vertexMap.Count : triangulation.Vertices.Length;
                    vertexMap.Clear(); // Don't share vertices between objects
                    indexList.Clear();
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

        class ObjAsciiReader
        {
            StreamReader _Reader;
            readonly List<string> _Words = new List<string>();

            static readonly char[] _Whitespaces = {' ', '\t'};

            //--------------------------------------------------------------------------------------------------

            public ObjAsciiReader(FileStream fs)
            {
                fs.Seek(0, SeekOrigin.Begin);
                _Reader = new StreamReader(fs, Encoding.ASCII);
            }

            //--------------------------------------------------------------------------------------------------

            public bool GetVertex(out Pnt vertex)
            {
                if (_Words.Count >= 4
                    && double.TryParse(_Words[1], NumberStyles.Float, CultureInfo.InvariantCulture, out var x)
                    && double.TryParse(_Words[2], NumberStyles.Float, CultureInfo.InvariantCulture, out var y)
                    && double.TryParse(_Words[3], NumberStyles.Float, CultureInfo.InvariantCulture, out var z))
                {
                    vertex = new Pnt(x, y, z);
                    return true;
                }

                vertex = new Pnt();
                return false;
            }

            //--------------------------------------------------------------------------------------------------

            public bool GetFace(out int[] indices)
            {
                if (_Words.Count >= 4)
                {
                    indices = new int[_Words.Count-1];
                    for (int i = 0; i < _Words.Count-1; i++)
                    {
                        var word = _Words[i + 1];
                        var values = word.Split('/');
                        if (values.Length < 1)
                            return false;
                        if (!int.TryParse(values[0], out var index))
                            return false;
                        indices[i] = index;
                    }
                    return true;
                }

                indices = null;
                return false;
            }

            //--------------------------------------------------------------------------------------------------

            public bool GetObjectOrGroup(out string name)
            {
                if (_Words.Count <= 1)
                    name = "";
                else
                    name = string.Join(" ", _Words.Skip(1));
                return true;
            }

            //--------------------------------------------------------------------------------------------------

            public bool MoveNext(out string cmd)
            {
                cmd = null;
                _Words.Clear();

                while (!_Reader.EndOfStream)
                {
                    var newWords = _Reader.ReadLine()?.Split(_Whitespaces, StringSplitOptions.RemoveEmptyEntries);
                    if (newWords == null)
                        break;

                    if (newWords.Length == 0 || newWords[0].StartsWith("#"))
                    {
                        continue;
                    }

                    _Words.AddRange(newWords);
                    if (_Words[_Words.Count-1] == "\\")
                    {
                        _Words.RemoveAt(_Words.Count-1);
                        continue; // Read additional line
                    }
                    cmd = _Words[0]; // We're finished
                    return true;
                }
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        class ObjectDescription
        {
            public string Name;
            public List<int> Indices;
            public TopoDS_Face Face;

            public static ObjectDescription Create()
            {
                return new ObjectDescription()
                {
                    Indices = new List<int>(),
                };
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
                    var vertices = new List<Pnt>();

                    var currentObject = ObjectDescription.Create();
                    var objectDescList = new List<ObjectDescription>();

                    var reader = new ObjAsciiReader(fs);

                    // Read
                    string cmd;
                    while (reader.MoveNext(out cmd))
                    {
                        switch (cmd)
                        {
                            case "o":
                            case "g":
                                if(currentObject.Indices.Count != 0)
                                    objectDescList.Add(currentObject);
                                currentObject = ObjectDescription.Create();
                                reader.GetObjectOrGroup(out currentObject.Name);
                                break;

                            case "v":
                                if (!reader.GetVertex(out var vertex))
                                    return false;
                                vertices.Add(vertex);
                                break;

                            case "f":
                            case "fo":
                                if (!reader.GetFace(out var indices))
                                    continue;

                                // Negative indices must be correctly re-assigned
                                // -1 => vertices.Count
                                // -2 => vertices.Count-1
                                for (int i = 0; i < indices.Length; i++)
                                {
                                    if (indices[i] < 0)
                                        indices[i] = vertices.Count + (indices[i] + 1);
                                }

                                if (indices.Length == 3)
                                {
                                    currentObject.Indices.AddRange(indices.Take(3).Select(index => index-1)); // Correct lower bound (from 1 to 0)
                                }
                                else
                                {
                                    var triangulator = new EarClippingTriangulator();
                                    var result = triangulator.DoTriangulation(vertices, indices.Select(index => index-1)); // Correct lower bound (from 1 to 0)
                                    if (result != null)
                                    {
                                        currentObject.Indices.AddRange(result);
                                    }
                                }

                                break;
                        }
                    }
                    if(currentObject.Indices.Count != 0)
                        objectDescList.Add(currentObject);

                    // Create Faces
                    foreach (var objectDesc in objectDescList)
                    {
                        // Extract used vertices
                        var usedVertices = new List<Pnt>();
                        var indexMap = new Dictionary<int, int>();
                        for (int index = 0; index < objectDesc.Indices.Count; index++)
                        {
                            int newIndex;
                            int oldIndex = objectDesc.Indices[index];
                            if (!indexMap.TryGetValue(oldIndex, out newIndex))
                            {
                                newIndex = usedVertices.Count;
                                usedVertices.Add(vertices[oldIndex]);
                                indexMap.Add(oldIndex, newIndex);
                            }

                            objectDesc.Indices[index] = newIndex;
                        }

                        // Create shape
                        objectDesc.Face = TriangulationHelper.CreateFaceFromTriangulation(new TriangulationData(objectDesc.Indices.ToArray(), usedVertices.ToArray()));
                    }

                    // Create bodies
                    var bodyList = new List<Body>();
                    string bodyName = Path.GetFileNameWithoutExtension(fileName);
                    if (Settings.ImportSingleBody)
                    {
                        var compound = new TopoDS_Compound();
                        var builder = new BRep_Builder();
                        builder.MakeCompound(compound);
                        foreach (var objectDesc in objectDescList)
                        {
                            builder.Add(compound, objectDesc.Face);
                        }
                        var body = Body.Create(Mesh.Create(compound));
                        body.Name = bodyName;
                        bodyList.Add(body);
                    }
                    else
                    {
                        int index = 1;
                        foreach (var objectDesc in objectDescList)
                        {
                            var body = Body.Create(Mesh.Create(objectDesc.Face));
                            if (!objectDesc.Name.IsNullOrWhiteSpace())
                            {
                                body.Name = objectDesc.Name;
                            }
                            else
                            {
                                body.Name = $"{bodyName}_{index++}";
                            }
                            bodyList.Add(body);
                        }
                    }

                    bodies = bodyList;

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
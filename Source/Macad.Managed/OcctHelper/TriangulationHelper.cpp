#include "ManagedPCH.h"

using namespace System::Runtime::InteropServices;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class TriangulationData sealed
			{
			public:
				property array<int>^ Indices
				{
					array<int>^ get()
					{
						return _Indices;
					}
				}

				//--------------------------------------------------------------------------------------------------

				property array<Macad::Occt::Pnt>^ Vertices
				{ 
					array<Macad::Occt::Pnt>^ get()
					{
						return _Vertices;
					} 
				}

				//--------------------------------------------------------------------------------------------------

			    property array<Macad::Occt::Dir>^ Normals
				{ 
					array<Macad::Occt::Dir>^ get()
					{
						return _Normals;
					} 
				}

				//--------------------------------------------------------------------------------------------------

				property int TriangleCount
				{
					int get()
					{
						return _Indices->Length / 3;
					}
				}

				//--------------------------------------------------------------------------------------------------

				TriangulationData(array<int>^ indices, array<Macad::Occt::Pnt>^ vertices, array<Macad::Occt::Dir>^ normals)
				{
					_Indices = indices;
					_Vertices = vertices;
					_Normals = normals;
				}

				//--------------------------------------------------------------------------------------------------

			private:
				array<int>^ _Indices;
				array<Macad::Occt::Pnt>^ _Vertices;
				array<Macad::Occt::Dir>^ _Normals;
			};


			//--------------------------------------------------------------------------------------------------
			//--------------------------------------------------------------------------------------------------

			
			public ref class TriangulationHelper sealed
			{
			public:
				static TriangulationData^ GetTriangulation(Macad::Occt::TopoDS_Shape^ brepShape, bool getNormals)
				{
					auto shape = *brepShape->NativeInstance;

					// Ensure that all shapes have a mesh
					if (::BRepTools::Triangulation(shape, Precision::Infinite()) == Standard_False)
					{
						::BRepMesh_IncrementalMesh aMesher(shape, 0.1);
						if(!aMesher.IsDone())
							return nullptr;
					}

					// Count elements
					bool hasNormals = true;
					int triangleCount = 0;
					int vertexCount = 0;
					for(::TopExp_Explorer exp(shape, TopAbs_FACE); exp.More(); exp.Next())
					{
						::TopLoc_Location location;
						auto triangulation = ::BRep_Tool::Triangulation(::TopoDS::Face(exp.Current()), location);
						if (triangulation.IsNull())
							continue;

						if(getNormals && !triangulation->HasNormals())
						{
						    Poly::ComputeNormals( triangulation );
						}

						triangleCount += triangulation->NbTriangles();
						vertexCount += triangulation->NbNodes();
						hasNormals &= triangulation->HasNormals();
					}

					if(triangleCount == 0 || vertexCount == 0)
						return nullptr;

					// Create arrays
					auto vertexArray = gcnew array<Pnt>(vertexCount);
					pin_ptr<Pnt> vertices_pinnedptr = &vertexArray[0];
					gp_Pnt* vertices = reinterpret_cast<gp_Pnt*>(vertices_pinnedptr);

					array<Dir>^ normalsArray = nullptr;
					pin_ptr<Dir> normals_pinnedptr= nullptr;
					gp_Dir* normals = nullptr;
					if(getNormals && hasNormals)
					{
					    normalsArray = gcnew array<Dir>(vertexCount);
					    normals_pinnedptr = &normalsArray[0];
					    normals = reinterpret_cast<gp_Dir*>(normals_pinnedptr);
					}

					auto indexArray = gcnew array<int>(triangleCount * 3);
					pin_ptr<int> indices_pinnedptr = &indexArray[0];
					int* indices = indices_pinnedptr;

					int indexOffset = 0;

					// Copy elements
					for (::TopExp_Explorer exp(shape, TopAbs_FACE); exp.More(); exp.Next())
					{
						::TopLoc_Location location;
						auto triangulation = ::BRep_Tool::Triangulation(::TopoDS::Face(exp.Current()), location);
						if (triangulation.IsNull())
							continue;
						const auto trsf = location.Transformation();
						auto orientation = exp.Current().Orientation();

						// Copy Vertices
						auto nodes = triangulation->Nodes();
						for (int nodeIndex = nodes.Lower(); nodeIndex <= nodes.Upper(); nodeIndex++)
						{
							*vertices = nodes(nodeIndex).Transformed(trsf);
							vertices++;
						}

						if(getNormals && hasNormals)
						{
						    // Copy Normals
						    auto normalsSource = triangulation->Normals();
						    const auto trsf = location.Transformation();
						    for (int nrmlIndex = normalsSource.Lower(); nrmlIndex <= normalsSource.Upper(); nrmlIndex+=3)
						    {
							    normals->SetCoord(normalsSource(nrmlIndex), normalsSource(nrmlIndex + 1), normalsSource(nrmlIndex + 2));
								normals->Transform(trsf);
								if(orientation == ::TopAbs_Orientation::TopAbs_REVERSED)
								{
								    normals->Reverse();
								}
							    normals++;
						    }
						}

						// Copy Indices
						const auto correctedIndexOffset = indexOffset - nodes.Lower(); // Correct lower bound, this is not 0!
						auto triangles = triangulation->Triangles();
						int triIndices[3];
						for (int triangleIndex = triangles.Lower(); triangleIndex <= triangles.Upper(); triangleIndex++)
						{
							if (exp.Current().Orientation() == TopAbs_REVERSED)
							{
								triangles(triangleIndex).Get(triIndices[0], triIndices[2], triIndices[1]);
							} 
							else 
							{
								triangles(triangleIndex).Get(triIndices[0], triIndices[1], triIndices[2]);
							}

							// Copy with face offset
							indices[0] = triIndices[0] + correctedIndexOffset;
							indices[1] = triIndices[1] + correctedIndexOffset;
							indices[2] = triIndices[2] + correctedIndexOffset;
							indices += 3;
						}

						indexOffset += nodes.Size();
					}

					// Return
					return gcnew TriangulationData(indexArray, vertexArray, normalsArray);
				}

				//--------------------------------------------------------------------------------------------------

				static Macad::Occt::TopoDS_Face^ CreateFaceFromTriangulation(TriangulationData^ triangulationData)
				{
					auto vertexCount = triangulationData->Vertices->Length;
					auto triangleCount = (triangulationData->Indices != nullptr ? triangulationData->Indices->Length : vertexCount) / 3;
					Handle(::Poly_Triangulation) triangulation = new ::Poly_Triangulation(vertexCount, triangleCount, false);

					// Copy vertices
					pin_ptr<Pnt> vertices_pinnedptr = &triangulationData->Vertices[0];
					gp_Pnt* vertices = reinterpret_cast<gp_Pnt*>(vertices_pinnedptr);
					for(int i = 1; i<=vertexCount; i++, vertices++) // Note: Nodes-Array starts at 1
					{
						triangulation->ChangeNode(i) = *vertices;
					}

					// Copy Indices
					if(triangulationData->Indices != nullptr)
					{
						pin_ptr<int> indices_pinnedptr = &triangulationData->Indices[0];
						int* indices = indices_pinnedptr;
						for(int index = 1; index<=triangleCount; index++, indices+=3) // Note: Triangle-Array starts at 1
						{
							triangulation->ChangeTriangle(index) = Poly_Triangle(*indices+1, *(indices+1)+1, *(indices+2)+1); // Correct lower bound, OCCT needs this to be 1!
						}
					} else
					{
						// Create Indices
						int index = 1;
						for(int triangle = 1; triangle<=triangleCount; triangle++, index+=3) // Note: Triangle-Array starts at 1
						{
							triangulation->ChangeTriangle(triangle) = Poly_Triangle(index, index+1, index+2);
						}
					}

					// Create shape
					::BRep_Builder builder;
					::TopoDS_Face face;
					builder.MakeFace(face);
					::BRepMesh_ShapeTool::AddInFace(face, triangulation);

					return gcnew Macad::Occt::TopoDS_Face(new ::TopoDS_Face(face));
				}
			};

		} // namespace Helper
	} // namespace Occt
} // namespace Macad
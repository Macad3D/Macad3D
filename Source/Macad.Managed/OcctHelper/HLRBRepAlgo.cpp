#include "ManagedPCH.h"

#include <HLRAlgo_Projector.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>

using namespace System::Collections::Generic;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public enum struct HlrEdgeType
			{
				VisibleSharp,
				VisibleSmooth,
				VisibleSewn,
				VisibleOutline,
				HiddenSharp,
				HiddenSmooth,
				HiddenSewn,
				HiddenOutline,
			};

			//--------------------------------------------------------------------------------------------------

			public ref class HlrBRepAlgoBase abstract
			{
			protected:
				HLRAlgo_Projector* _Projector;

				//--------------------------------------------------------------------------------------------------

				HlrBRepAlgoBase()
				{
					_Projector = new HLRAlgo_Projector();
				}

				//--------------------------------------------------------------------------------------------------

			public:
				void SetProjection(Ax3 CS)
				{
					STRUCT_PIN(CS, Ax3, gp_Ax3);
					delete _Projector;
					::gp_Trsf trsf;
					trsf.SetTransformation(*CS_ptr);
					_Projector = new ::HLRAlgo_Projector(trsf, false, 0);
				}

				void SetProjection(Trsf Transform)
				{
					STRUCT_PIN(Transform, Trsf, gp_Trsf);
					delete _Projector;
					_Projector = new HLRAlgo_Projector(*Transform_ptr, false, 0);
				}

				//--------------------------------------------------------------------------------------------------

				Macad::Occt::TopoDS_Shape^ GetResult(HlrEdgeType type)
				{
					return GetResult(type, nullptr);
				}

				virtual Macad::Occt::TopoDS_Shape^ GetResult(HlrEdgeType type, Macad::Occt::TopoDS_Shape^ sourceShape) abstract;

				virtual void Update() abstract;
			};

			//--------------------------------------------------------------------------------------------------

			public ref class HlrBRepAlgo : HlrBRepAlgoBase
			{
			private:
				Handle(::HLRBRep_Algo)* _Algo;
				::HLRBRep_HLRToShape* _Extractor;

				//--------------------------------------------------------------------------------------------------

			public:
				HlrBRepAlgo(IEnumerable<Macad::Occt::TopoDS_Shape^>^ shapes)
					: HlrBRepAlgoBase()
				{
					_Algo = new Handle(::HLRBRep_Algo)(new ::HLRBRep_Algo());
					_Extractor = new HLRBRep_HLRToShape(*_Algo);

					for each (Macad::Occt::TopoDS_Shape^ shape in shapes)
					{
						(*_Algo)->Add(*shape->NativeInstance);
					}
				}

				//--------------------------------------------------------------------------------------------------

				~HlrBRepAlgo()
				{
					delete _Algo;
				}

				//--------------------------------------------------------------------------------------------------

				void Update() override
				{
					(*_Algo)->Projector(*_Projector);
					(*_Algo)->Update();
					(*_Algo)->Hide();
				}

				//--------------------------------------------------------------------------------------------------

				Macad::Occt::TopoDS_Shape^ GetResult(HlrEdgeType type, Macad::Occt::TopoDS_Shape^ sourceShape) override
				{
					bool all = sourceShape == nullptr;
					::TopoDS_Shape* src = all ? nullptr : sourceShape->NativeInstance;

					// Build the extraction object

					// extract the results 
					::TopoDS_Shape shape;
					shape.Nullify();

					switch (type)
					{
					case HlrEdgeType::VisibleSharp:
						shape = all ? _Extractor->VCompound() : _Extractor->VCompound(*src);
						break;
					case HlrEdgeType::VisibleSmooth:
						shape = all ? _Extractor->Rg1LineVCompound() : _Extractor->Rg1LineVCompound(*src);
						break;
					case HlrEdgeType::VisibleSewn:
						shape = all ? _Extractor->RgNLineVCompound() : _Extractor->RgNLineVCompound(*src);
						break;
					case HlrEdgeType::VisibleOutline:
						shape = all ? _Extractor->OutLineVCompound() : _Extractor->OutLineVCompound(*src);
						break;
					case HlrEdgeType::HiddenSharp:
						shape = all ? _Extractor->HCompound() : _Extractor->HCompound(*src);
						break;
					case HlrEdgeType::HiddenSmooth:
						shape = all ? _Extractor->Rg1LineHCompound() : _Extractor->Rg1LineHCompound(*src);
						break;
					case HlrEdgeType::HiddenSewn:
						shape = all ? _Extractor->RgNLineHCompound() : _Extractor->RgNLineHCompound(*src);
						break;
					case HlrEdgeType::HiddenOutline:
						shape = all ? _Extractor->OutLineHCompound() : _Extractor->OutLineHCompound(*src);
						break;
					}

					if (shape.IsNull())
						return nullptr;

					return gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(shape));
				}

				//--------------------------------------------------------------------------------------------------

			};

			//--------------------------------------------------------------------------------------------------

			public ref class HlrBRepAlgoPoly : public HlrBRepAlgoBase
			{
			private:
				Handle(::HLRBRep_PolyAlgo)* _Algo;
				::HLRBRep_PolyHLRToShape* _Extractor;

				//--------------------------------------------------------------------------------------------------

			public:
				HlrBRepAlgoPoly(IEnumerable<Macad::Occt::TopoDS_Shape^>^ shapes)
					: HlrBRepAlgoBase()
					, _Extractor(nullptr)
				{
					_Algo = new Handle(::HLRBRep_PolyAlgo)(new ::HLRBRep_PolyAlgo());
					_Extractor = new ::HLRBRep_PolyHLRToShape();

					for each (Macad::Occt::TopoDS_Shape^ shape in shapes)
					{
						// Ensure that all shapes have a mesh
						if (::BRepTools::Triangulation(*shape->NativeInstance, Precision::Infinite()) == Standard_False)
						{
							::BRepMesh_IncrementalMesh aMesher(*shape->NativeInstance, 0.1);
						}

						// Add
						(*_Algo)->Load(*shape->NativeInstance);
					}
				}

				//--------------------------------------------------------------------------------------------------

				~HlrBRepAlgoPoly()
				{
					delete _Extractor;
					delete _Algo;
				}

				//--------------------------------------------------------------------------------------------------

				void Update() override
				{
					// Do it
					(*_Algo)->Projector(*_Projector);
					(*_Algo)->Update();
					_Extractor->Update(*_Algo);
				}

				//--------------------------------------------------------------------------------------------------

				Macad::Occt::TopoDS_Shape^ GetResult(HlrEdgeType type, Macad::Occt::TopoDS_Shape^ sourceShape) override
				{
					bool all = sourceShape == nullptr;
					::TopoDS_Shape* src = all ? nullptr : sourceShape->NativeInstance;

					// extract the results 
					::TopoDS_Shape shape;
					shape.Nullify();

					switch (type)
					{
					case HlrEdgeType::VisibleSharp:
						shape = all ? _Extractor->VCompound() : _Extractor->VCompound(*src);
						break;
					case HlrEdgeType::VisibleSmooth:
						shape = all ? _Extractor->Rg1LineVCompound() : _Extractor->Rg1LineVCompound(*src);
						break;
					case HlrEdgeType::VisibleSewn:
						shape = all ? _Extractor->RgNLineVCompound() : _Extractor->RgNLineVCompound(*src);
						break;
					case HlrEdgeType::VisibleOutline:
						shape = all ? _Extractor->OutLineVCompound() : _Extractor->OutLineVCompound(*src);
						break;
					case HlrEdgeType::HiddenSharp:
						shape = all ? _Extractor->HCompound() : _Extractor->HCompound(*src);
						break;
					case HlrEdgeType::HiddenSmooth:
						shape = all ? _Extractor->Rg1LineHCompound() : _Extractor->Rg1LineHCompound(*src);
						break;
					case HlrEdgeType::HiddenSewn:
						shape = all ? _Extractor->RgNLineHCompound() : _Extractor->RgNLineHCompound(*src);
						break;
					case HlrEdgeType::HiddenOutline:
						shape = all ? _Extractor->OutLineHCompound() : _Extractor->OutLineHCompound(*src);
						break;
					}

					if (shape.IsNull())
						return nullptr;

					return gcnew Macad::Occt::TopoDS_Shape(new ::TopoDS_Shape(shape));
				}

				//--------------------------------------------------------------------------------------------------

			};
		}
	}
}
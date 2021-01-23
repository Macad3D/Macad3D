#include "ManagedPCH.h"

using namespace System;

// macro to compare two types of shapes
// always True if the first one is SHAPE
#define SAMETYPE(x,y) ((x) == (y))
#define AVOID(x,y) (((x) == TopAbs_SHAPE) ? Standard_False : (x) == (y))
#define LESSCOMPLEX(x,y) ((x) > (y))


namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class TopoDS_Explorer : Collections::Generic::IEnumerable<TopoDS_Shape^>
			{
			private:
				TopoDS_Shape^ _Shape;
				TopAbs_ShapeEnum _ToFind;
				TopAbs_ShapeEnum _ToAvoid;
				bool _CumOrientation;
				bool _CumLocation;

			public:
				TopoDS_Explorer(TopoDS_Shape^ S, TopAbs_ShapeEnum ToFind, TopAbs_ShapeEnum ToAvoid, bool cumOrientation, bool cumLocation)
					: _Shape(S)
					, _ToFind(ToFind)
					, _ToAvoid(ToAvoid)
					, _CumOrientation(cumOrientation)
					, _CumLocation(cumLocation)
				{
				}

				virtual Collections::Generic::IEnumerator<TopoDS_Shape^>^ GetEnumerator() sealed = Collections::Generic::IEnumerable<TopoDS_Shape^>::GetEnumerator
				{
					return gcnew TopoDS_ShapeEnumerator(this);
				}

					virtual Collections::IEnumerator^ EnumerableGetEnumerator() sealed = Collections::IEnumerable::GetEnumerator
				{
					return GetEnumerator();
				}

			private:
				ref struct TopoDS_ShapeEnumerator : public Collections::Generic::IEnumerator<TopoDS_Shape^> {
				private:
					// native members
					std::stack<::TopoDS_Iterator*>* _iteratorStack;
					const ::TopoDS_Shape* _Shape;
					::TopAbs_ShapeEnum _ToFind;
					::TopAbs_ShapeEnum _ToAvoid;
					bool _CumOrientation;
					bool _CumLocation;
					bool _Initialized;

				internal:
					TopoDS_ShapeEnumerator(const TopoDS_Explorer^ explorer)
						: _iteratorStack(nullptr)
						, _Initialized(false)
					{
						_Shape = explorer->_Shape->NativeInstance;
						_ToFind = (::TopAbs_ShapeEnum)explorer->_ToFind;
						_ToAvoid = (::TopAbs_ShapeEnum)explorer->_ToAvoid;
						_CumOrientation = explorer->_CumOrientation;
						_CumLocation = explorer->_CumLocation;
					}

				public:
					property TopoDS_Shape^ Current {
						virtual TopoDS_Shape^ get() {
							::TopoDS_Shape* _result = new ::TopoDS_Shape(_iteratorStack->top()->Value());
							return gcnew TopoDS_Shape(_result);
						}
					};

					property Object^ CurrentBase
					{
						virtual Object^ get() sealed = Collections::IEnumerator::Current::get
						{
							return Current;
						}
					};

					virtual bool MoveNext()
					{
						if (!_Initialized)
							return _Init();

						if (_iteratorStack->empty())
							return false;

						_iteratorStack->top()->Next();

						return _FindNext();
					}

					bool _FindNext()
					{
						// No more elements
						if (_iteratorStack->empty())
							return false;

						if (!_iteratorStack->top()->More())
						{
							// Current iterator is empty
							delete _iteratorStack->top();
							_iteratorStack->pop();
							return MoveNext();
						}

						while (_iteratorStack->top()->More())
						{
							auto shape = _iteratorStack->top()->Value();
							auto shapeType = shape.ShapeType();
							if (shapeType == _ToFind)
								return true;

							if (LESSCOMPLEX(_ToFind, shapeType) && !AVOID(_ToAvoid, shapeType))
							{
								_iteratorStack->push(new ::TopoDS_Iterator(shape, _CumOrientation, _CumLocation));
								return _FindNext();
							}
						}

						return false;
					}

					virtual void Reset()
					{
						throw gcnew NotImplementedException();
					}

					virtual ~TopoDS_ShapeEnumerator()
					{
						while (!_iteratorStack->empty())
						{
							delete _iteratorStack->top();
							_iteratorStack->pop();
						}
						delete _iteratorStack;
					}

				private:
					bool _Init()
					{
						_iteratorStack = new std::stack<::TopoDS_Iterator*>();
						if (_Shape == nullptr)
							return false;
						if (_ToFind == TopAbs_SHAPE)
							return false;
						auto shapeType = _Shape->ShapeType();

						if (LESSCOMPLEX(shapeType, _ToFind))
						{
							// the first Shape is less complex, nothing to find
							return false;
						}
						else if (SAMETYPE(shapeType, _ToFind))
						{
							return false;
						}

						// Init first level
						_Initialized = true;
						_iteratorStack->push(new ::TopoDS_Iterator(*_Shape, _CumOrientation, _CumLocation));
						return _FindNext();
					}
				};
			};
		}
	}
}

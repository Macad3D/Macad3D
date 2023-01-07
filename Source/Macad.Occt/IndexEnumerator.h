#pragma once

using namespace System::Collections::Generic;

namespace Macad
{
	namespace Occt
	{
		template <typename T>
		public interface class IIndexEnumerable : IEnumerable<T>
		{
			T Value(int theIndex);
		};

		//--------------------------------------------------------------------------------------------------

		template <typename T>
		public ref class IndexEnumerator : IEnumerator<T>
	    {
		public:
			IndexEnumerator(IIndexEnumerable<T>^ enumerable, int lower, int upper)
			{
				_Enumerable = enumerable;
				_CurrentIndex = lower - 1;
				_UpperIndex = upper;
			}

			//--------------------------------------------------------------------------------------------------

			~IndexEnumerator()
			{}

			//--------------------------------------------------------------------------------------------------

			virtual bool MoveNext() = IEnumerator<T>::MoveNext
			{
				if (_CurrentIndex < _UpperIndex)
				{
					_CurrentIndex++;
					return true;
				}
				return false;
			}

			//--------------------------------------------------------------------------------------------------

			virtual void Reset() = IEnumerator<T>::Reset
			{ 
				throw gcnew System::NotImplementedException(); 
			}

			//--------------------------------------------------------------------------------------------------

			property T Current
			{
				virtual T get() = IEnumerator<T>::Current::get
				{ 
					return _Enumerable->Value(_CurrentIndex); 
				}
			};

			//--------------------------------------------------------------------------------------------------

			property System::Object^ Current2
			{
				virtual System::Object^ get() = System::Collections::IEnumerator::Current::get
				{ 
					return _Enumerable->Value(_CurrentIndex); 
				}
			};

			//--------------------------------------------------------------------------------------------------

		private:			
			IIndexEnumerable<T>^ _Enumerable;
			int _CurrentIndex;
			int _UpperIndex;
		};

	}; // Occt
}; // Macad

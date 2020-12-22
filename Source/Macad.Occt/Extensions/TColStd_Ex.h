#define Include_TColStd_ListOfInteger_h \
    System::Collections::Generic::List<int>^ ToList() \
	{ \
		auto list = gcnew System::Collections::Generic::List<int>(Size()); \
		::TColStd_ListIteratorOfListOfInteger it; \
		for (it.Initialize(*(::TColStd_ListOfInteger*)_NativeInstance); it.More(); it.Next()) \
			list->Add(it.Value()); \
		return list; \
	} \

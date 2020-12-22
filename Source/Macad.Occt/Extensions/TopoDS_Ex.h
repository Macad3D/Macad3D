#define Include_TopoDS_Shape_h \
	bool Equals( System::Object^ obj ) override\
	{\
		System::Type^ myType = Macad::Occt::TopoDS_Shape::GetType();\
		System::Type^ objType = obj->GetType();\
		if (myType->Equals(objType) || objType->IsSubclassOf(myType))\
		{\
			return NativeInstance->IsEqual(*((Macad::Occt::TopoDS_Shape^)obj)->NativeInstance);\
		}\
		return false;\
	}\
	\
	int GetHashCode() override\
	{\
		return (int)::HashCode(NativeInstance->TShape(), 0x7fffffff);\
	}

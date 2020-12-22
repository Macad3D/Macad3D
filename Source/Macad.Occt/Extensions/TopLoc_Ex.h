#define Include_TopLoc_Location_h \
	bool Equals( System::Object^ obj ) override\
	{\
		System::Type^ myType = Macad::Occt::TopLoc_Location::GetType();\
		System::Type^ objType = obj->GetType();\
		if (myType->Equals(objType) || objType->IsSubclassOf(myType))\
		{\
			return NativeInstance->IsEqual(*((Macad::Occt::TopLoc_Location^)obj)->NativeInstance);\
		}\
		return false;\
	}\
	\
	int GetHashCode() override\
	{\
		return (int)NativeInstance->HashCode(MAXINT);\
	}

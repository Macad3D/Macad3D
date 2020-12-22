#define Include_BOPTools_Set_h \
	bool Equals( System::Object^ obj ) override\
	{\
		System::Type^ myType = Macad::Occt::BOPTools_Set ::GetType();\
		System::Type^ objType = obj->GetType();\
		if (myType->Equals(objType) || objType->IsSubclassOf(myType))\
		{\
			return _NativeInstance->IsEqual(*((Macad::Occt::BOPTools_Set ^)obj)->_NativeInstance);\
		}\
		return false;\
	}\
	\
	int GetHashCode() override\
	{\
		return (int)_NativeInstance->HashCode(MAXINT);\
	}

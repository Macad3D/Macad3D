// ManagedPCH.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#include <windows.h>
#include <shellapi.h>
#include <iostream>
#include <stack>
#include <vcclr.h>

#include "OcctIncludes.h"

#define STRUCT_PIN(value, managed, native) pin_ptr<managed> value##_pinptr(&value); ::native* value##_ptr = reinterpret_cast<::native*>(value##_pinptr);
#define STRUCT_PINREF(value, managed, native) pin_ptr<managed> value##_pinptr(&*value); ::native* value##_ptr = reinterpret_cast<::native*>(value##_pinptr);

#define IMPLEMENT_TRANSIENT(klass, base) \
	property ::klass* NativeInstance { ::klass* get() {	return static_cast<::klass*>(_NativeInstance); } } \
	klass(::klass* instance) : Macad::Occt::base(instance) {} \

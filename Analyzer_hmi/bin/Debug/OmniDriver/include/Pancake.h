/**
 * File: Pancake.h
 * Autogenerated on Fri Mar 23 13:39:12 EDT 2018 based on
 * Pancake.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/sts/Pancake
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef PANCAKE_H
#define PANCAKE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "STSBase.h"
#include "GUIProviderArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class STSBase;
class GUIProviderArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Pancake : public STSBase // CPPClass.tag001
{
public: 
	Pancake();
	Pancake(int i);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	void setStrobeEnable(short enable);
	~Pancake();
	// No public Java copy constructor; creating one:
	Pancake(const Pancake &that);
	// Creating assignment operator declaration:
	Pancake &operator=(const Pancake &that);

private:
	jmethodID mid_Pancake5690;
	jmethodID mid_Pancake5691;
	jmethodID mid_openSpectrometer5692;
	jmethodID mid_getGUIFeatures5693;
	jmethodID mid_setStrobeEnable5694;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_STSBASE_T
#define EXTERN_TYPEDEF_STSBASE_T
	typedef void* STSBASE_T;
#endif /* EXTERN_TYPEDEF_STSBASE_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_PANCAKE_T
#define EXTERN_TYPEDEF_PANCAKE_T
	typedef void* PANCAKE_T;
#endif /* EXTERN_TYPEDEF_PANCAKE_T */

	EXPORTED PANCAKE_T Pancake_Create();
	EXPORTED PANCAKE_T Pancake_Create_1(int i);
	EXPORTED void Pancake_openSpectrometer(PANCAKE_T c_pancake, int index);
	EXPORTED void Pancake_getGUIFeatures(PANCAKE_T c_pancake, GUIPROVIDERARRAY_T retval);
	EXPORTED void Pancake_setStrobeEnable(PANCAKE_T c_pancake, short enable);
	EXPORTED void Pancake_Destroy(PANCAKE_T pancake);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED PANCAKE_T STDCALL Pancake_Create_stdcall();
	EXPORTED PANCAKE_T STDCALL Pancake_Create_stdcall_1(int i);
	EXPORTED void STDCALL Pancake_openSpectrometer_stdcall(PANCAKE_T c_pancake, int index);
	EXPORTED void STDCALL Pancake_getGUIFeatures_stdcall(PANCAKE_T c_pancake, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL Pancake_setStrobeEnable_stdcall(PANCAKE_T c_pancake, short enable);
	EXPORTED void STDCALL Pancake_Destroy_stdcall(PANCAKE_T pancake);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* PANCAKE_H */

/**
 * File: MayaPro2000.h
 * Autogenerated on Fri Mar 23 13:38:56 EDT 2018 based on
 * MayaPro2000.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mayapro2000/MayaPro2000
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MAYAPRO2000_H
#define MAYAPRO2000_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "MayaPro.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class MayaPro;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MayaPro2000 : public MayaPro // CPPClass.tag001
{
public: 
	MayaPro2000();
	MayaPro2000(int i);
	void openSpectrometer(int index);
	~MayaPro2000();
	// No public Java copy constructor; creating one:
	MayaPro2000(const MayaPro2000 &that);
	// Creating assignment operator declaration:
	MayaPro2000 &operator=(const MayaPro2000 &that);

private:
	jmethodID mid_MayaPro20004067;
	jmethodID mid_MayaPro20004068;
	jmethodID mid_openSpectrometer4069;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MAYAPRO_T
#define EXTERN_TYPEDEF_MAYAPRO_T
	typedef void* MAYAPRO_T;
#endif /* EXTERN_TYPEDEF_MAYAPRO_T */
#ifndef EXTERN_TYPEDEF_MAYAPRO2000_T
#define EXTERN_TYPEDEF_MAYAPRO2000_T
	typedef void* MAYAPRO2000_T;
#endif /* EXTERN_TYPEDEF_MAYAPRO2000_T */

	EXPORTED MAYAPRO2000_T MayaPro2000_Create();
	EXPORTED MAYAPRO2000_T MayaPro2000_Create_1(int i);
	EXPORTED void MayaPro2000_openSpectrometer(MAYAPRO2000_T c_maya_pro2000, int index);
	EXPORTED void MayaPro2000_Destroy(MAYAPRO2000_T maya_pro2000);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MAYAPRO2000_T STDCALL MayaPro2000_Create_stdcall();
	EXPORTED MAYAPRO2000_T STDCALL MayaPro2000_Create_stdcall_1(int i);
	EXPORTED void STDCALL MayaPro2000_openSpectrometer_stdcall(MAYAPRO2000_T c_maya_pro2000, int index);
	EXPORTED void STDCALL MayaPro2000_Destroy_stdcall(MAYAPRO2000_T maya_pro2000);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MAYAPRO2000_H */
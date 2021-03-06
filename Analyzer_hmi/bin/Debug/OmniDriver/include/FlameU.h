/**
 * File: FlameU.h
 * Autogenerated on Fri Mar 23 13:38:51 EDT 2018 based on
 * FlameU.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/flameur/FlameU
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FLAMEU_H
#define FLAMEU_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "MayaPro.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class MayaPro;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED FlameU : public MayaPro // CPPClass.tag001
{
public: 
	FlameU();
	FlameU(int i);
	void openSpectrometer(int index);
	~FlameU();
	// No public Java copy constructor; creating one:
	FlameU(const FlameU &that);
	// Creating assignment operator declaration:
	FlameU &operator=(const FlameU &that);

private:
	jmethodID mid_FlameU3331;
	jmethodID mid_FlameU3332;
	jmethodID mid_openSpectrometer3333;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MAYAPRO_T
#define EXTERN_TYPEDEF_MAYAPRO_T
	typedef void* MAYAPRO_T;
#endif /* EXTERN_TYPEDEF_MAYAPRO_T */
#ifndef EXTERN_TYPEDEF_FLAMEU_T
#define EXTERN_TYPEDEF_FLAMEU_T
	typedef void* FLAMEU_T;
#endif /* EXTERN_TYPEDEF_FLAMEU_T */

	EXPORTED FLAMEU_T FlameU_Create();
	EXPORTED FLAMEU_T FlameU_Create_1(int i);
	EXPORTED void FlameU_openSpectrometer(FLAMEU_T c_flame_u, int index);
	EXPORTED void FlameU_Destroy(FLAMEU_T flame_u);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED FLAMEU_T STDCALL FlameU_Create_stdcall();
	EXPORTED FLAMEU_T STDCALL FlameU_Create_stdcall_1(int i);
	EXPORTED void STDCALL FlameU_openSpectrometer_stdcall(FLAMEU_T c_flame_u, int index);
	EXPORTED void STDCALL FlameU_Destroy_stdcall(FLAMEU_T flame_u);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FLAMEU_H */

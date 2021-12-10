/**
 * File: Torus.h
 * Autogenerated on Fri Mar 23 13:39:14 EDT 2018 based on
 * Torus.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/torus/Torus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef TORUS_H
#define TORUS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USB2kp.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USB2kp;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Torus : public USB2kp // CPPClass.tag001
{
public: 
	Torus();
	Torus(int i);
	void openSpectrometer(int index);
	~Torus();
	// No public Java copy constructor; creating one:
	Torus(const Torus &that);
	// Creating assignment operator declaration:
	Torus &operator=(const Torus &that);

private:
	jmethodID mid_Torus5825;
	jmethodID mid_Torus5826;
	jmethodID mid_openSpectrometer5827;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USB2KP_T
#define EXTERN_TYPEDEF_USB2KP_T
	typedef void* USB2KP_T;
#endif /* EXTERN_TYPEDEF_USB2KP_T */
#ifndef EXTERN_TYPEDEF_TORUS_T
#define EXTERN_TYPEDEF_TORUS_T
	typedef void* TORUS_T;
#endif /* EXTERN_TYPEDEF_TORUS_T */

	EXPORTED TORUS_T Torus_Create();
	EXPORTED TORUS_T Torus_Create_1(int i);
	EXPORTED void Torus_openSpectrometer(TORUS_T c_torus, int index);
	EXPORTED void Torus_Destroy(TORUS_T torus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED TORUS_T STDCALL Torus_Create_stdcall();
	EXPORTED TORUS_T STDCALL Torus_Create_stdcall_1(int i);
	EXPORTED void STDCALL Torus_openSpectrometer_stdcall(TORUS_T c_torus, int index);
	EXPORTED void STDCALL Torus_Destroy_stdcall(TORUS_T torus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* TORUS_H */
/**
 * File: AnalogOutGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * AnalogOutGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/analogout/AnalogOutGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ANALOGOUTGUIPROVIDER_H
#define ANALOGOUTGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED AnalogOutGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~AnalogOutGUIProvider();
	// No public default Java constructor; creating one:
	AnalogOutGUIProvider();
	// No public Java copy constructor; creating one:
	AnalogOutGUIProvider(const AnalogOutGUIProvider &that);
	// Creating assignment operator declaration:
	AnalogOutGUIProvider &operator=(const AnalogOutGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ANALOGOUTGUIPROVIDER_T
#define EXTERN_TYPEDEF_ANALOGOUTGUIPROVIDER_T
	typedef void* ANALOGOUTGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_ANALOGOUTGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED ANALOGOUTGUIPROVIDER_T AnalogOutGUIProvider_Create();
	EXPORTED void AnalogOutGUIProvider_Destroy(ANALOGOUTGUIPROVIDER_T analog_out_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL AnalogOutGUIProvider_Destroy_stdcall(ANALOGOUTGUIPROVIDER_T analog_out_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ANALOGOUTGUIPROVIDER_H */

/**
 * File: RunHallHomingGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * RunHallHomingGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/runhallhoming/RunHallHomingGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef RUNHALLHOMINGGUIPROVIDER_H
#define RUNHALLHOMINGGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED RunHallHomingGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~RunHallHomingGUIProvider();
	// No public default Java constructor; creating one:
	RunHallHomingGUIProvider();
	// No public Java copy constructor; creating one:
	RunHallHomingGUIProvider(const RunHallHomingGUIProvider &that);
	// Creating assignment operator declaration:
	RunHallHomingGUIProvider &operator=(const RunHallHomingGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_RUNHALLHOMINGGUIPROVIDER_T
#define EXTERN_TYPEDEF_RUNHALLHOMINGGUIPROVIDER_T
	typedef void* RUNHALLHOMINGGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_RUNHALLHOMINGGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED RUNHALLHOMINGGUIPROVIDER_T RunHallHomingGUIProvider_Create();
	EXPORTED void RunHallHomingGUIProvider_Destroy(RUNHALLHOMINGGUIPROVIDER_T run_hall_homing_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL RunHallHomingGUIProvider_Destroy_stdcall(RUNHALLHOMINGGUIPROVIDER_T run_hall_homing_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* RUNHALLHOMINGGUIPROVIDER_H */

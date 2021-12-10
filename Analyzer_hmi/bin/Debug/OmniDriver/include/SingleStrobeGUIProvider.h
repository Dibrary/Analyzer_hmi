/**
 * File: SingleStrobeGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * SingleStrobeGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/singlestrobe/SingleStrobeGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SINGLESTROBEGUIPROVIDER_H
#define SINGLESTROBEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SingleStrobeGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~SingleStrobeGUIProvider();
	// No public default Java constructor; creating one:
	SingleStrobeGUIProvider();
	// No public Java copy constructor; creating one:
	SingleStrobeGUIProvider(const SingleStrobeGUIProvider &that);
	// Creating assignment operator declaration:
	SingleStrobeGUIProvider &operator=(const SingleStrobeGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SINGLESTROBEGUIPROVIDER_T
#define EXTERN_TYPEDEF_SINGLESTROBEGUIPROVIDER_T
	typedef void* SINGLESTROBEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_SINGLESTROBEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED SINGLESTROBEGUIPROVIDER_T SingleStrobeGUIProvider_Create();
	EXPORTED void SingleStrobeGUIProvider_Destroy(SINGLESTROBEGUIPROVIDER_T single_strobe_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SingleStrobeGUIProvider_Destroy_stdcall(SINGLESTROBEGUIPROVIDER_T single_strobe_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SINGLESTROBEGUIPROVIDER_H */

/**
 * File: LS450_FunctionsGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:37 EDT 2018 based on
 * LS450_FunctionsGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/ls450functions/LS450_FunctionsGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LS450_FUNCTIONSGUIPROVIDER_H
#define LS450_FUNCTIONSGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED LS450_FunctionsGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~LS450_FunctionsGUIProvider();
	// No public default Java constructor; creating one:
	LS450_FunctionsGUIProvider();
	// No public Java copy constructor; creating one:
	LS450_FunctionsGUIProvider(const LS450_FunctionsGUIProvider &that);
	// Creating assignment operator declaration:
	LS450_FunctionsGUIProvider &operator=(const LS450_FunctionsGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_LS450_FUNCTIONSGUIPROVIDER_T
#define EXTERN_TYPEDEF_LS450_FUNCTIONSGUIPROVIDER_T
	typedef void* LS450_FUNCTIONSGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_LS450_FUNCTIONSGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED LS450_FUNCTIONSGUIPROVIDER_T LS450_FunctionsGUIProvider_Create();
	EXPORTED void LS450_FunctionsGUIProvider_Destroy(LS450_FUNCTIONSGUIPROVIDER_T ls450_functionsguiprovider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL LS450_FunctionsGUIProvider_Destroy_stdcall(LS450_FUNCTIONSGUIPROVIDER_T ls450_functionsguiprovider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LS450_FUNCTIONSGUIPROVIDER_H */
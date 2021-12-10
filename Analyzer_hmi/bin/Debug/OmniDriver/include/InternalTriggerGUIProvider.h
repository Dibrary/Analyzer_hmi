/**
 * File: InternalTriggerGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:37 EDT 2018 based on
 * InternalTriggerGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/internaltrigger/InternalTriggerGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef INTERNALTRIGGERGUIPROVIDER_H
#define INTERNALTRIGGERGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED InternalTriggerGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~InternalTriggerGUIProvider();
	// No public default Java constructor; creating one:
	InternalTriggerGUIProvider();
	// No public Java copy constructor; creating one:
	InternalTriggerGUIProvider(const InternalTriggerGUIProvider &that);
	// Creating assignment operator declaration:
	InternalTriggerGUIProvider &operator=(const InternalTriggerGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_INTERNALTRIGGERGUIPROVIDER_T
#define EXTERN_TYPEDEF_INTERNALTRIGGERGUIPROVIDER_T
	typedef void* INTERNALTRIGGERGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_INTERNALTRIGGERGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED INTERNALTRIGGERGUIPROVIDER_T InternalTriggerGUIProvider_Create();
	EXPORTED void InternalTriggerGUIProvider_Destroy(INTERNALTRIGGERGUIPROVIDER_T internal_trigger_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL InternalTriggerGUIProvider_Destroy_stdcall(INTERNALTRIGGERGUIPROVIDER_T internal_trigger_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* INTERNALTRIGGERGUIPROVIDER_H */
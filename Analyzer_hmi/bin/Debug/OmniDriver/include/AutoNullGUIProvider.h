/**
 * File: AutoNullGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * AutoNullGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/autonull/AutoNullGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef AUTONULLGUIPROVIDER_H
#define AUTONULLGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED AutoNullGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~AutoNullGUIProvider();
	// No public default Java constructor; creating one:
	AutoNullGUIProvider();
	// No public Java copy constructor; creating one:
	AutoNullGUIProvider(const AutoNullGUIProvider &that);
	// Creating assignment operator declaration:
	AutoNullGUIProvider &operator=(const AutoNullGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_AUTONULLGUIPROVIDER_T
#define EXTERN_TYPEDEF_AUTONULLGUIPROVIDER_T
	typedef void* AUTONULLGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_AUTONULLGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED AUTONULLGUIPROVIDER_T AutoNullGUIProvider_Create();
	EXPORTED void AutoNullGUIProvider_Destroy(AUTONULLGUIPROVIDER_T auto_null_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL AutoNullGUIProvider_Destroy_stdcall(AUTONULLGUIPROVIDER_T auto_null_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* AUTONULLGUIPROVIDER_H */

/**
 * File: VersionGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:42 EDT 2018 based on
 * VersionGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/version/VersionGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef VERSIONGUIPROVIDER_H
#define VERSIONGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED VersionGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~VersionGUIProvider();
	// No public default Java constructor; creating one:
	VersionGUIProvider();
	// No public Java copy constructor; creating one:
	VersionGUIProvider(const VersionGUIProvider &that);
	// Creating assignment operator declaration:
	VersionGUIProvider &operator=(const VersionGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_VERSIONGUIPROVIDER_T
#define EXTERN_TYPEDEF_VERSIONGUIPROVIDER_T
	typedef void* VERSIONGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_VERSIONGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED VERSIONGUIPROVIDER_T VersionGUIProvider_Create();
	EXPORTED void VersionGUIProvider_Destroy(VERSIONGUIPROVIDER_T version_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL VersionGUIProvider_Destroy_stdcall(VERSIONGUIPROVIDER_T version_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* VERSIONGUIPROVIDER_H */
/**
 * File: NotifyPositionEnableGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * NotifyPositionEnableGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/notifypositionenable/NotifyPositionEnableGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NOTIFYPOSITIONENABLEGUIPROVIDER_H
#define NOTIFYPOSITIONENABLEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED NotifyPositionEnableGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~NotifyPositionEnableGUIProvider();
	// No public default Java constructor; creating one:
	NotifyPositionEnableGUIProvider();
	// No public Java copy constructor; creating one:
	NotifyPositionEnableGUIProvider(const NotifyPositionEnableGUIProvider &that);
	// Creating assignment operator declaration:
	NotifyPositionEnableGUIProvider &operator=(const NotifyPositionEnableGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NOTIFYPOSITIONENABLEGUIPROVIDER_T
#define EXTERN_TYPEDEF_NOTIFYPOSITIONENABLEGUIPROVIDER_T
	typedef void* NOTIFYPOSITIONENABLEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_NOTIFYPOSITIONENABLEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED NOTIFYPOSITIONENABLEGUIPROVIDER_T NotifyPositionEnableGUIProvider_Create();
	EXPORTED void NotifyPositionEnableGUIProvider_Destroy(NOTIFYPOSITIONENABLEGUIPROVIDER_T notify_position_enable_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL NotifyPositionEnableGUIProvider_Destroy_stdcall(NOTIFYPOSITIONENABLEGUIPROVIDER_T notify_position_enable_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NOTIFYPOSITIONENABLEGUIPROVIDER_H */
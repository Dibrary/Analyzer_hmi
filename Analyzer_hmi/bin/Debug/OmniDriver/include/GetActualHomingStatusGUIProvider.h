/**
 * File: GetActualHomingStatusGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetActualHomingStatusGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getactualhomingstatus/GetActualHomingStatusGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETACTUALHOMINGSTATUSGUIPROVIDER_H
#define GETACTUALHOMINGSTATUSGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED GetActualHomingStatusGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~GetActualHomingStatusGUIProvider();
	// No public default Java constructor; creating one:
	GetActualHomingStatusGUIProvider();
	// No public Java copy constructor; creating one:
	GetActualHomingStatusGUIProvider(const GetActualHomingStatusGUIProvider &that);
	// Creating assignment operator declaration:
	GetActualHomingStatusGUIProvider &operator=(const GetActualHomingStatusGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_GETACTUALHOMINGSTATUSGUIPROVIDER_T
#define EXTERN_TYPEDEF_GETACTUALHOMINGSTATUSGUIPROVIDER_T
	typedef void* GETACTUALHOMINGSTATUSGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_GETACTUALHOMINGSTATUSGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED GETACTUALHOMINGSTATUSGUIPROVIDER_T GetActualHomingStatusGUIProvider_Create();
	EXPORTED void GetActualHomingStatusGUIProvider_Destroy(GETACTUALHOMINGSTATUSGUIPROVIDER_T get_actual_homing_status_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL GetActualHomingStatusGUIProvider_Destroy_stdcall(GETACTUALHOMINGSTATUSGUIPROVIDER_T get_actual_homing_status_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETACTUALHOMINGSTATUSGUIPROVIDER_H */

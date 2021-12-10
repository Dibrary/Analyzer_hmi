/**
 * File: FirmwareGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:57 EDT 2018 based on
 * FirmwareGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/features/firmware/FirmwareGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FIRMWAREGUIPROVIDER_H
#define FIRMWAREGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED FirmwareGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~FirmwareGUIProvider();
	// No public default Java constructor; creating one:
	FirmwareGUIProvider();
	// No public Java copy constructor; creating one:
	FirmwareGUIProvider(const FirmwareGUIProvider &that);
	// Creating assignment operator declaration:
	FirmwareGUIProvider &operator=(const FirmwareGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FIRMWAREGUIPROVIDER_T
#define EXTERN_TYPEDEF_FIRMWAREGUIPROVIDER_T
	typedef void* FIRMWAREGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_FIRMWAREGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED FIRMWAREGUIPROVIDER_T FirmwareGUIProvider_Create();
	EXPORTED void FirmwareGUIProvider_Destroy(FIRMWAREGUIPROVIDER_T firmware_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL FirmwareGUIProvider_Destroy_stdcall(FIRMWAREGUIPROVIDER_T firmware_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FIRMWAREGUIPROVIDER_H */
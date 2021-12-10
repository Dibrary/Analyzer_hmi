/**
 * File: SaturationThresholdGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * SaturationThresholdGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/saturationthreshold/SaturationThresholdGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SATURATIONTHRESHOLDGUIPROVIDER_H
#define SATURATIONTHRESHOLDGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SaturationThresholdGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~SaturationThresholdGUIProvider();
	// No public default Java constructor; creating one:
	SaturationThresholdGUIProvider();
	// No public Java copy constructor; creating one:
	SaturationThresholdGUIProvider(const SaturationThresholdGUIProvider &that);
	// Creating assignment operator declaration:
	SaturationThresholdGUIProvider &operator=(const SaturationThresholdGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SATURATIONTHRESHOLDGUIPROVIDER_T
#define EXTERN_TYPEDEF_SATURATIONTHRESHOLDGUIPROVIDER_T
	typedef void* SATURATIONTHRESHOLDGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_SATURATIONTHRESHOLDGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED SATURATIONTHRESHOLDGUIPROVIDER_T SaturationThresholdGUIProvider_Create();
	EXPORTED void SaturationThresholdGUIProvider_Destroy(SATURATIONTHRESHOLDGUIPROVIDER_T saturation_threshold_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SaturationThresholdGUIProvider_Destroy_stdcall(SATURATIONTHRESHOLDGUIPROVIDER_T saturation_threshold_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SATURATIONTHRESHOLDGUIPROVIDER_H */
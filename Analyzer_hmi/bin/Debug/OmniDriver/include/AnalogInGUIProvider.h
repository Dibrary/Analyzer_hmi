/**
 * File: AnalogInGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * AnalogInGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/analogin/AnalogInGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ANALOGINGUIPROVIDER_H
#define ANALOGINGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED AnalogInGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~AnalogInGUIProvider();
	// No public default Java constructor; creating one:
	AnalogInGUIProvider();
	// No public Java copy constructor; creating one:
	AnalogInGUIProvider(const AnalogInGUIProvider &that);
	// Creating assignment operator declaration:
	AnalogInGUIProvider &operator=(const AnalogInGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ANALOGINGUIPROVIDER_T
#define EXTERN_TYPEDEF_ANALOGINGUIPROVIDER_T
	typedef void* ANALOGINGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_ANALOGINGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED ANALOGINGUIPROVIDER_T AnalogInGUIProvider_Create();
	EXPORTED void AnalogInGUIProvider_Destroy(ANALOGINGUIPROVIDER_T analog_in_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL AnalogInGUIProvider_Destroy_stdcall(ANALOGINGUIPROVIDER_T analog_in_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ANALOGINGUIPROVIDER_H */
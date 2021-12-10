/**
 * File: GPIOGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:34 EDT 2018 based on
 * GPIOGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/gpio/GPIOGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GPIOGUIPROVIDER_H
#define GPIOGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED GPIOGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~GPIOGUIProvider();
	// No public default Java constructor; creating one:
	GPIOGUIProvider();
	// No public Java copy constructor; creating one:
	GPIOGUIProvider(const GPIOGUIProvider &that);
	// Creating assignment operator declaration:
	GPIOGUIProvider &operator=(const GPIOGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_GPIOGUIPROVIDER_T
#define EXTERN_TYPEDEF_GPIOGUIPROVIDER_T
	typedef void* GPIOGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_GPIOGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED GPIOGUIPROVIDER_T GPIOGUIProvider_Create();
	EXPORTED void GPIOGUIProvider_Destroy(GPIOGUIPROVIDER_T gpioguiprovider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL GPIOGUIProvider_Destroy_stdcall(GPIOGUIPROVIDER_T gpioguiprovider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GPIOGUIPROVIDER_H */

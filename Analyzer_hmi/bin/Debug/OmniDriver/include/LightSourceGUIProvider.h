/**
 * File: LightSourceGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:37 EDT 2018 based on
 * LightSourceGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/lightsource/LightSourceGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LIGHTSOURCEGUIPROVIDER_H
#define LIGHTSOURCEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED LightSourceGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~LightSourceGUIProvider();
	// No public default Java constructor; creating one:
	LightSourceGUIProvider();
	// No public Java copy constructor; creating one:
	LightSourceGUIProvider(const LightSourceGUIProvider &that);
	// Creating assignment operator declaration:
	LightSourceGUIProvider &operator=(const LightSourceGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_LIGHTSOURCEGUIPROVIDER_T
#define EXTERN_TYPEDEF_LIGHTSOURCEGUIPROVIDER_T
	typedef void* LIGHTSOURCEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_LIGHTSOURCEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED LIGHTSOURCEGUIPROVIDER_T LightSourceGUIProvider_Create();
	EXPORTED void LightSourceGUIProvider_Destroy(LIGHTSOURCEGUIPROVIDER_T light_source_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL LightSourceGUIProvider_Destroy_stdcall(LIGHTSOURCEGUIPROVIDER_T light_source_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LIGHTSOURCEGUIPROVIDER_H */

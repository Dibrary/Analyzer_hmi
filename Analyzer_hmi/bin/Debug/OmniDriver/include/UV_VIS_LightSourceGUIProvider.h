/**
 * File: UV_VIS_LightSourceGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:41 EDT 2018 based on
 * UV_VIS_LightSourceGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/uvvislightsource/UV_VIS_LightSourceGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef UV_VIS_LIGHTSOURCEGUIPROVIDER_H
#define UV_VIS_LIGHTSOURCEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED UV_VIS_LightSourceGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~UV_VIS_LightSourceGUIProvider();
	// No public default Java constructor; creating one:
	UV_VIS_LightSourceGUIProvider();
	// No public Java copy constructor; creating one:
	UV_VIS_LightSourceGUIProvider(const UV_VIS_LightSourceGUIProvider &that);
	// Creating assignment operator declaration:
	UV_VIS_LightSourceGUIProvider &operator=(const UV_VIS_LightSourceGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_UV_VIS_LIGHTSOURCEGUIPROVIDER_T
#define EXTERN_TYPEDEF_UV_VIS_LIGHTSOURCEGUIPROVIDER_T
	typedef void* UV_VIS_LIGHTSOURCEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_UV_VIS_LIGHTSOURCEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED UV_VIS_LIGHTSOURCEGUIPROVIDER_T UV_VIS_LightSourceGUIProvider_Create();
	EXPORTED void UV_VIS_LightSourceGUIProvider_Destroy(UV_VIS_LIGHTSOURCEGUIPROVIDER_T uv_vis_lightsourceguiprovider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL UV_VIS_LightSourceGUIProvider_Destroy_stdcall(UV_VIS_LIGHTSOURCEGUIPROVIDER_T uv_vis_lightsourceguiprovider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* UV_VIS_LIGHTSOURCEGUIPROVIDER_H */

/**
 * File: SetResponseModeGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetResponseModeGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setresponsemode/SetResponseModeGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETRESPONSEMODEGUIPROVIDER_H
#define SETRESPONSEMODEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SetResponseModeGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~SetResponseModeGUIProvider();
	// No public default Java constructor; creating one:
	SetResponseModeGUIProvider();
	// No public Java copy constructor; creating one:
	SetResponseModeGUIProvider(const SetResponseModeGUIProvider &that);
	// Creating assignment operator declaration:
	SetResponseModeGUIProvider &operator=(const SetResponseModeGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SETRESPONSEMODEGUIPROVIDER_T
#define EXTERN_TYPEDEF_SETRESPONSEMODEGUIPROVIDER_T
	typedef void* SETRESPONSEMODEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_SETRESPONSEMODEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED SETRESPONSEMODEGUIPROVIDER_T SetResponseModeGUIProvider_Create();
	EXPORTED void SetResponseModeGUIProvider_Destroy(SETRESPONSEMODEGUIPROVIDER_T set_response_mode_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SetResponseModeGUIProvider_Destroy_stdcall(SETRESPONSEMODEGUIPROVIDER_T set_response_mode_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETRESPONSEMODEGUIPROVIDER_H */

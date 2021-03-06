/**
 * File: SetOutputDigitalGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetOutputDigitalGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setoutputdigital/SetOutputDigitalGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETOUTPUTDIGITALGUIPROVIDER_H
#define SETOUTPUTDIGITALGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SetOutputDigitalGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~SetOutputDigitalGUIProvider();
	// No public default Java constructor; creating one:
	SetOutputDigitalGUIProvider();
	// No public Java copy constructor; creating one:
	SetOutputDigitalGUIProvider(const SetOutputDigitalGUIProvider &that);
	// Creating assignment operator declaration:
	SetOutputDigitalGUIProvider &operator=(const SetOutputDigitalGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SETOUTPUTDIGITALGUIPROVIDER_T
#define EXTERN_TYPEDEF_SETOUTPUTDIGITALGUIPROVIDER_T
	typedef void* SETOUTPUTDIGITALGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_SETOUTPUTDIGITALGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED SETOUTPUTDIGITALGUIPROVIDER_T SetOutputDigitalGUIProvider_Create();
	EXPORTED void SetOutputDigitalGUIProvider_Destroy(SETOUTPUTDIGITALGUIPROVIDER_T set_output_digital_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SetOutputDigitalGUIProvider_Destroy_stdcall(SETOUTPUTDIGITALGUIPROVIDER_T set_output_digital_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETOUTPUTDIGITALGUIPROVIDER_H */

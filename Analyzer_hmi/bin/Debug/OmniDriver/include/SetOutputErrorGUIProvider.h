/**
 * File: SetOutputErrorGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetOutputErrorGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setoutputerror/SetOutputErrorGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETOUTPUTERRORGUIPROVIDER_H
#define SETOUTPUTERRORGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SetOutputErrorGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~SetOutputErrorGUIProvider();
	// No public default Java constructor; creating one:
	SetOutputErrorGUIProvider();
	// No public Java copy constructor; creating one:
	SetOutputErrorGUIProvider(const SetOutputErrorGUIProvider &that);
	// Creating assignment operator declaration:
	SetOutputErrorGUIProvider &operator=(const SetOutputErrorGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SETOUTPUTERRORGUIPROVIDER_T
#define EXTERN_TYPEDEF_SETOUTPUTERRORGUIPROVIDER_T
	typedef void* SETOUTPUTERRORGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_SETOUTPUTERRORGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED SETOUTPUTERRORGUIPROVIDER_T SetOutputErrorGUIProvider_Create();
	EXPORTED void SetOutputErrorGUIProvider_Destroy(SETOUTPUTERRORGUIPROVIDER_T set_output_error_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SetOutputErrorGUIProvider_Destroy_stdcall(SETOUTPUTERRORGUIPROVIDER_T set_output_error_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETOUTPUTERRORGUIPROVIDER_H */

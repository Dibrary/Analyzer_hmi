/**
 * File: DisableProgramGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * DisableProgramGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/disableprogram/DisableProgramGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DISABLEPROGRAMGUIPROVIDER_H
#define DISABLEPROGRAMGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED DisableProgramGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~DisableProgramGUIProvider();
	// No public default Java constructor; creating one:
	DisableProgramGUIProvider();
	// No public Java copy constructor; creating one:
	DisableProgramGUIProvider(const DisableProgramGUIProvider &that);
	// Creating assignment operator declaration:
	DisableProgramGUIProvider &operator=(const DisableProgramGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_DISABLEPROGRAMGUIPROVIDER_T
#define EXTERN_TYPEDEF_DISABLEPROGRAMGUIPROVIDER_T
	typedef void* DISABLEPROGRAMGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_DISABLEPROGRAMGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED DISABLEPROGRAMGUIPROVIDER_T DisableProgramGUIProvider_Create();
	EXPORTED void DisableProgramGUIProvider_Destroy(DISABLEPROGRAMGUIPROVIDER_T disable_program_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL DisableProgramGUIProvider_Destroy_stdcall(DISABLEPROGRAMGUIPROVIDER_T disable_program_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DISABLEPROGRAMGUIPROVIDER_H */
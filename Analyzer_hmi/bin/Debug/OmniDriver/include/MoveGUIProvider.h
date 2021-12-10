/**
 * File: MoveGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * MoveGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/move/MoveGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MOVEGUIPROVIDER_H
#define MOVEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED MoveGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~MoveGUIProvider();
	// No public default Java constructor; creating one:
	MoveGUIProvider();
	// No public Java copy constructor; creating one:
	MoveGUIProvider(const MoveGUIProvider &that);
	// Creating assignment operator declaration:
	MoveGUIProvider &operator=(const MoveGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MOVEGUIPROVIDER_T
#define EXTERN_TYPEDEF_MOVEGUIPROVIDER_T
	typedef void* MOVEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_MOVEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED MOVEGUIPROVIDER_T MoveGUIProvider_Create();
	EXPORTED void MoveGUIProvider_Destroy(MOVEGUIPROVIDER_T move_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL MoveGUIProvider_Destroy_stdcall(MOVEGUIPROVIDER_T move_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MOVEGUIPROVIDER_H */
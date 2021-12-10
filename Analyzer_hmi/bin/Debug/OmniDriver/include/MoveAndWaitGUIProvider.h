/**
 * File: MoveAndWaitGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * MoveAndWaitGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/moveandwait/MoveAndWaitGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MOVEANDWAITGUIPROVIDER_H
#define MOVEANDWAITGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED MoveAndWaitGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~MoveAndWaitGUIProvider();
	// No public default Java constructor; creating one:
	MoveAndWaitGUIProvider();
	// No public Java copy constructor; creating one:
	MoveAndWaitGUIProvider(const MoveAndWaitGUIProvider &that);
	// Creating assignment operator declaration:
	MoveAndWaitGUIProvider &operator=(const MoveAndWaitGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MOVEANDWAITGUIPROVIDER_T
#define EXTERN_TYPEDEF_MOVEANDWAITGUIPROVIDER_T
	typedef void* MOVEANDWAITGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_MOVEANDWAITGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED MOVEANDWAITGUIPROVIDER_T MoveAndWaitGUIProvider_Create();
	EXPORTED void MoveAndWaitGUIProvider_Destroy(MOVEANDWAITGUIPROVIDER_T move_and_wait_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL MoveAndWaitGUIProvider_Destroy_stdcall(MOVEANDWAITGUIPROVIDER_T move_and_wait_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MOVEANDWAITGUIPROVIDER_H */
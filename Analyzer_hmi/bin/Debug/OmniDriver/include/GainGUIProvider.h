/**
 * File: GainGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:34 EDT 2018 based on
 * GainGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/gain/GainGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GAINGUIPROVIDER_H
#define GAINGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED GainGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~GainGUIProvider();
	// No public default Java constructor; creating one:
	GainGUIProvider();
	// No public Java copy constructor; creating one:
	GainGUIProvider(const GainGUIProvider &that);
	// Creating assignment operator declaration:
	GainGUIProvider &operator=(const GainGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_GAINGUIPROVIDER_T
#define EXTERN_TYPEDEF_GAINGUIPROVIDER_T
	typedef void* GAINGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_GAINGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED GAINGUIPROVIDER_T GainGUIProvider_Create();
	EXPORTED void GainGUIProvider_Destroy(GAINGUIPROVIDER_T gain_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL GainGUIProvider_Destroy_stdcall(GAINGUIPROVIDER_T gain_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GAINGUIPROVIDER_H */
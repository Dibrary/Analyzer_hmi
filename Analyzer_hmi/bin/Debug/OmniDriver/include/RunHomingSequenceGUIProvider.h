/**
 * File: RunHomingSequenceGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * RunHomingSequenceGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/runhomingsequence/RunHomingSequenceGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef RUNHOMINGSEQUENCEGUIPROVIDER_H
#define RUNHOMINGSEQUENCEGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED RunHomingSequenceGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~RunHomingSequenceGUIProvider();
	// No public default Java constructor; creating one:
	RunHomingSequenceGUIProvider();
	// No public Java copy constructor; creating one:
	RunHomingSequenceGUIProvider(const RunHomingSequenceGUIProvider &that);
	// Creating assignment operator declaration:
	RunHomingSequenceGUIProvider &operator=(const RunHomingSequenceGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_RUNHOMINGSEQUENCEGUIPROVIDER_T
#define EXTERN_TYPEDEF_RUNHOMINGSEQUENCEGUIPROVIDER_T
	typedef void* RUNHOMINGSEQUENCEGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_RUNHOMINGSEQUENCEGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED RUNHOMINGSEQUENCEGUIPROVIDER_T RunHomingSequenceGUIProvider_Create();
	EXPORTED void RunHomingSequenceGUIProvider_Destroy(RUNHOMINGSEQUENCEGUIPROVIDER_T run_homing_sequence_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL RunHomingSequenceGUIProvider_Destroy_stdcall(RUNHOMINGSEQUENCEGUIPROVIDER_T run_homing_sequence_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* RUNHOMINGSEQUENCEGUIPROVIDER_H */

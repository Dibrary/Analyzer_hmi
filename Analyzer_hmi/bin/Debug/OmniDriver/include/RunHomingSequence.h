/**
 * File: RunHomingSequence.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * RunHomingSequence.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/runhomingsequence/RunHomingSequence
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef RUNHOMINGSEQUENCE_H
#define RUNHOMINGSEQUENCE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED RunHomingSequence : public BaseJavaClass // CPPClass.tag001
{
public: 
	void runHomingSequence(Node& param0);
	~RunHomingSequence();
	// No public default Java constructor; creating one:
	RunHomingSequence();
	// No public Java copy constructor; creating one:
	RunHomingSequence(const RunHomingSequence &that);
	// Creating assignment operator declaration:
	RunHomingSequence &operator=(const RunHomingSequence &that);

private:
	jmethodID mid_runHomingSequence144;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_RUNHOMINGSEQUENCE_T
#define EXTERN_TYPEDEF_RUNHOMINGSEQUENCE_T
	typedef void* RUNHOMINGSEQUENCE_T;
#endif /* EXTERN_TYPEDEF_RUNHOMINGSEQUENCE_T */

	// No public default Java constructor; creating one:
	EXPORTED RUNHOMINGSEQUENCE_T RunHomingSequence_Create();
	EXPORTED void RunHomingSequence_runHomingSequence(RUNHOMINGSEQUENCE_T c_run_homing_sequence, NODE_T param0);
	EXPORTED void RunHomingSequence_Destroy(RUNHOMINGSEQUENCE_T run_homing_sequence);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL RunHomingSequence_runHomingSequence_stdcall(RUNHOMINGSEQUENCE_T c_run_homing_sequence, NODE_T param0);
	EXPORTED void STDCALL RunHomingSequence_Destroy_stdcall(RUNHOMINGSEQUENCE_T run_homing_sequence);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* RUNHOMINGSEQUENCE_H */

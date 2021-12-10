/**
 * File: ClearDigitalOutput.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * ClearDigitalOutput.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/cleardigitaloutput/ClearDigitalOutput
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CLEARDIGITALOUTPUT_H
#define CLEARDIGITALOUTPUT_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ClearDigitalOutput : public BaseJavaClass // CPPClass.tag001
{
public: 
	void clearDigitalOutput(Node& param0);
	~ClearDigitalOutput();
	// No public default Java constructor; creating one:
	ClearDigitalOutput();
	// No public Java copy constructor; creating one:
	ClearDigitalOutput(const ClearDigitalOutput &that);
	// Creating assignment operator declaration:
	ClearDigitalOutput &operator=(const ClearDigitalOutput &that);

private:
	jmethodID mid_clearDigitalOutput40;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_CLEARDIGITALOUTPUT_T
#define EXTERN_TYPEDEF_CLEARDIGITALOUTPUT_T
	typedef void* CLEARDIGITALOUTPUT_T;
#endif /* EXTERN_TYPEDEF_CLEARDIGITALOUTPUT_T */

	// No public default Java constructor; creating one:
	EXPORTED CLEARDIGITALOUTPUT_T ClearDigitalOutput_Create();
	EXPORTED void ClearDigitalOutput_clearDigitalOutput(CLEARDIGITALOUTPUT_T c_clear_digital_output, NODE_T param0);
	EXPORTED void ClearDigitalOutput_Destroy(CLEARDIGITALOUTPUT_T clear_digital_output);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL ClearDigitalOutput_clearDigitalOutput_stdcall(CLEARDIGITALOUTPUT_T c_clear_digital_output, NODE_T param0);
	EXPORTED void STDCALL ClearDigitalOutput_Destroy_stdcall(CLEARDIGITALOUTPUT_T clear_digital_output);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CLEARDIGITALOUTPUT_H */
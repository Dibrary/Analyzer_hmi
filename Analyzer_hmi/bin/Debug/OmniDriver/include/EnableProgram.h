/**
 * File: EnableProgram.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * EnableProgram.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/enableprogram/EnableProgram
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ENABLEPROGRAM_H
#define ENABLEPROGRAM_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED EnableProgram : public BaseJavaClass // CPPClass.tag001
{
public: 
	void enableProgram(Node& param0);
	~EnableProgram();
	// No public default Java constructor; creating one:
	EnableProgram();
	// No public Java copy constructor; creating one:
	EnableProgram(const EnableProgram &that);
	// Creating assignment operator declaration:
	EnableProgram &operator=(const EnableProgram &that);

private:
	jmethodID mid_enableProgram52;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_ENABLEPROGRAM_T
#define EXTERN_TYPEDEF_ENABLEPROGRAM_T
	typedef void* ENABLEPROGRAM_T;
#endif /* EXTERN_TYPEDEF_ENABLEPROGRAM_T */

	// No public default Java constructor; creating one:
	EXPORTED ENABLEPROGRAM_T EnableProgram_Create();
	EXPORTED void EnableProgram_enableProgram(ENABLEPROGRAM_T c_enable_program, NODE_T param0);
	EXPORTED void EnableProgram_Destroy(ENABLEPROGRAM_T enable_program);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL EnableProgram_enableProgram_stdcall(ENABLEPROGRAM_T c_enable_program, NODE_T param0);
	EXPORTED void STDCALL EnableProgram_Destroy_stdcall(ENABLEPROGRAM_T enable_program);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ENABLEPROGRAM_H */
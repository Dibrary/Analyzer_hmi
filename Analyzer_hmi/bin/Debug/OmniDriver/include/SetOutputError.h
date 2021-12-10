/**
 * File: SetOutputError.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetOutputError.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setoutputerror/SetOutputError
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETOUTPUTERROR_H
#define SETOUTPUTERROR_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SetOutputError : public BaseJavaClass // CPPClass.tag001
{
public: 
	void setOutputError(Node& param0);
	~SetOutputError();
	// No public default Java constructor; creating one:
	SetOutputError();
	// No public Java copy constructor; creating one:
	SetOutputError(const SetOutputError &that);
	// Creating assignment operator declaration:
	SetOutputError &operator=(const SetOutputError &that);

private:
	jmethodID mid_setOutputError159;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_SETOUTPUTERROR_T
#define EXTERN_TYPEDEF_SETOUTPUTERROR_T
	typedef void* SETOUTPUTERROR_T;
#endif /* EXTERN_TYPEDEF_SETOUTPUTERROR_T */

	// No public default Java constructor; creating one:
	EXPORTED SETOUTPUTERROR_T SetOutputError_Create();
	EXPORTED void SetOutputError_setOutputError(SETOUTPUTERROR_T c_set_output_error, NODE_T param0);
	EXPORTED void SetOutputError_Destroy(SETOUTPUTERROR_T set_output_error);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SetOutputError_setOutputError_stdcall(SETOUTPUTERROR_T c_set_output_error, NODE_T param0);
	EXPORTED void STDCALL SetOutputError_Destroy_stdcall(SETOUTPUTERROR_T set_output_error);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETOUTPUTERROR_H */

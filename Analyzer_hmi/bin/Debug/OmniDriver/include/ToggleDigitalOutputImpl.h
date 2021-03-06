/**
 * File: ToggleDigitalOutputImpl.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * ToggleDigitalOutputImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/toggledigitaloutput/ToggleDigitalOutputImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef TOGGLEDIGITALOUTPUTIMPL_H
#define TOGGLEDIGITALOUTPUTIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandOnly.h"
#include "UniRS232.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandOnly;
class UniRS232;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ToggleDigitalOutputImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	ToggleDigitalOutputImpl(UniRS232& serPort);
	void toggleDigitalOutput(Node& node);
	~ToggleDigitalOutputImpl();
	// No public default Java constructor; creating one:
	ToggleDigitalOutputImpl();
	// No public Java copy constructor; creating one:
	ToggleDigitalOutputImpl(const ToggleDigitalOutputImpl &that);
	// Creating assignment operator declaration:
	ToggleDigitalOutputImpl &operator=(const ToggleDigitalOutputImpl &that);

private:
	jmethodID mid_ToggleDigitalOutputImpl172;
	jmethodID mid_toggleDigitalOutput173;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
#define EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
	typedef void* FAULHABERCOMMANDONLY_T;
#endif /* EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_TOGGLEDIGITALOUTPUTIMPL_T
#define EXTERN_TYPEDEF_TOGGLEDIGITALOUTPUTIMPL_T
	typedef void* TOGGLEDIGITALOUTPUTIMPL_T;
#endif /* EXTERN_TYPEDEF_TOGGLEDIGITALOUTPUTIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED TOGGLEDIGITALOUTPUTIMPL_T ToggleDigitalOutputImpl_Create();
	EXPORTED TOGGLEDIGITALOUTPUTIMPL_T ToggleDigitalOutputImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void ToggleDigitalOutputImpl_toggleDigitalOutput(TOGGLEDIGITALOUTPUTIMPL_T c_toggle_digital_output_impl, NODE_T node);
	EXPORTED void ToggleDigitalOutputImpl_Destroy(TOGGLEDIGITALOUTPUTIMPL_T toggle_digital_output_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED TOGGLEDIGITALOUTPUTIMPL_T STDCALL ToggleDigitalOutputImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL ToggleDigitalOutputImpl_toggleDigitalOutput_stdcall(TOGGLEDIGITALOUTPUTIMPL_T c_toggle_digital_output_impl, NODE_T node);
	EXPORTED void STDCALL ToggleDigitalOutputImpl_Destroy_stdcall(TOGGLEDIGITALOUTPUTIMPL_T toggle_digital_output_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* TOGGLEDIGITALOUTPUTIMPL_H */

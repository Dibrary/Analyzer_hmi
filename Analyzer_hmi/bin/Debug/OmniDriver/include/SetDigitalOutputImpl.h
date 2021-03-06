/**
 * File: SetDigitalOutputImpl.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetDigitalOutputImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setdigitaloutput/SetDigitalOutputImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETDIGITALOUTPUTIMPL_H
#define SETDIGITALOUTPUTIMPL_H
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

CLASS_TOKEN EXPORTED SetDigitalOutputImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	SetDigitalOutputImpl(UniRS232& serPort);
	void setDigitalOutput(Node& node);
	~SetDigitalOutputImpl();
	// No public default Java constructor; creating one:
	SetDigitalOutputImpl();
	// No public Java copy constructor; creating one:
	SetDigitalOutputImpl(const SetDigitalOutputImpl &that);
	// Creating assignment operator declaration:
	SetDigitalOutputImpl &operator=(const SetDigitalOutputImpl &that);

private:
	jmethodID mid_SetDigitalOutputImpl151;
	jmethodID mid_setDigitalOutput152;
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
#ifndef EXTERN_TYPEDEF_SETDIGITALOUTPUTIMPL_T
#define EXTERN_TYPEDEF_SETDIGITALOUTPUTIMPL_T
	typedef void* SETDIGITALOUTPUTIMPL_T;
#endif /* EXTERN_TYPEDEF_SETDIGITALOUTPUTIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED SETDIGITALOUTPUTIMPL_T SetDigitalOutputImpl_Create();
	EXPORTED SETDIGITALOUTPUTIMPL_T SetDigitalOutputImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void SetDigitalOutputImpl_setDigitalOutput(SETDIGITALOUTPUTIMPL_T c_set_digital_output_impl, NODE_T node);
	EXPORTED void SetDigitalOutputImpl_Destroy(SETDIGITALOUTPUTIMPL_T set_digital_output_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SETDIGITALOUTPUTIMPL_T STDCALL SetDigitalOutputImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL SetDigitalOutputImpl_setDigitalOutput_stdcall(SETDIGITALOUTPUTIMPL_T c_set_digital_output_impl, NODE_T node);
	EXPORTED void STDCALL SetDigitalOutputImpl_Destroy_stdcall(SETDIGITALOUTPUTIMPL_T set_digital_output_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETDIGITALOUTPUTIMPL_H */

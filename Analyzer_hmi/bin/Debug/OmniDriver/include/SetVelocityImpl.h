/**
 * File: SetVelocityImpl.h
 * Autogenerated on Fri Mar 23 13:38:24 EDT 2018 based on
 * SetVelocityImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/setvelocity/SetVelocityImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SETVELOCITYIMPL_H
#define SETVELOCITYIMPL_H
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

CLASS_TOKEN EXPORTED SetVelocityImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	SetVelocityImpl(UniRS232& serPort);
	void setVelocity(Node& node, int velocity);
	~SetVelocityImpl();
	// No public default Java constructor; creating one:
	SetVelocityImpl();
	// No public Java copy constructor; creating one:
	SetVelocityImpl(const SetVelocityImpl &that);
	// Creating assignment operator declaration:
	SetVelocityImpl &operator=(const SetVelocityImpl &that);

private:
	jmethodID mid_SetVelocityImpl169;
	jmethodID mid_setVelocity170;
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
#ifndef EXTERN_TYPEDEF_SETVELOCITYIMPL_T
#define EXTERN_TYPEDEF_SETVELOCITYIMPL_T
	typedef void* SETVELOCITYIMPL_T;
#endif /* EXTERN_TYPEDEF_SETVELOCITYIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED SETVELOCITYIMPL_T SetVelocityImpl_Create();
	EXPORTED SETVELOCITYIMPL_T SetVelocityImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void SetVelocityImpl_setVelocity(SETVELOCITYIMPL_T c_set_velocity_impl, NODE_T node, int velocity);
	EXPORTED void SetVelocityImpl_Destroy(SETVELOCITYIMPL_T set_velocity_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SETVELOCITYIMPL_T STDCALL SetVelocityImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL SetVelocityImpl_setVelocity_stdcall(SETVELOCITYIMPL_T c_set_velocity_impl, NODE_T node, int velocity);
	EXPORTED void STDCALL SetVelocityImpl_Destroy_stdcall(SETVELOCITYIMPL_T set_velocity_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SETVELOCITYIMPL_H */
/**
 * File: GetCurrentActualVelocityImpl.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetCurrentActualVelocityImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getcurrentactualvelocity/GetCurrentActualVelocityImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETCURRENTACTUALVELOCITYIMPL_H
#define GETCURRENTACTUALVELOCITYIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandIntegerResponse.h"
#include "UniRS232.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandIntegerResponse;
class UniRS232;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetCurrentActualVelocityImpl : public FaulhaberCommandIntegerResponse // CPPClass.tag001
{
public: 
	GetCurrentActualVelocityImpl(UniRS232& serPort);
	int getCurrentActualVelocity(Node& node);
	~GetCurrentActualVelocityImpl();
	// No public default Java constructor; creating one:
	GetCurrentActualVelocityImpl();
	// No public Java copy constructor; creating one:
	GetCurrentActualVelocityImpl(const GetCurrentActualVelocityImpl &that);
	// Creating assignment operator declaration:
	GetCurrentActualVelocityImpl &operator=(const GetCurrentActualVelocityImpl &that);

private:
	jmethodID mid_GetCurrentActualVelocityImpl71;
	jmethodID mid_getCurrentActualVelocity72;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FAULHABERCOMMANDINTEGERRESPONSE_T
#define EXTERN_TYPEDEF_FAULHABERCOMMANDINTEGERRESPONSE_T
	typedef void* FAULHABERCOMMANDINTEGERRESPONSE_T;
#endif /* EXTERN_TYPEDEF_FAULHABERCOMMANDINTEGERRESPONSE_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITYIMPL_T
#define EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITYIMPL_T
	typedef void* GETCURRENTACTUALVELOCITYIMPL_T;
#endif /* EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITYIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED GETCURRENTACTUALVELOCITYIMPL_T GetCurrentActualVelocityImpl_Create();
	EXPORTED GETCURRENTACTUALVELOCITYIMPL_T GetCurrentActualVelocityImpl_Create_1(UNIRS232_T serPort);
	EXPORTED int GetCurrentActualVelocityImpl_getCurrentActualVelocity(GETCURRENTACTUALVELOCITYIMPL_T c_get_current_actual_velocity_impl, NODE_T node);
	EXPORTED void GetCurrentActualVelocityImpl_Destroy(GETCURRENTACTUALVELOCITYIMPL_T get_current_actual_velocity_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GETCURRENTACTUALVELOCITYIMPL_T STDCALL GetCurrentActualVelocityImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED int STDCALL GetCurrentActualVelocityImpl_getCurrentActualVelocity_stdcall(GETCURRENTACTUALVELOCITYIMPL_T c_get_current_actual_velocity_impl, NODE_T node);
	EXPORTED void STDCALL GetCurrentActualVelocityImpl_Destroy_stdcall(GETCURRENTACTUALVELOCITYIMPL_T get_current_actual_velocity_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETCURRENTACTUALVELOCITYIMPL_H */
/**
 * File: GetNegativeLimitImpl.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetNegativeLimitImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getnegativelimit/GetNegativeLimitImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETNEGATIVELIMITIMPL_H
#define GETNEGATIVELIMITIMPL_H
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

CLASS_TOKEN EXPORTED GetNegativeLimitImpl : public FaulhaberCommandIntegerResponse // CPPClass.tag001
{
public: 
	GetNegativeLimitImpl(UniRS232& serPort);
	int getNegativeLimit(Node& node);
	~GetNegativeLimitImpl();
	// No public default Java constructor; creating one:
	GetNegativeLimitImpl();
	// No public Java copy constructor; creating one:
	GetNegativeLimitImpl(const GetNegativeLimitImpl &that);
	// Creating assignment operator declaration:
	GetNegativeLimitImpl &operator=(const GetNegativeLimitImpl &that);

private:
	jmethodID mid_GetNegativeLimitImpl80;
	jmethodID mid_getNegativeLimit81;
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
#ifndef EXTERN_TYPEDEF_GETNEGATIVELIMITIMPL_T
#define EXTERN_TYPEDEF_GETNEGATIVELIMITIMPL_T
	typedef void* GETNEGATIVELIMITIMPL_T;
#endif /* EXTERN_TYPEDEF_GETNEGATIVELIMITIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED GETNEGATIVELIMITIMPL_T GetNegativeLimitImpl_Create();
	EXPORTED GETNEGATIVELIMITIMPL_T GetNegativeLimitImpl_Create_1(UNIRS232_T serPort);
	EXPORTED int GetNegativeLimitImpl_getNegativeLimit(GETNEGATIVELIMITIMPL_T c_get_negative_limit_impl, NODE_T node);
	EXPORTED void GetNegativeLimitImpl_Destroy(GETNEGATIVELIMITIMPL_T get_negative_limit_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GETNEGATIVELIMITIMPL_T STDCALL GetNegativeLimitImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED int STDCALL GetNegativeLimitImpl_getNegativeLimit_stdcall(GETNEGATIVELIMITIMPL_T c_get_negative_limit_impl, NODE_T node);
	EXPORTED void STDCALL GetNegativeLimitImpl_Destroy_stdcall(GETNEGATIVELIMITIMPL_T get_negative_limit_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETNEGATIVELIMITIMPL_H */

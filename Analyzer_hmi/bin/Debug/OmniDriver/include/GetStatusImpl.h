/**
 * File: GetStatusImpl.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * GetStatusImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getstatus/GetStatusImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETSTATUSIMPL_H
#define GETSTATUSIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandStringResponse.h"
#include "UniRS232.h"
#include "JString.h"
#include "GetStatus$Status.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandStringResponse;
class UniRS232;
class JString;
class GetStatus$Status;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetStatusImpl : public FaulhaberCommandStringResponse // CPPClass.tag001
{
public: 
	GetStatusImpl(UniRS232& serPort);
	GetStatus$Status decodeStatus(JString& str);
	GetStatus$Status getStatus(Node& node);
	~GetStatusImpl();
	// No public default Java constructor; creating one:
	GetStatusImpl();
	// No public Java copy constructor; creating one:
	GetStatusImpl(const GetStatusImpl &that);
	// Creating assignment operator declaration:
	GetStatusImpl &operator=(const GetStatusImpl &that);

private:
	jmethodID mid_GetStatusImpl102;
	jmethodID mid_decodeStatus103;
	jmethodID mid_getStatus104;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FAULHABERCOMMANDSTRINGRESPONSE_T
#define EXTERN_TYPEDEF_FAULHABERCOMMANDSTRINGRESPONSE_T
	typedef void* FAULHABERCOMMANDSTRINGRESPONSE_T;
#endif /* EXTERN_TYPEDEF_FAULHABERCOMMANDSTRINGRESPONSE_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_GETSTATUS$STATUS_T
#define EXTERN_TYPEDEF_GETSTATUS$STATUS_T
	typedef void* GETSTATUS$STATUS_T;
#endif /* EXTERN_TYPEDEF_GETSTATUS$STATUS_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETSTATUSIMPL_T
#define EXTERN_TYPEDEF_GETSTATUSIMPL_T
	typedef void* GETSTATUSIMPL_T;
#endif /* EXTERN_TYPEDEF_GETSTATUSIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED GETSTATUSIMPL_T GetStatusImpl_Create();
	EXPORTED GETSTATUSIMPL_T GetStatusImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void GetStatusImpl_decodeStatus(GETSTATUSIMPL_T c_get_status_impl, JSTRING_T str, GETSTATUS$STATUS_T retval);
	EXPORTED void GetStatusImpl_getStatus(GETSTATUSIMPL_T c_get_status_impl, NODE_T node, GETSTATUS$STATUS_T retval);
	EXPORTED void GetStatusImpl_Destroy(GETSTATUSIMPL_T get_status_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GETSTATUSIMPL_T STDCALL GetStatusImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL GetStatusImpl_decodeStatus_stdcall(GETSTATUSIMPL_T c_get_status_impl, JSTRING_T str, GETSTATUS$STATUS_T retval);
	EXPORTED void STDCALL GetStatusImpl_getStatus_stdcall(GETSTATUSIMPL_T c_get_status_impl, NODE_T node, GETSTATUS$STATUS_T retval);
	EXPORTED void STDCALL GetStatusImpl_Destroy_stdcall(GETSTATUSIMPL_T get_status_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETSTATUSIMPL_H */

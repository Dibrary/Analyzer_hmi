/**
 * File: GetOperationStatusImpl.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * GetOperationStatusImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getoperationstatus/GetOperationStatusImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETOPERATIONSTATUSIMPL_H
#define GETOPERATIONSTATUSIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandIntegerResponse.h"
#include "UniRS232.h"
#include "GetOperationStatus$OperationStatus.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandIntegerResponse;
class UniRS232;
class GetOperationStatus$OperationStatus;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetOperationStatusImpl : public FaulhaberCommandIntegerResponse // CPPClass.tag001
{
public: 
	GetOperationStatusImpl(UniRS232& serPort);
	GetOperationStatus$OperationStatus decodeStatus(int resp);
	GetOperationStatus$OperationStatus getOperationStatus(Node& node);
	~GetOperationStatusImpl();
	// No public default Java constructor; creating one:
	GetOperationStatusImpl();
	// No public Java copy constructor; creating one:
	GetOperationStatusImpl(const GetOperationStatusImpl &that);
	// Creating assignment operator declaration:
	GetOperationStatusImpl &operator=(const GetOperationStatusImpl &that);

private:
	jmethodID mid_GetOperationStatusImpl86;
	jmethodID mid_decodeStatus87;
	jmethodID mid_getOperationStatus88;
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
#ifndef EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T
#define EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T
	typedef void* GETOPERATIONSTATUS$OPERATIONSTATUS_T;
#endif /* EXTERN_TYPEDEF_GETOPERATIONSTATUS$OPERATIONSTATUS_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETOPERATIONSTATUSIMPL_T
#define EXTERN_TYPEDEF_GETOPERATIONSTATUSIMPL_T
	typedef void* GETOPERATIONSTATUSIMPL_T;
#endif /* EXTERN_TYPEDEF_GETOPERATIONSTATUSIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED GETOPERATIONSTATUSIMPL_T GetOperationStatusImpl_Create();
	EXPORTED GETOPERATIONSTATUSIMPL_T GetOperationStatusImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void GetOperationStatusImpl_decodeStatus(GETOPERATIONSTATUSIMPL_T c_get_operation_status_impl, int resp, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED void GetOperationStatusImpl_getOperationStatus(GETOPERATIONSTATUSIMPL_T c_get_operation_status_impl, NODE_T node, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED void GetOperationStatusImpl_Destroy(GETOPERATIONSTATUSIMPL_T get_operation_status_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GETOPERATIONSTATUSIMPL_T STDCALL GetOperationStatusImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL GetOperationStatusImpl_decodeStatus_stdcall(GETOPERATIONSTATUSIMPL_T c_get_operation_status_impl, int resp, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED void STDCALL GetOperationStatusImpl_getOperationStatus_stdcall(GETOPERATIONSTATUSIMPL_T c_get_operation_status_impl, NODE_T node, GETOPERATIONSTATUS$OPERATIONSTATUS_T retval);
	EXPORTED void STDCALL GetOperationStatusImpl_Destroy_stdcall(GETOPERATIONSTATUSIMPL_T get_operation_status_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETOPERATIONSTATUSIMPL_H */
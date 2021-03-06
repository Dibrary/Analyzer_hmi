/**
 * File: GetTemperatureImpl.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * GetTemperatureImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/gettemperature/GetTemperatureImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETTEMPERATUREIMPL_H
#define GETTEMPERATUREIMPL_H
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

CLASS_TOKEN EXPORTED GetTemperatureImpl : public FaulhaberCommandIntegerResponse // CPPClass.tag001
{
public: 
	GetTemperatureImpl(UniRS232& serPort);
	int getTemperature(Node& node);
	~GetTemperatureImpl();
	// No public default Java constructor; creating one:
	GetTemperatureImpl();
	// No public Java copy constructor; creating one:
	GetTemperatureImpl(const GetTemperatureImpl &that);
	// Creating assignment operator declaration:
	GetTemperatureImpl &operator=(const GetTemperatureImpl &that);

private:
	jmethodID mid_GetTemperatureImpl109;
	jmethodID mid_getTemperature110;
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
#ifndef EXTERN_TYPEDEF_GETTEMPERATUREIMPL_T
#define EXTERN_TYPEDEF_GETTEMPERATUREIMPL_T
	typedef void* GETTEMPERATUREIMPL_T;
#endif /* EXTERN_TYPEDEF_GETTEMPERATUREIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED GETTEMPERATUREIMPL_T GetTemperatureImpl_Create();
	EXPORTED GETTEMPERATUREIMPL_T GetTemperatureImpl_Create_1(UNIRS232_T serPort);
	EXPORTED int GetTemperatureImpl_getTemperature(GETTEMPERATUREIMPL_T c_get_temperature_impl, NODE_T node);
	EXPORTED void GetTemperatureImpl_Destroy(GETTEMPERATUREIMPL_T get_temperature_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GETTEMPERATUREIMPL_T STDCALL GetTemperatureImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED int STDCALL GetTemperatureImpl_getTemperature_stdcall(GETTEMPERATUREIMPL_T c_get_temperature_impl, NODE_T node);
	EXPORTED void STDCALL GetTemperatureImpl_Destroy_stdcall(GETTEMPERATUREIMPL_T get_temperature_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETTEMPERATUREIMPL_H */

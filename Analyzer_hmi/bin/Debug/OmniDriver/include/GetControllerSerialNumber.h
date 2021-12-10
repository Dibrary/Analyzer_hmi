/**
 * File: GetControllerSerialNumber.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetControllerSerialNumber.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getcontrollerserialnumber/GetControllerSerialNumber
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETCONTROLLERSERIALNUMBER_H
#define GETCONTROLLERSERIALNUMBER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetControllerSerialNumber : public BaseJavaClass // CPPClass.tag001
{
public: 
	JString getControllerSerialNumber(Node& param0);
	~GetControllerSerialNumber();
	// No public default Java constructor; creating one:
	GetControllerSerialNumber();
	// No public Java copy constructor; creating one:
	GetControllerSerialNumber(const GetControllerSerialNumber &that);
	// Creating assignment operator declaration:
	GetControllerSerialNumber &operator=(const GetControllerSerialNumber &that);

private:
	jmethodID mid_getControllerSerialNumber64;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_GETCONTROLLERSERIALNUMBER_T
#define EXTERN_TYPEDEF_GETCONTROLLERSERIALNUMBER_T
	typedef void* GETCONTROLLERSERIALNUMBER_T;
#endif /* EXTERN_TYPEDEF_GETCONTROLLERSERIALNUMBER_T */

	// No public default Java constructor; creating one:
	EXPORTED GETCONTROLLERSERIALNUMBER_T GetControllerSerialNumber_Create();
	EXPORTED void GetControllerSerialNumber_getControllerSerialNumber(GETCONTROLLERSERIALNUMBER_T c_get_controller_serial_number, NODE_T param0, JSTRING_T retval);
	EXPORTED void GetControllerSerialNumber_Destroy(GETCONTROLLERSERIALNUMBER_T get_controller_serial_number);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL GetControllerSerialNumber_getControllerSerialNumber_stdcall(GETCONTROLLERSERIALNUMBER_T c_get_controller_serial_number, NODE_T param0, JSTRING_T retval);
	EXPORTED void STDCALL GetControllerSerialNumber_Destroy_stdcall(GETCONTROLLERSERIALNUMBER_T get_controller_serial_number);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETCONTROLLERSERIALNUMBER_H */
/**
 * File: GetSpeed.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * GetSpeed.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getspeed/GetSpeed
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETSPEED_H
#define GETSPEED_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetSpeed : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getSpeed(Node& param0);
	~GetSpeed();
	// No public default Java constructor; creating one:
	GetSpeed();
	// No public Java copy constructor; creating one:
	GetSpeed(const GetSpeed &that);
	// Creating assignment operator declaration:
	GetSpeed &operator=(const GetSpeed &that);

private:
	jmethodID mid_getSpeed98;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETSPEED_T
#define EXTERN_TYPEDEF_GETSPEED_T
	typedef void* GETSPEED_T;
#endif /* EXTERN_TYPEDEF_GETSPEED_T */

	// No public default Java constructor; creating one:
	EXPORTED GETSPEED_T GetSpeed_Create();
	EXPORTED int GetSpeed_getSpeed(GETSPEED_T c_get_speed, NODE_T param0);
	EXPORTED void GetSpeed_Destroy(GETSPEED_T get_speed);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL GetSpeed_getSpeed_stdcall(GETSPEED_T c_get_speed, NODE_T param0);
	EXPORTED void STDCALL GetSpeed_Destroy_stdcall(GETSPEED_T get_speed);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETSPEED_H */

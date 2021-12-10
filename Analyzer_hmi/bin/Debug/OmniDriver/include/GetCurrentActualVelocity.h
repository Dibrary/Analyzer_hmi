/**
 * File: GetCurrentActualVelocity.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetCurrentActualVelocity.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getcurrentactualvelocity/GetCurrentActualVelocity
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETCURRENTACTUALVELOCITY_H
#define GETCURRENTACTUALVELOCITY_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetCurrentActualVelocity : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getCurrentActualVelocity(Node& param0);
	~GetCurrentActualVelocity();
	// No public default Java constructor; creating one:
	GetCurrentActualVelocity();
	// No public Java copy constructor; creating one:
	GetCurrentActualVelocity(const GetCurrentActualVelocity &that);
	// Creating assignment operator declaration:
	GetCurrentActualVelocity &operator=(const GetCurrentActualVelocity &that);

private:
	jmethodID mid_getCurrentActualVelocity70;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITY_T
#define EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITY_T
	typedef void* GETCURRENTACTUALVELOCITY_T;
#endif /* EXTERN_TYPEDEF_GETCURRENTACTUALVELOCITY_T */

	// No public default Java constructor; creating one:
	EXPORTED GETCURRENTACTUALVELOCITY_T GetCurrentActualVelocity_Create();
	EXPORTED int GetCurrentActualVelocity_getCurrentActualVelocity(GETCURRENTACTUALVELOCITY_T c_get_current_actual_velocity, NODE_T param0);
	EXPORTED void GetCurrentActualVelocity_Destroy(GETCURRENTACTUALVELOCITY_T get_current_actual_velocity);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL GetCurrentActualVelocity_getCurrentActualVelocity_stdcall(GETCURRENTACTUALVELOCITY_T c_get_current_actual_velocity, NODE_T param0);
	EXPORTED void STDCALL GetCurrentActualVelocity_Destroy_stdcall(GETCURRENTACTUALVELOCITY_T get_current_actual_velocity);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETCURRENTACTUALVELOCITY_H */

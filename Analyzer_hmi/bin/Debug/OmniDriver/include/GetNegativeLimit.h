/**
 * File: GetNegativeLimit.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * GetNegativeLimit.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/getnegativelimit/GetNegativeLimit
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GETNEGATIVELIMIT_H
#define GETNEGATIVELIMIT_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GetNegativeLimit : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getNegativeLimit(Node& param0);
	~GetNegativeLimit();
	// No public default Java constructor; creating one:
	GetNegativeLimit();
	// No public Java copy constructor; creating one:
	GetNegativeLimit(const GetNegativeLimit &that);
	// Creating assignment operator declaration:
	GetNegativeLimit &operator=(const GetNegativeLimit &that);

private:
	jmethodID mid_getNegativeLimit79;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_GETNEGATIVELIMIT_T
#define EXTERN_TYPEDEF_GETNEGATIVELIMIT_T
	typedef void* GETNEGATIVELIMIT_T;
#endif /* EXTERN_TYPEDEF_GETNEGATIVELIMIT_T */

	// No public default Java constructor; creating one:
	EXPORTED GETNEGATIVELIMIT_T GetNegativeLimit_Create();
	EXPORTED int GetNegativeLimit_getNegativeLimit(GETNEGATIVELIMIT_T c_get_negative_limit, NODE_T param0);
	EXPORTED void GetNegativeLimit_Destroy(GETNEGATIVELIMIT_T get_negative_limit);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL GetNegativeLimit_getNegativeLimit_stdcall(GETNEGATIVELIMIT_T c_get_negative_limit, NODE_T param0);
	EXPORTED void STDCALL GetNegativeLimit_Destroy_stdcall(GETNEGATIVELIMIT_T get_negative_limit);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GETNEGATIVELIMIT_H */

/**
 * File: EnableDrive.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * EnableDrive.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/enabledrive/EnableDrive
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ENABLEDRIVE_H
#define ENABLEDRIVE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED EnableDrive : public BaseJavaClass // CPPClass.tag001
{
public: 
	void enableDrive(Node& param0);
	~EnableDrive();
	// No public default Java constructor; creating one:
	EnableDrive();
	// No public Java copy constructor; creating one:
	EnableDrive(const EnableDrive &that);
	// Creating assignment operator declaration:
	EnableDrive &operator=(const EnableDrive &that);

private:
	jmethodID mid_enableDrive49;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_ENABLEDRIVE_T
#define EXTERN_TYPEDEF_ENABLEDRIVE_T
	typedef void* ENABLEDRIVE_T;
#endif /* EXTERN_TYPEDEF_ENABLEDRIVE_T */

	// No public default Java constructor; creating one:
	EXPORTED ENABLEDRIVE_T EnableDrive_Create();
	EXPORTED void EnableDrive_enableDrive(ENABLEDRIVE_T c_enable_drive, NODE_T param0);
	EXPORTED void EnableDrive_Destroy(ENABLEDRIVE_T enable_drive);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL EnableDrive_enableDrive_stdcall(ENABLEDRIVE_T c_enable_drive, NODE_T param0);
	EXPORTED void STDCALL EnableDrive_Destroy_stdcall(ENABLEDRIVE_T enable_drive);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ENABLEDRIVE_H */

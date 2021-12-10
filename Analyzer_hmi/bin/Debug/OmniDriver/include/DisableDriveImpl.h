/**
 * File: DisableDriveImpl.h
 * Autogenerated on Fri Mar 23 13:38:22 EDT 2018 based on
 * DisableDriveImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/disabledrive/DisableDriveImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DISABLEDRIVEIMPL_H
#define DISABLEDRIVEIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FaulhaberCommandOnly.h"
#include "UniRS232.h"
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FaulhaberCommandOnly;
class UniRS232;
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED DisableDriveImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	DisableDriveImpl(UniRS232& serPort);
	void disableDrive(Node& node);
	~DisableDriveImpl();
	// No public default Java constructor; creating one:
	DisableDriveImpl();
	// No public Java copy constructor; creating one:
	DisableDriveImpl(const DisableDriveImpl &that);
	// Creating assignment operator declaration:
	DisableDriveImpl &operator=(const DisableDriveImpl &that);

private:
	jmethodID mid_DisableDriveImpl44;
	jmethodID mid_disableDrive45;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
#define EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T
	typedef void* FAULHABERCOMMANDONLY_T;
#endif /* EXTERN_TYPEDEF_FAULHABERCOMMANDONLY_T */
#ifndef EXTERN_TYPEDEF_UNIRS232_T
#define EXTERN_TYPEDEF_UNIRS232_T
	typedef void* UNIRS232_T;
#endif /* EXTERN_TYPEDEF_UNIRS232_T */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_DISABLEDRIVEIMPL_T
#define EXTERN_TYPEDEF_DISABLEDRIVEIMPL_T
	typedef void* DISABLEDRIVEIMPL_T;
#endif /* EXTERN_TYPEDEF_DISABLEDRIVEIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED DISABLEDRIVEIMPL_T DisableDriveImpl_Create();
	EXPORTED DISABLEDRIVEIMPL_T DisableDriveImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void DisableDriveImpl_disableDrive(DISABLEDRIVEIMPL_T c_disable_drive_impl, NODE_T node);
	EXPORTED void DisableDriveImpl_Destroy(DISABLEDRIVEIMPL_T disable_drive_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED DISABLEDRIVEIMPL_T STDCALL DisableDriveImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL DisableDriveImpl_disableDrive_stdcall(DISABLEDRIVEIMPL_T c_disable_drive_impl, NODE_T node);
	EXPORTED void STDCALL DisableDriveImpl_Destroy_stdcall(DISABLEDRIVEIMPL_T disable_drive_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DISABLEDRIVEIMPL_H */
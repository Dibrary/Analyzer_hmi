/**
 * File: MoveAndWaitImpl.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * MoveAndWaitImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/moveandwait/MoveAndWaitImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MOVEANDWAITIMPL_H
#define MOVEANDWAITIMPL_H
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

CLASS_TOKEN EXPORTED MoveAndWaitImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	MoveAndWaitImpl(UniRS232& serPort);
	void moveAndWait(Node& node, long long millis);
	~MoveAndWaitImpl();
	// No public default Java constructor; creating one:
	MoveAndWaitImpl();
	// No public Java copy constructor; creating one:
	MoveAndWaitImpl(const MoveAndWaitImpl &that);
	// Creating assignment operator declaration:
	MoveAndWaitImpl &operator=(const MoveAndWaitImpl &that);

private:
	jmethodID mid_MoveAndWaitImpl127;
	jmethodID mid_moveAndWait128;
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
#ifndef EXTERN_TYPEDEF_MOVEANDWAITIMPL_T
#define EXTERN_TYPEDEF_MOVEANDWAITIMPL_T
	typedef void* MOVEANDWAITIMPL_T;
#endif /* EXTERN_TYPEDEF_MOVEANDWAITIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED MOVEANDWAITIMPL_T MoveAndWaitImpl_Create();
	EXPORTED MOVEANDWAITIMPL_T MoveAndWaitImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void MoveAndWaitImpl_moveAndWait(MOVEANDWAITIMPL_T c_move_and_wait_impl, NODE_T node, long long millis);
	EXPORTED void MoveAndWaitImpl_Destroy(MOVEANDWAITIMPL_T move_and_wait_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MOVEANDWAITIMPL_T STDCALL MoveAndWaitImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL MoveAndWaitImpl_moveAndWait_stdcall(MOVEANDWAITIMPL_T c_move_and_wait_impl, NODE_T node, long long millis);
	EXPORTED void STDCALL MoveAndWaitImpl_Destroy_stdcall(MOVEANDWAITIMPL_T move_and_wait_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MOVEANDWAITIMPL_H */

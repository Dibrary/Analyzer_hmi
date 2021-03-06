/**
 * File: NotifyPositionDisable.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * NotifyPositionDisable.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/notifypositiondisable/NotifyPositionDisable
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NOTIFYPOSITIONDISABLE_H
#define NOTIFYPOSITIONDISABLE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED NotifyPositionDisable : public BaseJavaClass // CPPClass.tag001
{
public: 
	void notifyPositionDisable(Node& param0);
	~NotifyPositionDisable();
	// No public default Java constructor; creating one:
	NotifyPositionDisable();
	// No public Java copy constructor; creating one:
	NotifyPositionDisable(const NotifyPositionDisable &that);
	// Creating assignment operator declaration:
	NotifyPositionDisable &operator=(const NotifyPositionDisable &that);

private:
	jmethodID mid_notifyPositionDisable129;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_NOTIFYPOSITIONDISABLE_T
#define EXTERN_TYPEDEF_NOTIFYPOSITIONDISABLE_T
	typedef void* NOTIFYPOSITIONDISABLE_T;
#endif /* EXTERN_TYPEDEF_NOTIFYPOSITIONDISABLE_T */

	// No public default Java constructor; creating one:
	EXPORTED NOTIFYPOSITIONDISABLE_T NotifyPositionDisable_Create();
	EXPORTED void NotifyPositionDisable_notifyPositionDisable(NOTIFYPOSITIONDISABLE_T c_notify_position_disable, NODE_T param0);
	EXPORTED void NotifyPositionDisable_Destroy(NOTIFYPOSITIONDISABLE_T notify_position_disable);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL NotifyPositionDisable_notifyPositionDisable_stdcall(NOTIFYPOSITIONDISABLE_T c_notify_position_disable, NODE_T param0);
	EXPORTED void STDCALL NotifyPositionDisable_Destroy_stdcall(NOTIFYPOSITIONDISABLE_T notify_position_disable);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NOTIFYPOSITIONDISABLE_H */

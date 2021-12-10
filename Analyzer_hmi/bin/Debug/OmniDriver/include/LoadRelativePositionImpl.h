/**
 * File: LoadRelativePositionImpl.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * LoadRelativePositionImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/loadrelativeposition/LoadRelativePositionImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LOADRELATIVEPOSITIONIMPL_H
#define LOADRELATIVEPOSITIONIMPL_H
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

CLASS_TOKEN EXPORTED LoadRelativePositionImpl : public FaulhaberCommandOnly // CPPClass.tag001
{
public: 
	LoadRelativePositionImpl(UniRS232& serPort);
	void loadRelativePosition(Node& node, int position);
	~LoadRelativePositionImpl();
	// No public default Java constructor; creating one:
	LoadRelativePositionImpl();
	// No public Java copy constructor; creating one:
	LoadRelativePositionImpl(const LoadRelativePositionImpl &that);
	// Creating assignment operator declaration:
	LoadRelativePositionImpl &operator=(const LoadRelativePositionImpl &that);

private:
	jmethodID mid_LoadRelativePositionImpl121;
	jmethodID mid_loadRelativePosition122;
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
#ifndef EXTERN_TYPEDEF_LOADRELATIVEPOSITIONIMPL_T
#define EXTERN_TYPEDEF_LOADRELATIVEPOSITIONIMPL_T
	typedef void* LOADRELATIVEPOSITIONIMPL_T;
#endif /* EXTERN_TYPEDEF_LOADRELATIVEPOSITIONIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED LOADRELATIVEPOSITIONIMPL_T LoadRelativePositionImpl_Create();
	EXPORTED LOADRELATIVEPOSITIONIMPL_T LoadRelativePositionImpl_Create_1(UNIRS232_T serPort);
	EXPORTED void LoadRelativePositionImpl_loadRelativePosition(LOADRELATIVEPOSITIONIMPL_T c_load_relative_position_impl, NODE_T node, int position);
	EXPORTED void LoadRelativePositionImpl_Destroy(LOADRELATIVEPOSITIONIMPL_T load_relative_position_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED LOADRELATIVEPOSITIONIMPL_T STDCALL LoadRelativePositionImpl_Create_stdcall_1(UNIRS232_T serPort);
	EXPORTED void STDCALL LoadRelativePositionImpl_loadRelativePosition_stdcall(LOADRELATIVEPOSITIONIMPL_T c_load_relative_position_impl, NODE_T node, int position);
	EXPORTED void STDCALL LoadRelativePositionImpl_Destroy_stdcall(LOADRELATIVEPOSITIONIMPL_T load_relative_position_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LOADRELATIVEPOSITIONIMPL_H */
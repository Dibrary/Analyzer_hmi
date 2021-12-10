/**
 * File: LoadRelativePosition.h
 * Autogenerated on Fri Mar 23 13:38:23 EDT 2018 based on
 * LoadRelativePosition.java
 * for the Java class
 * com/oceanoptics/omnidriver/accessories/mikropack/commands/loadrelativeposition/LoadRelativePosition
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LOADRELATIVEPOSITION_H
#define LOADRELATIVEPOSITION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Node.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Node;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED LoadRelativePosition : public BaseJavaClass // CPPClass.tag001
{
public: 
	void loadRelativePosition(Node& param0, int param1);
	~LoadRelativePosition();
	// No public default Java constructor; creating one:
	LoadRelativePosition();
	// No public Java copy constructor; creating one:
	LoadRelativePosition(const LoadRelativePosition &that);
	// Creating assignment operator declaration:
	LoadRelativePosition &operator=(const LoadRelativePosition &that);

private:
	jmethodID mid_loadRelativePosition120;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NODE_T
#define EXTERN_TYPEDEF_NODE_T
	typedef void* NODE_T;
#endif /* EXTERN_TYPEDEF_NODE_T */
#ifndef EXTERN_TYPEDEF_LOADRELATIVEPOSITION_T
#define EXTERN_TYPEDEF_LOADRELATIVEPOSITION_T
	typedef void* LOADRELATIVEPOSITION_T;
#endif /* EXTERN_TYPEDEF_LOADRELATIVEPOSITION_T */

	// No public default Java constructor; creating one:
	EXPORTED LOADRELATIVEPOSITION_T LoadRelativePosition_Create();
	EXPORTED void LoadRelativePosition_loadRelativePosition(LOADRELATIVEPOSITION_T c_load_relative_position, NODE_T param0, int param1);
	EXPORTED void LoadRelativePosition_Destroy(LOADRELATIVEPOSITION_T load_relative_position);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL LoadRelativePosition_loadRelativePosition_stdcall(LOADRELATIVEPOSITION_T c_load_relative_position, NODE_T param0, int param1);
	EXPORTED void STDCALL LoadRelativePosition_Destroy_stdcall(LOADRELATIVEPOSITION_T load_relative_position);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LOADRELATIVEPOSITION_H */

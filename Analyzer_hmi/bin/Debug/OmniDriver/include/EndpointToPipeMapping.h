/**
 * File: EndpointToPipeMapping.h
 * Autogenerated on Fri Mar 23 13:39:20 EDT 2018 based on
 * EndpointToPipeMapping.java
 * for the Java class
 * com/oceanoptics/uniusb/EndpointToPipeMapping
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ENDPOINTTOPIPEMAPPING_H
#define ENDPOINTTOPIPEMAPPING_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED EndpointToPipeMapping : public BaseJavaClass // CPPClass.tag001
{
public: 
	EndpointToPipeMapping();
	void addMapping(int pipe, short endpoint);
	int getPipe(short endpoint);
	~EndpointToPipeMapping();
	// No public Java copy constructor; creating one:
	EndpointToPipeMapping(const EndpointToPipeMapping &that);
	// Creating assignment operator declaration:
	EndpointToPipeMapping &operator=(const EndpointToPipeMapping &that);

private:
	jmethodID mid_EndpointToPipeMapping6573;
	jmethodID mid_addMapping6574;
	jmethodID mid_getPipe6575;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ENDPOINTTOPIPEMAPPING_T
#define EXTERN_TYPEDEF_ENDPOINTTOPIPEMAPPING_T
	typedef void* ENDPOINTTOPIPEMAPPING_T;
#endif /* EXTERN_TYPEDEF_ENDPOINTTOPIPEMAPPING_T */

	EXPORTED ENDPOINTTOPIPEMAPPING_T EndpointToPipeMapping_Create();
	EXPORTED void EndpointToPipeMapping_addMapping(ENDPOINTTOPIPEMAPPING_T c_endpoint_to_pipe_mapping, int pipe, short endpoint);
	EXPORTED int EndpointToPipeMapping_getPipe(ENDPOINTTOPIPEMAPPING_T c_endpoint_to_pipe_mapping, short endpoint);
	EXPORTED void EndpointToPipeMapping_Destroy(ENDPOINTTOPIPEMAPPING_T endpoint_to_pipe_mapping);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ENDPOINTTOPIPEMAPPING_T STDCALL EndpointToPipeMapping_Create_stdcall();
	EXPORTED void STDCALL EndpointToPipeMapping_addMapping_stdcall(ENDPOINTTOPIPEMAPPING_T c_endpoint_to_pipe_mapping, int pipe, short endpoint);
	EXPORTED int STDCALL EndpointToPipeMapping_getPipe_stdcall(ENDPOINTTOPIPEMAPPING_T c_endpoint_to_pipe_mapping, short endpoint);
	EXPORTED void STDCALL EndpointToPipeMapping_Destroy_stdcall(ENDPOINTTOPIPEMAPPING_T endpoint_to_pipe_mapping);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ENDPOINTTOPIPEMAPPING_H */

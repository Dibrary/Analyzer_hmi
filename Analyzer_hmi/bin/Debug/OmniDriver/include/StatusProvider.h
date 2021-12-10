/**
 * File: StatusProvider.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * StatusProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/statusprovider/StatusProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef STATUSPROVIDER_H
#define STATUSPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrometerStatus.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerStatus;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED StatusProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	SpectrometerStatus getStatus();
	~StatusProvider();
	// No public default Java constructor; creating one:
	StatusProvider();
	// No public Java copy constructor; creating one:
	StatusProvider(const StatusProvider &that);
	// Creating assignment operator declaration:
	StatusProvider &operator=(const StatusProvider &that);

private:
	jmethodID mid_getStatus2091;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
#define EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
	typedef void* SPECTROMETERSTATUS_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERSTATUS_T */
#ifndef EXTERN_TYPEDEF_STATUSPROVIDER_T
#define EXTERN_TYPEDEF_STATUSPROVIDER_T
	typedef void* STATUSPROVIDER_T;
#endif /* EXTERN_TYPEDEF_STATUSPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED STATUSPROVIDER_T StatusProvider_Create();
	EXPORTED void StatusProvider_getStatus(STATUSPROVIDER_T c_status_provider, SPECTROMETERSTATUS_T retval);
	EXPORTED void StatusProvider_Destroy(STATUSPROVIDER_T status_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL StatusProvider_getStatus_stdcall(STATUSPROVIDER_T c_status_provider, SPECTROMETERSTATUS_T retval);
	EXPORTED void STDCALL StatusProvider_Destroy_stdcall(STATUSPROVIDER_T status_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* STATUSPROVIDER_H */
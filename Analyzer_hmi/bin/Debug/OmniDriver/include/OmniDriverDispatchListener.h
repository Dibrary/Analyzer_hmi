/**
 * File: OmniDriverDispatchListener.h
 * Autogenerated on Fri Mar 23 13:38:43 EDT 2018 based on
 * OmniDriverDispatchListener.java
 * for the Java class
 * com/oceanoptics/omnidriver/interfaces/OmniDriverDispatchListener
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef OMNIDRIVERDISPATCHLISTENER_H
#define OMNIDRIVERDISPATCHLISTENER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ErrorCode.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ErrorCode;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED OmniDriverDispatchListener : public BaseJavaClass // CPPClass.tag001
{
public: 
	void dispatchError(ErrorCode& param0, int param1);
	~OmniDriverDispatchListener();
	// No public default Java constructor; creating one:
	OmniDriverDispatchListener();
	// No public Java copy constructor; creating one:
	OmniDriverDispatchListener(const OmniDriverDispatchListener &that);
	// Creating assignment operator declaration:
	OmniDriverDispatchListener &operator=(const OmniDriverDispatchListener &that);

private:
	jmethodID mid_dispatchError2562;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ERRORCODE_T
#define EXTERN_TYPEDEF_ERRORCODE_T
	typedef void* ERRORCODE_T;
#endif /* EXTERN_TYPEDEF_ERRORCODE_T */
#ifndef EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T
#define EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T
	typedef void* OMNIDRIVERDISPATCHLISTENER_T;
#endif /* EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T */

	// No public default Java constructor; creating one:
	EXPORTED OMNIDRIVERDISPATCHLISTENER_T OmniDriverDispatchListener_Create();
	EXPORTED void OmniDriverDispatchListener_dispatchError(OMNIDRIVERDISPATCHLISTENER_T c_omni_driver_dispatch_listener, ERRORCODE_T param0, int param1);
	EXPORTED void OmniDriverDispatchListener_Destroy(OMNIDRIVERDISPATCHLISTENER_T omni_driver_dispatch_listener);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL OmniDriverDispatchListener_dispatchError_stdcall(OMNIDRIVERDISPATCHLISTENER_T c_omni_driver_dispatch_listener, ERRORCODE_T param0, int param1);
	EXPORTED void STDCALL OmniDriverDispatchListener_Destroy_stdcall(OMNIDRIVERDISPATCHLISTENER_T omni_driver_dispatch_listener);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* OMNIDRIVERDISPATCHLISTENER_H */

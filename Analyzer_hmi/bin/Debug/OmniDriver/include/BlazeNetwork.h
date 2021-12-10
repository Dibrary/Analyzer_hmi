/**
 * File: BlazeNetwork.h
 * Autogenerated on Fri Mar 23 13:38:50 EDT 2018 based on
 * BlazeNetwork.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/blazer/BlazeNetwork
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BLAZENETWORK_H
#define BLAZENETWORK_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "NextGenNetwork.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class NextGenNetwork;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED BlazeNetwork : public NextGenNetwork // CPPClass.tag001
{
public: 
	int getNumberOfPixels(int index);
	~BlazeNetwork();
	// No public default Java constructor; creating one:
	BlazeNetwork();
	// No public Java copy constructor; creating one:
	BlazeNetwork(const BlazeNetwork &that);
	// Creating assignment operator declaration:
	BlazeNetwork &operator=(const BlazeNetwork &that);

private:
	jmethodID mid_getNumberOfPixels3284;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NEXTGENNETWORK_T
#define EXTERN_TYPEDEF_NEXTGENNETWORK_T
	typedef void* NEXTGENNETWORK_T;
#endif /* EXTERN_TYPEDEF_NEXTGENNETWORK_T */
#ifndef EXTERN_TYPEDEF_BLAZENETWORK_T
#define EXTERN_TYPEDEF_BLAZENETWORK_T
	typedef void* BLAZENETWORK_T;
#endif /* EXTERN_TYPEDEF_BLAZENETWORK_T */

	// No public default Java constructor; creating one:
	EXPORTED BLAZENETWORK_T BlazeNetwork_Create();
	EXPORTED int BlazeNetwork_getNumberOfPixels(BLAZENETWORK_T c_blaze_network, int index);
	EXPORTED void BlazeNetwork_Destroy(BLAZENETWORK_T blaze_network);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL BlazeNetwork_getNumberOfPixels_stdcall(BLAZENETWORK_T c_blaze_network, int index);
	EXPORTED void STDCALL BlazeNetwork_Destroy_stdcall(BLAZENETWORK_T blaze_network);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BLAZENETWORK_H */
/**
 * File: USBConstants.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * USBConstants.java
 * for the Java class
 * com/oceanoptics/omnidriver/constants/USBConstants
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USBCONSTANTS_H
#define USBCONSTANTS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED USBConstants : public BaseJavaClass // CPPClass.tag001
{
public: 
	USBConstants();
	~USBConstants();
	// No public Java copy constructor; creating one:
	USBConstants(const USBConstants &that);
	// Creating assignment operator declaration:
	USBConstants &operator=(const USBConstants &that);
	int EP_DATA_OUT;
	int EP_HIGH_SPEED_IN_1;
	int EP_HIGH_SPEED_IN_2;
	int EP_DATA_IN;

private:
	jmethodID mid_USBConstants684;
	jfieldID fid_EP_DATA_OUT;
	jfieldID fid_EP_HIGH_SPEED_IN_1;
	jfieldID fid_EP_HIGH_SPEED_IN_2;
	jfieldID fid_EP_DATA_IN;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBCONSTANTS_T
#define EXTERN_TYPEDEF_USBCONSTANTS_T
	typedef void* USBCONSTANTS_T;
#endif /* EXTERN_TYPEDEF_USBCONSTANTS_T */

	EXPORTED USBCONSTANTS_T USBConstants_Create();
	EXPORTED void USBConstants_Destroy(USBCONSTANTS_T usbconstants);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USBCONSTANTS_T STDCALL USBConstants_Create_stdcall();
	EXPORTED void STDCALL USBConstants_Destroy_stdcall(USBCONSTANTS_T usbconstants);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USBCONSTANTS_H */
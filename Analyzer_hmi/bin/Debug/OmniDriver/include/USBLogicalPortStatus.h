/**
 * File: USBLogicalPortStatus.h
 * Autogenerated on Fri Mar 23 13:38:47 EDT 2018 based on
 * USBLogicalPortStatus.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/USBLogicalPortStatus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USBLOGICALPORTSTATUS_H
#define USBLOGICALPORTSTATUS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Spectrometer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Spectrometer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED USBLogicalPortStatus : public BaseJavaClass // CPPClass.tag001
{
public: 
	USBLogicalPortStatus();
	Spectrometer getSpectrometer();
	short isDevicePresent();
	void setDeviceNotPresent();
	void setDevicePresent(Spectrometer& spectrometer);
	~USBLogicalPortStatus();
	// No public Java copy constructor; creating one:
	USBLogicalPortStatus(const USBLogicalPortStatus &that);
	// Creating assignment operator declaration:
	USBLogicalPortStatus &operator=(const USBLogicalPortStatus &that);

private:
	jmethodID mid_USBLogicalPortStatus3050;
	jmethodID mid_getSpectrometer3051;
	jmethodID mid_isDevicePresent3052;
	jmethodID mid_setDeviceNotPresent3053;
	jmethodID mid_setDevicePresent3054;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETER_T
#define EXTERN_TYPEDEF_SPECTROMETER_T
	typedef void* SPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_USBLOGICALPORTSTATUS_T
#define EXTERN_TYPEDEF_USBLOGICALPORTSTATUS_T
	typedef void* USBLOGICALPORTSTATUS_T;
#endif /* EXTERN_TYPEDEF_USBLOGICALPORTSTATUS_T */

	EXPORTED USBLOGICALPORTSTATUS_T USBLogicalPortStatus_Create();
	EXPORTED void USBLogicalPortStatus_getSpectrometer(USBLOGICALPORTSTATUS_T c_usblogicalportstatus, SPECTROMETER_T retval);
	EXPORTED short USBLogicalPortStatus_isDevicePresent(USBLOGICALPORTSTATUS_T c_usblogicalportstatus);
	EXPORTED void USBLogicalPortStatus_setDeviceNotPresent(USBLOGICALPORTSTATUS_T c_usblogicalportstatus);
	EXPORTED void USBLogicalPortStatus_setDevicePresent(USBLOGICALPORTSTATUS_T c_usblogicalportstatus, SPECTROMETER_T spectrometer);
	EXPORTED void USBLogicalPortStatus_Destroy(USBLOGICALPORTSTATUS_T usblogicalportstatus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USBLOGICALPORTSTATUS_T STDCALL USBLogicalPortStatus_Create_stdcall();
	EXPORTED void STDCALL USBLogicalPortStatus_getSpectrometer_stdcall(USBLOGICALPORTSTATUS_T c_usblogicalportstatus, SPECTROMETER_T retval);
	EXPORTED short STDCALL USBLogicalPortStatus_isDevicePresent_stdcall(USBLOGICALPORTSTATUS_T c_usblogicalportstatus);
	EXPORTED void STDCALL USBLogicalPortStatus_setDeviceNotPresent_stdcall(USBLOGICALPORTSTATUS_T c_usblogicalportstatus);
	EXPORTED void STDCALL USBLogicalPortStatus_setDevicePresent_stdcall(USBLOGICALPORTSTATUS_T c_usblogicalportstatus, SPECTROMETER_T spectrometer);
	EXPORTED void STDCALL USBLogicalPortStatus_Destroy_stdcall(USBLOGICALPORTSTATUS_T usblogicalportstatus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USBLOGICALPORTSTATUS_H */

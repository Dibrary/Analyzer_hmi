/**
 * File: AdvancedIntegrationClockImpl.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * AdvancedIntegrationClockImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/advancedintegrationclock/AdvancedIntegrationClockImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ADVANCEDINTEGRATIONCLOCKIMPL_H
#define ADVANCEDINTEGRATIONCLOCKIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FPGAImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FPGAImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AdvancedIntegrationClockImpl : public FPGAImpl // CPPClass.tag001
{
public: 
	AdvancedIntegrationClockImpl(USBInterface& usbInt);
	int getIntegrationClockTimer();
	int getIntegrationTimeBaseClock();
	void setAdvancedIntegrationTime(long long delayMicros);
	long long getAdvancedIntegrationTimeMinimum();
	long long getAdvancedIntegrationTimeMaximum();
	long long getAdvancedIntegrationTimeIncrement();
	void masterClockChanged(long long newValue);
	~AdvancedIntegrationClockImpl();
	// No public default Java constructor; creating one:
	AdvancedIntegrationClockImpl();
	// No public Java copy constructor; creating one:
	AdvancedIntegrationClockImpl(const AdvancedIntegrationClockImpl &that);
	// Creating assignment operator declaration:
	AdvancedIntegrationClockImpl &operator=(const AdvancedIntegrationClockImpl &that);

private:
	jmethodID mid_AdvancedIntegrationClockImpl753;
	jmethodID mid_getIntegrationClockTimer754;
	jmethodID mid_getIntegrationTimeBaseClock755;
	jmethodID mid_setAdvancedIntegrationTime756;
	jmethodID mid_getAdvancedIntegrationTimeMinimum757;
	jmethodID mid_getAdvancedIntegrationTimeMaximum758;
	jmethodID mid_getAdvancedIntegrationTimeIncrement759;
	jmethodID mid_masterClockChanged760;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FPGAIMPL_T
#define EXTERN_TYPEDEF_FPGAIMPL_T
	typedef void* FPGAIMPL_T;
#endif /* EXTERN_TYPEDEF_FPGAIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_ADVANCEDINTEGRATIONCLOCKIMPL_T
#define EXTERN_TYPEDEF_ADVANCEDINTEGRATIONCLOCKIMPL_T
	typedef void* ADVANCEDINTEGRATIONCLOCKIMPL_T;
#endif /* EXTERN_TYPEDEF_ADVANCEDINTEGRATIONCLOCKIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED ADVANCEDINTEGRATIONCLOCKIMPL_T AdvancedIntegrationClockImpl_Create();
	EXPORTED ADVANCEDINTEGRATIONCLOCKIMPL_T AdvancedIntegrationClockImpl_Create_1(USBINTERFACE_T usbInt);
	EXPORTED int AdvancedIntegrationClockImpl_getIntegrationClockTimer(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED int AdvancedIntegrationClockImpl_getIntegrationTimeBaseClock(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED void AdvancedIntegrationClockImpl_setAdvancedIntegrationTime(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl, long long delayMicros);
	EXPORTED long long AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeMinimum(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED long long AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeMaximum(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED long long AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeIncrement(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED void AdvancedIntegrationClockImpl_masterClockChanged(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl, long long newValue);
	EXPORTED void AdvancedIntegrationClockImpl_Destroy(ADVANCEDINTEGRATIONCLOCKIMPL_T advanced_integration_clock_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ADVANCEDINTEGRATIONCLOCKIMPL_T STDCALL AdvancedIntegrationClockImpl_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL AdvancedIntegrationClockImpl_getIntegrationClockTimer_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED int STDCALL AdvancedIntegrationClockImpl_getIntegrationTimeBaseClock_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED void STDCALL AdvancedIntegrationClockImpl_setAdvancedIntegrationTime_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl, long long delayMicros);
	EXPORTED long long STDCALL AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeMinimum_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED long long STDCALL AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeMaximum_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED long long STDCALL AdvancedIntegrationClockImpl_getAdvancedIntegrationTimeIncrement_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl);
	EXPORTED void STDCALL AdvancedIntegrationClockImpl_masterClockChanged_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T c_advanced_integration_clock_impl, long long newValue);
	EXPORTED void STDCALL AdvancedIntegrationClockImpl_Destroy_stdcall(ADVANCEDINTEGRATIONCLOCKIMPL_T advanced_integration_clock_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ADVANCEDINTEGRATIONCLOCKIMPL_H */
/**
 * File: MasterClockRateImpl_ADC.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * MasterClockRateImpl_ADC.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/masterclockrate/MasterClockRateImpl_ADC
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MASTERCLOCKRATEIMPL_ADC_H
#define MASTERCLOCKRATEIMPL_ADC_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "MasterClockRateImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class MasterClockRateImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MasterClockRateImpl_ADC : public MasterClockRateImpl // CPPClass.tag001
{
public: 
	MasterClockRateImpl_ADC(USBInterface& usbInt);
	void setMasterClock(int rate);
	~MasterClockRateImpl_ADC();
	// No public default Java constructor; creating one:
	MasterClockRateImpl_ADC();
	// No public Java copy constructor; creating one:
	MasterClockRateImpl_ADC(const MasterClockRateImpl_ADC &that);
	// Creating assignment operator declaration:
	MasterClockRateImpl_ADC &operator=(const MasterClockRateImpl_ADC &that);

private:
	jmethodID mid_MasterClockRateImpl_ADC1700;
	jmethodID mid_setMasterClock1701;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_T
#define EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_T
	typedef void* MASTERCLOCKRATEIMPL_T;
#endif /* EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_ADC_T
#define EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_ADC_T
	typedef void* MASTERCLOCKRATEIMPL_ADC_T;
#endif /* EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_ADC_T */

	// No public default Java constructor; creating one:
	EXPORTED MASTERCLOCKRATEIMPL_ADC_T MasterClockRateImpl_ADC_Create();
	EXPORTED MASTERCLOCKRATEIMPL_ADC_T MasterClockRateImpl_ADC_Create_1(USBINTERFACE_T usbInt);
	EXPORTED void MasterClockRateImpl_ADC_setMasterClock(MASTERCLOCKRATEIMPL_ADC_T c_master_clock_rate_impl_a_d_c, int rate);
	EXPORTED void MasterClockRateImpl_ADC_Destroy(MASTERCLOCKRATEIMPL_ADC_T master_clock_rate_impl_a_d_c);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MASTERCLOCKRATEIMPL_ADC_T STDCALL MasterClockRateImpl_ADC_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED void STDCALL MasterClockRateImpl_ADC_setMasterClock_stdcall(MASTERCLOCKRATEIMPL_ADC_T c_master_clock_rate_impl_a_d_c, int rate);
	EXPORTED void STDCALL MasterClockRateImpl_ADC_Destroy_stdcall(MASTERCLOCKRATEIMPL_ADC_T master_clock_rate_impl_a_d_c);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MASTERCLOCKRATEIMPL_ADC_H */

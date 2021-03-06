/**
 * File: MasterClockRateImpl_2000.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * MasterClockRateImpl_2000.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/masterclockrate/MasterClockRateImpl_2000
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MASTERCLOCKRATEIMPL_2000_H
#define MASTERCLOCKRATEIMPL_2000_H
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

CLASS_TOKEN EXPORTED MasterClockRateImpl_2000 : public MasterClockRateImpl // CPPClass.tag001
{
public: 
	MasterClockRateImpl_2000(USBInterface& usbInt);
	void setMasterClock(int rate);
	~MasterClockRateImpl_2000();
	// No public default Java constructor; creating one:
	MasterClockRateImpl_2000();
	// No public Java copy constructor; creating one:
	MasterClockRateImpl_2000(const MasterClockRateImpl_2000 &that);
	// Creating assignment operator declaration:
	MasterClockRateImpl_2000 &operator=(const MasterClockRateImpl_2000 &that);

private:
	jmethodID mid_MasterClockRateImpl_20001698;
	jmethodID mid_setMasterClock1699;
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
#ifndef EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_2000_T
#define EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_2000_T
	typedef void* MASTERCLOCKRATEIMPL_2000_T;
#endif /* EXTERN_TYPEDEF_MASTERCLOCKRATEIMPL_2000_T */

	// No public default Java constructor; creating one:
	EXPORTED MASTERCLOCKRATEIMPL_2000_T MasterClockRateImpl_2000_Create();
	EXPORTED MASTERCLOCKRATEIMPL_2000_T MasterClockRateImpl_2000_Create_1(USBINTERFACE_T usbInt);
	EXPORTED void MasterClockRateImpl_2000_setMasterClock(MASTERCLOCKRATEIMPL_2000_T c_master_clock_rate_impl_2000, int rate);
	EXPORTED void MasterClockRateImpl_2000_Destroy(MASTERCLOCKRATEIMPL_2000_T master_clock_rate_impl_2000);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MASTERCLOCKRATEIMPL_2000_T STDCALL MasterClockRateImpl_2000_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED void STDCALL MasterClockRateImpl_2000_setMasterClock_stdcall(MASTERCLOCKRATEIMPL_2000_T c_master_clock_rate_impl_2000, int rate);
	EXPORTED void STDCALL MasterClockRateImpl_2000_Destroy_stdcall(MASTERCLOCKRATEIMPL_2000_T master_clock_rate_impl_2000);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MASTERCLOCKRATEIMPL_2000_H */

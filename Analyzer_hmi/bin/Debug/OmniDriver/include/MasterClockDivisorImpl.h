/**
 * File: MasterClockDivisorImpl.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * MasterClockDivisorImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/masterclockdivisor/MasterClockDivisorImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MASTERCLOCKDIVISORIMPL_H
#define MASTERCLOCKDIVISORIMPL_H
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

CLASS_TOKEN EXPORTED MasterClockDivisorImpl : public FPGAImpl // CPPClass.tag001
{
public: 
	MasterClockDivisorImpl(USBInterface& usbInt);
	int getMasterClockDivisor();
	void setMasterClockDivisor(int value);
	~MasterClockDivisorImpl();
	// No public default Java constructor; creating one:
	MasterClockDivisorImpl();
	// No public Java copy constructor; creating one:
	MasterClockDivisorImpl(const MasterClockDivisorImpl &that);
	// Creating assignment operator declaration:
	MasterClockDivisorImpl &operator=(const MasterClockDivisorImpl &that);

private:
	jmethodID mid_MasterClockDivisorImpl1692;
	jmethodID mid_getMasterClockDivisor1693;
	jmethodID mid_setMasterClockDivisor1694;
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
#ifndef EXTERN_TYPEDEF_MASTERCLOCKDIVISORIMPL_T
#define EXTERN_TYPEDEF_MASTERCLOCKDIVISORIMPL_T
	typedef void* MASTERCLOCKDIVISORIMPL_T;
#endif /* EXTERN_TYPEDEF_MASTERCLOCKDIVISORIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED MASTERCLOCKDIVISORIMPL_T MasterClockDivisorImpl_Create();
	EXPORTED MASTERCLOCKDIVISORIMPL_T MasterClockDivisorImpl_Create_1(USBINTERFACE_T usbInt);
	EXPORTED int MasterClockDivisorImpl_getMasterClockDivisor(MASTERCLOCKDIVISORIMPL_T c_master_clock_divisor_impl);
	EXPORTED void MasterClockDivisorImpl_setMasterClockDivisor(MASTERCLOCKDIVISORIMPL_T c_master_clock_divisor_impl, int value);
	EXPORTED void MasterClockDivisorImpl_Destroy(MASTERCLOCKDIVISORIMPL_T master_clock_divisor_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MASTERCLOCKDIVISORIMPL_T STDCALL MasterClockDivisorImpl_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL MasterClockDivisorImpl_getMasterClockDivisor_stdcall(MASTERCLOCKDIVISORIMPL_T c_master_clock_divisor_impl);
	EXPORTED void STDCALL MasterClockDivisorImpl_setMasterClockDivisor_stdcall(MASTERCLOCKDIVISORIMPL_T c_master_clock_divisor_impl, int value);
	EXPORTED void STDCALL MasterClockDivisorImpl_Destroy_stdcall(MASTERCLOCKDIVISORIMPL_T master_clock_divisor_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MASTERCLOCKDIVISORIMPL_H */

/**
 * File: HardwareTriggerImplFPGA.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * HardwareTriggerImplFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/hardwaretrigger/HardwareTriggerImplFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HARDWARETRIGGERIMPLFPGA_H
#define HARDWARETRIGGERIMPLFPGA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "HardwareTriggerImpl.h"
#include "USBInterface.h"
#include "ExternalTriggerModeArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class HardwareTriggerImpl;
class USBInterface;
class ExternalTriggerModeArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED HardwareTriggerImplFPGA : public HardwareTriggerImpl // CPPClass.tag001
{
public: 
	HardwareTriggerImplFPGA(USBInterface& usbInt, ExternalTriggerModeArray& supportedModes);
	void sendSimulatedTriggerSignal();
	~HardwareTriggerImplFPGA();
	// No public default Java constructor; creating one:
	HardwareTriggerImplFPGA();
	// No public Java copy constructor; creating one:
	HardwareTriggerImplFPGA(const HardwareTriggerImplFPGA &that);
	// Creating assignment operator declaration:
	HardwareTriggerImplFPGA &operator=(const HardwareTriggerImplFPGA &that);

private:
	jmethodID mid_HardwareTriggerImplFPGA1349;
	jmethodID mid_sendSimulatedTriggerSignal1350;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T
	typedef void* HARDWARETRIGGERIMPL_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERIMPLFPGA_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERIMPLFPGA_T
	typedef void* HARDWARETRIGGERIMPLFPGA_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERIMPLFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED HARDWARETRIGGERIMPLFPGA_T HardwareTriggerImplFPGA_Create();
	EXPORTED HARDWARETRIGGERIMPLFPGA_T HardwareTriggerImplFPGA_Create_1(USBINTERFACE_T usbInt, EXTERNALTRIGGERMODEARRAY_T supportedModes);
	EXPORTED void HardwareTriggerImplFPGA_sendSimulatedTriggerSignal(HARDWARETRIGGERIMPLFPGA_T c_hardware_trigger_impl_f_p_g_a);
	EXPORTED void HardwareTriggerImplFPGA_Destroy(HARDWARETRIGGERIMPLFPGA_T hardware_trigger_impl_f_p_g_a);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED HARDWARETRIGGERIMPLFPGA_T STDCALL HardwareTriggerImplFPGA_Create_stdcall_1(USBINTERFACE_T usbInt, EXTERNALTRIGGERMODEARRAY_T supportedModes);
	EXPORTED void STDCALL HardwareTriggerImplFPGA_sendSimulatedTriggerSignal_stdcall(HARDWARETRIGGERIMPLFPGA_T c_hardware_trigger_impl_f_p_g_a);
	EXPORTED void STDCALL HardwareTriggerImplFPGA_Destroy_stdcall(HARDWARETRIGGERIMPLFPGA_T hardware_trigger_impl_f_p_g_a);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HARDWARETRIGGERIMPLFPGA_H */

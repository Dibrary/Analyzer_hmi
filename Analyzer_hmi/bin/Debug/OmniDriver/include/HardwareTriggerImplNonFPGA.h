/**
 * File: HardwareTriggerImplNonFPGA.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * HardwareTriggerImplNonFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/hardwaretrigger/HardwareTriggerImplNonFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HARDWARETRIGGERIMPLNONFPGA_H
#define HARDWARETRIGGERIMPLNONFPGA_H
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

CLASS_TOKEN EXPORTED HardwareTriggerImplNonFPGA : public HardwareTriggerImpl // CPPClass.tag001
{
public: 
	HardwareTriggerImplNonFPGA(USBInterface& usbInt, ExternalTriggerModeArray& supportedModes);
	void sendSimulatedTriggerSignal();
	~HardwareTriggerImplNonFPGA();
	// No public default Java constructor; creating one:
	HardwareTriggerImplNonFPGA();
	// No public Java copy constructor; creating one:
	HardwareTriggerImplNonFPGA(const HardwareTriggerImplNonFPGA &that);
	// Creating assignment operator declaration:
	HardwareTriggerImplNonFPGA &operator=(const HardwareTriggerImplNonFPGA &that);

private:
	jmethodID mid_HardwareTriggerImplNonFPGA1351;
	jmethodID mid_sendSimulatedTriggerSignal1352;
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
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERIMPLNONFPGA_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERIMPLNONFPGA_T
	typedef void* HARDWARETRIGGERIMPLNONFPGA_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERIMPLNONFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED HARDWARETRIGGERIMPLNONFPGA_T HardwareTriggerImplNonFPGA_Create();
	EXPORTED HARDWARETRIGGERIMPLNONFPGA_T HardwareTriggerImplNonFPGA_Create_1(USBINTERFACE_T usbInt, EXTERNALTRIGGERMODEARRAY_T supportedModes);
	EXPORTED void HardwareTriggerImplNonFPGA_sendSimulatedTriggerSignal(HARDWARETRIGGERIMPLNONFPGA_T c_hardware_trigger_impl_non_f_p_g_a);
	EXPORTED void HardwareTriggerImplNonFPGA_Destroy(HARDWARETRIGGERIMPLNONFPGA_T hardware_trigger_impl_non_f_p_g_a);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED HARDWARETRIGGERIMPLNONFPGA_T STDCALL HardwareTriggerImplNonFPGA_Create_stdcall_1(USBINTERFACE_T usbInt, EXTERNALTRIGGERMODEARRAY_T supportedModes);
	EXPORTED void STDCALL HardwareTriggerImplNonFPGA_sendSimulatedTriggerSignal_stdcall(HARDWARETRIGGERIMPLNONFPGA_T c_hardware_trigger_impl_non_f_p_g_a);
	EXPORTED void STDCALL HardwareTriggerImplNonFPGA_Destroy_stdcall(HARDWARETRIGGERIMPLNONFPGA_T hardware_trigger_impl_non_f_p_g_a);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HARDWARETRIGGERIMPLNONFPGA_H */

/**
 * File: HardwareTriggerImpl_FX.h
 * Autogenerated on Mon Jun 19 10:50:18 EDT 2017 based on
 * HardwareTriggerImpl_FX.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/hardwaretrigger/HardwareTriggerImpl_FX
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HARDWARETRIGGERIMPL_FX_H
#define HARDWARETRIGGERIMPL_FX_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "HardwareTriggerImpl.h"
#include "OceanBinaryProtocolProvider.h"
#include "USBInterface.h"
#include "FlameXTriggerModeArray.h"
#include "ExternalTriggerModeArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class HardwareTriggerImpl;
class OceanBinaryProtocolProvider;
class USBInterface;
class FlameXTriggerModeArray;
class ExternalTriggerModeArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED HardwareTriggerImpl_FX : public HardwareTriggerImpl // CPPClass.tag001
{
public: 
	HardwareTriggerImpl_FX(OceanBinaryProtocolProvider& fx, USBInterface& uface, FlameXTriggerModeArray& modes);
	ExternalTriggerModeArray getExternalTriggerModes();
	void setExternalTriggerMode(int mode);
	void sendSimulatedTriggerSignal();
	~HardwareTriggerImpl_FX();
	// No public default Java constructor; creating one:
	HardwareTriggerImpl_FX();
	// No public Java copy constructor; creating one:
	HardwareTriggerImpl_FX(const HardwareTriggerImpl_FX &that);
	// Creating assignment operator declaration:
	HardwareTriggerImpl_FX &operator=(const HardwareTriggerImpl_FX &that);

private:
	jmethodID mid_HardwareTriggerImpl_FX1289;
	jmethodID mid_getExternalTriggerModes1290;
	jmethodID mid_setExternalTriggerMode1291;
	jmethodID mid_sendSimulatedTriggerSignal1292;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T
	typedef void* HARDWARETRIGGERIMPL_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_T */
#ifndef EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
#define EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
	typedef void* OCEANBINARYPROTOCOLPROVIDER_T;
#endif /* EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_FLAMEXTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_FLAMEXTRIGGERMODEARRAY_T
	typedef void* FLAMEXTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_FLAMEXTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_FX_T
#define EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_FX_T
	typedef void* HARDWARETRIGGERIMPL_FX_T;
#endif /* EXTERN_TYPEDEF_HARDWARETRIGGERIMPL_FX_T */

	// No public default Java constructor; creating one:
	EXPORTED HARDWARETRIGGERIMPL_FX_T HardwareTriggerImpl_FX_Create();
	EXPORTED HARDWARETRIGGERIMPL_FX_T HardwareTriggerImpl_FX_Create_1(OCEANBINARYPROTOCOLPROVIDER_T fx, USBINTERFACE_T uface, FLAMEXTRIGGERMODEARRAY_T modes);
	EXPORTED void HardwareTriggerImpl_FX_getExternalTriggerModes(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void HardwareTriggerImpl_FX_setExternalTriggerMode(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x, int mode);
	EXPORTED void HardwareTriggerImpl_FX_sendSimulatedTriggerSignal(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x);
	EXPORTED void HardwareTriggerImpl_FX_Destroy(HARDWARETRIGGERIMPL_FX_T hardware_trigger_impl_f_x);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED HARDWARETRIGGERIMPL_FX_T STDCALL HardwareTriggerImpl_FX_Create_stdcall_1(OCEANBINARYPROTOCOLPROVIDER_T fx, USBINTERFACE_T uface, FLAMEXTRIGGERMODEARRAY_T modes);
	EXPORTED void STDCALL HardwareTriggerImpl_FX_getExternalTriggerModes_stdcall(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL HardwareTriggerImpl_FX_setExternalTriggerMode_stdcall(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x, int mode);
	EXPORTED void STDCALL HardwareTriggerImpl_FX_sendSimulatedTriggerSignal_stdcall(HARDWARETRIGGERIMPL_FX_T c_hardware_trigger_impl_f_x);
	EXPORTED void STDCALL HardwareTriggerImpl_FX_Destroy_stdcall(HARDWARETRIGGERIMPL_FX_T hardware_trigger_impl_f_x);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HARDWARETRIGGERIMPL_FX_H */

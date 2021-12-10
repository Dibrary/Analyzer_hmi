/**
 * File: FirmwareImpl.h
 * Autogenerated on Fri Mar 23 13:38:57 EDT 2018 based on
 * FirmwareImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/features/firmware/FirmwareImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FIRMWAREIMPL_H
#define FIRMWAREIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "USBInterface.h"
#include "MMSRaman.h"
#include "JString.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class USBInterface;
class MMSRaman;
class JString;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED FirmwareImpl : public USBFeature // CPPClass.tag001
{
public: 
	FirmwareImpl(USBInterface& usbInt, MMSRaman& spec);
	JString getFirmwareVersion();
	void setDSPFirmwareVersion(JString& dsp);
	JString getDSPFirmwareVersion();
	void setFPGAFirmwareVersion(JString& fpga);
	JString getFPGAFirmwareVersion();
	void setUSBFirmwareVersion(JString& usb);
	JString getUSBFirmwareVersion();
	MMSRaman getSpectrometer();
	JStringArray getFeatureGUIClassnames();
	~FirmwareImpl();
	// No public default Java constructor; creating one:
	FirmwareImpl();
	// No public Java copy constructor; creating one:
	FirmwareImpl(const FirmwareImpl &that);
	// Creating assignment operator declaration:
	FirmwareImpl &operator=(const FirmwareImpl &that);

private:
	jmethodID mid_FirmwareImpl4232;
	jmethodID mid_getFirmwareVersion4233;
	jmethodID mid_setDSPFirmwareVersion4234;
	jmethodID mid_getDSPFirmwareVersion4235;
	jmethodID mid_setFPGAFirmwareVersion4236;
	jmethodID mid_getFPGAFirmwareVersion4237;
	jmethodID mid_setUSBFirmwareVersion4238;
	jmethodID mid_getUSBFirmwareVersion4239;
	jmethodID mid_getSpectrometer4240;
	jmethodID mid_getFeatureGUIClassnames4241;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_MMSRAMAN_T
#define EXTERN_TYPEDEF_MMSRAMAN_T
	typedef void* MMSRAMAN_T;
#endif /* EXTERN_TYPEDEF_MMSRAMAN_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_FIRMWAREIMPL_T
#define EXTERN_TYPEDEF_FIRMWAREIMPL_T
	typedef void* FIRMWAREIMPL_T;
#endif /* EXTERN_TYPEDEF_FIRMWAREIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED FIRMWAREIMPL_T FirmwareImpl_Create();
	EXPORTED FIRMWAREIMPL_T FirmwareImpl_Create_1(USBINTERFACE_T usbInt, MMSRAMAN_T spec);
	EXPORTED void FirmwareImpl_getFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void FirmwareImpl_setDSPFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T dsp);
	EXPORTED void FirmwareImpl_getDSPFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void FirmwareImpl_setFPGAFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T fpga);
	EXPORTED void FirmwareImpl_getFPGAFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void FirmwareImpl_setUSBFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T usb);
	EXPORTED void FirmwareImpl_getUSBFirmwareVersion(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void FirmwareImpl_getSpectrometer(FIRMWAREIMPL_T c_firmware_impl, MMSRAMAN_T retval);
	EXPORTED void FirmwareImpl_getFeatureGUIClassnames(FIRMWAREIMPL_T c_firmware_impl, JSTRINGARRAY_T retval);
	EXPORTED void FirmwareImpl_Destroy(FIRMWAREIMPL_T firmware_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED FIRMWAREIMPL_T STDCALL FirmwareImpl_Create_stdcall_1(USBINTERFACE_T usbInt, MMSRAMAN_T spec);
	EXPORTED void STDCALL FirmwareImpl_getFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void STDCALL FirmwareImpl_setDSPFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T dsp);
	EXPORTED void STDCALL FirmwareImpl_getDSPFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void STDCALL FirmwareImpl_setFPGAFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T fpga);
	EXPORTED void STDCALL FirmwareImpl_getFPGAFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void STDCALL FirmwareImpl_setUSBFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T usb);
	EXPORTED void STDCALL FirmwareImpl_getUSBFirmwareVersion_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRING_T retval);
	EXPORTED void STDCALL FirmwareImpl_getSpectrometer_stdcall(FIRMWAREIMPL_T c_firmware_impl, MMSRAMAN_T retval);
	EXPORTED void STDCALL FirmwareImpl_getFeatureGUIClassnames_stdcall(FIRMWAREIMPL_T c_firmware_impl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL FirmwareImpl_Destroy_stdcall(FIRMWAREIMPL_T firmware_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FIRMWAREIMPL_H */

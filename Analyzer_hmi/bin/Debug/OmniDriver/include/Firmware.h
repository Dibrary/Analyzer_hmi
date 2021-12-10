/**
 * File: Firmware.h
 * Autogenerated on Fri Mar 23 13:38:57 EDT 2018 based on
 * Firmware.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/features/firmware/Firmware
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FIRMWARE_H
#define FIRMWARE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#include "MMSRaman.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class MMSRaman;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Firmware : public BaseJavaClass // CPPClass.tag001
{
public: 
	JString getFirmwareVersion();
	void setDSPFirmwareVersion(JString& param0);
	JString getDSPFirmwareVersion();
	void setFPGAFirmwareVersion(JString& param0);
	JString getFPGAFirmwareVersion();
	void setUSBFirmwareVersion(JString& param0);
	JString getUSBFirmwareVersion();
	MMSRaman getSpectrometer();
	~Firmware();
	// No public default Java constructor; creating one:
	Firmware();
	// No public Java copy constructor; creating one:
	Firmware(const Firmware &that);
	// Creating assignment operator declaration:
	Firmware &operator=(const Firmware &that);

private:
	jmethodID mid_getFirmwareVersion4224;
	jmethodID mid_setDSPFirmwareVersion4225;
	jmethodID mid_getDSPFirmwareVersion4226;
	jmethodID mid_setFPGAFirmwareVersion4227;
	jmethodID mid_getFPGAFirmwareVersion4228;
	jmethodID mid_setUSBFirmwareVersion4229;
	jmethodID mid_getUSBFirmwareVersion4230;
	jmethodID mid_getSpectrometer4231;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_MMSRAMAN_T
#define EXTERN_TYPEDEF_MMSRAMAN_T
	typedef void* MMSRAMAN_T;
#endif /* EXTERN_TYPEDEF_MMSRAMAN_T */
#ifndef EXTERN_TYPEDEF_FIRMWARE_T
#define EXTERN_TYPEDEF_FIRMWARE_T
	typedef void* FIRMWARE_T;
#endif /* EXTERN_TYPEDEF_FIRMWARE_T */

	// No public default Java constructor; creating one:
	EXPORTED FIRMWARE_T Firmware_Create();
	EXPORTED void Firmware_getFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void Firmware_setDSPFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void Firmware_getDSPFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void Firmware_setFPGAFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void Firmware_getFPGAFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void Firmware_setUSBFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void Firmware_getUSBFirmwareVersion(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void Firmware_getSpectrometer(FIRMWARE_T c_firmware, MMSRAMAN_T retval);
	EXPORTED void Firmware_Destroy(FIRMWARE_T firmware);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL Firmware_getFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void STDCALL Firmware_setDSPFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void STDCALL Firmware_getDSPFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void STDCALL Firmware_setFPGAFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void STDCALL Firmware_getFPGAFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void STDCALL Firmware_setUSBFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T param0);
	EXPORTED void STDCALL Firmware_getUSBFirmwareVersion_stdcall(FIRMWARE_T c_firmware, JSTRING_T retval);
	EXPORTED void STDCALL Firmware_getSpectrometer_stdcall(FIRMWARE_T c_firmware, MMSRAMAN_T retval);
	EXPORTED void STDCALL Firmware_Destroy_stdcall(FIRMWARE_T firmware);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FIRMWARE_H */

/**
 * File: SpectrometerInfo.h
 * Autogenerated on Fri Mar 23 13:38:46 EDT 2018 based on
 * SpectrometerInfo.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectra/SpectrometerInfo
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPECTROMETERINFO_H
#define SPECTROMETERINFO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerInfo;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SpectrometerInfo : public BaseJavaClass // CPPClass.tag001
{
public: 
	JString getSpectrometerFirmwareVersion();
	int getSpectrometerNumberOfChannels();
	JString getSpectrometerSerialNumber();
	double getSpectrometerMaximumIntensity();
	int getSpectrometerMinimumIntegrationTime();
	int getSpectrometerMaximumIntegrationTime();
	int getSpectrometerIntegrationTimeStep();
	int getSpectrometerIntegrationTimeBase();
	~SpectrometerInfo();
	// No public default Java constructor; creating one:
	SpectrometerInfo();
	// No public Java copy constructor; creating one:
	SpectrometerInfo(const SpectrometerInfo &that);
	// Creating assignment operator declaration:
	SpectrometerInfo &operator=(const SpectrometerInfo &that);

private:
	jmethodID mid_SpectrometerInfo2799;
	jmethodID mid_getSpectrometerFirmwareVersion2800;
	jmethodID mid_getSpectrometerNumberOfChannels2801;
	jmethodID mid_getSpectrometerSerialNumber2802;
	jmethodID mid_getSpectrometerMaximumIntensity2803;
	jmethodID mid_getSpectrometerMinimumIntegrationTime2804;
	jmethodID mid_getSpectrometerMaximumIntegrationTime2805;
	jmethodID mid_getSpectrometerIntegrationTimeStep2806;
	jmethodID mid_getSpectrometerIntegrationTimeBase2807;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERINFO_T
#define EXTERN_TYPEDEF_SPECTROMETERINFO_T
	typedef void* SPECTROMETERINFO_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERINFO_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */

	// No public default Java constructor; creating one:
	EXPORTED SPECTROMETERINFO_T SpectrometerInfo_Create();
	EXPORTED SPECTROMETERINFO_T SpectrometerInfo_Create_1(SPECTROMETERINFO_T spectrometerInfo);
	EXPORTED void SpectrometerInfo_getSpectrometerFirmwareVersion(SPECTROMETERINFO_T c_spectrometer_info, JSTRING_T retval);
	EXPORTED int SpectrometerInfo_getSpectrometerNumberOfChannels(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED void SpectrometerInfo_getSpectrometerSerialNumber(SPECTROMETERINFO_T c_spectrometer_info, JSTRING_T retval);
	EXPORTED double SpectrometerInfo_getSpectrometerMaximumIntensity(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int SpectrometerInfo_getSpectrometerMinimumIntegrationTime(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int SpectrometerInfo_getSpectrometerMaximumIntegrationTime(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int SpectrometerInfo_getSpectrometerIntegrationTimeStep(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int SpectrometerInfo_getSpectrometerIntegrationTimeBase(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED void SpectrometerInfo_Destroy(SPECTROMETERINFO_T spectrometer_info);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SPECTROMETERINFO_T STDCALL SpectrometerInfo_Create_stdcall_1(SPECTROMETERINFO_T spectrometerInfo);
	EXPORTED void STDCALL SpectrometerInfo_getSpectrometerFirmwareVersion_stdcall(SPECTROMETERINFO_T c_spectrometer_info, JSTRING_T retval);
	EXPORTED int STDCALL SpectrometerInfo_getSpectrometerNumberOfChannels_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED void STDCALL SpectrometerInfo_getSpectrometerSerialNumber_stdcall(SPECTROMETERINFO_T c_spectrometer_info, JSTRING_T retval);
	EXPORTED double STDCALL SpectrometerInfo_getSpectrometerMaximumIntensity_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int STDCALL SpectrometerInfo_getSpectrometerMinimumIntegrationTime_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int STDCALL SpectrometerInfo_getSpectrometerMaximumIntegrationTime_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int STDCALL SpectrometerInfo_getSpectrometerIntegrationTimeStep_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED int STDCALL SpectrometerInfo_getSpectrometerIntegrationTimeBase_stdcall(SPECTROMETERINFO_T c_spectrometer_info);
	EXPORTED void STDCALL SpectrometerInfo_Destroy_stdcall(SPECTROMETERINFO_T spectrometer_info);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPECTROMETERINFO_H */

/**
 * File: Apex.h
 * Autogenerated on Fri Mar 23 13:38:50 EDT 2018 based on
 * Apex.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/apex/Apex
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef APEX_H
#define APEX_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "GUIProviderArray.h"
#include "JString.h"
#include "CoefficientsArray.h"
#include "AcquisitionListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class USBEndpointDescriptor;
class GUIProviderArray;
class JString;
class CoefficientsArray;
class AcquisitionListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Apex : public USBSpectrometer // CPPClass.tag001
{
public: 
	Apex();
	Apex(int i);
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	short allowWriteToEEPROM(int privilegeLevel, int slot);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	int getActualIntegrationTime();
	JString getPSOCVersion();
	JString getFPGAFirmwareVersion();
	void setAdvancedIntegrationTime(long long delayMicros);
	int getIntegrationTimeBaseClock();
	int getIntegrationClockTimer();
	long long getAdvancedIntegrationTimeMinimum();
	long long getAdvancedIntegrationTimeMaximum();
	long long getAdvancedIntegrationTimeIncrement();
	void setShutterClock(int value);
	int getShutterClock();
	int getSaturationThreshold();
	void setSaturationThreshold(int saturationThreshold, JString& key);
	DoubleArray getIrradianceCalibrationFactors();
	void setIrradianceCalibrationFactors(DoubleArray& data);
	double getCollectionArea();
	short hasCollectionArea();
	void setCollectionArea(double area);
	void setMasterClockDivisor(int value);
	int getMasterClockDivisor();
	CoefficientsArray readNonlinearityCoefficientsFromSpectrometer();
	void writeNonlinearityCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray getNonlinearityCoefficients();
	void setNonlinearityCoefficients(CoefficientsArray& coefficients);
	DoubleArray getNonlinearityCoefficientsSingleChannel(int index);
	void setNonlinearityCoefficientsSingleChannel(DoubleArray& nl, int index);
	CoefficientsArray readWavelengthCalibrationCoefficientsFromSpectrometer();
	void writeWavelengthCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray getWavelengthCalibrationCoefficients();
	void setWavelengthCalibrationCoefficients(CoefficientsArray& coefficients);
	DoubleArray getWavelengths(int index);
	void setWavelengths(DoubleArray& wl, int index);
	CoefficientsArray readStrayLightCorrectionCoefficientFromSpectrometer();
	void writeStrayLightCoefficientToSpectrometer(CoefficientsArray& coefficients);
	void setStrayLightCorrectionCoefficient(CoefficientsArray& coefficients);
	CoefficientsArray getStrayLightCorrectionCoefficient();
	void setStrayLight(double strayLight, int index);
	double getStrayLight(int index);
	short isAdvancedVersion();
	void addAcquisitionListener(AcquisitionListener& listener);
	void removeAcquisitionListener(AcquisitionListener& listener);
	int getDetectorType();
	JString getCpuSubVersion();
	void setDetectorType(int type);
	JString getCpuVersion();
	void setScansToAverage(int scans);
	int getScansToAverage();
	~Apex();
	// No public Java copy constructor; creating one:
	Apex(const Apex &that);
	// Creating assignment operator declaration:
	Apex &operator=(const Apex &that);

private:
	jmethodID mid_Apex3184;
	jmethodID mid_Apex3185;
	jmethodID mid_setEndpoints3186;
	jmethodID mid_getEndpoint3187;
	jmethodID mid_allowWriteToEEPROM3188;
	jmethodID mid_openSpectrometer3189;
	jmethodID mid_getGUIFeatures3190;
	jmethodID mid_getActualIntegrationTime3191;
	jmethodID mid_getPSOCVersion3192;
	jmethodID mid_getFPGAFirmwareVersion3193;
	jmethodID mid_setAdvancedIntegrationTime3194;
	jmethodID mid_getIntegrationTimeBaseClock3195;
	jmethodID mid_getIntegrationClockTimer3196;
	jmethodID mid_getAdvancedIntegrationTimeMinimum3197;
	jmethodID mid_getAdvancedIntegrationTimeMaximum3198;
	jmethodID mid_getAdvancedIntegrationTimeIncrement3199;
	jmethodID mid_setShutterClock3200;
	jmethodID mid_getShutterClock3201;
	jmethodID mid_getSaturationThreshold3202;
	jmethodID mid_setSaturationThreshold3203;
	jmethodID mid_getIrradianceCalibrationFactors3204;
	jmethodID mid_setIrradianceCalibrationFactors3205;
	jmethodID mid_getCollectionArea3206;
	jmethodID mid_hasCollectionArea3207;
	jmethodID mid_setCollectionArea3208;
	jmethodID mid_setMasterClockDivisor3209;
	jmethodID mid_getMasterClockDivisor3210;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer3211;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer3212;
	jmethodID mid_getNonlinearityCoefficients3213;
	jmethodID mid_setNonlinearityCoefficients3214;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel3215;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel3216;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer3217;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer3218;
	jmethodID mid_getWavelengthCalibrationCoefficients3219;
	jmethodID mid_setWavelengthCalibrationCoefficients3220;
	jmethodID mid_getWavelengths3221;
	jmethodID mid_setWavelengths3222;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer3223;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer3224;
	jmethodID mid_setStrayLightCorrectionCoefficient3225;
	jmethodID mid_getStrayLightCorrectionCoefficient3226;
	jmethodID mid_setStrayLight3227;
	jmethodID mid_getStrayLight3228;
	jmethodID mid_isAdvancedVersion3229;
	jmethodID mid_addAcquisitionListener3230;
	jmethodID mid_removeAcquisitionListener3231;
	jmethodID mid_getDetectorType3232;
	jmethodID mid_getCpuSubVersion3233;
	jmethodID mid_setDetectorType3234;
	jmethodID mid_getCpuVersion3235;
	jmethodID mid_setScansToAverage3236;
	jmethodID mid_getScansToAverage3237;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
#define EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
	typedef void* USBENDPOINTDESCRIPTOR_T;
#endif /* EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */
#ifndef EXTERN_TYPEDEF_APEX_T
#define EXTERN_TYPEDEF_APEX_T
	typedef void* APEX_T;
#endif /* EXTERN_TYPEDEF_APEX_T */

	EXPORTED APEX_T Apex_Create();
	EXPORTED APEX_T Apex_Create_1(int i);
	EXPORTED void Apex_setEndpoints(APEX_T c_apex);
	EXPORTED void Apex_getEndpoint(APEX_T c_apex, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short Apex_allowWriteToEEPROM(APEX_T c_apex, int privilegeLevel, int slot);
	EXPORTED void Apex_openSpectrometer(APEX_T c_apex, int index);
	EXPORTED void Apex_getGUIFeatures(APEX_T c_apex, GUIPROVIDERARRAY_T retval);
	EXPORTED int Apex_getActualIntegrationTime(APEX_T c_apex);
	EXPORTED void Apex_getPSOCVersion(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void Apex_getFPGAFirmwareVersion(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void Apex_setAdvancedIntegrationTime(APEX_T c_apex, long long delayMicros);
	EXPORTED int Apex_getIntegrationTimeBaseClock(APEX_T c_apex);
	EXPORTED int Apex_getIntegrationClockTimer(APEX_T c_apex);
	EXPORTED long long Apex_getAdvancedIntegrationTimeMinimum(APEX_T c_apex);
	EXPORTED long long Apex_getAdvancedIntegrationTimeMaximum(APEX_T c_apex);
	EXPORTED long long Apex_getAdvancedIntegrationTimeIncrement(APEX_T c_apex);
	EXPORTED void Apex_setShutterClock(APEX_T c_apex, int value);
	EXPORTED int Apex_getShutterClock(APEX_T c_apex);
	EXPORTED int Apex_getSaturationThreshold(APEX_T c_apex);
	EXPORTED void Apex_setSaturationThreshold(APEX_T c_apex, int saturationThreshold, JSTRING_T key);
	EXPORTED void Apex_getIrradianceCalibrationFactors(APEX_T c_apex, DOUBLEARRAY_T retval);
	EXPORTED void Apex_setIrradianceCalibrationFactors(APEX_T c_apex, DOUBLEARRAY_T data);
	EXPORTED double Apex_getCollectionArea(APEX_T c_apex);
	EXPORTED short Apex_hasCollectionArea(APEX_T c_apex);
	EXPORTED void Apex_setCollectionArea(APEX_T c_apex, double area);
	EXPORTED void Apex_setMasterClockDivisor(APEX_T c_apex, int value);
	EXPORTED int Apex_getMasterClockDivisor(APEX_T c_apex);
	EXPORTED void Apex_readNonlinearityCoefficientsFromSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_writeNonlinearityCoefficientsToSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_getNonlinearityCoefficients(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_setNonlinearityCoefficients(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_getNonlinearityCoefficientsSingleChannel(APEX_T c_apex, int index, DOUBLEARRAY_T retval);
	EXPORTED void Apex_setNonlinearityCoefficientsSingleChannel(APEX_T c_apex, DOUBLEARRAY_T nl, int index);
	EXPORTED void Apex_readWavelengthCalibrationCoefficientsFromSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_writeWavelengthCoefficientsToSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_getWavelengthCalibrationCoefficients(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_setWavelengthCalibrationCoefficients(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_getWavelengths(APEX_T c_apex, int index, DOUBLEARRAY_T retval);
	EXPORTED void Apex_setWavelengths(APEX_T c_apex, DOUBLEARRAY_T wl, int index);
	EXPORTED void Apex_readStrayLightCorrectionCoefficientFromSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_writeStrayLightCoefficientToSpectrometer(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_setStrayLightCorrectionCoefficient(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Apex_getStrayLightCorrectionCoefficient(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void Apex_setStrayLight(APEX_T c_apex, double strayLight, int index);
	EXPORTED double Apex_getStrayLight(APEX_T c_apex, int index);
	EXPORTED short Apex_isAdvancedVersion(APEX_T c_apex);
	EXPORTED void Apex_addAcquisitionListener(APEX_T c_apex, ACQUISITIONLISTENER_T listener);
	EXPORTED void Apex_removeAcquisitionListener(APEX_T c_apex, ACQUISITIONLISTENER_T listener);
	EXPORTED int Apex_getDetectorType(APEX_T c_apex);
	EXPORTED void Apex_getCpuSubVersion(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void Apex_setDetectorType(APEX_T c_apex, int type);
	EXPORTED void Apex_getCpuVersion(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void Apex_setScansToAverage(APEX_T c_apex, int scans);
	EXPORTED int Apex_getScansToAverage(APEX_T c_apex);
	EXPORTED void Apex_Destroy(APEX_T apex);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED APEX_T STDCALL Apex_Create_stdcall();
	EXPORTED APEX_T STDCALL Apex_Create_stdcall_1(int i);
	EXPORTED void STDCALL Apex_setEndpoints_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_getEndpoint_stdcall(APEX_T c_apex, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short STDCALL Apex_allowWriteToEEPROM_stdcall(APEX_T c_apex, int privilegeLevel, int slot);
	EXPORTED void STDCALL Apex_openSpectrometer_stdcall(APEX_T c_apex, int index);
	EXPORTED void STDCALL Apex_getGUIFeatures_stdcall(APEX_T c_apex, GUIPROVIDERARRAY_T retval);
	EXPORTED int STDCALL Apex_getActualIntegrationTime_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_getPSOCVersion_stdcall(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void STDCALL Apex_getFPGAFirmwareVersion_stdcall(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void STDCALL Apex_setAdvancedIntegrationTime_stdcall(APEX_T c_apex, long long delayMicros);
	EXPORTED int STDCALL Apex_getIntegrationTimeBaseClock_stdcall(APEX_T c_apex);
	EXPORTED int STDCALL Apex_getIntegrationClockTimer_stdcall(APEX_T c_apex);
	EXPORTED long long STDCALL Apex_getAdvancedIntegrationTimeMinimum_stdcall(APEX_T c_apex);
	EXPORTED long long STDCALL Apex_getAdvancedIntegrationTimeMaximum_stdcall(APEX_T c_apex);
	EXPORTED long long STDCALL Apex_getAdvancedIntegrationTimeIncrement_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_setShutterClock_stdcall(APEX_T c_apex, int value);
	EXPORTED int STDCALL Apex_getShutterClock_stdcall(APEX_T c_apex);
	EXPORTED int STDCALL Apex_getSaturationThreshold_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_setSaturationThreshold_stdcall(APEX_T c_apex, int saturationThreshold, JSTRING_T key);
	EXPORTED void STDCALL Apex_getIrradianceCalibrationFactors_stdcall(APEX_T c_apex, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Apex_setIrradianceCalibrationFactors_stdcall(APEX_T c_apex, DOUBLEARRAY_T data);
	EXPORTED double STDCALL Apex_getCollectionArea_stdcall(APEX_T c_apex);
	EXPORTED short STDCALL Apex_hasCollectionArea_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_setCollectionArea_stdcall(APEX_T c_apex, double area);
	EXPORTED void STDCALL Apex_setMasterClockDivisor_stdcall(APEX_T c_apex, int value);
	EXPORTED int STDCALL Apex_getMasterClockDivisor_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_readNonlinearityCoefficientsFromSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_writeNonlinearityCoefficientsToSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_getNonlinearityCoefficients_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_setNonlinearityCoefficients_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_getNonlinearityCoefficientsSingleChannel_stdcall(APEX_T c_apex, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Apex_setNonlinearityCoefficientsSingleChannel_stdcall(APEX_T c_apex, DOUBLEARRAY_T nl, int index);
	EXPORTED void STDCALL Apex_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_writeWavelengthCoefficientsToSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_getWavelengthCalibrationCoefficients_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_setWavelengthCalibrationCoefficients_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_getWavelengths_stdcall(APEX_T c_apex, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Apex_setWavelengths_stdcall(APEX_T c_apex, DOUBLEARRAY_T wl, int index);
	EXPORTED void STDCALL Apex_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_writeStrayLightCoefficientToSpectrometer_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_setStrayLightCorrectionCoefficient_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Apex_getStrayLightCorrectionCoefficient_stdcall(APEX_T c_apex, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Apex_setStrayLight_stdcall(APEX_T c_apex, double strayLight, int index);
	EXPORTED double STDCALL Apex_getStrayLight_stdcall(APEX_T c_apex, int index);
	EXPORTED short STDCALL Apex_isAdvancedVersion_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_addAcquisitionListener_stdcall(APEX_T c_apex, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL Apex_removeAcquisitionListener_stdcall(APEX_T c_apex, ACQUISITIONLISTENER_T listener);
	EXPORTED int STDCALL Apex_getDetectorType_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_getCpuSubVersion_stdcall(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void STDCALL Apex_setDetectorType_stdcall(APEX_T c_apex, int type);
	EXPORTED void STDCALL Apex_getCpuVersion_stdcall(APEX_T c_apex, JSTRING_T retval);
	EXPORTED void STDCALL Apex_setScansToAverage_stdcall(APEX_T c_apex, int scans);
	EXPORTED int STDCALL Apex_getScansToAverage_stdcall(APEX_T c_apex);
	EXPORTED void STDCALL Apex_Destroy_stdcall(APEX_T apex);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* APEX_H */

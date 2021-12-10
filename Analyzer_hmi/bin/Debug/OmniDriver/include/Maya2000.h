/**
 * File: Maya2000.h
 * Autogenerated on Fri Mar 23 13:38:55 EDT 2018 based on
 * Maya2000.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/maya2000/Maya2000
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MAYA2000_H
#define MAYA2000_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "GUIProviderArray.h"
#include "SpectrometerPlugInArray.h"
#include "JString.h"
#include "ExternalTriggerModeArray.h"
#include "BitSet.h"
#include "CoefficientsArray.h"
#include "AcquisitionListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class USBEndpointDescriptor;
class GUIProviderArray;
class SpectrometerPlugInArray;
class JString;
class ExternalTriggerModeArray;
class BitSet;
class CoefficientsArray;
class AcquisitionListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Maya2000 : public USBSpectrometer // CPPClass.tag001
{
public: 
	Maya2000();
	Maya2000(int i);
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	short allowWriteToEEPROM(int privilegeLevel, int slot);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	void setStrobeDelay(int delay);
	int getActualIntegrationTime();
	SpectrometerPlugInArray getPlugIns();
	int getNumberOfPlugIns();
	short isPlugInDetected(int id);
	CharArray initializePlugIns();
	void detectPlugIns();
	int setI2CBytes(signed char address, signed char numBytes, CharArray& i2C);
	CharArray getI2CBytes(signed char address, signed char numBytes);
	CharArray getSPIBytes(CharArray& message, int length);
	JString getPSOCVersion();
	JString getFPGAFirmwareVersion();
	double continuousStrobeCountsToMicros(int counts);
	void setContinuousStrobeDelay(int delayMicros);
	int getContinuousStrobeDelayMinimum();
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayIncrement(int magnitude);
	void setContinuousModeType(short mode);
	void setDelayAfterIntegration(int delay);
	short getContinuousModeType();
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	void setAdvancedIntegrationTime(long long delayMicros);
	int getIntegrationTimeBaseClock();
	int getIntegrationClockTimer();
	long long getAdvancedIntegrationTimeMinimum();
	long long getAdvancedIntegrationTimeMaximum();
	long long getAdvancedIntegrationTimeIncrement();
	void setExternalTriggerMode(int mode);
	ExternalTriggerModeArray getExternalTriggerModes();
	void setShutterClock(int value);
	int getShutterClock();
	void setSingleStrobeLow(int value);
	void setSingleStrobeHigh(int value);
	double getSingleStrobeCountsToMicros(int counts);
	int getSingleStrobeLow();
	int getSingleStrobeHigh();
	int getSingleStrobeMinimum();
	int getSingleStrobeMaximum();
	int getSingleStrobeIncrement();
	void setDirectionAllBits(BitSet& bitSet);
	void setMuxAllBits(BitSet& bitSet);
	void setValueAllBits(BitSet& bitSet);
	void setDirectionBitmask(short bitmask);
	void setMuxBitmask(short bitmask);
	void setValueBitmask(short bitmask);
	void setDirectionBit(int bit, short value);
	void setMuxBit(int bit, short value);
	void setValueBit(int bit, short value);
	int getTotalGPIOBits();
	BitSet getDirectionBits();
	BitSet getMuxBits();
	BitSet getValueBits();
	int getValueBit(int bitNumber);
	int getNumberOfPins();
	DoubleArray getIrradianceCalibrationFactors();
	void setIrradianceCalibrationFactors(DoubleArray& data);
	double getCollectionArea();
	short hasCollectionArea();
	void setCollectionArea(double area);
	void setMasterClockDivisor(int value);
	int getMasterClockDivisor();
	void setExternalTriggerDelay(int counts);
	double triggerDelayCountsToMicroseconds(int counts);
	int getExternalTriggerDelayMinimum();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayIncrement();
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
	JString getCpuVersion();
	JString getCpuSubVersion();
	int getDetectorType();
	void setDetectorType(int type);
	void setScansToAverage(int scans);
	int getScansToAverage();
	~Maya2000();
	// No public Java copy constructor; creating one:
	Maya2000(const Maya2000 &that);
	// Creating assignment operator declaration:
	Maya2000 &operator=(const Maya2000 &that);

private:
	jmethodID mid_Maya20003962;
	jmethodID mid_Maya20003963;
	jmethodID mid_setEndpoints3964;
	jmethodID mid_getEndpoint3965;
	jmethodID mid_allowWriteToEEPROM3966;
	jmethodID mid_openSpectrometer3967;
	jmethodID mid_getGUIFeatures3968;
	jmethodID mid_setStrobeDelay3969;
	jmethodID mid_getActualIntegrationTime3970;
	jmethodID mid_getPlugIns3971;
	jmethodID mid_getNumberOfPlugIns3972;
	jmethodID mid_isPlugInDetected3973;
	jmethodID mid_initializePlugIns3974;
	jmethodID mid_detectPlugIns3975;
	jmethodID mid_setI2CBytes3976;
	jmethodID mid_getI2CBytes3977;
	jmethodID mid_getSPIBytes3978;
	jmethodID mid_getPSOCVersion3979;
	jmethodID mid_getFPGAFirmwareVersion3980;
	jmethodID mid_continuousStrobeCountsToMicros3981;
	jmethodID mid_setContinuousStrobeDelay3982;
	jmethodID mid_getContinuousStrobeDelayMinimum3983;
	jmethodID mid_getContinuousStrobeDelayMaximum3984;
	jmethodID mid_getContinuousStrobeDelayIncrement3985;
	jmethodID mid_setContinuousModeType3986;
	jmethodID mid_setDelayAfterIntegration3987;
	jmethodID mid_getContinuousModeType3988;
	jmethodID mid_getDelayAfterIntegration3989;
	jmethodID mid_setContinuousEnable3990;
	jmethodID mid_getContinuousEnable3991;
	jmethodID mid_setAdvancedIntegrationTime3992;
	jmethodID mid_getIntegrationTimeBaseClock3993;
	jmethodID mid_getIntegrationClockTimer3994;
	jmethodID mid_getAdvancedIntegrationTimeMinimum3995;
	jmethodID mid_getAdvancedIntegrationTimeMaximum3996;
	jmethodID mid_getAdvancedIntegrationTimeIncrement3997;
	jmethodID mid_setExternalTriggerMode3998;
	jmethodID mid_getExternalTriggerModes3999;
	jmethodID mid_setShutterClock4000;
	jmethodID mid_getShutterClock4001;
	jmethodID mid_setSingleStrobeLow4002;
	jmethodID mid_setSingleStrobeHigh4003;
	jmethodID mid_getSingleStrobeCountsToMicros4004;
	jmethodID mid_getSingleStrobeLow4005;
	jmethodID mid_getSingleStrobeHigh4006;
	jmethodID mid_getSingleStrobeMinimum4007;
	jmethodID mid_getSingleStrobeMaximum4008;
	jmethodID mid_getSingleStrobeIncrement4009;
	jmethodID mid_setDirectionAllBits4010;
	jmethodID mid_setMuxAllBits4011;
	jmethodID mid_setValueAllBits4012;
	jmethodID mid_setDirectionBitmask4013;
	jmethodID mid_setMuxBitmask4014;
	jmethodID mid_setValueBitmask4015;
	jmethodID mid_setDirectionBit4016;
	jmethodID mid_setMuxBit4017;
	jmethodID mid_setValueBit4018;
	jmethodID mid_getTotalGPIOBits4019;
	jmethodID mid_getDirectionBits4020;
	jmethodID mid_getMuxBits4021;
	jmethodID mid_getValueBits4022;
	jmethodID mid_getValueBit4023;
	jmethodID mid_getNumberOfPins4024;
	jmethodID mid_getIrradianceCalibrationFactors4025;
	jmethodID mid_setIrradianceCalibrationFactors4026;
	jmethodID mid_getCollectionArea4027;
	jmethodID mid_hasCollectionArea4028;
	jmethodID mid_setCollectionArea4029;
	jmethodID mid_setMasterClockDivisor4030;
	jmethodID mid_getMasterClockDivisor4031;
	jmethodID mid_setExternalTriggerDelay4032;
	jmethodID mid_triggerDelayCountsToMicroseconds4033;
	jmethodID mid_getExternalTriggerDelayMinimum4034;
	jmethodID mid_getExternalTriggerDelayMaximum4035;
	jmethodID mid_getExternalTriggerDelayIncrement4036;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer4037;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer4038;
	jmethodID mid_getNonlinearityCoefficients4039;
	jmethodID mid_setNonlinearityCoefficients4040;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel4041;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel4042;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer4043;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer4044;
	jmethodID mid_getWavelengthCalibrationCoefficients4045;
	jmethodID mid_setWavelengthCalibrationCoefficients4046;
	jmethodID mid_getWavelengths4047;
	jmethodID mid_setWavelengths4048;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer4049;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer4050;
	jmethodID mid_setStrayLightCorrectionCoefficient4051;
	jmethodID mid_getStrayLightCorrectionCoefficient4052;
	jmethodID mid_setStrayLight4053;
	jmethodID mid_getStrayLight4054;
	jmethodID mid_isAdvancedVersion4055;
	jmethodID mid_addAcquisitionListener4056;
	jmethodID mid_removeAcquisitionListener4057;
	jmethodID mid_getCpuVersion4058;
	jmethodID mid_getCpuSubVersion4059;
	jmethodID mid_getDetectorType4060;
	jmethodID mid_setDetectorType4061;
	jmethodID mid_setScansToAverage4062;
	jmethodID mid_getScansToAverage4063;
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
#ifndef EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T
#define EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T
	typedef void* SPECTROMETERPLUGINARRAY_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */
#ifndef EXTERN_TYPEDEF_MAYA2000_T
#define EXTERN_TYPEDEF_MAYA2000_T
	typedef void* MAYA2000_T;
#endif /* EXTERN_TYPEDEF_MAYA2000_T */

	EXPORTED MAYA2000_T Maya2000_Create();
	EXPORTED MAYA2000_T Maya2000_Create_1(int i);
	EXPORTED void Maya2000_setEndpoints(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_getEndpoint(MAYA2000_T c_maya2000, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short Maya2000_allowWriteToEEPROM(MAYA2000_T c_maya2000, int privilegeLevel, int slot);
	EXPORTED void Maya2000_openSpectrometer(MAYA2000_T c_maya2000, int index);
	EXPORTED void Maya2000_getGUIFeatures(MAYA2000_T c_maya2000, GUIPROVIDERARRAY_T retval);
	EXPORTED void Maya2000_setStrobeDelay(MAYA2000_T c_maya2000, int delay);
	EXPORTED int Maya2000_getActualIntegrationTime(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_getPlugIns(MAYA2000_T c_maya2000, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int Maya2000_getNumberOfPlugIns(MAYA2000_T c_maya2000);
	EXPORTED short Maya2000_isPlugInDetected(MAYA2000_T c_maya2000, int id);
	EXPORTED void Maya2000_initializePlugIns(MAYA2000_T c_maya2000, CHARARRAY_T retval);
	EXPORTED void Maya2000_detectPlugIns(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_setI2CBytes(MAYA2000_T c_maya2000, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void Maya2000_getI2CBytes(MAYA2000_T c_maya2000, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void Maya2000_getSPIBytes(MAYA2000_T c_maya2000, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void Maya2000_getPSOCVersion(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED void Maya2000_getFPGAFirmwareVersion(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED double Maya2000_continuousStrobeCountsToMicros(MAYA2000_T c_maya2000, int counts);
	EXPORTED void Maya2000_setContinuousStrobeDelay(MAYA2000_T c_maya2000, int delayMicros);
	EXPORTED int Maya2000_getContinuousStrobeDelayMinimum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getContinuousStrobeDelayMaximum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getContinuousStrobeDelayIncrement(MAYA2000_T c_maya2000, int magnitude);
	EXPORTED void Maya2000_setContinuousModeType(MAYA2000_T c_maya2000, short mode);
	EXPORTED void Maya2000_setDelayAfterIntegration(MAYA2000_T c_maya2000, int delay);
	EXPORTED short Maya2000_getContinuousModeType(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getDelayAfterIntegration(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setContinuousEnable(MAYA2000_T c_maya2000, short value);
	EXPORTED short Maya2000_getContinuousEnable(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setAdvancedIntegrationTime(MAYA2000_T c_maya2000, long long delayMicros);
	EXPORTED int Maya2000_getIntegrationTimeBaseClock(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getIntegrationClockTimer(MAYA2000_T c_maya2000);
	EXPORTED long long Maya2000_getAdvancedIntegrationTimeMinimum(MAYA2000_T c_maya2000);
	EXPORTED long long Maya2000_getAdvancedIntegrationTimeMaximum(MAYA2000_T c_maya2000);
	EXPORTED long long Maya2000_getAdvancedIntegrationTimeIncrement(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setExternalTriggerMode(MAYA2000_T c_maya2000, int mode);
	EXPORTED void Maya2000_getExternalTriggerModes(MAYA2000_T c_maya2000, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void Maya2000_setShutterClock(MAYA2000_T c_maya2000, int value);
	EXPORTED int Maya2000_getShutterClock(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setSingleStrobeLow(MAYA2000_T c_maya2000, int value);
	EXPORTED void Maya2000_setSingleStrobeHigh(MAYA2000_T c_maya2000, int value);
	EXPORTED double Maya2000_getSingleStrobeCountsToMicros(MAYA2000_T c_maya2000, int counts);
	EXPORTED int Maya2000_getSingleStrobeLow(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getSingleStrobeHigh(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getSingleStrobeMinimum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getSingleStrobeMaximum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getSingleStrobeIncrement(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setDirectionAllBits(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void Maya2000_setMuxAllBits(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void Maya2000_setValueAllBits(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void Maya2000_setDirectionBitmask(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void Maya2000_setMuxBitmask(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void Maya2000_setValueBitmask(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void Maya2000_setDirectionBit(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED void Maya2000_setMuxBit(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED void Maya2000_setValueBit(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED int Maya2000_getTotalGPIOBits(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_getDirectionBits(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED void Maya2000_getMuxBits(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED void Maya2000_getValueBits(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED int Maya2000_getValueBit(MAYA2000_T c_maya2000, int bitNumber);
	EXPORTED int Maya2000_getNumberOfPins(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_getIrradianceCalibrationFactors(MAYA2000_T c_maya2000, DOUBLEARRAY_T retval);
	EXPORTED void Maya2000_setIrradianceCalibrationFactors(MAYA2000_T c_maya2000, DOUBLEARRAY_T data);
	EXPORTED double Maya2000_getCollectionArea(MAYA2000_T c_maya2000);
	EXPORTED short Maya2000_hasCollectionArea(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setCollectionArea(MAYA2000_T c_maya2000, double area);
	EXPORTED void Maya2000_setMasterClockDivisor(MAYA2000_T c_maya2000, int value);
	EXPORTED int Maya2000_getMasterClockDivisor(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setExternalTriggerDelay(MAYA2000_T c_maya2000, int counts);
	EXPORTED double Maya2000_triggerDelayCountsToMicroseconds(MAYA2000_T c_maya2000, int counts);
	EXPORTED int Maya2000_getExternalTriggerDelayMinimum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getExternalTriggerDelayMaximum(MAYA2000_T c_maya2000);
	EXPORTED int Maya2000_getExternalTriggerDelayIncrement(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_readNonlinearityCoefficientsFromSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_writeNonlinearityCoefficientsToSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_getNonlinearityCoefficients(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_setNonlinearityCoefficients(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_getNonlinearityCoefficientsSingleChannel(MAYA2000_T c_maya2000, int index, DOUBLEARRAY_T retval);
	EXPORTED void Maya2000_setNonlinearityCoefficientsSingleChannel(MAYA2000_T c_maya2000, DOUBLEARRAY_T nl, int index);
	EXPORTED void Maya2000_readWavelengthCalibrationCoefficientsFromSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_writeWavelengthCoefficientsToSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_getWavelengthCalibrationCoefficients(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_setWavelengthCalibrationCoefficients(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_getWavelengths(MAYA2000_T c_maya2000, int index, DOUBLEARRAY_T retval);
	EXPORTED void Maya2000_setWavelengths(MAYA2000_T c_maya2000, DOUBLEARRAY_T wl, int index);
	EXPORTED void Maya2000_readStrayLightCorrectionCoefficientFromSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_writeStrayLightCoefficientToSpectrometer(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_setStrayLightCorrectionCoefficient(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void Maya2000_getStrayLightCorrectionCoefficient(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void Maya2000_setStrayLight(MAYA2000_T c_maya2000, double strayLight, int index);
	EXPORTED double Maya2000_getStrayLight(MAYA2000_T c_maya2000, int index);
	EXPORTED short Maya2000_isAdvancedVersion(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_addAcquisitionListener(MAYA2000_T c_maya2000, ACQUISITIONLISTENER_T listener);
	EXPORTED void Maya2000_removeAcquisitionListener(MAYA2000_T c_maya2000, ACQUISITIONLISTENER_T listener);
	EXPORTED void Maya2000_getCpuVersion(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED void Maya2000_getCpuSubVersion(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED int Maya2000_getDetectorType(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_setDetectorType(MAYA2000_T c_maya2000, int type);
	EXPORTED void Maya2000_setScansToAverage(MAYA2000_T c_maya2000, int scans);
	EXPORTED int Maya2000_getScansToAverage(MAYA2000_T c_maya2000);
	EXPORTED void Maya2000_Destroy(MAYA2000_T maya2000);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MAYA2000_T STDCALL Maya2000_Create_stdcall();
	EXPORTED MAYA2000_T STDCALL Maya2000_Create_stdcall_1(int i);
	EXPORTED void STDCALL Maya2000_setEndpoints_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_getEndpoint_stdcall(MAYA2000_T c_maya2000, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short STDCALL Maya2000_allowWriteToEEPROM_stdcall(MAYA2000_T c_maya2000, int privilegeLevel, int slot);
	EXPORTED void STDCALL Maya2000_openSpectrometer_stdcall(MAYA2000_T c_maya2000, int index);
	EXPORTED void STDCALL Maya2000_getGUIFeatures_stdcall(MAYA2000_T c_maya2000, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setStrobeDelay_stdcall(MAYA2000_T c_maya2000, int delay);
	EXPORTED int STDCALL Maya2000_getActualIntegrationTime_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_getPlugIns_stdcall(MAYA2000_T c_maya2000, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int STDCALL Maya2000_getNumberOfPlugIns_stdcall(MAYA2000_T c_maya2000);
	EXPORTED short STDCALL Maya2000_isPlugInDetected_stdcall(MAYA2000_T c_maya2000, int id);
	EXPORTED void STDCALL Maya2000_initializePlugIns_stdcall(MAYA2000_T c_maya2000, CHARARRAY_T retval);
	EXPORTED void STDCALL Maya2000_detectPlugIns_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_setI2CBytes_stdcall(MAYA2000_T c_maya2000, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void STDCALL Maya2000_getI2CBytes_stdcall(MAYA2000_T c_maya2000, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void STDCALL Maya2000_getSPIBytes_stdcall(MAYA2000_T c_maya2000, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void STDCALL Maya2000_getPSOCVersion_stdcall(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED void STDCALL Maya2000_getFPGAFirmwareVersion_stdcall(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED double STDCALL Maya2000_continuousStrobeCountsToMicros_stdcall(MAYA2000_T c_maya2000, int counts);
	EXPORTED void STDCALL Maya2000_setContinuousStrobeDelay_stdcall(MAYA2000_T c_maya2000, int delayMicros);
	EXPORTED int STDCALL Maya2000_getContinuousStrobeDelayMinimum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getContinuousStrobeDelayMaximum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getContinuousStrobeDelayIncrement_stdcall(MAYA2000_T c_maya2000, int magnitude);
	EXPORTED void STDCALL Maya2000_setContinuousModeType_stdcall(MAYA2000_T c_maya2000, short mode);
	EXPORTED void STDCALL Maya2000_setDelayAfterIntegration_stdcall(MAYA2000_T c_maya2000, int delay);
	EXPORTED short STDCALL Maya2000_getContinuousModeType_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getDelayAfterIntegration_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setContinuousEnable_stdcall(MAYA2000_T c_maya2000, short value);
	EXPORTED short STDCALL Maya2000_getContinuousEnable_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setAdvancedIntegrationTime_stdcall(MAYA2000_T c_maya2000, long long delayMicros);
	EXPORTED int STDCALL Maya2000_getIntegrationTimeBaseClock_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getIntegrationClockTimer_stdcall(MAYA2000_T c_maya2000);
	EXPORTED long long STDCALL Maya2000_getAdvancedIntegrationTimeMinimum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED long long STDCALL Maya2000_getAdvancedIntegrationTimeMaximum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED long long STDCALL Maya2000_getAdvancedIntegrationTimeIncrement_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setExternalTriggerMode_stdcall(MAYA2000_T c_maya2000, int mode);
	EXPORTED void STDCALL Maya2000_getExternalTriggerModes_stdcall(MAYA2000_T c_maya2000, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setShutterClock_stdcall(MAYA2000_T c_maya2000, int value);
	EXPORTED int STDCALL Maya2000_getShutterClock_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setSingleStrobeLow_stdcall(MAYA2000_T c_maya2000, int value);
	EXPORTED void STDCALL Maya2000_setSingleStrobeHigh_stdcall(MAYA2000_T c_maya2000, int value);
	EXPORTED double STDCALL Maya2000_getSingleStrobeCountsToMicros_stdcall(MAYA2000_T c_maya2000, int counts);
	EXPORTED int STDCALL Maya2000_getSingleStrobeLow_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getSingleStrobeHigh_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getSingleStrobeMinimum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getSingleStrobeMaximum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getSingleStrobeIncrement_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setDirectionAllBits_stdcall(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void STDCALL Maya2000_setMuxAllBits_stdcall(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void STDCALL Maya2000_setValueAllBits_stdcall(MAYA2000_T c_maya2000, BITSET_T bitSet);
	EXPORTED void STDCALL Maya2000_setDirectionBitmask_stdcall(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void STDCALL Maya2000_setMuxBitmask_stdcall(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void STDCALL Maya2000_setValueBitmask_stdcall(MAYA2000_T c_maya2000, short bitmask);
	EXPORTED void STDCALL Maya2000_setDirectionBit_stdcall(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED void STDCALL Maya2000_setMuxBit_stdcall(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED void STDCALL Maya2000_setValueBit_stdcall(MAYA2000_T c_maya2000, int bit, short value);
	EXPORTED int STDCALL Maya2000_getTotalGPIOBits_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_getDirectionBits_stdcall(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED void STDCALL Maya2000_getMuxBits_stdcall(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED void STDCALL Maya2000_getValueBits_stdcall(MAYA2000_T c_maya2000, BITSET_T retval);
	EXPORTED int STDCALL Maya2000_getValueBit_stdcall(MAYA2000_T c_maya2000, int bitNumber);
	EXPORTED int STDCALL Maya2000_getNumberOfPins_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_getIrradianceCalibrationFactors_stdcall(MAYA2000_T c_maya2000, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setIrradianceCalibrationFactors_stdcall(MAYA2000_T c_maya2000, DOUBLEARRAY_T data);
	EXPORTED double STDCALL Maya2000_getCollectionArea_stdcall(MAYA2000_T c_maya2000);
	EXPORTED short STDCALL Maya2000_hasCollectionArea_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setCollectionArea_stdcall(MAYA2000_T c_maya2000, double area);
	EXPORTED void STDCALL Maya2000_setMasterClockDivisor_stdcall(MAYA2000_T c_maya2000, int value);
	EXPORTED int STDCALL Maya2000_getMasterClockDivisor_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setExternalTriggerDelay_stdcall(MAYA2000_T c_maya2000, int counts);
	EXPORTED double STDCALL Maya2000_triggerDelayCountsToMicroseconds_stdcall(MAYA2000_T c_maya2000, int counts);
	EXPORTED int STDCALL Maya2000_getExternalTriggerDelayMinimum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getExternalTriggerDelayMaximum_stdcall(MAYA2000_T c_maya2000);
	EXPORTED int STDCALL Maya2000_getExternalTriggerDelayIncrement_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_readNonlinearityCoefficientsFromSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_writeNonlinearityCoefficientsToSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_getNonlinearityCoefficients_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setNonlinearityCoefficients_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_getNonlinearityCoefficientsSingleChannel_stdcall(MAYA2000_T c_maya2000, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setNonlinearityCoefficientsSingleChannel_stdcall(MAYA2000_T c_maya2000, DOUBLEARRAY_T nl, int index);
	EXPORTED void STDCALL Maya2000_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_writeWavelengthCoefficientsToSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_getWavelengthCalibrationCoefficients_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setWavelengthCalibrationCoefficients_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_getWavelengths_stdcall(MAYA2000_T c_maya2000, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setWavelengths_stdcall(MAYA2000_T c_maya2000, DOUBLEARRAY_T wl, int index);
	EXPORTED void STDCALL Maya2000_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_writeStrayLightCoefficientToSpectrometer_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_setStrayLightCorrectionCoefficient_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL Maya2000_getStrayLightCorrectionCoefficient_stdcall(MAYA2000_T c_maya2000, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL Maya2000_setStrayLight_stdcall(MAYA2000_T c_maya2000, double strayLight, int index);
	EXPORTED double STDCALL Maya2000_getStrayLight_stdcall(MAYA2000_T c_maya2000, int index);
	EXPORTED short STDCALL Maya2000_isAdvancedVersion_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_addAcquisitionListener_stdcall(MAYA2000_T c_maya2000, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL Maya2000_removeAcquisitionListener_stdcall(MAYA2000_T c_maya2000, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL Maya2000_getCpuVersion_stdcall(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED void STDCALL Maya2000_getCpuSubVersion_stdcall(MAYA2000_T c_maya2000, JSTRING_T retval);
	EXPORTED int STDCALL Maya2000_getDetectorType_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_setDetectorType_stdcall(MAYA2000_T c_maya2000, int type);
	EXPORTED void STDCALL Maya2000_setScansToAverage_stdcall(MAYA2000_T c_maya2000, int scans);
	EXPORTED int STDCALL Maya2000_getScansToAverage_stdcall(MAYA2000_T c_maya2000);
	EXPORTED void STDCALL Maya2000_Destroy_stdcall(MAYA2000_T maya2000);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MAYA2000_H */

/**
 * File: NIRQuest.h
 * Autogenerated on Fri Mar 23 13:39:02 EDT 2018 based on
 * NIRQuest.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/nirquest/NIRQuest
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NIRQUEST_H
#define NIRQUEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "GUIProviderArray.h"
#include "JString.h"
#include "SpectrometerPlugInArray.h"
#include "ExternalTriggerModeArray.h"
#include "BitSet.h"
#include "CoefficientsArray.h"
#include "Spectrum.h"
#include "AcquisitionListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class USBEndpointDescriptor;
class GUIProviderArray;
class JString;
class SpectrometerPlugInArray;
class ExternalTriggerModeArray;
class BitSet;
class CoefficientsArray;
class Spectrum;
class AcquisitionListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED NIRQuest : public USBSpectrometer // CPPClass.tag001
{
public: 
	NIRQuest();
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	GUIProviderArray getGUIFeatures();
	int getSaturationIntensity();
	short setSaturationIntensity(int newSaturationIntensity, JString& key);
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
	void setExternalTriggerDelay(int counts);
	double triggerDelayCountsToMicroseconds(int counts);
	int getExternalTriggerDelayMinimum();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayIncrement();
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
	double getBoardTemperatureCelsius();
	DoubleArray getIrradianceCalibrationFactors();
	void setIrradianceCalibrationFactors(DoubleArray& data);
	double getCollectionArea();
	short hasCollectionArea();
	void setCollectionArea(double area);
	void setMasterClockDivisor(int value);
	int getMasterClockDivisor();
	void setTECEnable(short enable);
	void setFanEnable(short enable);
	double getDetectorTemperatureCelsius();
	double getDetectorTemperatureSetPointCelsius();
	void setDetectorSetPointCelsius(double point);
	double getSetPointMinimumCelsius();
	double getSetPointMaximumCelsius();
	double getSetPointIncrementCelsius();
	short isSaveTECStateEnabled();
	void saveTECState();
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
	IntArray getBadPixels();
	void setBadPixels(IntArray& pixels);
	Spectrum removeBadPixels(Spectrum& spectrum);
	int getNumberOfBadPixels();
	int getMaximumBadPixels();
	IntArray getAllPixels();
	void setBadPixelsToSpectrometer();
	IntArray getBadPixelsFromSpectrometer();
	void setHighGain(short gain);
	void setHighGainDefault(short gain);
	short getHighGainDefault();
	short hasHighGainDefault();
	short isAdvancedVersion();
	void addAcquisitionListener(AcquisitionListener& listener);
	void removeAcquisitionListener(AcquisitionListener& listener);
	JString getCpuVersion();
	JString getCpuSubVersion();
	int getDetectorType();
	void setDetectorType(int type);
	void setScansToAverage(int scans);
	int getScansToAverage();
	~NIRQuest();
	// No public Java copy constructor; creating one:
	NIRQuest(const NIRQuest &that);
	// Creating assignment operator declaration:
	NIRQuest &operator=(const NIRQuest &that);

private:
	jmethodID mid_NIRQuest4933;
	jmethodID mid_setEndpoints4934;
	jmethodID mid_getEndpoint4935;
	jmethodID mid_getGUIFeatures4936;
	jmethodID mid_getSaturationIntensity4937;
	jmethodID mid_setSaturationIntensity4938;
	jmethodID mid_setStrobeDelay4939;
	jmethodID mid_getActualIntegrationTime4940;
	jmethodID mid_getPlugIns4941;
	jmethodID mid_getNumberOfPlugIns4942;
	jmethodID mid_isPlugInDetected4943;
	jmethodID mid_initializePlugIns4944;
	jmethodID mid_detectPlugIns4945;
	jmethodID mid_setI2CBytes4946;
	jmethodID mid_getI2CBytes4947;
	jmethodID mid_getSPIBytes4948;
	jmethodID mid_getPSOCVersion4949;
	jmethodID mid_getFPGAFirmwareVersion4950;
	jmethodID mid_continuousStrobeCountsToMicros4951;
	jmethodID mid_setContinuousStrobeDelay4952;
	jmethodID mid_getContinuousStrobeDelayMinimum4953;
	jmethodID mid_getContinuousStrobeDelayMaximum4954;
	jmethodID mid_getContinuousStrobeDelayIncrement4955;
	jmethodID mid_setContinuousModeType4956;
	jmethodID mid_setDelayAfterIntegration4957;
	jmethodID mid_getContinuousModeType4958;
	jmethodID mid_getDelayAfterIntegration4959;
	jmethodID mid_setContinuousEnable4960;
	jmethodID mid_getContinuousEnable4961;
	jmethodID mid_setAdvancedIntegrationTime4962;
	jmethodID mid_getIntegrationTimeBaseClock4963;
	jmethodID mid_getIntegrationClockTimer4964;
	jmethodID mid_getAdvancedIntegrationTimeMinimum4965;
	jmethodID mid_getAdvancedIntegrationTimeMaximum4966;
	jmethodID mid_getAdvancedIntegrationTimeIncrement4967;
	jmethodID mid_setExternalTriggerMode4968;
	jmethodID mid_getExternalTriggerModes4969;
	jmethodID mid_setExternalTriggerDelay4970;
	jmethodID mid_triggerDelayCountsToMicroseconds4971;
	jmethodID mid_getExternalTriggerDelayMinimum4972;
	jmethodID mid_getExternalTriggerDelayMaximum4973;
	jmethodID mid_getExternalTriggerDelayIncrement4974;
	jmethodID mid_setShutterClock4975;
	jmethodID mid_getShutterClock4976;
	jmethodID mid_setSingleStrobeLow4977;
	jmethodID mid_setSingleStrobeHigh4978;
	jmethodID mid_getSingleStrobeCountsToMicros4979;
	jmethodID mid_getSingleStrobeLow4980;
	jmethodID mid_getSingleStrobeHigh4981;
	jmethodID mid_getSingleStrobeMinimum4982;
	jmethodID mid_getSingleStrobeMaximum4983;
	jmethodID mid_getSingleStrobeIncrement4984;
	jmethodID mid_setDirectionAllBits4985;
	jmethodID mid_setMuxAllBits4986;
	jmethodID mid_setValueAllBits4987;
	jmethodID mid_setDirectionBitmask4988;
	jmethodID mid_setMuxBitmask4989;
	jmethodID mid_setValueBitmask4990;
	jmethodID mid_setDirectionBit4991;
	jmethodID mid_setMuxBit4992;
	jmethodID mid_setValueBit4993;
	jmethodID mid_getTotalGPIOBits4994;
	jmethodID mid_getDirectionBits4995;
	jmethodID mid_getMuxBits4996;
	jmethodID mid_getValueBits4997;
	jmethodID mid_getValueBit4998;
	jmethodID mid_getNumberOfPins4999;
	jmethodID mid_getBoardTemperatureCelsius5000;
	jmethodID mid_getIrradianceCalibrationFactors5001;
	jmethodID mid_setIrradianceCalibrationFactors5002;
	jmethodID mid_getCollectionArea5003;
	jmethodID mid_hasCollectionArea5004;
	jmethodID mid_setCollectionArea5005;
	jmethodID mid_setMasterClockDivisor5006;
	jmethodID mid_getMasterClockDivisor5007;
	jmethodID mid_setTECEnable5008;
	jmethodID mid_setFanEnable5009;
	jmethodID mid_getDetectorTemperatureCelsius5010;
	jmethodID mid_getDetectorTemperatureSetPointCelsius5011;
	jmethodID mid_setDetectorSetPointCelsius5012;
	jmethodID mid_getSetPointMinimumCelsius5013;
	jmethodID mid_getSetPointMaximumCelsius5014;
	jmethodID mid_getSetPointIncrementCelsius5015;
	jmethodID mid_isSaveTECStateEnabled5016;
	jmethodID mid_saveTECState5017;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer5018;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer5019;
	jmethodID mid_getNonlinearityCoefficients5020;
	jmethodID mid_setNonlinearityCoefficients5021;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel5022;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel5023;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer5024;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer5025;
	jmethodID mid_getWavelengthCalibrationCoefficients5026;
	jmethodID mid_setWavelengthCalibrationCoefficients5027;
	jmethodID mid_getWavelengths5028;
	jmethodID mid_setWavelengths5029;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer5030;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer5031;
	jmethodID mid_setStrayLightCorrectionCoefficient5032;
	jmethodID mid_getStrayLightCorrectionCoefficient5033;
	jmethodID mid_setStrayLight5034;
	jmethodID mid_getStrayLight5035;
	jmethodID mid_getBadPixels5036;
	jmethodID mid_setBadPixels5037;
	jmethodID mid_removeBadPixels5038;
	jmethodID mid_getNumberOfBadPixels5039;
	jmethodID mid_getMaximumBadPixels5040;
	jmethodID mid_getAllPixels5041;
	jmethodID mid_setBadPixelsToSpectrometer5042;
	jmethodID mid_getBadPixelsFromSpectrometer5043;
	jmethodID mid_setHighGain5044;
	jmethodID mid_setHighGainDefault5045;
	jmethodID mid_getHighGainDefault5046;
	jmethodID mid_hasHighGainDefault5047;
	jmethodID mid_isAdvancedVersion5048;
	jmethodID mid_addAcquisitionListener5049;
	jmethodID mid_removeAcquisitionListener5050;
	jmethodID mid_getCpuVersion5051;
	jmethodID mid_getCpuSubVersion5052;
	jmethodID mid_getDetectorType5053;
	jmethodID mid_setDetectorType5054;
	jmethodID mid_setScansToAverage5055;
	jmethodID mid_getScansToAverage5056;
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
#ifndef EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T
#define EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T
	typedef void* SPECTROMETERPLUGINARRAY_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERPLUGINARRAY_T */
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
#ifndef EXTERN_TYPEDEF_SPECTRUM_T
#define EXTERN_TYPEDEF_SPECTRUM_T
	typedef void* SPECTRUM_T;
#endif /* EXTERN_TYPEDEF_SPECTRUM_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */
#ifndef EXTERN_TYPEDEF_NIRQUEST_T
#define EXTERN_TYPEDEF_NIRQUEST_T
	typedef void* NIRQUEST_T;
#endif /* EXTERN_TYPEDEF_NIRQUEST_T */

	EXPORTED NIRQUEST_T NIRQuest_Create();
	EXPORTED void NIRQuest_setEndpoints(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getEndpoint(NIRQUEST_T c_nirquest, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void NIRQuest_getGUIFeatures(NIRQUEST_T c_nirquest, GUIPROVIDERARRAY_T retval);
	EXPORTED int NIRQuest_getSaturationIntensity(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_setSaturationIntensity(NIRQUEST_T c_nirquest, int newSaturationIntensity, JSTRING_T key);
	EXPORTED void NIRQuest_setStrobeDelay(NIRQUEST_T c_nirquest, int delay);
	EXPORTED int NIRQuest_getActualIntegrationTime(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getPlugIns(NIRQUEST_T c_nirquest, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int NIRQuest_getNumberOfPlugIns(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_isPlugInDetected(NIRQUEST_T c_nirquest, int id);
	EXPORTED void NIRQuest_initializePlugIns(NIRQUEST_T c_nirquest, CHARARRAY_T retval);
	EXPORTED void NIRQuest_detectPlugIns(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_setI2CBytes(NIRQUEST_T c_nirquest, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void NIRQuest_getI2CBytes(NIRQUEST_T c_nirquest, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void NIRQuest_getSPIBytes(NIRQUEST_T c_nirquest, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void NIRQuest_getPSOCVersion(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED void NIRQuest_getFPGAFirmwareVersion(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED double NIRQuest_continuousStrobeCountsToMicros(NIRQUEST_T c_nirquest, int counts);
	EXPORTED void NIRQuest_setContinuousStrobeDelay(NIRQUEST_T c_nirquest, int delayMicros);
	EXPORTED int NIRQuest_getContinuousStrobeDelayMinimum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getContinuousStrobeDelayMaximum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getContinuousStrobeDelayIncrement(NIRQUEST_T c_nirquest, int magnitude);
	EXPORTED void NIRQuest_setContinuousModeType(NIRQUEST_T c_nirquest, short mode);
	EXPORTED void NIRQuest_setDelayAfterIntegration(NIRQUEST_T c_nirquest, int delay);
	EXPORTED short NIRQuest_getContinuousModeType(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getDelayAfterIntegration(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setContinuousEnable(NIRQUEST_T c_nirquest, short value);
	EXPORTED short NIRQuest_getContinuousEnable(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setAdvancedIntegrationTime(NIRQUEST_T c_nirquest, long long delayMicros);
	EXPORTED int NIRQuest_getIntegrationTimeBaseClock(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getIntegrationClockTimer(NIRQUEST_T c_nirquest);
	EXPORTED long long NIRQuest_getAdvancedIntegrationTimeMinimum(NIRQUEST_T c_nirquest);
	EXPORTED long long NIRQuest_getAdvancedIntegrationTimeMaximum(NIRQUEST_T c_nirquest);
	EXPORTED long long NIRQuest_getAdvancedIntegrationTimeIncrement(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setExternalTriggerMode(NIRQUEST_T c_nirquest, int mode);
	EXPORTED void NIRQuest_getExternalTriggerModes(NIRQUEST_T c_nirquest, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void NIRQuest_setExternalTriggerDelay(NIRQUEST_T c_nirquest, int counts);
	EXPORTED double NIRQuest_triggerDelayCountsToMicroseconds(NIRQUEST_T c_nirquest, int counts);
	EXPORTED int NIRQuest_getExternalTriggerDelayMinimum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getExternalTriggerDelayMaximum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getExternalTriggerDelayIncrement(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setShutterClock(NIRQUEST_T c_nirquest, int value);
	EXPORTED int NIRQuest_getShutterClock(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setSingleStrobeLow(NIRQUEST_T c_nirquest, int value);
	EXPORTED void NIRQuest_setSingleStrobeHigh(NIRQUEST_T c_nirquest, int value);
	EXPORTED double NIRQuest_getSingleStrobeCountsToMicros(NIRQUEST_T c_nirquest, int counts);
	EXPORTED int NIRQuest_getSingleStrobeLow(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getSingleStrobeHigh(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getSingleStrobeMinimum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getSingleStrobeMaximum(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getSingleStrobeIncrement(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setDirectionAllBits(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void NIRQuest_setMuxAllBits(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void NIRQuest_setValueAllBits(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void NIRQuest_setDirectionBitmask(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void NIRQuest_setMuxBitmask(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void NIRQuest_setValueBitmask(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void NIRQuest_setDirectionBit(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED void NIRQuest_setMuxBit(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED void NIRQuest_setValueBit(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED int NIRQuest_getTotalGPIOBits(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getDirectionBits(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED void NIRQuest_getMuxBits(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED void NIRQuest_getValueBits(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED int NIRQuest_getValueBit(NIRQUEST_T c_nirquest, int bitNumber);
	EXPORTED int NIRQuest_getNumberOfPins(NIRQUEST_T c_nirquest);
	EXPORTED double NIRQuest_getBoardTemperatureCelsius(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getIrradianceCalibrationFactors(NIRQUEST_T c_nirquest, DOUBLEARRAY_T retval);
	EXPORTED void NIRQuest_setIrradianceCalibrationFactors(NIRQUEST_T c_nirquest, DOUBLEARRAY_T data);
	EXPORTED double NIRQuest_getCollectionArea(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_hasCollectionArea(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setCollectionArea(NIRQUEST_T c_nirquest, double area);
	EXPORTED void NIRQuest_setMasterClockDivisor(NIRQUEST_T c_nirquest, int value);
	EXPORTED int NIRQuest_getMasterClockDivisor(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setTECEnable(NIRQUEST_T c_nirquest, short enable);
	EXPORTED void NIRQuest_setFanEnable(NIRQUEST_T c_nirquest, short enable);
	EXPORTED double NIRQuest_getDetectorTemperatureCelsius(NIRQUEST_T c_nirquest);
	EXPORTED double NIRQuest_getDetectorTemperatureSetPointCelsius(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setDetectorSetPointCelsius(NIRQUEST_T c_nirquest, double point);
	EXPORTED double NIRQuest_getSetPointMinimumCelsius(NIRQUEST_T c_nirquest);
	EXPORTED double NIRQuest_getSetPointMaximumCelsius(NIRQUEST_T c_nirquest);
	EXPORTED double NIRQuest_getSetPointIncrementCelsius(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_isSaveTECStateEnabled(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_saveTECState(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_readNonlinearityCoefficientsFromSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_writeNonlinearityCoefficientsToSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_getNonlinearityCoefficients(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_setNonlinearityCoefficients(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_getNonlinearityCoefficientsSingleChannel(NIRQUEST_T c_nirquest, int index, DOUBLEARRAY_T retval);
	EXPORTED void NIRQuest_setNonlinearityCoefficientsSingleChannel(NIRQUEST_T c_nirquest, DOUBLEARRAY_T nl, int index);
	EXPORTED void NIRQuest_readWavelengthCalibrationCoefficientsFromSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_writeWavelengthCoefficientsToSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_getWavelengthCalibrationCoefficients(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_setWavelengthCalibrationCoefficients(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_getWavelengths(NIRQUEST_T c_nirquest, int index, DOUBLEARRAY_T retval);
	EXPORTED void NIRQuest_setWavelengths(NIRQUEST_T c_nirquest, DOUBLEARRAY_T wl, int index);
	EXPORTED void NIRQuest_readStrayLightCorrectionCoefficientFromSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_writeStrayLightCoefficientToSpectrometer(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_setStrayLightCorrectionCoefficient(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void NIRQuest_getStrayLightCorrectionCoefficient(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void NIRQuest_setStrayLight(NIRQUEST_T c_nirquest, double strayLight, int index);
	EXPORTED double NIRQuest_getStrayLight(NIRQUEST_T c_nirquest, int index);
	EXPORTED void NIRQuest_getBadPixels(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void NIRQuest_setBadPixels(NIRQUEST_T c_nirquest, INTARRAY_T pixels);
	EXPORTED void NIRQuest_removeBadPixels(NIRQUEST_T c_nirquest, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED int NIRQuest_getNumberOfBadPixels(NIRQUEST_T c_nirquest);
	EXPORTED int NIRQuest_getMaximumBadPixels(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getAllPixels(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void NIRQuest_setBadPixelsToSpectrometer(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_getBadPixelsFromSpectrometer(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void NIRQuest_setHighGain(NIRQUEST_T c_nirquest, short gain);
	EXPORTED void NIRQuest_setHighGainDefault(NIRQUEST_T c_nirquest, short gain);
	EXPORTED short NIRQuest_getHighGainDefault(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_hasHighGainDefault(NIRQUEST_T c_nirquest);
	EXPORTED short NIRQuest_isAdvancedVersion(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_addAcquisitionListener(NIRQUEST_T c_nirquest, ACQUISITIONLISTENER_T listener);
	EXPORTED void NIRQuest_removeAcquisitionListener(NIRQUEST_T c_nirquest, ACQUISITIONLISTENER_T listener);
	EXPORTED void NIRQuest_getCpuVersion(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED void NIRQuest_getCpuSubVersion(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED int NIRQuest_getDetectorType(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_setDetectorType(NIRQUEST_T c_nirquest, int type);
	EXPORTED void NIRQuest_setScansToAverage(NIRQUEST_T c_nirquest, int scans);
	EXPORTED int NIRQuest_getScansToAverage(NIRQUEST_T c_nirquest);
	EXPORTED void NIRQuest_Destroy(NIRQUEST_T nirquest);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED NIRQUEST_T STDCALL NIRQuest_Create_stdcall();
	EXPORTED void STDCALL NIRQuest_setEndpoints_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getEndpoint_stdcall(NIRQUEST_T c_nirquest, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void STDCALL NIRQuest_getGUIFeatures_stdcall(NIRQUEST_T c_nirquest, GUIPROVIDERARRAY_T retval);
	EXPORTED int STDCALL NIRQuest_getSaturationIntensity_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_setSaturationIntensity_stdcall(NIRQUEST_T c_nirquest, int newSaturationIntensity, JSTRING_T key);
	EXPORTED void STDCALL NIRQuest_setStrobeDelay_stdcall(NIRQUEST_T c_nirquest, int delay);
	EXPORTED int STDCALL NIRQuest_getActualIntegrationTime_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getPlugIns_stdcall(NIRQUEST_T c_nirquest, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int STDCALL NIRQuest_getNumberOfPlugIns_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_isPlugInDetected_stdcall(NIRQUEST_T c_nirquest, int id);
	EXPORTED void STDCALL NIRQuest_initializePlugIns_stdcall(NIRQUEST_T c_nirquest, CHARARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_detectPlugIns_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_setI2CBytes_stdcall(NIRQUEST_T c_nirquest, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void STDCALL NIRQuest_getI2CBytes_stdcall(NIRQUEST_T c_nirquest, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_getSPIBytes_stdcall(NIRQUEST_T c_nirquest, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_getPSOCVersion_stdcall(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED void STDCALL NIRQuest_getFPGAFirmwareVersion_stdcall(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED double STDCALL NIRQuest_continuousStrobeCountsToMicros_stdcall(NIRQUEST_T c_nirquest, int counts);
	EXPORTED void STDCALL NIRQuest_setContinuousStrobeDelay_stdcall(NIRQUEST_T c_nirquest, int delayMicros);
	EXPORTED int STDCALL NIRQuest_getContinuousStrobeDelayMinimum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getContinuousStrobeDelayMaximum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getContinuousStrobeDelayIncrement_stdcall(NIRQUEST_T c_nirquest, int magnitude);
	EXPORTED void STDCALL NIRQuest_setContinuousModeType_stdcall(NIRQUEST_T c_nirquest, short mode);
	EXPORTED void STDCALL NIRQuest_setDelayAfterIntegration_stdcall(NIRQUEST_T c_nirquest, int delay);
	EXPORTED short STDCALL NIRQuest_getContinuousModeType_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getDelayAfterIntegration_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setContinuousEnable_stdcall(NIRQUEST_T c_nirquest, short value);
	EXPORTED short STDCALL NIRQuest_getContinuousEnable_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setAdvancedIntegrationTime_stdcall(NIRQUEST_T c_nirquest, long long delayMicros);
	EXPORTED int STDCALL NIRQuest_getIntegrationTimeBaseClock_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getIntegrationClockTimer_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED long long STDCALL NIRQuest_getAdvancedIntegrationTimeMinimum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED long long STDCALL NIRQuest_getAdvancedIntegrationTimeMaximum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED long long STDCALL NIRQuest_getAdvancedIntegrationTimeIncrement_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setExternalTriggerMode_stdcall(NIRQUEST_T c_nirquest, int mode);
	EXPORTED void STDCALL NIRQuest_getExternalTriggerModes_stdcall(NIRQUEST_T c_nirquest, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setExternalTriggerDelay_stdcall(NIRQUEST_T c_nirquest, int counts);
	EXPORTED double STDCALL NIRQuest_triggerDelayCountsToMicroseconds_stdcall(NIRQUEST_T c_nirquest, int counts);
	EXPORTED int STDCALL NIRQuest_getExternalTriggerDelayMinimum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getExternalTriggerDelayMaximum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getExternalTriggerDelayIncrement_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setShutterClock_stdcall(NIRQUEST_T c_nirquest, int value);
	EXPORTED int STDCALL NIRQuest_getShutterClock_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setSingleStrobeLow_stdcall(NIRQUEST_T c_nirquest, int value);
	EXPORTED void STDCALL NIRQuest_setSingleStrobeHigh_stdcall(NIRQUEST_T c_nirquest, int value);
	EXPORTED double STDCALL NIRQuest_getSingleStrobeCountsToMicros_stdcall(NIRQUEST_T c_nirquest, int counts);
	EXPORTED int STDCALL NIRQuest_getSingleStrobeLow_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getSingleStrobeHigh_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getSingleStrobeMinimum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getSingleStrobeMaximum_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getSingleStrobeIncrement_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setDirectionAllBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void STDCALL NIRQuest_setMuxAllBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void STDCALL NIRQuest_setValueAllBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T bitSet);
	EXPORTED void STDCALL NIRQuest_setDirectionBitmask_stdcall(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void STDCALL NIRQuest_setMuxBitmask_stdcall(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void STDCALL NIRQuest_setValueBitmask_stdcall(NIRQUEST_T c_nirquest, short bitmask);
	EXPORTED void STDCALL NIRQuest_setDirectionBit_stdcall(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED void STDCALL NIRQuest_setMuxBit_stdcall(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED void STDCALL NIRQuest_setValueBit_stdcall(NIRQUEST_T c_nirquest, int bit, short value);
	EXPORTED int STDCALL NIRQuest_getTotalGPIOBits_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getDirectionBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED void STDCALL NIRQuest_getMuxBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED void STDCALL NIRQuest_getValueBits_stdcall(NIRQUEST_T c_nirquest, BITSET_T retval);
	EXPORTED int STDCALL NIRQuest_getValueBit_stdcall(NIRQUEST_T c_nirquest, int bitNumber);
	EXPORTED int STDCALL NIRQuest_getNumberOfPins_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED double STDCALL NIRQuest_getBoardTemperatureCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getIrradianceCalibrationFactors_stdcall(NIRQUEST_T c_nirquest, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setIrradianceCalibrationFactors_stdcall(NIRQUEST_T c_nirquest, DOUBLEARRAY_T data);
	EXPORTED double STDCALL NIRQuest_getCollectionArea_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_hasCollectionArea_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setCollectionArea_stdcall(NIRQUEST_T c_nirquest, double area);
	EXPORTED void STDCALL NIRQuest_setMasterClockDivisor_stdcall(NIRQUEST_T c_nirquest, int value);
	EXPORTED int STDCALL NIRQuest_getMasterClockDivisor_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setTECEnable_stdcall(NIRQUEST_T c_nirquest, short enable);
	EXPORTED void STDCALL NIRQuest_setFanEnable_stdcall(NIRQUEST_T c_nirquest, short enable);
	EXPORTED double STDCALL NIRQuest_getDetectorTemperatureCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED double STDCALL NIRQuest_getDetectorTemperatureSetPointCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setDetectorSetPointCelsius_stdcall(NIRQUEST_T c_nirquest, double point);
	EXPORTED double STDCALL NIRQuest_getSetPointMinimumCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED double STDCALL NIRQuest_getSetPointMaximumCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED double STDCALL NIRQuest_getSetPointIncrementCelsius_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_isSaveTECStateEnabled_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_saveTECState_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_readNonlinearityCoefficientsFromSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_writeNonlinearityCoefficientsToSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_getNonlinearityCoefficients_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setNonlinearityCoefficients_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_getNonlinearityCoefficientsSingleChannel_stdcall(NIRQUEST_T c_nirquest, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setNonlinearityCoefficientsSingleChannel_stdcall(NIRQUEST_T c_nirquest, DOUBLEARRAY_T nl, int index);
	EXPORTED void STDCALL NIRQuest_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_writeWavelengthCoefficientsToSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_getWavelengthCalibrationCoefficients_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setWavelengthCalibrationCoefficients_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_getWavelengths_stdcall(NIRQUEST_T c_nirquest, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setWavelengths_stdcall(NIRQUEST_T c_nirquest, DOUBLEARRAY_T wl, int index);
	EXPORTED void STDCALL NIRQuest_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_writeStrayLightCoefficientToSpectrometer_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_setStrayLightCorrectionCoefficient_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL NIRQuest_getStrayLightCorrectionCoefficient_stdcall(NIRQUEST_T c_nirquest, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setStrayLight_stdcall(NIRQUEST_T c_nirquest, double strayLight, int index);
	EXPORTED double STDCALL NIRQuest_getStrayLight_stdcall(NIRQUEST_T c_nirquest, int index);
	EXPORTED void STDCALL NIRQuest_getBadPixels_stdcall(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setBadPixels_stdcall(NIRQUEST_T c_nirquest, INTARRAY_T pixels);
	EXPORTED void STDCALL NIRQuest_removeBadPixels_stdcall(NIRQUEST_T c_nirquest, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED int STDCALL NIRQuest_getNumberOfBadPixels_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED int STDCALL NIRQuest_getMaximumBadPixels_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getAllPixels_stdcall(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setBadPixelsToSpectrometer_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_getBadPixelsFromSpectrometer_stdcall(NIRQUEST_T c_nirquest, INTARRAY_T retval);
	EXPORTED void STDCALL NIRQuest_setHighGain_stdcall(NIRQUEST_T c_nirquest, short gain);
	EXPORTED void STDCALL NIRQuest_setHighGainDefault_stdcall(NIRQUEST_T c_nirquest, short gain);
	EXPORTED short STDCALL NIRQuest_getHighGainDefault_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_hasHighGainDefault_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED short STDCALL NIRQuest_isAdvancedVersion_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_addAcquisitionListener_stdcall(NIRQUEST_T c_nirquest, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL NIRQuest_removeAcquisitionListener_stdcall(NIRQUEST_T c_nirquest, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL NIRQuest_getCpuVersion_stdcall(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED void STDCALL NIRQuest_getCpuSubVersion_stdcall(NIRQUEST_T c_nirquest, JSTRING_T retval);
	EXPORTED int STDCALL NIRQuest_getDetectorType_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_setDetectorType_stdcall(NIRQUEST_T c_nirquest, int type);
	EXPORTED void STDCALL NIRQuest_setScansToAverage_stdcall(NIRQUEST_T c_nirquest, int scans);
	EXPORTED int STDCALL NIRQuest_getScansToAverage_stdcall(NIRQUEST_T c_nirquest);
	EXPORTED void STDCALL NIRQuest_Destroy_stdcall(NIRQUEST_T nirquest);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NIRQUEST_H */

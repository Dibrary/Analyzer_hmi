/**
 * File: S8378.h
 * Autogenerated on Fri Mar 23 13:39:09 EDT 2018 based on
 * S8378.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/s8378Prototype/S8378
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef S8378_H
#define S8378_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "GUIProviderArray.h"
#include "SpectrometerStatus.h"
#include "JString.h"
#include "SpectrometerPlugInArray.h"
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
class SpectrometerStatus;
class JString;
class SpectrometerPlugInArray;
class ExternalTriggerModeArray;
class BitSet;
class CoefficientsArray;
class AcquisitionListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED S8378 : public USBSpectrometer // CPPClass.tag001
{
public: 
	S8378();
	S8378(int i);
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	SpectrometerStatus getStatus();
	int readIntegrationTime();
	void setStrobeDelay(int delay);
	JString toString();
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
	int getValueBit(int bitNumber);
	BitSet getValueBits();
	int getNumberOfPins();
	double getBoardTemperatureCelsius();
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
	void setHighGain(short gain);
	void setHighGainDefault(short gain);
	short getHighGainDefault();
	short hasHighGainDefault();
	int getDarkValue();
	void setDarkValue(int value);
	double getSaturationValue();
	void setSaturationValue(double value);
	void recordSettings();
	short isAdvancedVersion();
	void addAcquisitionListener(AcquisitionListener& listener);
	void removeAcquisitionListener(AcquisitionListener& listener);
	JString getCpuVersion();
	JString getCpuSubVersion();
	int getDetectorType();
	void setDetectorType(int type);
	void setScansToAverage(int scans);
	int getScansToAverage();
	~S8378();
	// No public Java copy constructor; creating one:
	S8378(const S8378 &that);
	// Creating assignment operator declaration:
	S8378 &operator=(const S8378 &that);

private:
	jmethodID mid_S83785379;
	jmethodID mid_S83785380;
	jmethodID mid_setEndpoints5381;
	jmethodID mid_getEndpoint5382;
	jmethodID mid_openSpectrometer5383;
	jmethodID mid_getGUIFeatures5384;
	jmethodID mid_getStatus5385;
	jmethodID mid_readIntegrationTime5386;
	jmethodID mid_setStrobeDelay5387;
	jmethodID mid_toString5388;
	jmethodID mid_getPlugIns5389;
	jmethodID mid_getNumberOfPlugIns5390;
	jmethodID mid_isPlugInDetected5391;
	jmethodID mid_initializePlugIns5392;
	jmethodID mid_detectPlugIns5393;
	jmethodID mid_setI2CBytes5394;
	jmethodID mid_getI2CBytes5395;
	jmethodID mid_getSPIBytes5396;
	jmethodID mid_getPSOCVersion5397;
	jmethodID mid_getFPGAFirmwareVersion5398;
	jmethodID mid_continuousStrobeCountsToMicros5399;
	jmethodID mid_setContinuousStrobeDelay5400;
	jmethodID mid_getContinuousStrobeDelayMinimum5401;
	jmethodID mid_getContinuousStrobeDelayMaximum5402;
	jmethodID mid_getContinuousStrobeDelayIncrement5403;
	jmethodID mid_setContinuousModeType5404;
	jmethodID mid_setDelayAfterIntegration5405;
	jmethodID mid_getContinuousModeType5406;
	jmethodID mid_getDelayAfterIntegration5407;
	jmethodID mid_setContinuousEnable5408;
	jmethodID mid_getContinuousEnable5409;
	jmethodID mid_setAdvancedIntegrationTime5410;
	jmethodID mid_getIntegrationTimeBaseClock5411;
	jmethodID mid_getIntegrationClockTimer5412;
	jmethodID mid_getAdvancedIntegrationTimeMinimum5413;
	jmethodID mid_getAdvancedIntegrationTimeMaximum5414;
	jmethodID mid_getAdvancedIntegrationTimeIncrement5415;
	jmethodID mid_setExternalTriggerMode5416;
	jmethodID mid_getExternalTriggerModes5417;
	jmethodID mid_setShutterClock5418;
	jmethodID mid_getShutterClock5419;
	jmethodID mid_setSingleStrobeLow5420;
	jmethodID mid_setSingleStrobeHigh5421;
	jmethodID mid_getSingleStrobeCountsToMicros5422;
	jmethodID mid_getSingleStrobeLow5423;
	jmethodID mid_getSingleStrobeHigh5424;
	jmethodID mid_getSingleStrobeMinimum5425;
	jmethodID mid_getSingleStrobeMaximum5426;
	jmethodID mid_getSingleStrobeIncrement5427;
	jmethodID mid_setDirectionAllBits5428;
	jmethodID mid_setMuxAllBits5429;
	jmethodID mid_setValueAllBits5430;
	jmethodID mid_setDirectionBitmask5431;
	jmethodID mid_setMuxBitmask5432;
	jmethodID mid_setValueBitmask5433;
	jmethodID mid_setDirectionBit5434;
	jmethodID mid_setMuxBit5435;
	jmethodID mid_setValueBit5436;
	jmethodID mid_getTotalGPIOBits5437;
	jmethodID mid_getDirectionBits5438;
	jmethodID mid_getMuxBits5439;
	jmethodID mid_getValueBit5440;
	jmethodID mid_getValueBits5441;
	jmethodID mid_getNumberOfPins5442;
	jmethodID mid_getBoardTemperatureCelsius5443;
	jmethodID mid_getIrradianceCalibrationFactors5444;
	jmethodID mid_setIrradianceCalibrationFactors5445;
	jmethodID mid_getCollectionArea5446;
	jmethodID mid_hasCollectionArea5447;
	jmethodID mid_setCollectionArea5448;
	jmethodID mid_setMasterClockDivisor5449;
	jmethodID mid_getMasterClockDivisor5450;
	jmethodID mid_setExternalTriggerDelay5451;
	jmethodID mid_triggerDelayCountsToMicroseconds5452;
	jmethodID mid_getExternalTriggerDelayMinimum5453;
	jmethodID mid_getExternalTriggerDelayMaximum5454;
	jmethodID mid_getExternalTriggerDelayIncrement5455;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer5456;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer5457;
	jmethodID mid_getNonlinearityCoefficients5458;
	jmethodID mid_setNonlinearityCoefficients5459;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel5460;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel5461;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer5462;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer5463;
	jmethodID mid_getWavelengthCalibrationCoefficients5464;
	jmethodID mid_setWavelengthCalibrationCoefficients5465;
	jmethodID mid_getWavelengths5466;
	jmethodID mid_setWavelengths5467;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer5468;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer5469;
	jmethodID mid_setStrayLightCorrectionCoefficient5470;
	jmethodID mid_getStrayLightCorrectionCoefficient5471;
	jmethodID mid_setStrayLight5472;
	jmethodID mid_getStrayLight5473;
	jmethodID mid_setHighGain5474;
	jmethodID mid_setHighGainDefault5475;
	jmethodID mid_getHighGainDefault5476;
	jmethodID mid_hasHighGainDefault5477;
	jmethodID mid_getDarkValue5478;
	jmethodID mid_setDarkValue5479;
	jmethodID mid_getSaturationValue5480;
	jmethodID mid_setSaturationValue5481;
	jmethodID mid_recordSettings5482;
	jmethodID mid_isAdvancedVersion5483;
	jmethodID mid_addAcquisitionListener5484;
	jmethodID mid_removeAcquisitionListener5485;
	jmethodID mid_getCpuVersion5486;
	jmethodID mid_getCpuSubVersion5487;
	jmethodID mid_getDetectorType5488;
	jmethodID mid_setDetectorType5489;
	jmethodID mid_setScansToAverage5490;
	jmethodID mid_getScansToAverage5491;
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
#ifndef EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
#define EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
	typedef void* SPECTROMETERSTATUS_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERSTATUS_T */
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
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */
#ifndef EXTERN_TYPEDEF_S8378_T
#define EXTERN_TYPEDEF_S8378_T
	typedef void* S8378_T;
#endif /* EXTERN_TYPEDEF_S8378_T */

	EXPORTED S8378_T S8378_Create();
	EXPORTED S8378_T S8378_Create_1(int i);
	EXPORTED void S8378_setEndpoints(S8378_T c_s8378);
	EXPORTED void S8378_getEndpoint(S8378_T c_s8378, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void S8378_openSpectrometer(S8378_T c_s8378, int index);
	EXPORTED void S8378_getGUIFeatures(S8378_T c_s8378, GUIPROVIDERARRAY_T retval);
	EXPORTED void S8378_getStatus(S8378_T c_s8378, SPECTROMETERSTATUS_T retval);
	EXPORTED int S8378_readIntegrationTime(S8378_T c_s8378);
	EXPORTED void S8378_setStrobeDelay(S8378_T c_s8378, int delay);
	EXPORTED void S8378_toString(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void S8378_getPlugIns(S8378_T c_s8378, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int S8378_getNumberOfPlugIns(S8378_T c_s8378);
	EXPORTED short S8378_isPlugInDetected(S8378_T c_s8378, int id);
	EXPORTED void S8378_initializePlugIns(S8378_T c_s8378, CHARARRAY_T retval);
	EXPORTED void S8378_detectPlugIns(S8378_T c_s8378);
	EXPORTED int S8378_setI2CBytes(S8378_T c_s8378, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void S8378_getI2CBytes(S8378_T c_s8378, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void S8378_getSPIBytes(S8378_T c_s8378, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void S8378_getPSOCVersion(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void S8378_getFPGAFirmwareVersion(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED double S8378_continuousStrobeCountsToMicros(S8378_T c_s8378, int counts);
	EXPORTED void S8378_setContinuousStrobeDelay(S8378_T c_s8378, int delayMicros);
	EXPORTED int S8378_getContinuousStrobeDelayMinimum(S8378_T c_s8378);
	EXPORTED int S8378_getContinuousStrobeDelayMaximum(S8378_T c_s8378);
	EXPORTED int S8378_getContinuousStrobeDelayIncrement(S8378_T c_s8378, int magnitude);
	EXPORTED void S8378_setContinuousModeType(S8378_T c_s8378, short mode);
	EXPORTED void S8378_setDelayAfterIntegration(S8378_T c_s8378, int delay);
	EXPORTED short S8378_getContinuousModeType(S8378_T c_s8378);
	EXPORTED int S8378_getDelayAfterIntegration(S8378_T c_s8378);
	EXPORTED void S8378_setContinuousEnable(S8378_T c_s8378, short value);
	EXPORTED short S8378_getContinuousEnable(S8378_T c_s8378);
	EXPORTED void S8378_setAdvancedIntegrationTime(S8378_T c_s8378, long long delayMicros);
	EXPORTED int S8378_getIntegrationTimeBaseClock(S8378_T c_s8378);
	EXPORTED int S8378_getIntegrationClockTimer(S8378_T c_s8378);
	EXPORTED long long S8378_getAdvancedIntegrationTimeMinimum(S8378_T c_s8378);
	EXPORTED long long S8378_getAdvancedIntegrationTimeMaximum(S8378_T c_s8378);
	EXPORTED long long S8378_getAdvancedIntegrationTimeIncrement(S8378_T c_s8378);
	EXPORTED void S8378_setExternalTriggerMode(S8378_T c_s8378, int mode);
	EXPORTED void S8378_getExternalTriggerModes(S8378_T c_s8378, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void S8378_setShutterClock(S8378_T c_s8378, int value);
	EXPORTED int S8378_getShutterClock(S8378_T c_s8378);
	EXPORTED void S8378_setSingleStrobeLow(S8378_T c_s8378, int value);
	EXPORTED void S8378_setSingleStrobeHigh(S8378_T c_s8378, int value);
	EXPORTED double S8378_getSingleStrobeCountsToMicros(S8378_T c_s8378, int counts);
	EXPORTED int S8378_getSingleStrobeLow(S8378_T c_s8378);
	EXPORTED int S8378_getSingleStrobeHigh(S8378_T c_s8378);
	EXPORTED int S8378_getSingleStrobeMinimum(S8378_T c_s8378);
	EXPORTED int S8378_getSingleStrobeMaximum(S8378_T c_s8378);
	EXPORTED int S8378_getSingleStrobeIncrement(S8378_T c_s8378);
	EXPORTED void S8378_setDirectionAllBits(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void S8378_setMuxAllBits(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void S8378_setValueAllBits(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void S8378_setDirectionBitmask(S8378_T c_s8378, short bitmask);
	EXPORTED void S8378_setMuxBitmask(S8378_T c_s8378, short bitmask);
	EXPORTED void S8378_setValueBitmask(S8378_T c_s8378, short bitmask);
	EXPORTED void S8378_setDirectionBit(S8378_T c_s8378, int bit, short value);
	EXPORTED void S8378_setMuxBit(S8378_T c_s8378, int bit, short value);
	EXPORTED void S8378_setValueBit(S8378_T c_s8378, int bit, short value);
	EXPORTED int S8378_getTotalGPIOBits(S8378_T c_s8378);
	EXPORTED void S8378_getDirectionBits(S8378_T c_s8378, BITSET_T retval);
	EXPORTED void S8378_getMuxBits(S8378_T c_s8378, BITSET_T retval);
	EXPORTED int S8378_getValueBit(S8378_T c_s8378, int bitNumber);
	EXPORTED void S8378_getValueBits(S8378_T c_s8378, BITSET_T retval);
	EXPORTED int S8378_getNumberOfPins(S8378_T c_s8378);
	EXPORTED double S8378_getBoardTemperatureCelsius(S8378_T c_s8378);
	EXPORTED void S8378_getIrradianceCalibrationFactors(S8378_T c_s8378, DOUBLEARRAY_T retval);
	EXPORTED void S8378_setIrradianceCalibrationFactors(S8378_T c_s8378, DOUBLEARRAY_T data);
	EXPORTED double S8378_getCollectionArea(S8378_T c_s8378);
	EXPORTED short S8378_hasCollectionArea(S8378_T c_s8378);
	EXPORTED void S8378_setCollectionArea(S8378_T c_s8378, double area);
	EXPORTED void S8378_setMasterClockDivisor(S8378_T c_s8378, int value);
	EXPORTED int S8378_getMasterClockDivisor(S8378_T c_s8378);
	EXPORTED void S8378_setExternalTriggerDelay(S8378_T c_s8378, int counts);
	EXPORTED double S8378_triggerDelayCountsToMicroseconds(S8378_T c_s8378, int counts);
	EXPORTED int S8378_getExternalTriggerDelayMinimum(S8378_T c_s8378);
	EXPORTED int S8378_getExternalTriggerDelayMaximum(S8378_T c_s8378);
	EXPORTED int S8378_getExternalTriggerDelayIncrement(S8378_T c_s8378);
	EXPORTED void S8378_readNonlinearityCoefficientsFromSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_writeNonlinearityCoefficientsToSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_getNonlinearityCoefficients(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_setNonlinearityCoefficients(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_getNonlinearityCoefficientsSingleChannel(S8378_T c_s8378, int index, DOUBLEARRAY_T retval);
	EXPORTED void S8378_setNonlinearityCoefficientsSingleChannel(S8378_T c_s8378, DOUBLEARRAY_T nl, int index);
	EXPORTED void S8378_readWavelengthCalibrationCoefficientsFromSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_writeWavelengthCoefficientsToSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_getWavelengthCalibrationCoefficients(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_setWavelengthCalibrationCoefficients(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_getWavelengths(S8378_T c_s8378, int index, DOUBLEARRAY_T retval);
	EXPORTED void S8378_setWavelengths(S8378_T c_s8378, DOUBLEARRAY_T wl, int index);
	EXPORTED void S8378_readStrayLightCorrectionCoefficientFromSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_writeStrayLightCoefficientToSpectrometer(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_setStrayLightCorrectionCoefficient(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void S8378_getStrayLightCorrectionCoefficient(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void S8378_setStrayLight(S8378_T c_s8378, double strayLight, int index);
	EXPORTED double S8378_getStrayLight(S8378_T c_s8378, int index);
	EXPORTED void S8378_setHighGain(S8378_T c_s8378, short gain);
	EXPORTED void S8378_setHighGainDefault(S8378_T c_s8378, short gain);
	EXPORTED short S8378_getHighGainDefault(S8378_T c_s8378);
	EXPORTED short S8378_hasHighGainDefault(S8378_T c_s8378);
	EXPORTED int S8378_getDarkValue(S8378_T c_s8378);
	EXPORTED void S8378_setDarkValue(S8378_T c_s8378, int value);
	EXPORTED double S8378_getSaturationValue(S8378_T c_s8378);
	EXPORTED void S8378_setSaturationValue(S8378_T c_s8378, double value);
	EXPORTED void S8378_recordSettings(S8378_T c_s8378);
	EXPORTED short S8378_isAdvancedVersion(S8378_T c_s8378);
	EXPORTED void S8378_addAcquisitionListener(S8378_T c_s8378, ACQUISITIONLISTENER_T listener);
	EXPORTED void S8378_removeAcquisitionListener(S8378_T c_s8378, ACQUISITIONLISTENER_T listener);
	EXPORTED void S8378_getCpuVersion(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void S8378_getCpuSubVersion(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED int S8378_getDetectorType(S8378_T c_s8378);
	EXPORTED void S8378_setDetectorType(S8378_T c_s8378, int type);
	EXPORTED void S8378_setScansToAverage(S8378_T c_s8378, int scans);
	EXPORTED int S8378_getScansToAverage(S8378_T c_s8378);
	EXPORTED void S8378_Destroy(S8378_T s8378);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED S8378_T STDCALL S8378_Create_stdcall();
	EXPORTED S8378_T STDCALL S8378_Create_stdcall_1(int i);
	EXPORTED void STDCALL S8378_setEndpoints_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_getEndpoint_stdcall(S8378_T c_s8378, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void STDCALL S8378_openSpectrometer_stdcall(S8378_T c_s8378, int index);
	EXPORTED void STDCALL S8378_getGUIFeatures_stdcall(S8378_T c_s8378, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL S8378_getStatus_stdcall(S8378_T c_s8378, SPECTROMETERSTATUS_T retval);
	EXPORTED int STDCALL S8378_readIntegrationTime_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setStrobeDelay_stdcall(S8378_T c_s8378, int delay);
	EXPORTED void STDCALL S8378_toString_stdcall(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void STDCALL S8378_getPlugIns_stdcall(S8378_T c_s8378, SPECTROMETERPLUGINARRAY_T retval);
	EXPORTED int STDCALL S8378_getNumberOfPlugIns_stdcall(S8378_T c_s8378);
	EXPORTED short STDCALL S8378_isPlugInDetected_stdcall(S8378_T c_s8378, int id);
	EXPORTED void STDCALL S8378_initializePlugIns_stdcall(S8378_T c_s8378, CHARARRAY_T retval);
	EXPORTED void STDCALL S8378_detectPlugIns_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_setI2CBytes_stdcall(S8378_T c_s8378, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void STDCALL S8378_getI2CBytes_stdcall(S8378_T c_s8378, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void STDCALL S8378_getSPIBytes_stdcall(S8378_T c_s8378, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void STDCALL S8378_getPSOCVersion_stdcall(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void STDCALL S8378_getFPGAFirmwareVersion_stdcall(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED double STDCALL S8378_continuousStrobeCountsToMicros_stdcall(S8378_T c_s8378, int counts);
	EXPORTED void STDCALL S8378_setContinuousStrobeDelay_stdcall(S8378_T c_s8378, int delayMicros);
	EXPORTED int STDCALL S8378_getContinuousStrobeDelayMinimum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getContinuousStrobeDelayMaximum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getContinuousStrobeDelayIncrement_stdcall(S8378_T c_s8378, int magnitude);
	EXPORTED void STDCALL S8378_setContinuousModeType_stdcall(S8378_T c_s8378, short mode);
	EXPORTED void STDCALL S8378_setDelayAfterIntegration_stdcall(S8378_T c_s8378, int delay);
	EXPORTED short STDCALL S8378_getContinuousModeType_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getDelayAfterIntegration_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setContinuousEnable_stdcall(S8378_T c_s8378, short value);
	EXPORTED short STDCALL S8378_getContinuousEnable_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setAdvancedIntegrationTime_stdcall(S8378_T c_s8378, long long delayMicros);
	EXPORTED int STDCALL S8378_getIntegrationTimeBaseClock_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getIntegrationClockTimer_stdcall(S8378_T c_s8378);
	EXPORTED long long STDCALL S8378_getAdvancedIntegrationTimeMinimum_stdcall(S8378_T c_s8378);
	EXPORTED long long STDCALL S8378_getAdvancedIntegrationTimeMaximum_stdcall(S8378_T c_s8378);
	EXPORTED long long STDCALL S8378_getAdvancedIntegrationTimeIncrement_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setExternalTriggerMode_stdcall(S8378_T c_s8378, int mode);
	EXPORTED void STDCALL S8378_getExternalTriggerModes_stdcall(S8378_T c_s8378, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL S8378_setShutterClock_stdcall(S8378_T c_s8378, int value);
	EXPORTED int STDCALL S8378_getShutterClock_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setSingleStrobeLow_stdcall(S8378_T c_s8378, int value);
	EXPORTED void STDCALL S8378_setSingleStrobeHigh_stdcall(S8378_T c_s8378, int value);
	EXPORTED double STDCALL S8378_getSingleStrobeCountsToMicros_stdcall(S8378_T c_s8378, int counts);
	EXPORTED int STDCALL S8378_getSingleStrobeLow_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getSingleStrobeHigh_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getSingleStrobeMinimum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getSingleStrobeMaximum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getSingleStrobeIncrement_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setDirectionAllBits_stdcall(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void STDCALL S8378_setMuxAllBits_stdcall(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void STDCALL S8378_setValueAllBits_stdcall(S8378_T c_s8378, BITSET_T bitSet);
	EXPORTED void STDCALL S8378_setDirectionBitmask_stdcall(S8378_T c_s8378, short bitmask);
	EXPORTED void STDCALL S8378_setMuxBitmask_stdcall(S8378_T c_s8378, short bitmask);
	EXPORTED void STDCALL S8378_setValueBitmask_stdcall(S8378_T c_s8378, short bitmask);
	EXPORTED void STDCALL S8378_setDirectionBit_stdcall(S8378_T c_s8378, int bit, short value);
	EXPORTED void STDCALL S8378_setMuxBit_stdcall(S8378_T c_s8378, int bit, short value);
	EXPORTED void STDCALL S8378_setValueBit_stdcall(S8378_T c_s8378, int bit, short value);
	EXPORTED int STDCALL S8378_getTotalGPIOBits_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_getDirectionBits_stdcall(S8378_T c_s8378, BITSET_T retval);
	EXPORTED void STDCALL S8378_getMuxBits_stdcall(S8378_T c_s8378, BITSET_T retval);
	EXPORTED int STDCALL S8378_getValueBit_stdcall(S8378_T c_s8378, int bitNumber);
	EXPORTED void STDCALL S8378_getValueBits_stdcall(S8378_T c_s8378, BITSET_T retval);
	EXPORTED int STDCALL S8378_getNumberOfPins_stdcall(S8378_T c_s8378);
	EXPORTED double STDCALL S8378_getBoardTemperatureCelsius_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_getIrradianceCalibrationFactors_stdcall(S8378_T c_s8378, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL S8378_setIrradianceCalibrationFactors_stdcall(S8378_T c_s8378, DOUBLEARRAY_T data);
	EXPORTED double STDCALL S8378_getCollectionArea_stdcall(S8378_T c_s8378);
	EXPORTED short STDCALL S8378_hasCollectionArea_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setCollectionArea_stdcall(S8378_T c_s8378, double area);
	EXPORTED void STDCALL S8378_setMasterClockDivisor_stdcall(S8378_T c_s8378, int value);
	EXPORTED int STDCALL S8378_getMasterClockDivisor_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setExternalTriggerDelay_stdcall(S8378_T c_s8378, int counts);
	EXPORTED double STDCALL S8378_triggerDelayCountsToMicroseconds_stdcall(S8378_T c_s8378, int counts);
	EXPORTED int STDCALL S8378_getExternalTriggerDelayMinimum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getExternalTriggerDelayMaximum_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getExternalTriggerDelayIncrement_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_readNonlinearityCoefficientsFromSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_writeNonlinearityCoefficientsToSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_getNonlinearityCoefficients_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_setNonlinearityCoefficients_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_getNonlinearityCoefficientsSingleChannel_stdcall(S8378_T c_s8378, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL S8378_setNonlinearityCoefficientsSingleChannel_stdcall(S8378_T c_s8378, DOUBLEARRAY_T nl, int index);
	EXPORTED void STDCALL S8378_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_writeWavelengthCoefficientsToSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_getWavelengthCalibrationCoefficients_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_setWavelengthCalibrationCoefficients_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_getWavelengths_stdcall(S8378_T c_s8378, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL S8378_setWavelengths_stdcall(S8378_T c_s8378, DOUBLEARRAY_T wl, int index);
	EXPORTED void STDCALL S8378_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_writeStrayLightCoefficientToSpectrometer_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_setStrayLightCorrectionCoefficient_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL S8378_getStrayLightCorrectionCoefficient_stdcall(S8378_T c_s8378, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL S8378_setStrayLight_stdcall(S8378_T c_s8378, double strayLight, int index);
	EXPORTED double STDCALL S8378_getStrayLight_stdcall(S8378_T c_s8378, int index);
	EXPORTED void STDCALL S8378_setHighGain_stdcall(S8378_T c_s8378, short gain);
	EXPORTED void STDCALL S8378_setHighGainDefault_stdcall(S8378_T c_s8378, short gain);
	EXPORTED short STDCALL S8378_getHighGainDefault_stdcall(S8378_T c_s8378);
	EXPORTED short STDCALL S8378_hasHighGainDefault_stdcall(S8378_T c_s8378);
	EXPORTED int STDCALL S8378_getDarkValue_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setDarkValue_stdcall(S8378_T c_s8378, int value);
	EXPORTED double STDCALL S8378_getSaturationValue_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setSaturationValue_stdcall(S8378_T c_s8378, double value);
	EXPORTED void STDCALL S8378_recordSettings_stdcall(S8378_T c_s8378);
	EXPORTED short STDCALL S8378_isAdvancedVersion_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_addAcquisitionListener_stdcall(S8378_T c_s8378, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL S8378_removeAcquisitionListener_stdcall(S8378_T c_s8378, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL S8378_getCpuVersion_stdcall(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED void STDCALL S8378_getCpuSubVersion_stdcall(S8378_T c_s8378, JSTRING_T retval);
	EXPORTED int STDCALL S8378_getDetectorType_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_setDetectorType_stdcall(S8378_T c_s8378, int type);
	EXPORTED void STDCALL S8378_setScansToAverage_stdcall(S8378_T c_s8378, int scans);
	EXPORTED int STDCALL S8378_getScansToAverage_stdcall(S8378_T c_s8378);
	EXPORTED void STDCALL S8378_Destroy_stdcall(S8378_T s8378);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* S8378_H */

/**
 * File: QEPro.h
 * Autogenerated on Fri Mar 23 13:39:04 EDT 2018 based on
 * QEPro.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/qepro/QEPro
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef QEPRO_H
#define QEPRO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "JString.h"
#include "GUIProviderArray.h"
#include "CoefficientsArray.h"
#include "BitSet.h"
#include "ExternalTriggerModeArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class JString;
class GUIProviderArray;
class CoefficientsArray;
class BitSet;
class ExternalTriggerModeArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED QEPro : public USBSpectrometer // CPPClass.tag001
{
public: 
	QEPro();
	QEPro(int i);
	void setEndpoints();
	void openSpectrometer(int index);
	JString getFirmwareVersion();
	JString getInfo(int slot);
	CharArray getInfoBytes(int slot);
	CharArray getStatusArray();
	void initialize();
	void setInfo(int slot, JString& str);
	void setInfoBytes(int slot, CharArray& byteArray);
	void setIntegrationTime(int intTime);
	void setStrobeEnable(short enable);
	CharArray readBenchID();
	void writeBenchID(CharArray& id);
	CharArray readBenchSerialNumber();
	void writeBenchSerialNumber(CharArray& sn);
	CharArray readDetectorSerialNumber();
	void writeDetectorSerialNumber(CharArray& sn);
	void writeSlitWidthMicrons(short microns);
	void writeFiberDiameterMicrons(short microns);
	CharArray readGrating();
	void writeGrating(CharArray& grating);
	CharArray readCoating();
	void writeCoating(CharArray& coating);
	CharArray readFilter();
	void writeFilter(CharArray& filter);
	GUIProviderArray getGUIFeatures();
	CharArray queryDevice(int messageType, CharArray& payload);
	short sendCommandToDevice(int messageType, CharArray& payload, int endPointNumber);
	short sendCommandToDevice(int messageType, CharArray& payload);
	void readSpectrum();
	CoefficientsArray getWavelengthCalibrationCoefficients();
	DoubleArray getWavelengths(int index);
	CoefficientsArray readWavelengthCalibrationCoefficientsFromSpectrometer();
	void setWavelengthCalibrationCoefficients(CoefficientsArray& coefficients);
	void setWavelengths(DoubleArray& wavelengths, int index);
	void writeWavelengthCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	double getSingleStrobeCountsToMicros(int counts);
	int getSingleStrobeHigh();
	int getSingleStrobeIncrement();
	int getSingleStrobeLow();
	int getSingleStrobeMaximum();
	int getSingleStrobeMinimum();
	void setSingleStrobeHigh(int counts);
	void setSingleStrobeLow(int counts);
	double continuousStrobeCountsToMicros(int counts);
	int getContinuousStrobeDelayIncrement(int magnitude);
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayMinimum();
	void setContinuousStrobeDelay(int durationOfPhase);
	void setContinuousModeType(short mode);
	void setDelayAfterIntegration(int delay);
	short getContinuousModeType();
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	BitSet getDirectionBits();
	BitSet getMuxBits();
	int getNumberOfPins();
	int getTotalGPIOBits();
	int getValueBit(int bitNumber);
	BitSet getValueBits();
	void setDirectionAllBits(BitSet& bitSet);
	void setDirectionBit(int bit, short value);
	void setDirectionBitmask(short bitmask);
	void setMuxAllBits(BitSet& bitSet);
	void setMuxBit(int bit, short value);
	void setMuxBitmask(short bitmask);
	void setValueAllBits(BitSet& bitSet);
	void setValueBit(int bit, short value);
	void setValueBitmask(short bitmask);
	int getExternalTriggerDelayIncrement();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayMinimum();
	void setExternalTriggerDelay(int counts);
	double triggerDelayCountsToMicroseconds(int counts);
	ExternalTriggerModeArray getExternalTriggerModes();
	void setExternalTriggerMode(int mode);
	DoubleArray getIrradianceCalibrationFactors();
	void setIrradianceCalibrationFactors(DoubleArray& data);
	double getCollectionArea();
	short hasCollectionArea();
	void setCollectionArea(double area);
	void writeStrayLightCoefficientToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray readStrayLightCorrectionCoefficientFromSpectrometer();
	void setStrayLightCorrectionCoefficient(CoefficientsArray& coefficients);
	CoefficientsArray getStrayLightCorrectionCoefficient();
	double getStrayLight(int index);
	void setStrayLight(double strayLight, int index);
	void writeNonlinearityCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray readNonlinearityCoefficientsFromSpectrometer();
	void setNonlinearityCoefficients(CoefficientsArray& coefficients);
	CoefficientsArray getNonlinearityCoefficients();
	DoubleArray getNonlinearityCoefficientsSingleChannel(int channelIndex);
	void setNonlinearityCoefficientsSingleChannel(DoubleArray& nonlinearities, int channelIndex);
	int setI2CBytes(signed char address, signed char numBytes, CharArray& i2C);
	CharArray getI2CBytes(signed char address, signed char numBytes);
	CharArray getSPIBytes(CharArray& message, int length);
	int getSaturationIntensity();
	short setSaturationIntensity(int saturationIntensity, JString& key);
	void setTECEnable(short enable);
	void setFanEnable(short enable);
	double getDetectorTemperatureCelsius();
	double getDetectorTemperatureSetPointCelsius();
	void setDetectorSetPointCelsius(double point);
	double getBoardTemperatureCelsius();
	double getSetPointMinimumCelsius();
	double getSetPointMaximumCelsius();
	double getSetPointIncrementCelsius();
	short isSaveTECStateEnabled();
	void saveTECState();
	void clearBuffer();
	int getBufferCapacity();
	int getBufferCapacityMaximum();
	int getBufferCapacityMinimum();
	int getNumberOfElements();
	void setBufferCapacity(int bufferSize);
	void abortAcquisition();
	void startAcquisition();
	void enableBuffer(short value);
	short isEnableBuffer();
	~QEPro();
	// No public Java copy constructor; creating one:
	QEPro(const QEPro &that);
	// Creating assignment operator declaration:
	QEPro &operator=(const QEPro &that);

private:
	jmethodID mid_QEPro5196;
	jmethodID mid_QEPro5197;
	jmethodID mid_setEndpoints5198;
	jmethodID mid_openSpectrometer5199;
	jmethodID mid_getFirmwareVersion5200;
	jmethodID mid_getInfo5201;
	jmethodID mid_getInfoBytes5202;
	jmethodID mid_getStatusArray5203;
	jmethodID mid_initialize5204;
	jmethodID mid_setInfo5205;
	jmethodID mid_setInfoBytes5206;
	jmethodID mid_setIntegrationTime5207;
	jmethodID mid_setStrobeEnable5208;
	jmethodID mid_readBenchID5209;
	jmethodID mid_writeBenchID5210;
	jmethodID mid_readBenchSerialNumber5211;
	jmethodID mid_writeBenchSerialNumber5212;
	jmethodID mid_readDetectorSerialNumber5213;
	jmethodID mid_writeDetectorSerialNumber5214;
	jmethodID mid_writeSlitWidthMicrons5215;
	jmethodID mid_writeFiberDiameterMicrons5216;
	jmethodID mid_readGrating5217;
	jmethodID mid_writeGrating5218;
	jmethodID mid_readCoating5219;
	jmethodID mid_writeCoating5220;
	jmethodID mid_readFilter5221;
	jmethodID mid_writeFilter5222;
	jmethodID mid_getGUIFeatures5223;
	jmethodID mid_queryDevice5224;
	jmethodID mid_sendCommandToDevice5225;
	jmethodID mid_sendCommandToDevice5226;
	jmethodID mid_readSpectrum5227;
	jmethodID mid_getWavelengthCalibrationCoefficients5228;
	jmethodID mid_getWavelengths5229;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer5230;
	jmethodID mid_setWavelengthCalibrationCoefficients5231;
	jmethodID mid_setWavelengths5232;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer5233;
	jmethodID mid_getSingleStrobeCountsToMicros5234;
	jmethodID mid_getSingleStrobeHigh5235;
	jmethodID mid_getSingleStrobeIncrement5236;
	jmethodID mid_getSingleStrobeLow5237;
	jmethodID mid_getSingleStrobeMaximum5238;
	jmethodID mid_getSingleStrobeMinimum5239;
	jmethodID mid_setSingleStrobeHigh5240;
	jmethodID mid_setSingleStrobeLow5241;
	jmethodID mid_continuousStrobeCountsToMicros5242;
	jmethodID mid_getContinuousStrobeDelayIncrement5243;
	jmethodID mid_getContinuousStrobeDelayMaximum5244;
	jmethodID mid_getContinuousStrobeDelayMinimum5245;
	jmethodID mid_setContinuousStrobeDelay5246;
	jmethodID mid_setContinuousModeType5247;
	jmethodID mid_setDelayAfterIntegration5248;
	jmethodID mid_getContinuousModeType5249;
	jmethodID mid_getDelayAfterIntegration5250;
	jmethodID mid_setContinuousEnable5251;
	jmethodID mid_getContinuousEnable5252;
	jmethodID mid_getDirectionBits5253;
	jmethodID mid_getMuxBits5254;
	jmethodID mid_getNumberOfPins5255;
	jmethodID mid_getTotalGPIOBits5256;
	jmethodID mid_getValueBit5257;
	jmethodID mid_getValueBits5258;
	jmethodID mid_setDirectionAllBits5259;
	jmethodID mid_setDirectionBit5260;
	jmethodID mid_setDirectionBitmask5261;
	jmethodID mid_setMuxAllBits5262;
	jmethodID mid_setMuxBit5263;
	jmethodID mid_setMuxBitmask5264;
	jmethodID mid_setValueAllBits5265;
	jmethodID mid_setValueBit5266;
	jmethodID mid_setValueBitmask5267;
	jmethodID mid_getExternalTriggerDelayIncrement5268;
	jmethodID mid_getExternalTriggerDelayMaximum5269;
	jmethodID mid_getExternalTriggerDelayMinimum5270;
	jmethodID mid_setExternalTriggerDelay5271;
	jmethodID mid_triggerDelayCountsToMicroseconds5272;
	jmethodID mid_getExternalTriggerModes5273;
	jmethodID mid_setExternalTriggerMode5274;
	jmethodID mid_getIrradianceCalibrationFactors5275;
	jmethodID mid_setIrradianceCalibrationFactors5276;
	jmethodID mid_getCollectionArea5277;
	jmethodID mid_hasCollectionArea5278;
	jmethodID mid_setCollectionArea5279;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer5280;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer5281;
	jmethodID mid_setStrayLightCorrectionCoefficient5282;
	jmethodID mid_getStrayLightCorrectionCoefficient5283;
	jmethodID mid_getStrayLight5284;
	jmethodID mid_setStrayLight5285;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer5286;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer5287;
	jmethodID mid_setNonlinearityCoefficients5288;
	jmethodID mid_getNonlinearityCoefficients5289;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel5290;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel5291;
	jmethodID mid_setI2CBytes5292;
	jmethodID mid_getI2CBytes5293;
	jmethodID mid_getSPIBytes5294;
	jmethodID mid_getSaturationIntensity5295;
	jmethodID mid_setSaturationIntensity5296;
	jmethodID mid_setTECEnable5297;
	jmethodID mid_setFanEnable5298;
	jmethodID mid_getDetectorTemperatureCelsius5299;
	jmethodID mid_getDetectorTemperatureSetPointCelsius5300;
	jmethodID mid_setDetectorSetPointCelsius5301;
	jmethodID mid_getBoardTemperatureCelsius5302;
	jmethodID mid_getSetPointMinimumCelsius5303;
	jmethodID mid_getSetPointMaximumCelsius5304;
	jmethodID mid_getSetPointIncrementCelsius5305;
	jmethodID mid_isSaveTECStateEnabled5306;
	jmethodID mid_saveTECState5307;
	jmethodID mid_clearBuffer5308;
	jmethodID mid_getBufferCapacity5309;
	jmethodID mid_getBufferCapacityMaximum5310;
	jmethodID mid_getBufferCapacityMinimum5311;
	jmethodID mid_getNumberOfElements5312;
	jmethodID mid_setBufferCapacity5313;
	jmethodID mid_abortAcquisition5314;
	jmethodID mid_startAcquisition5315;
	jmethodID mid_enableBuffer5316;
	jmethodID mid_isEnableBuffer5317;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_QEPRO_T
#define EXTERN_TYPEDEF_QEPRO_T
	typedef void* QEPRO_T;
#endif /* EXTERN_TYPEDEF_QEPRO_T */

	EXPORTED QEPRO_T QEPro_Create();
	EXPORTED QEPRO_T QEPro_Create_1(int i);
	EXPORTED void QEPro_setEndpoints(QEPRO_T c_qepro);
	EXPORTED void QEPro_openSpectrometer(QEPRO_T c_qepro, int index);
	EXPORTED void QEPro_getFirmwareVersion(QEPRO_T c_qepro, JSTRING_T retval);
	EXPORTED void QEPro_getInfo(QEPRO_T c_qepro, int slot, JSTRING_T retval);
	EXPORTED void QEPro_getInfoBytes(QEPRO_T c_qepro, int slot, CHARARRAY_T retval);
	EXPORTED void QEPro_getStatusArray(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_initialize(QEPRO_T c_qepro);
	EXPORTED void QEPro_setInfo(QEPRO_T c_qepro, int slot, JSTRING_T str);
	EXPORTED void QEPro_setInfoBytes(QEPRO_T c_qepro, int slot, CHARARRAY_T byteArray);
	EXPORTED void QEPro_setIntegrationTime(QEPRO_T c_qepro, int intTime);
	EXPORTED void QEPro_setStrobeEnable(QEPRO_T c_qepro, short enable);
	EXPORTED void QEPro_readBenchID(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeBenchID(QEPRO_T c_qepro, CHARARRAY_T id);
	EXPORTED void QEPro_readBenchSerialNumber(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeBenchSerialNumber(QEPRO_T c_qepro, CHARARRAY_T sn);
	EXPORTED void QEPro_readDetectorSerialNumber(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeDetectorSerialNumber(QEPRO_T c_qepro, CHARARRAY_T sn);
	EXPORTED void QEPro_writeSlitWidthMicrons(QEPRO_T c_qepro, short microns);
	EXPORTED void QEPro_writeFiberDiameterMicrons(QEPRO_T c_qepro, short microns);
	EXPORTED void QEPro_readGrating(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeGrating(QEPRO_T c_qepro, CHARARRAY_T grating);
	EXPORTED void QEPro_readCoating(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeCoating(QEPRO_T c_qepro, CHARARRAY_T coating);
	EXPORTED void QEPro_readFilter(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void QEPro_writeFilter(QEPRO_T c_qepro, CHARARRAY_T filter);
	EXPORTED void QEPro_getGUIFeatures(QEPRO_T c_qepro, GUIPROVIDERARRAY_T retval);
	EXPORTED void QEPro_queryDevice(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload, CHARARRAY_T retval);
	EXPORTED short QEPro_sendCommandToDevice(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload, int endPointNumber);
	EXPORTED short QEPro_sendCommandToDevice_1(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload);
	EXPORTED void QEPro_readSpectrum(QEPRO_T c_qepro);
	EXPORTED void QEPro_getWavelengthCalibrationCoefficients(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void QEPro_getWavelengths(QEPRO_T c_qepro, int index, DOUBLEARRAY_T retval);
	EXPORTED void QEPro_readWavelengthCalibrationCoefficientsFromSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void QEPro_setWavelengthCalibrationCoefficients(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void QEPro_setWavelengths(QEPRO_T c_qepro, DOUBLEARRAY_T wavelengths, int index);
	EXPORTED void QEPro_writeWavelengthCoefficientsToSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED double QEPro_getSingleStrobeCountsToMicros(QEPRO_T c_qepro, int counts);
	EXPORTED int QEPro_getSingleStrobeHigh(QEPRO_T c_qepro);
	EXPORTED int QEPro_getSingleStrobeIncrement(QEPRO_T c_qepro);
	EXPORTED int QEPro_getSingleStrobeLow(QEPRO_T c_qepro);
	EXPORTED int QEPro_getSingleStrobeMaximum(QEPRO_T c_qepro);
	EXPORTED int QEPro_getSingleStrobeMinimum(QEPRO_T c_qepro);
	EXPORTED void QEPro_setSingleStrobeHigh(QEPRO_T c_qepro, int counts);
	EXPORTED void QEPro_setSingleStrobeLow(QEPRO_T c_qepro, int counts);
	EXPORTED double QEPro_continuousStrobeCountsToMicros(QEPRO_T c_qepro, int counts);
	EXPORTED int QEPro_getContinuousStrobeDelayIncrement(QEPRO_T c_qepro, int magnitude);
	EXPORTED int QEPro_getContinuousStrobeDelayMaximum(QEPRO_T c_qepro);
	EXPORTED int QEPro_getContinuousStrobeDelayMinimum(QEPRO_T c_qepro);
	EXPORTED void QEPro_setContinuousStrobeDelay(QEPRO_T c_qepro, int durationOfPhase);
	EXPORTED void QEPro_setContinuousModeType(QEPRO_T c_qepro, short mode);
	EXPORTED void QEPro_setDelayAfterIntegration(QEPRO_T c_qepro, int delay);
	EXPORTED short QEPro_getContinuousModeType(QEPRO_T c_qepro);
	EXPORTED int QEPro_getDelayAfterIntegration(QEPRO_T c_qepro);
	EXPORTED void QEPro_setContinuousEnable(QEPRO_T c_qepro, short value);
	EXPORTED short QEPro_getContinuousEnable(QEPRO_T c_qepro);
	EXPORTED void QEPro_getDirectionBits(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED void QEPro_getMuxBits(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED int QEPro_getNumberOfPins(QEPRO_T c_qepro);
	EXPORTED int QEPro_getTotalGPIOBits(QEPRO_T c_qepro);
	EXPORTED int QEPro_getValueBit(QEPRO_T c_qepro, int bitNumber);
	EXPORTED void QEPro_getValueBits(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED void QEPro_setDirectionAllBits(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void QEPro_setDirectionBit(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void QEPro_setDirectionBitmask(QEPRO_T c_qepro, short bitmask);
	EXPORTED void QEPro_setMuxAllBits(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void QEPro_setMuxBit(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void QEPro_setMuxBitmask(QEPRO_T c_qepro, short bitmask);
	EXPORTED void QEPro_setValueAllBits(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void QEPro_setValueBit(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void QEPro_setValueBitmask(QEPRO_T c_qepro, short bitmask);
	EXPORTED int QEPro_getExternalTriggerDelayIncrement(QEPRO_T c_qepro);
	EXPORTED int QEPro_getExternalTriggerDelayMaximum(QEPRO_T c_qepro);
	EXPORTED int QEPro_getExternalTriggerDelayMinimum(QEPRO_T c_qepro);
	EXPORTED void QEPro_setExternalTriggerDelay(QEPRO_T c_qepro, int counts);
	EXPORTED double QEPro_triggerDelayCountsToMicroseconds(QEPRO_T c_qepro, int counts);
	EXPORTED void QEPro_getExternalTriggerModes(QEPRO_T c_qepro, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void QEPro_setExternalTriggerMode(QEPRO_T c_qepro, int mode);
	EXPORTED void QEPro_getIrradianceCalibrationFactors(QEPRO_T c_qepro, DOUBLEARRAY_T retval);
	EXPORTED void QEPro_setIrradianceCalibrationFactors(QEPRO_T c_qepro, DOUBLEARRAY_T data);
	EXPORTED double QEPro_getCollectionArea(QEPRO_T c_qepro);
	EXPORTED short QEPro_hasCollectionArea(QEPRO_T c_qepro);
	EXPORTED void QEPro_setCollectionArea(QEPRO_T c_qepro, double area);
	EXPORTED void QEPro_writeStrayLightCoefficientToSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void QEPro_readStrayLightCorrectionCoefficientFromSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void QEPro_setStrayLightCorrectionCoefficient(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void QEPro_getStrayLightCorrectionCoefficient(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED double QEPro_getStrayLight(QEPRO_T c_qepro, int index);
	EXPORTED void QEPro_setStrayLight(QEPRO_T c_qepro, double strayLight, int index);
	EXPORTED void QEPro_writeNonlinearityCoefficientsToSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void QEPro_readNonlinearityCoefficientsFromSpectrometer(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void QEPro_setNonlinearityCoefficients(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void QEPro_getNonlinearityCoefficients(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void QEPro_getNonlinearityCoefficientsSingleChannel(QEPRO_T c_qepro, int channelIndex, DOUBLEARRAY_T retval);
	EXPORTED void QEPro_setNonlinearityCoefficientsSingleChannel(QEPRO_T c_qepro, DOUBLEARRAY_T nonlinearities, int channelIndex);
	EXPORTED int QEPro_setI2CBytes(QEPRO_T c_qepro, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void QEPro_getI2CBytes(QEPRO_T c_qepro, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void QEPro_getSPIBytes(QEPRO_T c_qepro, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED int QEPro_getSaturationIntensity(QEPRO_T c_qepro);
	EXPORTED short QEPro_setSaturationIntensity(QEPRO_T c_qepro, int saturationIntensity, JSTRING_T key);
	EXPORTED void QEPro_setTECEnable(QEPRO_T c_qepro, short enable);
	EXPORTED void QEPro_setFanEnable(QEPRO_T c_qepro, short enable);
	EXPORTED double QEPro_getDetectorTemperatureCelsius(QEPRO_T c_qepro);
	EXPORTED double QEPro_getDetectorTemperatureSetPointCelsius(QEPRO_T c_qepro);
	EXPORTED void QEPro_setDetectorSetPointCelsius(QEPRO_T c_qepro, double point);
	EXPORTED double QEPro_getBoardTemperatureCelsius(QEPRO_T c_qepro);
	EXPORTED double QEPro_getSetPointMinimumCelsius(QEPRO_T c_qepro);
	EXPORTED double QEPro_getSetPointMaximumCelsius(QEPRO_T c_qepro);
	EXPORTED double QEPro_getSetPointIncrementCelsius(QEPRO_T c_qepro);
	EXPORTED short QEPro_isSaveTECStateEnabled(QEPRO_T c_qepro);
	EXPORTED void QEPro_saveTECState(QEPRO_T c_qepro);
	EXPORTED void QEPro_clearBuffer(QEPRO_T c_qepro);
	EXPORTED int QEPro_getBufferCapacity(QEPRO_T c_qepro);
	EXPORTED int QEPro_getBufferCapacityMaximum(QEPRO_T c_qepro);
	EXPORTED int QEPro_getBufferCapacityMinimum(QEPRO_T c_qepro);
	EXPORTED int QEPro_getNumberOfElements(QEPRO_T c_qepro);
	EXPORTED void QEPro_setBufferCapacity(QEPRO_T c_qepro, int bufferSize);
	EXPORTED void QEPro_abortAcquisition(QEPRO_T c_qepro);
	EXPORTED void QEPro_startAcquisition(QEPRO_T c_qepro);
	EXPORTED void QEPro_enableBuffer(QEPRO_T c_qepro, short value);
	EXPORTED short QEPro_isEnableBuffer(QEPRO_T c_qepro);
	EXPORTED void QEPro_Destroy(QEPRO_T qepro);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED QEPRO_T STDCALL QEPro_Create_stdcall();
	EXPORTED QEPRO_T STDCALL QEPro_Create_stdcall_1(int i);
	EXPORTED void STDCALL QEPro_setEndpoints_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_openSpectrometer_stdcall(QEPRO_T c_qepro, int index);
	EXPORTED void STDCALL QEPro_getFirmwareVersion_stdcall(QEPRO_T c_qepro, JSTRING_T retval);
	EXPORTED void STDCALL QEPro_getInfo_stdcall(QEPRO_T c_qepro, int slot, JSTRING_T retval);
	EXPORTED void STDCALL QEPro_getInfoBytes_stdcall(QEPRO_T c_qepro, int slot, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_getStatusArray_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_initialize_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setInfo_stdcall(QEPRO_T c_qepro, int slot, JSTRING_T str);
	EXPORTED void STDCALL QEPro_setInfoBytes_stdcall(QEPRO_T c_qepro, int slot, CHARARRAY_T byteArray);
	EXPORTED void STDCALL QEPro_setIntegrationTime_stdcall(QEPRO_T c_qepro, int intTime);
	EXPORTED void STDCALL QEPro_setStrobeEnable_stdcall(QEPRO_T c_qepro, short enable);
	EXPORTED void STDCALL QEPro_readBenchID_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeBenchID_stdcall(QEPRO_T c_qepro, CHARARRAY_T id);
	EXPORTED void STDCALL QEPro_readBenchSerialNumber_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeBenchSerialNumber_stdcall(QEPRO_T c_qepro, CHARARRAY_T sn);
	EXPORTED void STDCALL QEPro_readDetectorSerialNumber_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeDetectorSerialNumber_stdcall(QEPRO_T c_qepro, CHARARRAY_T sn);
	EXPORTED void STDCALL QEPro_writeSlitWidthMicrons_stdcall(QEPRO_T c_qepro, short microns);
	EXPORTED void STDCALL QEPro_writeFiberDiameterMicrons_stdcall(QEPRO_T c_qepro, short microns);
	EXPORTED void STDCALL QEPro_readGrating_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeGrating_stdcall(QEPRO_T c_qepro, CHARARRAY_T grating);
	EXPORTED void STDCALL QEPro_readCoating_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeCoating_stdcall(QEPRO_T c_qepro, CHARARRAY_T coating);
	EXPORTED void STDCALL QEPro_readFilter_stdcall(QEPRO_T c_qepro, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_writeFilter_stdcall(QEPRO_T c_qepro, CHARARRAY_T filter);
	EXPORTED void STDCALL QEPro_getGUIFeatures_stdcall(QEPRO_T c_qepro, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL QEPro_queryDevice_stdcall(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload, CHARARRAY_T retval);
	EXPORTED short STDCALL QEPro_sendCommandToDevice_stdcall(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload, int endPointNumber);
	EXPORTED short STDCALL QEPro_sendCommandToDevice_stdcall_1(QEPRO_T c_qepro, int messageType, CHARARRAY_T payload);
	EXPORTED void STDCALL QEPro_readSpectrum_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_getWavelengthCalibrationCoefficients_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL QEPro_getWavelengths_stdcall(QEPRO_T c_qepro, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL QEPro_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL QEPro_setWavelengthCalibrationCoefficients_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL QEPro_setWavelengths_stdcall(QEPRO_T c_qepro, DOUBLEARRAY_T wavelengths, int index);
	EXPORTED void STDCALL QEPro_writeWavelengthCoefficientsToSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED double STDCALL QEPro_getSingleStrobeCountsToMicros_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED int STDCALL QEPro_getSingleStrobeHigh_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getSingleStrobeIncrement_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getSingleStrobeLow_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getSingleStrobeMaximum_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getSingleStrobeMinimum_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setSingleStrobeHigh_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED void STDCALL QEPro_setSingleStrobeLow_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED double STDCALL QEPro_continuousStrobeCountsToMicros_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED int STDCALL QEPro_getContinuousStrobeDelayIncrement_stdcall(QEPRO_T c_qepro, int magnitude);
	EXPORTED int STDCALL QEPro_getContinuousStrobeDelayMaximum_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getContinuousStrobeDelayMinimum_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setContinuousStrobeDelay_stdcall(QEPRO_T c_qepro, int durationOfPhase);
	EXPORTED void STDCALL QEPro_setContinuousModeType_stdcall(QEPRO_T c_qepro, short mode);
	EXPORTED void STDCALL QEPro_setDelayAfterIntegration_stdcall(QEPRO_T c_qepro, int delay);
	EXPORTED short STDCALL QEPro_getContinuousModeType_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getDelayAfterIntegration_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setContinuousEnable_stdcall(QEPRO_T c_qepro, short value);
	EXPORTED short STDCALL QEPro_getContinuousEnable_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_getDirectionBits_stdcall(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED void STDCALL QEPro_getMuxBits_stdcall(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED int STDCALL QEPro_getNumberOfPins_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getTotalGPIOBits_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getValueBit_stdcall(QEPRO_T c_qepro, int bitNumber);
	EXPORTED void STDCALL QEPro_getValueBits_stdcall(QEPRO_T c_qepro, BITSET_T retval);
	EXPORTED void STDCALL QEPro_setDirectionAllBits_stdcall(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void STDCALL QEPro_setDirectionBit_stdcall(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void STDCALL QEPro_setDirectionBitmask_stdcall(QEPRO_T c_qepro, short bitmask);
	EXPORTED void STDCALL QEPro_setMuxAllBits_stdcall(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void STDCALL QEPro_setMuxBit_stdcall(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void STDCALL QEPro_setMuxBitmask_stdcall(QEPRO_T c_qepro, short bitmask);
	EXPORTED void STDCALL QEPro_setValueAllBits_stdcall(QEPRO_T c_qepro, BITSET_T bitSet);
	EXPORTED void STDCALL QEPro_setValueBit_stdcall(QEPRO_T c_qepro, int bit, short value);
	EXPORTED void STDCALL QEPro_setValueBitmask_stdcall(QEPRO_T c_qepro, short bitmask);
	EXPORTED int STDCALL QEPro_getExternalTriggerDelayIncrement_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getExternalTriggerDelayMaximum_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getExternalTriggerDelayMinimum_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setExternalTriggerDelay_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED double STDCALL QEPro_triggerDelayCountsToMicroseconds_stdcall(QEPRO_T c_qepro, int counts);
	EXPORTED void STDCALL QEPro_getExternalTriggerModes_stdcall(QEPRO_T c_qepro, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL QEPro_setExternalTriggerMode_stdcall(QEPRO_T c_qepro, int mode);
	EXPORTED void STDCALL QEPro_getIrradianceCalibrationFactors_stdcall(QEPRO_T c_qepro, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL QEPro_setIrradianceCalibrationFactors_stdcall(QEPRO_T c_qepro, DOUBLEARRAY_T data);
	EXPORTED double STDCALL QEPro_getCollectionArea_stdcall(QEPRO_T c_qepro);
	EXPORTED short STDCALL QEPro_hasCollectionArea_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setCollectionArea_stdcall(QEPRO_T c_qepro, double area);
	EXPORTED void STDCALL QEPro_writeStrayLightCoefficientToSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL QEPro_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL QEPro_setStrayLightCorrectionCoefficient_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL QEPro_getStrayLightCorrectionCoefficient_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED double STDCALL QEPro_getStrayLight_stdcall(QEPRO_T c_qepro, int index);
	EXPORTED void STDCALL QEPro_setStrayLight_stdcall(QEPRO_T c_qepro, double strayLight, int index);
	EXPORTED void STDCALL QEPro_writeNonlinearityCoefficientsToSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL QEPro_readNonlinearityCoefficientsFromSpectrometer_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL QEPro_setNonlinearityCoefficients_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL QEPro_getNonlinearityCoefficients_stdcall(QEPRO_T c_qepro, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL QEPro_getNonlinearityCoefficientsSingleChannel_stdcall(QEPRO_T c_qepro, int channelIndex, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL QEPro_setNonlinearityCoefficientsSingleChannel_stdcall(QEPRO_T c_qepro, DOUBLEARRAY_T nonlinearities, int channelIndex);
	EXPORTED int STDCALL QEPro_setI2CBytes_stdcall(QEPRO_T c_qepro, signed char address, signed char numBytes, CHARARRAY_T i2C);
	EXPORTED void STDCALL QEPro_getI2CBytes_stdcall(QEPRO_T c_qepro, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED void STDCALL QEPro_getSPIBytes_stdcall(QEPRO_T c_qepro, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED int STDCALL QEPro_getSaturationIntensity_stdcall(QEPRO_T c_qepro);
	EXPORTED short STDCALL QEPro_setSaturationIntensity_stdcall(QEPRO_T c_qepro, int saturationIntensity, JSTRING_T key);
	EXPORTED void STDCALL QEPro_setTECEnable_stdcall(QEPRO_T c_qepro, short enable);
	EXPORTED void STDCALL QEPro_setFanEnable_stdcall(QEPRO_T c_qepro, short enable);
	EXPORTED double STDCALL QEPro_getDetectorTemperatureCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED double STDCALL QEPro_getDetectorTemperatureSetPointCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setDetectorSetPointCelsius_stdcall(QEPRO_T c_qepro, double point);
	EXPORTED double STDCALL QEPro_getBoardTemperatureCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED double STDCALL QEPro_getSetPointMinimumCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED double STDCALL QEPro_getSetPointMaximumCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED double STDCALL QEPro_getSetPointIncrementCelsius_stdcall(QEPRO_T c_qepro);
	EXPORTED short STDCALL QEPro_isSaveTECStateEnabled_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_saveTECState_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_clearBuffer_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getBufferCapacity_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getBufferCapacityMaximum_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getBufferCapacityMinimum_stdcall(QEPRO_T c_qepro);
	EXPORTED int STDCALL QEPro_getNumberOfElements_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_setBufferCapacity_stdcall(QEPRO_T c_qepro, int bufferSize);
	EXPORTED void STDCALL QEPro_abortAcquisition_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_startAcquisition_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_enableBuffer_stdcall(QEPRO_T c_qepro, short value);
	EXPORTED short STDCALL QEPro_isEnableBuffer_stdcall(QEPRO_T c_qepro);
	EXPORTED void STDCALL QEPro_Destroy_stdcall(QEPRO_T qepro);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* QEPRO_H */

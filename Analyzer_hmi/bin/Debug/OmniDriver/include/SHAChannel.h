/**
 * File: SHAChannel.h
 * Autogenerated on Fri Mar 23 13:39:12 EDT 2018 based on
 * SHAChannel.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/sha/SHAChannel
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SHACHANNEL_H
#define SHACHANNEL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrometerChannel.h"
#include "Spectrometer.h"
#include "Coefficients.h"
#include "Spectrum.h"
#include "JString.h"
#include "SHACoefficients.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerChannel;
class Spectrometer;
class Coefficients;
class Spectrum;
class JString;
class SHACoefficients;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SHAChannel : public SpectrometerChannel // CPPClass.tag001
{
public: 
	SHAChannel(Spectrometer& spectrometer, Coefficients& coefficients, int index);
	Spectrum getSpectrum(Spectrum& spectrum);
	Spectrum getSpectrum();
#if 0
	ArrayOfArrays getScans(int numVoltageSteps, Spectrum& spectrum);
#endif
	double findPeak(DoubleArray& data, int pos);
	void sortPeaks(int length);
	double getLength(double voltage);
	double getPhase(double wl);
	int getMaxNumberOfCounts();
	void getSHACoefficientsFromDevice();
	JString getConstant(int slot);
	void saveSHACoefficients();
	int saveConstant(int slot, JString& str);
	int getPixel(double wl);
	int calcPixel(double wl);
	double getWavelength(int pixel);
	double getWavelength(double pixel);
	DoubleArray getAllWavelengths();
	SHACoefficients getSHACoefficients();
	int getNumberOfVoltageSteps();
	int getNumberOfSpectrometerPixels();
	JString getSHASerialNumber();
	JString getSHAFirmwareVersion();
#if 0
	double getCalibrationConstants(ArrayOfArrays& rawData);
#endif
	~SHAChannel();
	// No public default Java constructor; creating one:
	SHAChannel();
	// No public Java copy constructor; creating one:
	SHAChannel(const SHAChannel &that);
	// Creating assignment operator declaration:
	SHAChannel &operator=(const SHAChannel &that);
	double adjustedData;
	int numberVoltageSteps;

private:
	jmethodID mid_SHAChannel5533;
	jmethodID mid_getSpectrum5534;
	jmethodID mid_getSpectrum5535;
	jmethodID mid_getScans5536;
	jmethodID mid_findPeak5537;
	jmethodID mid_sortPeaks5538;
	jmethodID mid_getLength5539;
	jmethodID mid_getPhase5540;
	jmethodID mid_getMaxNumberOfCounts5541;
	jmethodID mid_getSHACoefficientsFromDevice5542;
	jmethodID mid_getConstant5543;
	jmethodID mid_saveSHACoefficients5544;
	jmethodID mid_saveConstant5545;
	jmethodID mid_getPixel5546;
	jmethodID mid_calcPixel5547;
	jmethodID mid_getWavelength5548;
	jmethodID mid_getWavelength5549;
	jmethodID mid_getAllWavelengths5550;
	jmethodID mid_getSHACoefficients5551;
	jmethodID mid_getNumberOfVoltageSteps5552;
	jmethodID mid_getNumberOfSpectrometerPixels5553;
	jmethodID mid_getSHASerialNumber5554;
	jmethodID mid_getSHAFirmwareVersion5555;
	jmethodID mid_getCalibrationConstants5556;
	jfieldID fid_adjustedData;
	jfieldID fid_numberVoltageSteps;
	jfieldID fid_serialNumber;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T
#define EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T
	typedef void* SPECTROMETERCHANNEL_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T */
#ifndef EXTERN_TYPEDEF_SPECTROMETER_T
#define EXTERN_TYPEDEF_SPECTROMETER_T
	typedef void* SPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTS_T
#define EXTERN_TYPEDEF_COEFFICIENTS_T
	typedef void* COEFFICIENTS_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTS_T */
#ifndef EXTERN_TYPEDEF_SPECTRUM_T
#define EXTERN_TYPEDEF_SPECTRUM_T
	typedef void* SPECTRUM_T;
#endif /* EXTERN_TYPEDEF_SPECTRUM_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_SHACOEFFICIENTS_T
#define EXTERN_TYPEDEF_SHACOEFFICIENTS_T
	typedef void* SHACOEFFICIENTS_T;
#endif /* EXTERN_TYPEDEF_SHACOEFFICIENTS_T */
#ifndef EXTERN_TYPEDEF_SHACHANNEL_T
#define EXTERN_TYPEDEF_SHACHANNEL_T
	typedef void* SHACHANNEL_T;
#endif /* EXTERN_TYPEDEF_SHACHANNEL_T */

	// No public default Java constructor; creating one:
	EXPORTED SHACHANNEL_T SHAChannel_Create();
	EXPORTED SHACHANNEL_T SHAChannel_Create_1(SPECTROMETER_T spectrometer, COEFFICIENTS_T coefficients, int index);
	EXPORTED void SHAChannel_getSpectrum(SHACHANNEL_T c_shachannel, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED void SHAChannel_getSpectrum_1(SHACHANNEL_T c_shachannel, SPECTRUM_T retval);
	EXPORTED void SHAChannel_getScans(SHACHANNEL_T c_shachannel, int numVoltageSteps, SPECTRUM_T spectrum, ARRAYOFARRAYS_T retval);
	EXPORTED double SHAChannel_findPeak(SHACHANNEL_T c_shachannel, DOUBLEARRAY_T data, int pos);
	EXPORTED void SHAChannel_sortPeaks(SHACHANNEL_T c_shachannel, int length);
	EXPORTED double SHAChannel_getLength(SHACHANNEL_T c_shachannel, double voltage);
	EXPORTED double SHAChannel_getPhase(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED int SHAChannel_getMaxNumberOfCounts(SHACHANNEL_T c_shachannel);
	EXPORTED void SHAChannel_getSHACoefficientsFromDevice(SHACHANNEL_T c_shachannel);
	EXPORTED void SHAChannel_getConstant(SHACHANNEL_T c_shachannel, int slot, JSTRING_T retval);
	EXPORTED void SHAChannel_saveSHACoefficients(SHACHANNEL_T c_shachannel);
	EXPORTED int SHAChannel_saveConstant(SHACHANNEL_T c_shachannel, int slot, JSTRING_T str);
	EXPORTED int SHAChannel_getPixel(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED int SHAChannel_calcPixel(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED double SHAChannel_getWavelength(SHACHANNEL_T c_shachannel, int pixel);
	EXPORTED double SHAChannel_getWavelength_1(SHACHANNEL_T c_shachannel, double pixel);
	EXPORTED void SHAChannel_getAllWavelengths(SHACHANNEL_T c_shachannel, DOUBLEARRAY_T retval);
	EXPORTED void SHAChannel_getSHACoefficients(SHACHANNEL_T c_shachannel, SHACOEFFICIENTS_T retval);
	EXPORTED int SHAChannel_getNumberOfVoltageSteps(SHACHANNEL_T c_shachannel);
	EXPORTED int SHAChannel_getNumberOfSpectrometerPixels(SHACHANNEL_T c_shachannel);
	EXPORTED void SHAChannel_getSHASerialNumber(SHACHANNEL_T c_shachannel, JSTRING_T retval);
	EXPORTED void SHAChannel_getSHAFirmwareVersion(SHACHANNEL_T c_shachannel, JSTRING_T retval);
	EXPORTED double SHAChannel_getCalibrationConstants(SHACHANNEL_T c_shachannel, ARRAYOFARRAYS_T rawData);
	EXPORTED void SHAChannel_Destroy(SHACHANNEL_T shachannel);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SHACHANNEL_T STDCALL SHAChannel_Create_stdcall_1(SPECTROMETER_T spectrometer, COEFFICIENTS_T coefficients, int index);
	EXPORTED void STDCALL SHAChannel_getSpectrum_stdcall(SHACHANNEL_T c_shachannel, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED void STDCALL SHAChannel_getSpectrum_stdcall_1(SHACHANNEL_T c_shachannel, SPECTRUM_T retval);
	EXPORTED void STDCALL SHAChannel_getScans_stdcall(SHACHANNEL_T c_shachannel, int numVoltageSteps, SPECTRUM_T spectrum, ARRAYOFARRAYS_T retval);
	EXPORTED double STDCALL SHAChannel_findPeak_stdcall(SHACHANNEL_T c_shachannel, DOUBLEARRAY_T data, int pos);
	EXPORTED void STDCALL SHAChannel_sortPeaks_stdcall(SHACHANNEL_T c_shachannel, int length);
	EXPORTED double STDCALL SHAChannel_getLength_stdcall(SHACHANNEL_T c_shachannel, double voltage);
	EXPORTED double STDCALL SHAChannel_getPhase_stdcall(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED int STDCALL SHAChannel_getMaxNumberOfCounts_stdcall(SHACHANNEL_T c_shachannel);
	EXPORTED void STDCALL SHAChannel_getSHACoefficientsFromDevice_stdcall(SHACHANNEL_T c_shachannel);
	EXPORTED void STDCALL SHAChannel_getConstant_stdcall(SHACHANNEL_T c_shachannel, int slot, JSTRING_T retval);
	EXPORTED void STDCALL SHAChannel_saveSHACoefficients_stdcall(SHACHANNEL_T c_shachannel);
	EXPORTED int STDCALL SHAChannel_saveConstant_stdcall(SHACHANNEL_T c_shachannel, int slot, JSTRING_T str);
	EXPORTED int STDCALL SHAChannel_getPixel_stdcall(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED int STDCALL SHAChannel_calcPixel_stdcall(SHACHANNEL_T c_shachannel, double wl);
	EXPORTED double STDCALL SHAChannel_getWavelength_stdcall(SHACHANNEL_T c_shachannel, int pixel);
	EXPORTED double STDCALL SHAChannel_getWavelength_stdcall_1(SHACHANNEL_T c_shachannel, double pixel);
	EXPORTED void STDCALL SHAChannel_getAllWavelengths_stdcall(SHACHANNEL_T c_shachannel, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL SHAChannel_getSHACoefficients_stdcall(SHACHANNEL_T c_shachannel, SHACOEFFICIENTS_T retval);
	EXPORTED int STDCALL SHAChannel_getNumberOfVoltageSteps_stdcall(SHACHANNEL_T c_shachannel);
	EXPORTED int STDCALL SHAChannel_getNumberOfSpectrometerPixels_stdcall(SHACHANNEL_T c_shachannel);
	EXPORTED void STDCALL SHAChannel_getSHASerialNumber_stdcall(SHACHANNEL_T c_shachannel, JSTRING_T retval);
	EXPORTED void STDCALL SHAChannel_getSHAFirmwareVersion_stdcall(SHACHANNEL_T c_shachannel, JSTRING_T retval);
	EXPORTED double STDCALL SHAChannel_getCalibrationConstants_stdcall(SHACHANNEL_T c_shachannel, ARRAYOFARRAYS_T rawData);
	EXPORTED void STDCALL SHAChannel_Destroy_stdcall(SHACHANNEL_T shachannel);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SHACHANNEL_H */

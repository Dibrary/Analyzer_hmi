/**
 * File: WavelengthCalibrationProvider.h
 * Autogenerated on Fri Mar 23 13:38:42 EDT 2018 based on
 * WavelengthCalibrationProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/wavelengthcalibration/WavelengthCalibrationProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef WAVELENGTHCALIBRATIONPROVIDER_H
#define WAVELENGTHCALIBRATIONPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "CoefficientsArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class CoefficientsArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED WavelengthCalibrationProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	void writeWavelengthCoefficientsToSpectrometer(CoefficientsArray& param0);
	CoefficientsArray readWavelengthCalibrationCoefficientsFromSpectrometer();
	void setWavelengthCalibrationCoefficients(CoefficientsArray& param0);
	CoefficientsArray getWavelengthCalibrationCoefficients();
	DoubleArray getWavelengths(int param0);
	void setWavelengths(DoubleArray& param0, int param1);
	~WavelengthCalibrationProvider();
	// No public default Java constructor; creating one:
	WavelengthCalibrationProvider();
	// No public Java copy constructor; creating one:
	WavelengthCalibrationProvider(const WavelengthCalibrationProvider &that);
	// Creating assignment operator declaration:
	WavelengthCalibrationProvider &operator=(const WavelengthCalibrationProvider &that);

private:
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer2376;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer2377;
	jmethodID mid_setWavelengthCalibrationCoefficients2378;
	jmethodID mid_getWavelengthCalibrationCoefficients2379;
	jmethodID mid_getWavelengths2380;
	jmethodID mid_setWavelengths2381;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_WAVELENGTHCALIBRATIONPROVIDER_T
#define EXTERN_TYPEDEF_WAVELENGTHCALIBRATIONPROVIDER_T
	typedef void* WAVELENGTHCALIBRATIONPROVIDER_T;
#endif /* EXTERN_TYPEDEF_WAVELENGTHCALIBRATIONPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED WAVELENGTHCALIBRATIONPROVIDER_T WavelengthCalibrationProvider_Create();
	EXPORTED void WavelengthCalibrationProvider_writeWavelengthCoefficientsToSpectrometer(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T param0);
	EXPORTED void WavelengthCalibrationProvider_readWavelengthCalibrationCoefficientsFromSpectrometer(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T retval);
	EXPORTED void WavelengthCalibrationProvider_setWavelengthCalibrationCoefficients(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T param0);
	EXPORTED void WavelengthCalibrationProvider_getWavelengthCalibrationCoefficients(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T retval);
	EXPORTED void WavelengthCalibrationProvider_getWavelengths(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, int param0, DOUBLEARRAY_T retval);
	EXPORTED void WavelengthCalibrationProvider_setWavelengths(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, DOUBLEARRAY_T param0, int param1);
	EXPORTED void WavelengthCalibrationProvider_Destroy(WAVELENGTHCALIBRATIONPROVIDER_T wavelength_calibration_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL WavelengthCalibrationProvider_writeWavelengthCoefficientsToSpectrometer_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T param0);
	EXPORTED void STDCALL WavelengthCalibrationProvider_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL WavelengthCalibrationProvider_setWavelengthCalibrationCoefficients_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T param0);
	EXPORTED void STDCALL WavelengthCalibrationProvider_getWavelengthCalibrationCoefficients_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL WavelengthCalibrationProvider_getWavelengths_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, int param0, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL WavelengthCalibrationProvider_setWavelengths_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T c_wavelength_calibration_provider, DOUBLEARRAY_T param0, int param1);
	EXPORTED void STDCALL WavelengthCalibrationProvider_Destroy_stdcall(WAVELENGTHCALIBRATIONPROVIDER_T wavelength_calibration_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* WAVELENGTHCALIBRATIONPROVIDER_H */

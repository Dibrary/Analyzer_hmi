/**
 * File: StrayLightCorrection.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * StrayLightCorrection.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/straylightcorrection/StrayLightCorrection
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef STRAYLIGHTCORRECTION_H
#define STRAYLIGHTCORRECTION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "CoefficientsArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class CoefficientsArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED StrayLightCorrection : public BaseJavaClass // CPPClass.tag001
{
public: 
	void writeStrayLightCoefficientToSpectrometer(CoefficientsArray& param0);
	CoefficientsArray readStrayLightCorrectionCoefficientFromSpectrometer();
	void setStrayLightCorrectionCoefficient(CoefficientsArray& param0);
	CoefficientsArray getStrayLightCorrectionCoefficient();
	double getStrayLight(int param0);
	void setStrayLight(double param0, int param1);
	~StrayLightCorrection();
	// No public default Java constructor; creating one:
	StrayLightCorrection();
	// No public Java copy constructor; creating one:
	StrayLightCorrection(const StrayLightCorrection &that);
	// Creating assignment operator declaration:
	StrayLightCorrection &operator=(const StrayLightCorrection &that);

private:
	jmethodID mid_writeStrayLightCoefficientToSpectrometer2096;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer2097;
	jmethodID mid_setStrayLightCorrectionCoefficient2098;
	jmethodID mid_getStrayLightCorrectionCoefficient2099;
	jmethodID mid_getStrayLight2100;
	jmethodID mid_setStrayLight2101;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_STRAYLIGHTCORRECTION_T
#define EXTERN_TYPEDEF_STRAYLIGHTCORRECTION_T
	typedef void* STRAYLIGHTCORRECTION_T;
#endif /* EXTERN_TYPEDEF_STRAYLIGHTCORRECTION_T */

	// No public default Java constructor; creating one:
	EXPORTED STRAYLIGHTCORRECTION_T StrayLightCorrection_Create();
	EXPORTED void StrayLightCorrection_writeStrayLightCoefficientToSpectrometer(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T param0);
	EXPORTED void StrayLightCorrection_readStrayLightCorrectionCoefficientFromSpectrometer(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T retval);
	EXPORTED void StrayLightCorrection_setStrayLightCorrectionCoefficient(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T param0);
	EXPORTED void StrayLightCorrection_getStrayLightCorrectionCoefficient(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T retval);
	EXPORTED double StrayLightCorrection_getStrayLight(STRAYLIGHTCORRECTION_T c_stray_light_correction, int param0);
	EXPORTED void StrayLightCorrection_setStrayLight(STRAYLIGHTCORRECTION_T c_stray_light_correction, double param0, int param1);
	EXPORTED void StrayLightCorrection_Destroy(STRAYLIGHTCORRECTION_T stray_light_correction);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL StrayLightCorrection_writeStrayLightCoefficientToSpectrometer_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T param0);
	EXPORTED void STDCALL StrayLightCorrection_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL StrayLightCorrection_setStrayLightCorrectionCoefficient_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T param0);
	EXPORTED void STDCALL StrayLightCorrection_getStrayLightCorrectionCoefficient_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, COEFFICIENTSARRAY_T retval);
	EXPORTED double STDCALL StrayLightCorrection_getStrayLight_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, int param0);
	EXPORTED void STDCALL StrayLightCorrection_setStrayLight_stdcall(STRAYLIGHTCORRECTION_T c_stray_light_correction, double param0, int param1);
	EXPORTED void STDCALL StrayLightCorrection_Destroy_stdcall(STRAYLIGHTCORRECTION_T stray_light_correction);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* STRAYLIGHTCORRECTION_H */
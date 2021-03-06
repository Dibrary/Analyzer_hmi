/**
 * File: NonlinearityCorrectionImpl.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * NonlinearityCorrectionImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/nonlinearitycorrection/NonlinearityCorrectionImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NONLINEARITYCORRECTIONIMPL_H
#define NONLINEARITYCORRECTIONIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "USBInterface.h"
#include "Spectrometer.h"
#include "CoefficientsArray.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class USBInterface;
class Spectrometer;
class CoefficientsArray;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED NonlinearityCorrectionImpl : public USBFeature // CPPClass.tag001
{
public: 
	NonlinearityCorrectionImpl(USBInterface& usbInt, Spectrometer& s);
	CoefficientsArray readNonlinearityCoefficientsFromSpectrometer();
	void writeNonlinearityCoefficientsToSpectrometer(CoefficientsArray& c);
	CoefficientsArray getNonlinearityCoefficients();
	void setNonlinearityCoefficients(CoefficientsArray& c);
	DoubleArray getNonlinearityCoefficientsSingleChannel(int channelIndex);
	void setNonlinearityCoefficientsSingleChannel(DoubleArray& nl, int channelIndex);
	JStringArray getFeatureGUIClassnames();
	~NonlinearityCorrectionImpl();
	// No public default Java constructor; creating one:
	NonlinearityCorrectionImpl();
	// No public Java copy constructor; creating one:
	NonlinearityCorrectionImpl(const NonlinearityCorrectionImpl &that);
	// Creating assignment operator declaration:
	NonlinearityCorrectionImpl &operator=(const NonlinearityCorrectionImpl &that);

private:
	jmethodID mid_NonlinearityCorrectionImpl1883;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer1884;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer1885;
	jmethodID mid_getNonlinearityCoefficients1886;
	jmethodID mid_setNonlinearityCoefficients1887;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel1888;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel1889;
	jmethodID mid_getFeatureGUIClassnames1890;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_SPECTROMETER_T
#define EXTERN_TYPEDEF_SPECTROMETER_T
	typedef void* SPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_NONLINEARITYCORRECTIONIMPL_T
#define EXTERN_TYPEDEF_NONLINEARITYCORRECTIONIMPL_T
	typedef void* NONLINEARITYCORRECTIONIMPL_T;
#endif /* EXTERN_TYPEDEF_NONLINEARITYCORRECTIONIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED NONLINEARITYCORRECTIONIMPL_T NonlinearityCorrectionImpl_Create();
	EXPORTED NONLINEARITYCORRECTIONIMPL_T NonlinearityCorrectionImpl_Create_1(USBINTERFACE_T usbInt, SPECTROMETER_T s);
	EXPORTED void NonlinearityCorrectionImpl_readNonlinearityCoefficientsFromSpectrometer(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T retval);
	EXPORTED void NonlinearityCorrectionImpl_writeNonlinearityCoefficientsToSpectrometer(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T c);
	EXPORTED void NonlinearityCorrectionImpl_getNonlinearityCoefficients(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T retval);
	EXPORTED void NonlinearityCorrectionImpl_setNonlinearityCoefficients(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T c);
	EXPORTED void NonlinearityCorrectionImpl_getNonlinearityCoefficientsSingleChannel(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, int channelIndex, DOUBLEARRAY_T retval);
	EXPORTED void NonlinearityCorrectionImpl_setNonlinearityCoefficientsSingleChannel(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, DOUBLEARRAY_T nl, int channelIndex);
	EXPORTED void NonlinearityCorrectionImpl_getFeatureGUIClassnames(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, JSTRINGARRAY_T retval);
	EXPORTED void NonlinearityCorrectionImpl_Destroy(NONLINEARITYCORRECTIONIMPL_T nonlinearity_correction_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED NONLINEARITYCORRECTIONIMPL_T STDCALL NonlinearityCorrectionImpl_Create_stdcall_1(USBINTERFACE_T usbInt, SPECTROMETER_T s);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_readNonlinearityCoefficientsFromSpectrometer_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_writeNonlinearityCoefficientsToSpectrometer_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T c);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_getNonlinearityCoefficients_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_setNonlinearityCoefficients_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, COEFFICIENTSARRAY_T c);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_getNonlinearityCoefficientsSingleChannel_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, int channelIndex, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_setNonlinearityCoefficientsSingleChannel_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, DOUBLEARRAY_T nl, int channelIndex);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_getFeatureGUIClassnames_stdcall(NONLINEARITYCORRECTIONIMPL_T c_nonlinearity_correction_impl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL NonlinearityCorrectionImpl_Destroy_stdcall(NONLINEARITYCORRECTIONIMPL_T nonlinearity_correction_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NONLINEARITYCORRECTIONIMPL_H */

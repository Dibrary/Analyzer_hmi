/**
 * File: LS450_FunctionsImpl.h
 * Autogenerated on Fri Mar 23 13:38:37 EDT 2018 based on
 * LS450_FunctionsImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/ls450functions/LS450_FunctionsImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef LS450_FUNCTIONSIMPL_H
#define LS450_FUNCTIONSIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "USBInterface.h"
#include "SpectrometerPlugIn.h"
#include "LS450Coefficients.h"
#include "JString.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class USBInterface;
class SpectrometerPlugIn;
class LS450Coefficients;
class JString;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED LS450_FunctionsImpl : public USBFeature // CPPClass.tag001
{
public: 
	LS450_FunctionsImpl(USBInterface& usbInt, SpectrometerPlugIn& plugin);
	LS450Coefficients getLS450Coefficients();
	void setLS450Coefficients(LS450Coefficients& ls450Coefficients);
	void loadInfo();
	void saveInfo();
	JString getLS450Info(int index);
	void setAllLS450Info(LS450Coefficients& coef);
	LS450Coefficients getAllLS450Info();
	void setLS450Info(int index, JString& str);
	void setLEDMode(short pulsed);
	void loadLS450CoefficientsFromEEPROM();
	DoubleArray getO2ProbeCalibrationCoefficients();
	void setO2ProbeCalibrationCoefficients(DoubleArray& coefficients);
	JStringArray getFeatureGUIClassnames();
	~LS450_FunctionsImpl();
	// No public default Java constructor; creating one:
	LS450_FunctionsImpl();
	// No public Java copy constructor; creating one:
	LS450_FunctionsImpl(const LS450_FunctionsImpl &that);
	// Creating assignment operator declaration:
	LS450_FunctionsImpl &operator=(const LS450_FunctionsImpl &that);

private:
	jmethodID mid_LS450_FunctionsImpl1674;
	jmethodID mid_getLS450Coefficients1675;
	jmethodID mid_setLS450Coefficients1676;
	jmethodID mid_loadInfo1677;
	jmethodID mid_saveInfo1678;
	jmethodID mid_getLS450Info1679;
	jmethodID mid_setAllLS450Info1680;
	jmethodID mid_getAllLS450Info1681;
	jmethodID mid_setLS450Info1682;
	jmethodID mid_setLEDMode1683;
	jmethodID mid_loadLS450CoefficientsFromEEPROM1684;
	jmethodID mid_getO2ProbeCalibrationCoefficients1685;
	jmethodID mid_setO2ProbeCalibrationCoefficients1686;
	jmethodID mid_getFeatureGUIClassnames1687;
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
#ifndef EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T
#define EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T
	typedef void* SPECTROMETERPLUGIN_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T */
#ifndef EXTERN_TYPEDEF_LS450COEFFICIENTS_T
#define EXTERN_TYPEDEF_LS450COEFFICIENTS_T
	typedef void* LS450COEFFICIENTS_T;
#endif /* EXTERN_TYPEDEF_LS450COEFFICIENTS_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_LS450_FUNCTIONSIMPL_T
#define EXTERN_TYPEDEF_LS450_FUNCTIONSIMPL_T
	typedef void* LS450_FUNCTIONSIMPL_T;
#endif /* EXTERN_TYPEDEF_LS450_FUNCTIONSIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED LS450_FUNCTIONSIMPL_T LS450_FunctionsImpl_Create();
	EXPORTED LS450_FUNCTIONSIMPL_T LS450_FunctionsImpl_Create_1(USBINTERFACE_T usbInt, SPECTROMETERPLUGIN_T plugin);
	EXPORTED void LS450_FunctionsImpl_getLS450Coefficients(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T retval);
	EXPORTED void LS450_FunctionsImpl_setLS450Coefficients(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T ls450Coefficients);
	EXPORTED void LS450_FunctionsImpl_loadInfo(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void LS450_FunctionsImpl_saveInfo(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void LS450_FunctionsImpl_getLS450Info(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, int index, JSTRING_T retval);
	EXPORTED void LS450_FunctionsImpl_setAllLS450Info(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T coef);
	EXPORTED void LS450_FunctionsImpl_getAllLS450Info(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T retval);
	EXPORTED void LS450_FunctionsImpl_setLS450Info(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, int index, JSTRING_T str);
	EXPORTED void LS450_FunctionsImpl_setLEDMode(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, short pulsed);
	EXPORTED void LS450_FunctionsImpl_loadLS450CoefficientsFromEEPROM(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void LS450_FunctionsImpl_getO2ProbeCalibrationCoefficients(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, DOUBLEARRAY_T retval);
	EXPORTED void LS450_FunctionsImpl_setO2ProbeCalibrationCoefficients(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, DOUBLEARRAY_T coefficients);
	EXPORTED void LS450_FunctionsImpl_getFeatureGUIClassnames(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, JSTRINGARRAY_T retval);
	EXPORTED void LS450_FunctionsImpl_Destroy(LS450_FUNCTIONSIMPL_T ls450_functionsimpl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED LS450_FUNCTIONSIMPL_T STDCALL LS450_FunctionsImpl_Create_stdcall_1(USBINTERFACE_T usbInt, SPECTROMETERPLUGIN_T plugin);
	EXPORTED void STDCALL LS450_FunctionsImpl_getLS450Coefficients_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T retval);
	EXPORTED void STDCALL LS450_FunctionsImpl_setLS450Coefficients_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T ls450Coefficients);
	EXPORTED void STDCALL LS450_FunctionsImpl_loadInfo_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void STDCALL LS450_FunctionsImpl_saveInfo_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void STDCALL LS450_FunctionsImpl_getLS450Info_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, int index, JSTRING_T retval);
	EXPORTED void STDCALL LS450_FunctionsImpl_setAllLS450Info_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T coef);
	EXPORTED void STDCALL LS450_FunctionsImpl_getAllLS450Info_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, LS450COEFFICIENTS_T retval);
	EXPORTED void STDCALL LS450_FunctionsImpl_setLS450Info_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, int index, JSTRING_T str);
	EXPORTED void STDCALL LS450_FunctionsImpl_setLEDMode_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, short pulsed);
	EXPORTED void STDCALL LS450_FunctionsImpl_loadLS450CoefficientsFromEEPROM_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl);
	EXPORTED void STDCALL LS450_FunctionsImpl_getO2ProbeCalibrationCoefficients_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL LS450_FunctionsImpl_setO2ProbeCalibrationCoefficients_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, DOUBLEARRAY_T coefficients);
	EXPORTED void STDCALL LS450_FunctionsImpl_getFeatureGUIClassnames_stdcall(LS450_FUNCTIONSIMPL_T c_ls450_functionsimpl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL LS450_FunctionsImpl_Destroy_stdcall(LS450_FUNCTIONSIMPL_T ls450_functionsimpl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* LS450_FUNCTIONSIMPL_H */

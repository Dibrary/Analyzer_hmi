/**
 * File: USB_LS450.h
 * Autogenerated on Fri Mar 23 13:38:45 EDT 2018 based on
 * USB_LS450.java
 * for the Java class
 * com/oceanoptics/omnidriver/plugin/USB_LS450
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USB_LS450_H
#define USB_LS450_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrometerPlugIn.h"
#include "USBSpectrometer.h"
#include "USBInterface.h"
#include "GUIProviderArray.h"
#include "JString.h"
#include "LS450Coefficients.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerPlugIn;
class USBSpectrometer;
class USBInterface;
class GUIProviderArray;
class JString;
class LS450Coefficients;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED USB_LS450 : public SpectrometerPlugIn // CPPClass.tag001
{
public: 
	USB_LS450(USBSpectrometer& spectrometer, USBInterface& usbInt);
	GUIProviderArray getGUIFeatures();
	JString toString();
	void setLEDMode(short pulsed);
	LS450Coefficients getLS450Coefficients();
	void setLS450Coefficients(LS450Coefficients& coeffs);
	void setLS450Info(int index, JString& str);
	JString getLS450Info(int index);
	void saveInfo();
	void loadInfo();
	void setAllLS450Info(LS450Coefficients& ls450Coefficients);
	LS450Coefficients getAllLS450Info();
	void loadLS450CoefficientsFromEEPROM();
	DoubleArray getO2ProbeCalibrationCoefficients();
	void setO2ProbeCalibrationCoefficients(DoubleArray& coefficients);
	void setDACCounts(int counts);
	double analogOutCountsToMilliamps(int counts);
	int getDACMinimum();
	int getDACMaximum();
	int getDACIncrement();
	double getExternalTemperatureCelsius();
	~USB_LS450();
	// No public default Java constructor; creating one:
	USB_LS450();
	// No public Java copy constructor; creating one:
	USB_LS450(const USB_LS450 &that);
	// Creating assignment operator declaration:
	USB_LS450 &operator=(const USB_LS450 &that);

private:
	jmethodID mid_USB_LS4502693;
	jmethodID mid_getGUIFeatures2694;
	jmethodID mid_toString2695;
	jmethodID mid_setLEDMode2696;
	jmethodID mid_getLS450Coefficients2697;
	jmethodID mid_setLS450Coefficients2698;
	jmethodID mid_setLS450Info2699;
	jmethodID mid_getLS450Info2700;
	jmethodID mid_saveInfo2701;
	jmethodID mid_loadInfo2702;
	jmethodID mid_setAllLS450Info2703;
	jmethodID mid_getAllLS450Info2704;
	jmethodID mid_loadLS450CoefficientsFromEEPROM2705;
	jmethodID mid_getO2ProbeCalibrationCoefficients2706;
	jmethodID mid_setO2ProbeCalibrationCoefficients2707;
	jmethodID mid_setDACCounts2708;
	jmethodID mid_analogOutCountsToMilliamps2709;
	jmethodID mid_getDACMinimum2710;
	jmethodID mid_getDACMaximum2711;
	jmethodID mid_getDACIncrement2712;
	jmethodID mid_getExternalTemperatureCelsius2713;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T
#define EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T
	typedef void* SPECTROMETERPLUGIN_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERPLUGIN_T */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_LS450COEFFICIENTS_T
#define EXTERN_TYPEDEF_LS450COEFFICIENTS_T
	typedef void* LS450COEFFICIENTS_T;
#endif /* EXTERN_TYPEDEF_LS450COEFFICIENTS_T */
#ifndef EXTERN_TYPEDEF_USB_LS450_T
#define EXTERN_TYPEDEF_USB_LS450_T
	typedef void* USB_LS450_T;
#endif /* EXTERN_TYPEDEF_USB_LS450_T */

	// No public default Java constructor; creating one:
	EXPORTED USB_LS450_T USB_LS450_Create();
	EXPORTED USB_LS450_T USB_LS450_Create_1(USBSPECTROMETER_T spectrometer, USBINTERFACE_T usbInt);
	EXPORTED void USB_LS450_getGUIFeatures(USB_LS450_T c_usb_ls450, GUIPROVIDERARRAY_T retval);
	EXPORTED void USB_LS450_toString(USB_LS450_T c_usb_ls450, JSTRING_T retval);
	EXPORTED void USB_LS450_setLEDMode(USB_LS450_T c_usb_ls450, short pulsed);
	EXPORTED void USB_LS450_getLS450Coefficients(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T retval);
	EXPORTED void USB_LS450_setLS450Coefficients(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T coeffs);
	EXPORTED void USB_LS450_setLS450Info(USB_LS450_T c_usb_ls450, int index, JSTRING_T str);
	EXPORTED void USB_LS450_getLS450Info(USB_LS450_T c_usb_ls450, int index, JSTRING_T retval);
	EXPORTED void USB_LS450_saveInfo(USB_LS450_T c_usb_ls450);
	EXPORTED void USB_LS450_loadInfo(USB_LS450_T c_usb_ls450);
	EXPORTED void USB_LS450_setAllLS450Info(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T ls450Coefficients);
	EXPORTED void USB_LS450_getAllLS450Info(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T retval);
	EXPORTED void USB_LS450_loadLS450CoefficientsFromEEPROM(USB_LS450_T c_usb_ls450);
	EXPORTED void USB_LS450_getO2ProbeCalibrationCoefficients(USB_LS450_T c_usb_ls450, DOUBLEARRAY_T retval);
	EXPORTED void USB_LS450_setO2ProbeCalibrationCoefficients(USB_LS450_T c_usb_ls450, DOUBLEARRAY_T coefficients);
	EXPORTED void USB_LS450_setDACCounts(USB_LS450_T c_usb_ls450, int counts);
	EXPORTED double USB_LS450_analogOutCountsToMilliamps(USB_LS450_T c_usb_ls450, int counts);
	EXPORTED int USB_LS450_getDACMinimum(USB_LS450_T c_usb_ls450);
	EXPORTED int USB_LS450_getDACMaximum(USB_LS450_T c_usb_ls450);
	EXPORTED int USB_LS450_getDACIncrement(USB_LS450_T c_usb_ls450);
	EXPORTED double USB_LS450_getExternalTemperatureCelsius(USB_LS450_T c_usb_ls450);
	EXPORTED void USB_LS450_Destroy(USB_LS450_T usb_ls450);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USB_LS450_T STDCALL USB_LS450_Create_stdcall_1(USBSPECTROMETER_T spectrometer, USBINTERFACE_T usbInt);
	EXPORTED void STDCALL USB_LS450_getGUIFeatures_stdcall(USB_LS450_T c_usb_ls450, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL USB_LS450_toString_stdcall(USB_LS450_T c_usb_ls450, JSTRING_T retval);
	EXPORTED void STDCALL USB_LS450_setLEDMode_stdcall(USB_LS450_T c_usb_ls450, short pulsed);
	EXPORTED void STDCALL USB_LS450_getLS450Coefficients_stdcall(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T retval);
	EXPORTED void STDCALL USB_LS450_setLS450Coefficients_stdcall(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T coeffs);
	EXPORTED void STDCALL USB_LS450_setLS450Info_stdcall(USB_LS450_T c_usb_ls450, int index, JSTRING_T str);
	EXPORTED void STDCALL USB_LS450_getLS450Info_stdcall(USB_LS450_T c_usb_ls450, int index, JSTRING_T retval);
	EXPORTED void STDCALL USB_LS450_saveInfo_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED void STDCALL USB_LS450_loadInfo_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED void STDCALL USB_LS450_setAllLS450Info_stdcall(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T ls450Coefficients);
	EXPORTED void STDCALL USB_LS450_getAllLS450Info_stdcall(USB_LS450_T c_usb_ls450, LS450COEFFICIENTS_T retval);
	EXPORTED void STDCALL USB_LS450_loadLS450CoefficientsFromEEPROM_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED void STDCALL USB_LS450_getO2ProbeCalibrationCoefficients_stdcall(USB_LS450_T c_usb_ls450, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL USB_LS450_setO2ProbeCalibrationCoefficients_stdcall(USB_LS450_T c_usb_ls450, DOUBLEARRAY_T coefficients);
	EXPORTED void STDCALL USB_LS450_setDACCounts_stdcall(USB_LS450_T c_usb_ls450, int counts);
	EXPORTED double STDCALL USB_LS450_analogOutCountsToMilliamps_stdcall(USB_LS450_T c_usb_ls450, int counts);
	EXPORTED int STDCALL USB_LS450_getDACMinimum_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED int STDCALL USB_LS450_getDACMaximum_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED int STDCALL USB_LS450_getDACIncrement_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED double STDCALL USB_LS450_getExternalTemperatureCelsius_stdcall(USB_LS450_T c_usb_ls450);
	EXPORTED void STDCALL USB_LS450_Destroy_stdcall(USB_LS450_T usb_ls450);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USB_LS450_H */

/**
 * File: USB_ISS_UV.h
 * Autogenerated on Fri Mar 23 13:38:43 EDT 2018 based on
 * USB_ISS_UV.java
 * for the Java class
 * com/oceanoptics/omnidriver/plugin/USB_ISS_UV
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USB_ISS_UV_H
#define USB_ISS_UV_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrometerPlugIn.h"
#include "USBSpectrometer.h"
#include "USBInterface.h"
#include "GUIProviderArray.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerPlugIn;
class USBSpectrometer;
class USBInterface;
class GUIProviderArray;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED USB_ISS_UV : public SpectrometerPlugIn // CPPClass.tag001
{
public: 
	USB_ISS_UV(USBSpectrometer& spectrometer, USBInterface& usb);
	GUIProviderArray getGUIFeatures();
	void setPowerUpPOTValues();
	void setPOTValue(int pot, int value);
	CharArray getPOTValues();
	void setLampOn(short lampOn);
	short isLampOn();
	void setVisLampOn(short lampOn);
	short isVisLampOn();
	void setVisLampIntensity(short intens);
	short getVisLampIntensity();
	void setUVLampIntensity(short intens);
	short getUVLampIntensity();
	int getLampIntensityMinimum();
	int getLampIntensityMaximum();
	int getLampIntensityIncrement();
	void initialize();
	JString toString();
	~USB_ISS_UV();
	// No public default Java constructor; creating one:
	USB_ISS_UV();
	// No public Java copy constructor; creating one:
	USB_ISS_UV(const USB_ISS_UV &that);
	// Creating assignment operator declaration:
	USB_ISS_UV &operator=(const USB_ISS_UV &that);

private:
	jmethodID mid_USB_ISS_UV2675;
	jmethodID mid_getGUIFeatures2676;
	jmethodID mid_setPowerUpPOTValues2677;
	jmethodID mid_setPOTValue2678;
	jmethodID mid_getPOTValues2679;
	jmethodID mid_setLampOn2680;
	jmethodID mid_isLampOn2681;
	jmethodID mid_setVisLampOn2682;
	jmethodID mid_isVisLampOn2683;
	jmethodID mid_setVisLampIntensity2684;
	jmethodID mid_getVisLampIntensity2685;
	jmethodID mid_setUVLampIntensity2686;
	jmethodID mid_getUVLampIntensity2687;
	jmethodID mid_getLampIntensityMinimum2688;
	jmethodID mid_getLampIntensityMaximum2689;
	jmethodID mid_getLampIntensityIncrement2690;
	jmethodID mid_initialize2691;
	jmethodID mid_toString2692;
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
#ifndef EXTERN_TYPEDEF_USB_ISS_UV_T
#define EXTERN_TYPEDEF_USB_ISS_UV_T
	typedef void* USB_ISS_UV_T;
#endif /* EXTERN_TYPEDEF_USB_ISS_UV_T */

	// No public default Java constructor; creating one:
	EXPORTED USB_ISS_UV_T USB_ISS_UV_Create();
	EXPORTED USB_ISS_UV_T USB_ISS_UV_Create_1(USBSPECTROMETER_T spectrometer, USBINTERFACE_T usb);
	EXPORTED void USB_ISS_UV_getGUIFeatures(USB_ISS_UV_T c_usb_iss_uv, GUIPROVIDERARRAY_T retval);
	EXPORTED void USB_ISS_UV_setPowerUpPOTValues(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_setPOTValue(USB_ISS_UV_T c_usb_iss_uv, int pot, int value);
	EXPORTED void USB_ISS_UV_getPOTValues(USB_ISS_UV_T c_usb_iss_uv, CHARARRAY_T retval);
	EXPORTED void USB_ISS_UV_setLampOn(USB_ISS_UV_T c_usb_iss_uv, short lampOn);
	EXPORTED short USB_ISS_UV_isLampOn(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_setVisLampOn(USB_ISS_UV_T c_usb_iss_uv, short lampOn);
	EXPORTED short USB_ISS_UV_isVisLampOn(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_setVisLampIntensity(USB_ISS_UV_T c_usb_iss_uv, short intens);
	EXPORTED short USB_ISS_UV_getVisLampIntensity(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_setUVLampIntensity(USB_ISS_UV_T c_usb_iss_uv, short intens);
	EXPORTED short USB_ISS_UV_getUVLampIntensity(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int USB_ISS_UV_getLampIntensityMinimum(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int USB_ISS_UV_getLampIntensityMaximum(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int USB_ISS_UV_getLampIntensityIncrement(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_initialize(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void USB_ISS_UV_toString(USB_ISS_UV_T c_usb_iss_uv, JSTRING_T retval);
	EXPORTED void USB_ISS_UV_Destroy(USB_ISS_UV_T usb_iss_uv);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USB_ISS_UV_T STDCALL USB_ISS_UV_Create_stdcall_1(USBSPECTROMETER_T spectrometer, USBINTERFACE_T usb);
	EXPORTED void STDCALL USB_ISS_UV_getGUIFeatures_stdcall(USB_ISS_UV_T c_usb_iss_uv, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL USB_ISS_UV_setPowerUpPOTValues_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_setPOTValue_stdcall(USB_ISS_UV_T c_usb_iss_uv, int pot, int value);
	EXPORTED void STDCALL USB_ISS_UV_getPOTValues_stdcall(USB_ISS_UV_T c_usb_iss_uv, CHARARRAY_T retval);
	EXPORTED void STDCALL USB_ISS_UV_setLampOn_stdcall(USB_ISS_UV_T c_usb_iss_uv, short lampOn);
	EXPORTED short STDCALL USB_ISS_UV_isLampOn_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_setVisLampOn_stdcall(USB_ISS_UV_T c_usb_iss_uv, short lampOn);
	EXPORTED short STDCALL USB_ISS_UV_isVisLampOn_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_setVisLampIntensity_stdcall(USB_ISS_UV_T c_usb_iss_uv, short intens);
	EXPORTED short STDCALL USB_ISS_UV_getVisLampIntensity_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_setUVLampIntensity_stdcall(USB_ISS_UV_T c_usb_iss_uv, short intens);
	EXPORTED short STDCALL USB_ISS_UV_getUVLampIntensity_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int STDCALL USB_ISS_UV_getLampIntensityMinimum_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int STDCALL USB_ISS_UV_getLampIntensityMaximum_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED int STDCALL USB_ISS_UV_getLampIntensityIncrement_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_initialize_stdcall(USB_ISS_UV_T c_usb_iss_uv);
	EXPORTED void STDCALL USB_ISS_UV_toString_stdcall(USB_ISS_UV_T c_usb_iss_uv, JSTRING_T retval);
	EXPORTED void STDCALL USB_ISS_UV_Destroy_stdcall(USB_ISS_UV_T usb_iss_uv);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USB_ISS_UV_H */

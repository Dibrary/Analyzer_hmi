/**
 * File: BadPixelRemovalImpl_Dragon.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * BadPixelRemovalImpl_Dragon.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/badpixelremoval/BadPixelRemovalImpl_Dragon
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BADPIXELREMOVALIMPL_DRAGON_H
#define BADPIXELREMOVALIMPL_DRAGON_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "BadPixelRemovalImpl.h"
#include "USBInterface.h"
#include "USBSpectrometer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class BadPixelRemovalImpl;
class USBInterface;
class USBSpectrometer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED BadPixelRemovalImpl_Dragon : public BadPixelRemovalImpl // CPPClass.tag001
{
public: 
	BadPixelRemovalImpl_Dragon(USBInterface& usbInt, USBSpectrometer& spectrometer, int numPixels);
	BadPixelRemovalImpl_Dragon(USBInterface& usbInt, int numPixels);
	IntArray getBadPixelsFromSpectrometer();
	void setBadPixelsToSpectrometer();
	~BadPixelRemovalImpl_Dragon();
	// No public default Java constructor; creating one:
	BadPixelRemovalImpl_Dragon();
	// No public Java copy constructor; creating one:
	BadPixelRemovalImpl_Dragon(const BadPixelRemovalImpl_Dragon &that);
	// Creating assignment operator declaration:
	BadPixelRemovalImpl_Dragon &operator=(const BadPixelRemovalImpl_Dragon &that);

private:
	jmethodID mid_BadPixelRemovalImpl_Dragon882;
	jmethodID mid_BadPixelRemovalImpl_Dragon883;
	jmethodID mid_getBadPixelsFromSpectrometer884;
	jmethodID mid_setBadPixelsToSpectrometer885;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_T
#define EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_T
	typedef void* BADPIXELREMOVALIMPL_T;
#endif /* EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_DRAGON_T
#define EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_DRAGON_T
	typedef void* BADPIXELREMOVALIMPL_DRAGON_T;
#endif /* EXTERN_TYPEDEF_BADPIXELREMOVALIMPL_DRAGON_T */

	// No public default Java constructor; creating one:
	EXPORTED BADPIXELREMOVALIMPL_DRAGON_T BadPixelRemovalImpl_Dragon_Create();
	EXPORTED BADPIXELREMOVALIMPL_DRAGON_T BadPixelRemovalImpl_Dragon_Create_1(USBINTERFACE_T usbInt, USBSPECTROMETER_T spectrometer, int numPixels);
	EXPORTED BADPIXELREMOVALIMPL_DRAGON_T BadPixelRemovalImpl_Dragon_Create_2(USBINTERFACE_T usbInt, int numPixels);
	EXPORTED void BadPixelRemovalImpl_Dragon_getBadPixelsFromSpectrometer(BADPIXELREMOVALIMPL_DRAGON_T c_bad_pixel_removal_impl_dragon, INTARRAY_T retval);
	EXPORTED void BadPixelRemovalImpl_Dragon_setBadPixelsToSpectrometer(BADPIXELREMOVALIMPL_DRAGON_T c_bad_pixel_removal_impl_dragon);
	EXPORTED void BadPixelRemovalImpl_Dragon_Destroy(BADPIXELREMOVALIMPL_DRAGON_T bad_pixel_removal_impl_dragon);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED BADPIXELREMOVALIMPL_DRAGON_T STDCALL BadPixelRemovalImpl_Dragon_Create_stdcall_1(USBINTERFACE_T usbInt, USBSPECTROMETER_T spectrometer, int numPixels);
	EXPORTED BADPIXELREMOVALIMPL_DRAGON_T STDCALL BadPixelRemovalImpl_Dragon_Create_stdcall_2(USBINTERFACE_T usbInt, int numPixels);
	EXPORTED void STDCALL BadPixelRemovalImpl_Dragon_getBadPixelsFromSpectrometer_stdcall(BADPIXELREMOVALIMPL_DRAGON_T c_bad_pixel_removal_impl_dragon, INTARRAY_T retval);
	EXPORTED void STDCALL BadPixelRemovalImpl_Dragon_setBadPixelsToSpectrometer_stdcall(BADPIXELREMOVALIMPL_DRAGON_T c_bad_pixel_removal_impl_dragon);
	EXPORTED void STDCALL BadPixelRemovalImpl_Dragon_Destroy_stdcall(BADPIXELREMOVALIMPL_DRAGON_T bad_pixel_removal_impl_dragon);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BADPIXELREMOVALIMPL_DRAGON_H */

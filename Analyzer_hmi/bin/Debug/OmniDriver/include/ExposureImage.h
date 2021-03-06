/**
 * File: ExposureImage.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExposureImage.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/exposureimage/ExposureImage
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXPOSUREIMAGE_H
#define EXPOSUREIMAGE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ExposureImage : public BaseJavaClass // CPPClass.tag001
{
public: 
	USBSpectrometer getSpectrometer();
	~ExposureImage();
	// No public default Java constructor; creating one:
	ExposureImage();
	// No public Java copy constructor; creating one:
	ExposureImage(const ExposureImage &that);
	// Creating assignment operator declaration:
	ExposureImage &operator=(const ExposureImage &that);

private:
	jmethodID mid_getSpectrometer1189;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_EXPOSUREIMAGE_T
#define EXTERN_TYPEDEF_EXPOSUREIMAGE_T
	typedef void* EXPOSUREIMAGE_T;
#endif /* EXTERN_TYPEDEF_EXPOSUREIMAGE_T */

	// No public default Java constructor; creating one:
	EXPORTED EXPOSUREIMAGE_T ExposureImage_Create();
	EXPORTED void ExposureImage_getSpectrometer(EXPOSUREIMAGE_T c_exposure_image, USBSPECTROMETER_T retval);
	EXPORTED void ExposureImage_Destroy(EXPOSUREIMAGE_T exposure_image);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL ExposureImage_getSpectrometer_stdcall(EXPOSUREIMAGE_T c_exposure_image, USBSPECTROMETER_T retval);
	EXPORTED void STDCALL ExposureImage_Destroy_stdcall(EXPOSUREIMAGE_T exposure_image);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXPOSUREIMAGE_H */

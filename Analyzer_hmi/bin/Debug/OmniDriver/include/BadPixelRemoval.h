/**
 * File: BadPixelRemoval.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * BadPixelRemoval.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/badpixelremoval/BadPixelRemoval
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BADPIXELREMOVAL_H
#define BADPIXELREMOVAL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Spectrum.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Spectrum;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED BadPixelRemoval : public BaseJavaClass // CPPClass.tag001
{
public: 
	IntArray getBadPixels();
	void setBadPixels(IntArray& param0);
	Spectrum removeBadPixels(Spectrum& param0);
	int getNumberOfBadPixels();
	int getMaximumBadPixels();
	IntArray getAllPixels();
	void setBadPixelsToSpectrometer();
	IntArray getBadPixelsFromSpectrometer();
	~BadPixelRemoval();
	// No public default Java constructor; creating one:
	BadPixelRemoval();
	// No public Java copy constructor; creating one:
	BadPixelRemoval(const BadPixelRemoval &that);
	// Creating assignment operator declaration:
	BadPixelRemoval &operator=(const BadPixelRemoval &that);

private:
	jmethodID mid_getBadPixels863;
	jmethodID mid_setBadPixels864;
	jmethodID mid_removeBadPixels865;
	jmethodID mid_getNumberOfBadPixels866;
	jmethodID mid_getMaximumBadPixels867;
	jmethodID mid_getAllPixels868;
	jmethodID mid_setBadPixelsToSpectrometer869;
	jmethodID mid_getBadPixelsFromSpectrometer870;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTRUM_T
#define EXTERN_TYPEDEF_SPECTRUM_T
	typedef void* SPECTRUM_T;
#endif /* EXTERN_TYPEDEF_SPECTRUM_T */
#ifndef EXTERN_TYPEDEF_BADPIXELREMOVAL_T
#define EXTERN_TYPEDEF_BADPIXELREMOVAL_T
	typedef void* BADPIXELREMOVAL_T;
#endif /* EXTERN_TYPEDEF_BADPIXELREMOVAL_T */

	// No public default Java constructor; creating one:
	EXPORTED BADPIXELREMOVAL_T BadPixelRemoval_Create();
	EXPORTED void BadPixelRemoval_getBadPixels(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void BadPixelRemoval_setBadPixels(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T param0);
	EXPORTED void BadPixelRemoval_removeBadPixels(BADPIXELREMOVAL_T c_bad_pixel_removal, SPECTRUM_T param0, SPECTRUM_T retval);
	EXPORTED int BadPixelRemoval_getNumberOfBadPixels(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED int BadPixelRemoval_getMaximumBadPixels(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED void BadPixelRemoval_getAllPixels(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void BadPixelRemoval_setBadPixelsToSpectrometer(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED void BadPixelRemoval_getBadPixelsFromSpectrometer(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void BadPixelRemoval_Destroy(BADPIXELREMOVAL_T bad_pixel_removal);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL BadPixelRemoval_getBadPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void STDCALL BadPixelRemoval_setBadPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T param0);
	EXPORTED void STDCALL BadPixelRemoval_removeBadPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal, SPECTRUM_T param0, SPECTRUM_T retval);
	EXPORTED int STDCALL BadPixelRemoval_getNumberOfBadPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED int STDCALL BadPixelRemoval_getMaximumBadPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED void STDCALL BadPixelRemoval_getAllPixels_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void STDCALL BadPixelRemoval_setBadPixelsToSpectrometer_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal);
	EXPORTED void STDCALL BadPixelRemoval_getBadPixelsFromSpectrometer_stdcall(BADPIXELREMOVAL_T c_bad_pixel_removal, INTARRAY_T retval);
	EXPORTED void STDCALL BadPixelRemoval_Destroy_stdcall(BADPIXELREMOVAL_T bad_pixel_removal);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BADPIXELREMOVAL_H */

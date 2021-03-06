/**
 * File: PixelRange.h
 * Autogenerated on Fri Mar 23 13:39:01 EDT 2018 based on
 * PixelRange.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/nextgen/PixelRange
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef PIXELRANGE_H
#define PIXELRANGE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED PixelRange : public BaseJavaClass // CPPClass.tag001
{
public: 
	PixelRange(int start, int finish);
	int getPixels();
	int getStartPixel();
	int getFinishPixel();
	~PixelRange();
	// No public default Java constructor; creating one:
	PixelRange();
	// No public Java copy constructor; creating one:
	PixelRange(const PixelRange &that);
	// Creating assignment operator declaration:
	PixelRange &operator=(const PixelRange &that);

private:
	jmethodID mid_PixelRange4866;
	jmethodID mid_getPixels4867;
	jmethodID mid_getStartPixel4868;
	jmethodID mid_getFinishPixel4869;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_PIXELRANGE_T
#define EXTERN_TYPEDEF_PIXELRANGE_T
	typedef void* PIXELRANGE_T;
#endif /* EXTERN_TYPEDEF_PIXELRANGE_T */

	// No public default Java constructor; creating one:
	EXPORTED PIXELRANGE_T PixelRange_Create();
	EXPORTED PIXELRANGE_T PixelRange_Create_1(int start, int finish);
	EXPORTED int PixelRange_getPixels(PIXELRANGE_T c_pixel_range);
	EXPORTED int PixelRange_getStartPixel(PIXELRANGE_T c_pixel_range);
	EXPORTED int PixelRange_getFinishPixel(PIXELRANGE_T c_pixel_range);
	EXPORTED void PixelRange_Destroy(PIXELRANGE_T pixel_range);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED PIXELRANGE_T STDCALL PixelRange_Create_stdcall_1(int start, int finish);
	EXPORTED int STDCALL PixelRange_getPixels_stdcall(PIXELRANGE_T c_pixel_range);
	EXPORTED int STDCALL PixelRange_getStartPixel_stdcall(PIXELRANGE_T c_pixel_range);
	EXPORTED int STDCALL PixelRange_getFinishPixel_stdcall(PIXELRANGE_T c_pixel_range);
	EXPORTED void STDCALL PixelRange_Destroy_stdcall(PIXELRANGE_T pixel_range);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* PIXELRANGE_H */

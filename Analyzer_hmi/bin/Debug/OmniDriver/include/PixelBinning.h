/**
 * File: PixelBinning.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * PixelBinning.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/resolution/PixelBinning
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef PIXELBINNING_H
#define PIXELBINNING_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED PixelBinning : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getPixelBinningFactor();
	int getMaximumBinningFactor();
	int getMinimumBinningFactor();
	void setPixelBinningFactor(int param0);
	int getPixelCountForBinningFactor(int param0);
	DoubleArray getWavelengthsForBinningFactor(int param0);
	~PixelBinning();
	// No public default Java constructor; creating one:
	PixelBinning();
	// No public Java copy constructor; creating one:
	PixelBinning(const PixelBinning &that);
	// Creating assignment operator declaration:
	PixelBinning &operator=(const PixelBinning &that);

private:
	jmethodID mid_getPixelBinningFactor1951;
	jmethodID mid_getMaximumBinningFactor1952;
	jmethodID mid_getMinimumBinningFactor1953;
	jmethodID mid_setPixelBinningFactor1954;
	jmethodID mid_getPixelCountForBinningFactor1955;
	jmethodID mid_getWavelengthsForBinningFactor1956;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_PIXELBINNING_T
#define EXTERN_TYPEDEF_PIXELBINNING_T
	typedef void* PIXELBINNING_T;
#endif /* EXTERN_TYPEDEF_PIXELBINNING_T */

	// No public default Java constructor; creating one:
	EXPORTED PIXELBINNING_T PixelBinning_Create();
	EXPORTED int PixelBinning_getPixelBinningFactor(PIXELBINNING_T c_pixel_binning);
	EXPORTED int PixelBinning_getMaximumBinningFactor(PIXELBINNING_T c_pixel_binning);
	EXPORTED int PixelBinning_getMinimumBinningFactor(PIXELBINNING_T c_pixel_binning);
	EXPORTED void PixelBinning_setPixelBinningFactor(PIXELBINNING_T c_pixel_binning, int param0);
	EXPORTED int PixelBinning_getPixelCountForBinningFactor(PIXELBINNING_T c_pixel_binning, int param0);
	EXPORTED void PixelBinning_getWavelengthsForBinningFactor(PIXELBINNING_T c_pixel_binning, int param0, DOUBLEARRAY_T retval);
	EXPORTED void PixelBinning_Destroy(PIXELBINNING_T pixel_binning);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL PixelBinning_getPixelBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning);
	EXPORTED int STDCALL PixelBinning_getMaximumBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning);
	EXPORTED int STDCALL PixelBinning_getMinimumBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning);
	EXPORTED void STDCALL PixelBinning_setPixelBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning, int param0);
	EXPORTED int STDCALL PixelBinning_getPixelCountForBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning, int param0);
	EXPORTED void STDCALL PixelBinning_getWavelengthsForBinningFactor_stdcall(PIXELBINNING_T c_pixel_binning, int param0, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL PixelBinning_Destroy_stdcall(PIXELBINNING_T pixel_binning);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* PIXELBINNING_H */

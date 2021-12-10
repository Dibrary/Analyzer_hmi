/**
 * File: SHAConstants.h
 * Autogenerated on Fri Mar 23 13:39:12 EDT 2018 based on
 * SHAConstants.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/sha/SHAConstants
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SHACONSTANTS_H
#define SHACONSTANTS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SHAConstants : public BaseJavaClass // CPPClass.tag001
{
public: 
	SHAConstants();
	~SHAConstants();
	// No public Java copy constructor; creating one:
	SHAConstants(const SHAConstants &that);
	// Creating assignment operator declaration:
	SHAConstants &operator=(const SHAConstants &that);
	int EEPROM_READ;
	int EEPROM_WRITE;
	int DAC_WRITE;
	int SERIAL_NUMBER_SLOT;
	int FIRMWARE_VERSION_SLOT;
	int INTERCEPT_SLOT;
	int FIRST_ORDER_COEFF_SLOT;
	int SECOND_ORDER_COEFF_SLOT;
	int PHASE_INTERCEPT_SLOT;
	int PHASE_FIRST_COEFF_SLOT;
	int PHASE_SECOND_COEFF_SLOT;
	int PIVOT_WAVELENGTH_SLOT;
	int START_WAVELENGTH_SLOT;
	int END_WAVELENGTH_SLOT;
	int SCAN_DIRECTION_SLOT;
	int LENGTH_VAR1_SLOT;
	int LENGTH_VAR2_SLOT;
	int LENGTH_VAR3_SLOT;
	int PHASE_STEP_SLOT;
	int PHASE_START_WL_SLOT;
	int PHASE_END_WL_SLOT;
	int POSITIVE_SCAN_DIRECTION;
	int NEGATIVE_SCAN_DIRECTION;

private:
	jmethodID mid_SHAConstants5620;
	jfieldID fid_EEPROM_READ;
	jfieldID fid_EEPROM_WRITE;
	jfieldID fid_DAC_WRITE;
	jfieldID fid_SERIAL_NUMBER_SLOT;
	jfieldID fid_FIRMWARE_VERSION_SLOT;
	jfieldID fid_INTERCEPT_SLOT;
	jfieldID fid_FIRST_ORDER_COEFF_SLOT;
	jfieldID fid_SECOND_ORDER_COEFF_SLOT;
	jfieldID fid_PHASE_INTERCEPT_SLOT;
	jfieldID fid_PHASE_FIRST_COEFF_SLOT;
	jfieldID fid_PHASE_SECOND_COEFF_SLOT;
	jfieldID fid_PIVOT_WAVELENGTH_SLOT;
	jfieldID fid_START_WAVELENGTH_SLOT;
	jfieldID fid_END_WAVELENGTH_SLOT;
	jfieldID fid_SCAN_DIRECTION_SLOT;
	jfieldID fid_LENGTH_VAR1_SLOT;
	jfieldID fid_LENGTH_VAR2_SLOT;
	jfieldID fid_LENGTH_VAR3_SLOT;
	jfieldID fid_PHASE_STEP_SLOT;
	jfieldID fid_PHASE_START_WL_SLOT;
	jfieldID fid_PHASE_END_WL_SLOT;
	jfieldID fid_POSITIVE_SCAN_DIRECTION;
	jfieldID fid_NEGATIVE_SCAN_DIRECTION;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SHACONSTANTS_T
#define EXTERN_TYPEDEF_SHACONSTANTS_T
	typedef void* SHACONSTANTS_T;
#endif /* EXTERN_TYPEDEF_SHACONSTANTS_T */

	EXPORTED SHACONSTANTS_T SHAConstants_Create();
	EXPORTED void SHAConstants_Destroy(SHACONSTANTS_T shaconstants);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SHACONSTANTS_T STDCALL SHAConstants_Create_stdcall();
	EXPORTED void STDCALL SHAConstants_Destroy_stdcall(SHACONSTANTS_T shaconstants);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SHACONSTANTS_H */
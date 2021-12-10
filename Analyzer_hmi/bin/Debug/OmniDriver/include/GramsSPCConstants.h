/**
 * File: GramsSPCConstants.h
 * Autogenerated on Fri Mar 23 13:38:42 EDT 2018 based on
 * GramsSPCConstants.java
 * for the Java class
 * com/oceanoptics/omnidriver/gramsspc/GramsSPCConstants
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GRAMSSPCCONSTANTS_H
#define GRAMSSPCCONSTANTS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED GramsSPCConstants : public BaseJavaClass // CPPClass.tag001
{
public: 
	~GramsSPCConstants();
	// No public default Java constructor; creating one:
	GramsSPCConstants();
	// No public Java copy constructor; creating one:
	GramsSPCConstants(const GramsSPCConstants &that);
	// Creating assignment operator declaration:
	GramsSPCConstants &operator=(const GramsSPCConstants &that);
	int X_ARBITRARY;
	int X_WAVENUMBER;
	int X_MICRONS;
	int X_NANOMETERS;
	int X_SECONDS;
	int X_MINUTES;
	int X_HERTZ;
	int X_KILOHERTZ;
	int X_MEGAHERTZ;
	int X_MASS;
	int X_PPM;
	int X_DAYS;
	int X_YEARS;
	int X_RAMAN_SHIFTS;
	int X_EV;
	int Z_TEXT_LABEL;
	int X_DIODE_NUMBER;
	int X_CHANNEL;
	int X_DEGREES;
	int X_DEGREES_F;
	int X_DEGREES_C;
	int X_KELVINS;
	int X_DATA_POINTS;
	int X_MILLISECONDS;
	int X_MICROSECONDS;
	int X_NANOSECONDS;
	int X_GIGAHERTZ;
	int X_CENTIMETERS;
	int X_METERS;
	int X_MILLIMETERS;
	int X_HOURS;
	int X_DOUBLE_INTERFEROGRAM;
	int Y_ARBITRARY;
	int Y_INTERFEROGRAM;
	int Y_ABSORBANCE;
	int Y_KUBELKA_MONK;
	int Y_COUNTS;
	int Y_VOLTS;
	int Y_DEGREES;
	int Y_MILLIAMPS;
	int Y_MILLIMETERS;
	int Y_MILLIVOLTS;
	int Y_LOG_DR;
	int Y_PERCENT;
	int Y_INTENSITY;
	int Y_RELATIVE_INTENSITY;
	int Y_ENERGY;
	int Y_DECIBELS;
	int Y_DEGREES_F;
	int Y_DEGREES_C;
	int Y_KELVINS;
	int Y_INDEX_REFRACTION;
	int Y_EXTINCTION_COEFF;
	int Y_REAL;
	int Y_IMAGINARY;
	int Y_COMPLEX;
	int Y_TRANSMISSION;
	int Y_REFLECTION;
	int Y_VALLEY;
	int Y_EMISSION;
	int TSPREC;
	int TCGRAM;
	int TMULTI;
	int TRANDM;
	int TORDRD;
	int TALABS;
	int TXYXYS;
	int TXVALS;
	int SPC_GENERAL;
	int SPC_GAS_CHROMATOGRAM;
	int SPC_GENERAL_CHROMATOGRAM;
	int SPC_HPLC;
	int SPC_FTIR;
	int SPC_NIR;
	int SPC_UV_VIS;
	int SPC_XRAY;
	int SPC_MASS_SPECTRUM;
	int SPC_NMR;
	int SPC_RAMAN;
	int SPC_FLUORESCENCE;
	int SPC_ATOMIC;
	int SPC_DIODE_ARRAY;
	signed char VERSION_OLD;
	signed char VERSION_NEW_LSB;
	signed char VERSION_NEW_MSB;
	signed char VERSION_DEFAULT;

private:
	jfieldID fid_X_ARBITRARY;
	jfieldID fid_X_WAVENUMBER;
	jfieldID fid_X_MICRONS;
	jfieldID fid_X_NANOMETERS;
	jfieldID fid_X_SECONDS;
	jfieldID fid_X_MINUTES;
	jfieldID fid_X_HERTZ;
	jfieldID fid_X_KILOHERTZ;
	jfieldID fid_X_MEGAHERTZ;
	jfieldID fid_X_MASS;
	jfieldID fid_X_PPM;
	jfieldID fid_X_DAYS;
	jfieldID fid_X_YEARS;
	jfieldID fid_X_RAMAN_SHIFTS;
	jfieldID fid_X_EV;
	jfieldID fid_Z_TEXT_LABEL;
	jfieldID fid_X_DIODE_NUMBER;
	jfieldID fid_X_CHANNEL;
	jfieldID fid_X_DEGREES;
	jfieldID fid_X_DEGREES_F;
	jfieldID fid_X_DEGREES_C;
	jfieldID fid_X_KELVINS;
	jfieldID fid_X_DATA_POINTS;
	jfieldID fid_X_MILLISECONDS;
	jfieldID fid_X_MICROSECONDS;
	jfieldID fid_X_NANOSECONDS;
	jfieldID fid_X_GIGAHERTZ;
	jfieldID fid_X_CENTIMETERS;
	jfieldID fid_X_METERS;
	jfieldID fid_X_MILLIMETERS;
	jfieldID fid_X_HOURS;
	jfieldID fid_X_DOUBLE_INTERFEROGRAM;
	jfieldID fid_Y_ARBITRARY;
	jfieldID fid_Y_INTERFEROGRAM;
	jfieldID fid_Y_ABSORBANCE;
	jfieldID fid_Y_KUBELKA_MONK;
	jfieldID fid_Y_COUNTS;
	jfieldID fid_Y_VOLTS;
	jfieldID fid_Y_DEGREES;
	jfieldID fid_Y_MILLIAMPS;
	jfieldID fid_Y_MILLIMETERS;
	jfieldID fid_Y_MILLIVOLTS;
	jfieldID fid_Y_LOG_DR;
	jfieldID fid_Y_PERCENT;
	jfieldID fid_Y_INTENSITY;
	jfieldID fid_Y_RELATIVE_INTENSITY;
	jfieldID fid_Y_ENERGY;
	jfieldID fid_Y_DECIBELS;
	jfieldID fid_Y_DEGREES_F;
	jfieldID fid_Y_DEGREES_C;
	jfieldID fid_Y_KELVINS;
	jfieldID fid_Y_INDEX_REFRACTION;
	jfieldID fid_Y_EXTINCTION_COEFF;
	jfieldID fid_Y_REAL;
	jfieldID fid_Y_IMAGINARY;
	jfieldID fid_Y_COMPLEX;
	jfieldID fid_Y_TRANSMISSION;
	jfieldID fid_Y_REFLECTION;
	jfieldID fid_Y_VALLEY;
	jfieldID fid_Y_EMISSION;
	jfieldID fid_TSPREC;
	jfieldID fid_TCGRAM;
	jfieldID fid_TMULTI;
	jfieldID fid_TRANDM;
	jfieldID fid_TORDRD;
	jfieldID fid_TALABS;
	jfieldID fid_TXYXYS;
	jfieldID fid_TXVALS;
	jfieldID fid_SPC_GENERAL;
	jfieldID fid_SPC_GAS_CHROMATOGRAM;
	jfieldID fid_SPC_GENERAL_CHROMATOGRAM;
	jfieldID fid_SPC_HPLC;
	jfieldID fid_SPC_FTIR;
	jfieldID fid_SPC_NIR;
	jfieldID fid_SPC_UV_VIS;
	jfieldID fid_SPC_XRAY;
	jfieldID fid_SPC_MASS_SPECTRUM;
	jfieldID fid_SPC_NMR;
	jfieldID fid_SPC_RAMAN;
	jfieldID fid_SPC_FLUORESCENCE;
	jfieldID fid_SPC_ATOMIC;
	jfieldID fid_SPC_DIODE_ARRAY;
	jfieldID fid_VERSION_OLD;
	jfieldID fid_VERSION_NEW_LSB;
	jfieldID fid_VERSION_NEW_MSB;
	jfieldID fid_VERSION_DEFAULT;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_GRAMSSPCCONSTANTS_T
#define EXTERN_TYPEDEF_GRAMSSPCCONSTANTS_T
	typedef void* GRAMSSPCCONSTANTS_T;
#endif /* EXTERN_TYPEDEF_GRAMSSPCCONSTANTS_T */

	// No public default Java constructor; creating one:
	EXPORTED GRAMSSPCCONSTANTS_T GramsSPCConstants_Create();
	EXPORTED void GramsSPCConstants_Destroy(GRAMSSPCCONSTANTS_T grams_s_p_c_constants);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL GramsSPCConstants_Destroy_stdcall(GRAMSSPCCONSTANTS_T grams_s_p_c_constants);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GRAMSSPCCONSTANTS_H */
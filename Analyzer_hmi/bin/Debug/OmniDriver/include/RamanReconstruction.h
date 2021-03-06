/**
 * File: RamanReconstruction.h
 * Autogenerated on Fri Mar 23 13:38:58 EDT 2018 based on
 * RamanReconstruction.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/spectra/RamanReconstruction
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef RAMANRECONSTRUCTION_H
#define RAMANRECONSTRUCTION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED RamanReconstruction : public BaseJavaClass // CPPClass.tag001
{
public: 
	RamanReconstruction();
	signed char getAlgorithm();
	void setAlgorithm(signed char algorithm);
	signed char getReconstructionType();
	void setReconstructionType(signed char reconstructionType);
	short isSaturated();
	void setSaturated(short saturated);
	FloatArray getIntensities();
	void setIntensities(FloatArray& intensities);
	~RamanReconstruction();
	// No public Java copy constructor; creating one:
	RamanReconstruction(const RamanReconstruction &that);
	// Creating assignment operator declaration:
	RamanReconstruction &operator=(const RamanReconstruction &that);

private:
	jmethodID mid_RamanReconstruction4499;
	jmethodID mid_getAlgorithm4500;
	jmethodID mid_setAlgorithm4501;
	jmethodID mid_getReconstructionType4502;
	jmethodID mid_setReconstructionType4503;
	jmethodID mid_isSaturated4504;
	jmethodID mid_setSaturated4505;
	jmethodID mid_getIntensities4506;
	jmethodID mid_setIntensities4507;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_RAMANRECONSTRUCTION_T
#define EXTERN_TYPEDEF_RAMANRECONSTRUCTION_T
	typedef void* RAMANRECONSTRUCTION_T;
#endif /* EXTERN_TYPEDEF_RAMANRECONSTRUCTION_T */

	EXPORTED RAMANRECONSTRUCTION_T RamanReconstruction_Create();
	EXPORTED signed char RamanReconstruction_getAlgorithm(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void RamanReconstruction_setAlgorithm(RAMANRECONSTRUCTION_T c_raman_reconstruction, signed char algorithm);
	EXPORTED signed char RamanReconstruction_getReconstructionType(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void RamanReconstruction_setReconstructionType(RAMANRECONSTRUCTION_T c_raman_reconstruction, signed char reconstructionType);
	EXPORTED short RamanReconstruction_isSaturated(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void RamanReconstruction_setSaturated(RAMANRECONSTRUCTION_T c_raman_reconstruction, short saturated);
	EXPORTED void RamanReconstruction_getIntensities(RAMANRECONSTRUCTION_T c_raman_reconstruction, FLOATARRAY_T retval);
	EXPORTED void RamanReconstruction_setIntensities(RAMANRECONSTRUCTION_T c_raman_reconstruction, FLOATARRAY_T intensities);
	EXPORTED void RamanReconstruction_Destroy(RAMANRECONSTRUCTION_T raman_reconstruction);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED RAMANRECONSTRUCTION_T STDCALL RamanReconstruction_Create_stdcall();
	EXPORTED signed char STDCALL RamanReconstruction_getAlgorithm_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void STDCALL RamanReconstruction_setAlgorithm_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction, signed char algorithm);
	EXPORTED signed char STDCALL RamanReconstruction_getReconstructionType_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void STDCALL RamanReconstruction_setReconstructionType_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction, signed char reconstructionType);
	EXPORTED short STDCALL RamanReconstruction_isSaturated_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction);
	EXPORTED void STDCALL RamanReconstruction_setSaturated_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction, short saturated);
	EXPORTED void STDCALL RamanReconstruction_getIntensities_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction, FLOATARRAY_T retval);
	EXPORTED void STDCALL RamanReconstruction_setIntensities_stdcall(RAMANRECONSTRUCTION_T c_raman_reconstruction, FLOATARRAY_T intensities);
	EXPORTED void STDCALL RamanReconstruction_Destroy_stdcall(RAMANRECONSTRUCTION_T raman_reconstruction);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* RAMANRECONSTRUCTION_H */

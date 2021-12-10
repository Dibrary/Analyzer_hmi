/**
 * File: SpectrumTypeWrapper.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SpectrumTypeWrapper.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/spectrumtype/SpectrumTypeWrapper
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPECTRUMTYPEWRAPPER_H
#define SPECTRUMTYPEWRAPPER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrumTypeSelect.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrumTypeSelect;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SpectrumTypeWrapper : public BaseJavaClass // CPPClass.tag001
{
public: 
	SpectrumTypeWrapper(SpectrumTypeSelect& spectrumTypeSelect);
	void setSpectrumType(int spectrumType);
	~SpectrumTypeWrapper();
	// No public default Java constructor; creating one:
	SpectrumTypeWrapper();
	// No public Java copy constructor; creating one:
	SpectrumTypeWrapper(const SpectrumTypeWrapper &that);
	// Creating assignment operator declaration:
	SpectrumTypeWrapper &operator=(const SpectrumTypeWrapper &that);

private:
	jmethodID mid_SpectrumTypeWrapper2077;
	jmethodID mid_setSpectrumType2078;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTRUMTYPESELECT_T
#define EXTERN_TYPEDEF_SPECTRUMTYPESELECT_T
	typedef void* SPECTRUMTYPESELECT_T;
#endif /* EXTERN_TYPEDEF_SPECTRUMTYPESELECT_T */
#ifndef EXTERN_TYPEDEF_SPECTRUMTYPEWRAPPER_T
#define EXTERN_TYPEDEF_SPECTRUMTYPEWRAPPER_T
	typedef void* SPECTRUMTYPEWRAPPER_T;
#endif /* EXTERN_TYPEDEF_SPECTRUMTYPEWRAPPER_T */

	// No public default Java constructor; creating one:
	EXPORTED SPECTRUMTYPEWRAPPER_T SpectrumTypeWrapper_Create();
	EXPORTED SPECTRUMTYPEWRAPPER_T SpectrumTypeWrapper_Create_1(SPECTRUMTYPESELECT_T spectrumTypeSelect);
	EXPORTED void SpectrumTypeWrapper_setSpectrumType(SPECTRUMTYPEWRAPPER_T c_spectrum_type_wrapper, int spectrumType);
	EXPORTED void SpectrumTypeWrapper_Destroy(SPECTRUMTYPEWRAPPER_T spectrum_type_wrapper);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SPECTRUMTYPEWRAPPER_T STDCALL SpectrumTypeWrapper_Create_stdcall_1(SPECTRUMTYPESELECT_T spectrumTypeSelect);
	EXPORTED void STDCALL SpectrumTypeWrapper_setSpectrumType_stdcall(SPECTRUMTYPEWRAPPER_T c_spectrum_type_wrapper, int spectrumType);
	EXPORTED void STDCALL SpectrumTypeWrapper_Destroy_stdcall(SPECTRUMTYPEWRAPPER_T spectrum_type_wrapper);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPECTRUMTYPEWRAPPER_H */

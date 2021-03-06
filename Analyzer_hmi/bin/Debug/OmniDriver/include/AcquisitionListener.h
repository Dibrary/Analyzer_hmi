/**
 * File: AcquisitionListener.h
 * Autogenerated on Fri Mar 23 13:38:43 EDT 2018 based on
 * AcquisitionListener.java
 * for the Java class
 * com/oceanoptics/omnidriver/interfaces/AcquisitionListener
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ACQUISITIONLISTENER_H
#define ACQUISITIONLISTENER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Spectrometer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Spectrometer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AcquisitionListener : public BaseJavaClass // CPPClass.tag001
{
public: 
	void pauseSpectrometerAcquisitions(Spectrometer& param0);
	void resumeSpectrometerAcquisitions(Spectrometer& param0);
	~AcquisitionListener();
	// No public default Java constructor; creating one:
	AcquisitionListener();
	// No public Java copy constructor; creating one:
	AcquisitionListener(const AcquisitionListener &that);
	// Creating assignment operator declaration:
	AcquisitionListener &operator=(const AcquisitionListener &that);

private:
	jmethodID mid_pauseSpectrometerAcquisitions2488;
	jmethodID mid_resumeSpectrometerAcquisitions2489;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETER_T
#define EXTERN_TYPEDEF_SPECTROMETER_T
	typedef void* SPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */

	// No public default Java constructor; creating one:
	EXPORTED ACQUISITIONLISTENER_T AcquisitionListener_Create();
	EXPORTED void AcquisitionListener_pauseSpectrometerAcquisitions(ACQUISITIONLISTENER_T c_acquisition_listener, SPECTROMETER_T param0);
	EXPORTED void AcquisitionListener_resumeSpectrometerAcquisitions(ACQUISITIONLISTENER_T c_acquisition_listener, SPECTROMETER_T param0);
	EXPORTED void AcquisitionListener_Destroy(ACQUISITIONLISTENER_T acquisition_listener);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL AcquisitionListener_pauseSpectrometerAcquisitions_stdcall(ACQUISITIONLISTENER_T c_acquisition_listener, SPECTROMETER_T param0);
	EXPORTED void STDCALL AcquisitionListener_resumeSpectrometerAcquisitions_stdcall(ACQUISITIONLISTENER_T c_acquisition_listener, SPECTROMETER_T param0);
	EXPORTED void STDCALL AcquisitionListener_Destroy_stdcall(ACQUISITIONLISTENER_T acquisition_listener);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ACQUISITIONLISTENER_H */

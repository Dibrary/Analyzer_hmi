/**
 * File: SpectrumHandler.h
 * Autogenerated on Fri Mar 23 13:38:47 EDT 2018 based on
 * SpectrumHandler.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/SpectrumHandler
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPECTRUMHANDLER_H
#define SPECTRUMHANDLER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrumProducerBase.h"
#include "Spectrum.h"
#include "SpectrumProducer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrumProducerBase;
class Spectrum;
class SpectrumProducer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SpectrumHandler : public SpectrumProducerBase // CPPClass.tag001
{
public: 
	SpectrumHandler();
	SpectrumHandler(int numLightPixels, int numDarkPixels);
	int getMaximumQueueSize();
	void setMaximumQueueSize(int maximumQueueSize);
	int getProcessingMode();
	void setProcessingMode(int processingMode);
	void newSpectrum(Spectrum& spectrum);
	void setSource(SpectrumProducer& producer);
	void removeSource(SpectrumProducer& producer);
	~SpectrumHandler();
	// No public Java copy constructor; creating one:
	SpectrumHandler(const SpectrumHandler &that);
	// Creating assignment operator declaration:
	SpectrumHandler &operator=(const SpectrumHandler &that);
	int PROCESS_ALL;
	int PROCESS_ONLY_LATEST;
	int BOUNDED_QUEUE;

private:
	jmethodID mid_SpectrumHandler3031;
	jmethodID mid_SpectrumHandler3032;
	jmethodID mid_getMaximumQueueSize3033;
	jmethodID mid_setMaximumQueueSize3034;
	jmethodID mid_getProcessingMode3035;
	jmethodID mid_setProcessingMode3036;
	jmethodID mid_newSpectrum3037;
	jmethodID mid_setSource3038;
	jmethodID mid_removeSource3039;
	jfieldID fid_PROCESS_ALL;
	jfieldID fid_PROCESS_ONLY_LATEST;
	jfieldID fid_BOUNDED_QUEUE;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTRUMPRODUCERBASE_T
#define EXTERN_TYPEDEF_SPECTRUMPRODUCERBASE_T
	typedef void* SPECTRUMPRODUCERBASE_T;
#endif /* EXTERN_TYPEDEF_SPECTRUMPRODUCERBASE_T */
#ifndef EXTERN_TYPEDEF_SPECTRUM_T
#define EXTERN_TYPEDEF_SPECTRUM_T
	typedef void* SPECTRUM_T;
#endif /* EXTERN_TYPEDEF_SPECTRUM_T */
#ifndef EXTERN_TYPEDEF_SPECTRUMPRODUCER_T
#define EXTERN_TYPEDEF_SPECTRUMPRODUCER_T
	typedef void* SPECTRUMPRODUCER_T;
#endif /* EXTERN_TYPEDEF_SPECTRUMPRODUCER_T */
#ifndef EXTERN_TYPEDEF_SPECTRUMHANDLER_T
#define EXTERN_TYPEDEF_SPECTRUMHANDLER_T
	typedef void* SPECTRUMHANDLER_T;
#endif /* EXTERN_TYPEDEF_SPECTRUMHANDLER_T */

	EXPORTED SPECTRUMHANDLER_T SpectrumHandler_Create();
	EXPORTED SPECTRUMHANDLER_T SpectrumHandler_Create_1(int numLightPixels, int numDarkPixels);
	EXPORTED int SpectrumHandler_getMaximumQueueSize(SPECTRUMHANDLER_T c_spectrum_handler);
	EXPORTED void SpectrumHandler_setMaximumQueueSize(SPECTRUMHANDLER_T c_spectrum_handler, int maximumQueueSize);
	EXPORTED int SpectrumHandler_getProcessingMode(SPECTRUMHANDLER_T c_spectrum_handler);
	EXPORTED void SpectrumHandler_setProcessingMode(SPECTRUMHANDLER_T c_spectrum_handler, int processingMode);
	EXPORTED void SpectrumHandler_newSpectrum(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUM_T spectrum);
	EXPORTED void SpectrumHandler_setSource(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUMPRODUCER_T producer);
	EXPORTED void SpectrumHandler_removeSource(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUMPRODUCER_T producer);
	EXPORTED void SpectrumHandler_Destroy(SPECTRUMHANDLER_T spectrum_handler);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SPECTRUMHANDLER_T STDCALL SpectrumHandler_Create_stdcall();
	EXPORTED SPECTRUMHANDLER_T STDCALL SpectrumHandler_Create_stdcall_1(int numLightPixels, int numDarkPixels);
	EXPORTED int STDCALL SpectrumHandler_getMaximumQueueSize_stdcall(SPECTRUMHANDLER_T c_spectrum_handler);
	EXPORTED void STDCALL SpectrumHandler_setMaximumQueueSize_stdcall(SPECTRUMHANDLER_T c_spectrum_handler, int maximumQueueSize);
	EXPORTED int STDCALL SpectrumHandler_getProcessingMode_stdcall(SPECTRUMHANDLER_T c_spectrum_handler);
	EXPORTED void STDCALL SpectrumHandler_setProcessingMode_stdcall(SPECTRUMHANDLER_T c_spectrum_handler, int processingMode);
	EXPORTED void STDCALL SpectrumHandler_newSpectrum_stdcall(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUM_T spectrum);
	EXPORTED void STDCALL SpectrumHandler_setSource_stdcall(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUMPRODUCER_T producer);
	EXPORTED void STDCALL SpectrumHandler_removeSource_stdcall(SPECTRUMHANDLER_T c_spectrum_handler, SPECTRUMPRODUCER_T producer);
	EXPORTED void STDCALL SpectrumHandler_Destroy_stdcall(SPECTRUMHANDLER_T spectrum_handler);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPECTRUMHANDLER_H */

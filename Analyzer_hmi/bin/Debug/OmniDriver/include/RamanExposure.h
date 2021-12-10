/**
 * File: RamanExposure.h
 * Autogenerated on Fri Mar 23 13:38:58 EDT 2018 based on
 * RamanExposure.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/spectra/RamanExposure
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef RAMANEXPOSURE_H
#define RAMANEXPOSURE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "EventObject.h"
#include "MMSRaman.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class EventObject;
class MMSRaman;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED RamanExposure : public EventObject // CPPClass.tag001
{
public: 
	RamanExposure(MMSRaman& source);
	signed char getShutterState();
	void setShutterState(signed char shutterState);
	signed char getExposureType();
	void setExposureType(signed char exposureType);
	short getExposuresToAverage();
	void setExposuresToAverage(short exposuresToAverage);
#if 0
	ArrayOfArrays getImageData();
#endif
#if 0
	void setImageData(ArrayOfArrays& imageData);
#endif
	JString getStrExposureType();
	int getBitsPerPixel();
	void setBitsPerPixel(int bitsPerPixel);
	int getExposureTime();
	void setExposureTime(int exposureTime);
	~RamanExposure();
	// No public default Java constructor; creating one:
	RamanExposure();
	// No public Java copy constructor; creating one:
	RamanExposure(const RamanExposure &that);
	// Creating assignment operator declaration:
	RamanExposure &operator=(const RamanExposure &that);

private:
	jmethodID mid_RamanExposure4485;
	jmethodID mid_getShutterState4486;
	jmethodID mid_setShutterState4487;
	jmethodID mid_getExposureType4488;
	jmethodID mid_setExposureType4489;
	jmethodID mid_getExposuresToAverage4490;
	jmethodID mid_setExposuresToAverage4491;
	jmethodID mid_getImageData4492;
	jmethodID mid_setImageData4493;
	jmethodID mid_getStrExposureType4494;
	jmethodID mid_getBitsPerPixel4495;
	jmethodID mid_setBitsPerPixel4496;
	jmethodID mid_getExposureTime4497;
	jmethodID mid_setExposureTime4498;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EVENTOBJECT_T
#define EXTERN_TYPEDEF_EVENTOBJECT_T
	typedef void* EVENTOBJECT_T;
#endif /* EXTERN_TYPEDEF_EVENTOBJECT_T */
#ifndef EXTERN_TYPEDEF_MMSRAMAN_T
#define EXTERN_TYPEDEF_MMSRAMAN_T
	typedef void* MMSRAMAN_T;
#endif /* EXTERN_TYPEDEF_MMSRAMAN_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_RAMANEXPOSURE_T
#define EXTERN_TYPEDEF_RAMANEXPOSURE_T
	typedef void* RAMANEXPOSURE_T;
#endif /* EXTERN_TYPEDEF_RAMANEXPOSURE_T */

	// No public default Java constructor; creating one:
	EXPORTED RAMANEXPOSURE_T RamanExposure_Create();
	EXPORTED RAMANEXPOSURE_T RamanExposure_Create_1(MMSRAMAN_T source);
	EXPORTED signed char RamanExposure_getShutterState(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void RamanExposure_setShutterState(RAMANEXPOSURE_T c_raman_exposure, signed char shutterState);
	EXPORTED signed char RamanExposure_getExposureType(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void RamanExposure_setExposureType(RAMANEXPOSURE_T c_raman_exposure, signed char exposureType);
	EXPORTED short RamanExposure_getExposuresToAverage(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void RamanExposure_setExposuresToAverage(RAMANEXPOSURE_T c_raman_exposure, short exposuresToAverage);
	EXPORTED void RamanExposure_getImageData(RAMANEXPOSURE_T c_raman_exposure, ARRAYOFARRAYS_T retval);
	EXPORTED void RamanExposure_setImageData(RAMANEXPOSURE_T c_raman_exposure, ARRAYOFARRAYS_T imageData);
	EXPORTED void RamanExposure_getStrExposureType(RAMANEXPOSURE_T c_raman_exposure, JSTRING_T retval);
	EXPORTED int RamanExposure_getBitsPerPixel(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void RamanExposure_setBitsPerPixel(RAMANEXPOSURE_T c_raman_exposure, int bitsPerPixel);
	EXPORTED int RamanExposure_getExposureTime(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void RamanExposure_setExposureTime(RAMANEXPOSURE_T c_raman_exposure, int exposureTime);
	EXPORTED void RamanExposure_Destroy(RAMANEXPOSURE_T raman_exposure);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED RAMANEXPOSURE_T STDCALL RamanExposure_Create_stdcall_1(MMSRAMAN_T source);
	EXPORTED signed char STDCALL RamanExposure_getShutterState_stdcall(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void STDCALL RamanExposure_setShutterState_stdcall(RAMANEXPOSURE_T c_raman_exposure, signed char shutterState);
	EXPORTED signed char STDCALL RamanExposure_getExposureType_stdcall(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void STDCALL RamanExposure_setExposureType_stdcall(RAMANEXPOSURE_T c_raman_exposure, signed char exposureType);
	EXPORTED short STDCALL RamanExposure_getExposuresToAverage_stdcall(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void STDCALL RamanExposure_setExposuresToAverage_stdcall(RAMANEXPOSURE_T c_raman_exposure, short exposuresToAverage);
	EXPORTED void STDCALL RamanExposure_getImageData_stdcall(RAMANEXPOSURE_T c_raman_exposure, ARRAYOFARRAYS_T retval);
	EXPORTED void STDCALL RamanExposure_setImageData_stdcall(RAMANEXPOSURE_T c_raman_exposure, ARRAYOFARRAYS_T imageData);
	EXPORTED void STDCALL RamanExposure_getStrExposureType_stdcall(RAMANEXPOSURE_T c_raman_exposure, JSTRING_T retval);
	EXPORTED int STDCALL RamanExposure_getBitsPerPixel_stdcall(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void STDCALL RamanExposure_setBitsPerPixel_stdcall(RAMANEXPOSURE_T c_raman_exposure, int bitsPerPixel);
	EXPORTED int STDCALL RamanExposure_getExposureTime_stdcall(RAMANEXPOSURE_T c_raman_exposure);
	EXPORTED void STDCALL RamanExposure_setExposureTime_stdcall(RAMANEXPOSURE_T c_raman_exposure, int exposureTime);
	EXPORTED void STDCALL RamanExposure_Destroy_stdcall(RAMANEXPOSURE_T raman_exposure);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* RAMANEXPOSURE_H */

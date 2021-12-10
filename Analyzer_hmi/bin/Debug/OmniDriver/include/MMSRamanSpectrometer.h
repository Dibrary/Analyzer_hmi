/**
 * File: MMSRamanSpectrometer.h
 * Autogenerated on Fri Mar 23 13:38:58 EDT 2018 based on
 * MMSRamanSpectrometer.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/ramanspectrometer/MMSRamanSpectrometer
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MMSRAMANSPECTROMETER_H
#define MMSRAMANSPECTROMETER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "Laser.h"
#include "JString.h"
// #include "MMSRamanSpectrometer$Error.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class USBEndpointDescriptor;
class Laser;
class JString;
class MMSRamanSpectrometer$Error;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MMSRamanSpectrometer : public USBSpectrometer // CPPClass.tag001
{
public: 
	MMSRamanSpectrometer();
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	Laser getLaser(int param0);
	CharArray process(signed char opCode);
	CharArray process(signed char opCode, signed char schemaOut, signed char schemaIn);
	CharArray process(signed char opCode, int size);
	CharArray process(signed char opCode, int size, signed char schemaOut, signed char schemaIn);
	CharArray process(signed char opCode, int size, CharArray& data, signed char schemaOut, signed char schemaIn);
	CharArray process(signed char opCode, int size, signed char schemaOut, signed char schemaIn, USBEndpointDescriptor& inEndPoint, USBEndpointDescriptor& outEndPoint);
	JString trimTrailingNulls(JString& toTrim);
#if 0
	MMSRamanSpectrometer$Error getLastError();
#endif
	~MMSRamanSpectrometer();
	// No public Java copy constructor; creating one:
	MMSRamanSpectrometer(const MMSRamanSpectrometer &that);
	// Creating assignment operator declaration:
	MMSRamanSpectrometer &operator=(const MMSRamanSpectrometer &that);

private:
	jmethodID mid_MMSRamanSpectrometer4473;
	jmethodID mid_setEndpoints4474;
	jmethodID mid_getEndpoint4475;
	jmethodID mid_getLaser4476;
	jmethodID mid_process4477;
	jmethodID mid_process4478;
	jmethodID mid_process4479;
	jmethodID mid_process4480;
	jmethodID mid_process4481;
	jmethodID mid_process4482;
	jmethodID mid_trimTrailingNulls4483;
	jmethodID mid_getLastError4484;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
#define EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
	typedef void* USBENDPOINTDESCRIPTOR_T;
#endif /* EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T */
#ifndef EXTERN_TYPEDEF_LASER_T
#define EXTERN_TYPEDEF_LASER_T
	typedef void* LASER_T;
#endif /* EXTERN_TYPEDEF_LASER_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_MMSRAMANSPECTROMETER$ERROR_T
#define EXTERN_TYPEDEF_MMSRAMANSPECTROMETER$ERROR_T
	typedef void* MMSRAMANSPECTROMETER$ERROR_T;
#endif /* EXTERN_TYPEDEF_MMSRAMANSPECTROMETER$ERROR_T */
#ifndef EXTERN_TYPEDEF_MMSRAMANSPECTROMETER_T
#define EXTERN_TYPEDEF_MMSRAMANSPECTROMETER_T
	typedef void* MMSRAMANSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_MMSRAMANSPECTROMETER_T */

	EXPORTED MMSRAMANSPECTROMETER_T MMSRamanSpectrometer_Create();
	EXPORTED void MMSRamanSpectrometer_setEndpoints(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer);
	EXPORTED void MMSRamanSpectrometer_getEndpoint(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void MMSRamanSpectrometer_getLaser(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, int param0, LASER_T retval);
	EXPORTED void MMSRamanSpectrometer_process(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_process_1(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_process_2(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_process_3(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_process_4(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, CHARARRAY_T data, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_process_5(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, signed char schemaOut, signed char schemaIn, USBENDPOINTDESCRIPTOR_T inEndPoint, USBENDPOINTDESCRIPTOR_T outEndPoint, CHARARRAY_T retval);
	EXPORTED void MMSRamanSpectrometer_trimTrailingNulls(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, JSTRING_T toTrim, JSTRING_T retval);
	EXPORTED void MMSRamanSpectrometer_getLastError(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, MMSRAMANSPECTROMETER$ERROR_T retval);
	EXPORTED void MMSRamanSpectrometer_Destroy(MMSRAMANSPECTROMETER_T mmsramanspectrometer);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MMSRAMANSPECTROMETER_T STDCALL MMSRamanSpectrometer_Create_stdcall();
	EXPORTED void STDCALL MMSRamanSpectrometer_setEndpoints_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer);
	EXPORTED void STDCALL MMSRamanSpectrometer_getEndpoint_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_getLaser_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, int param0, LASER_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall_1(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall_2(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall_3(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall_4(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, CHARARRAY_T data, signed char schemaOut, signed char schemaIn, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_process_stdcall_5(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, signed char opCode, int size, signed char schemaOut, signed char schemaIn, USBENDPOINTDESCRIPTOR_T inEndPoint, USBENDPOINTDESCRIPTOR_T outEndPoint, CHARARRAY_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_trimTrailingNulls_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, JSTRING_T toTrim, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_getLastError_stdcall(MMSRAMANSPECTROMETER_T c_mmsramanspectrometer, MMSRAMANSPECTROMETER$ERROR_T retval);
	EXPORTED void STDCALL MMSRamanSpectrometer_Destroy_stdcall(MMSRAMANSPECTROMETER_T mmsramanspectrometer);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MMSRAMANSPECTROMETER_H */

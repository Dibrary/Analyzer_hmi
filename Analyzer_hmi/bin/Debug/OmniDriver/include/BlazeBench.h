/**
 * File: BlazeBench.h
 * Autogenerated on Mon Mar 13 20:24:14 EDT 2017 based on
 * BlazeBench.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/blaze/BlazeBench
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BLAZEBENCH_H
#define BLAZEBENCH_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Bench.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Bench;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED BlazeBench : public Bench // CPPClass.tag001
{
public: 
	BlazeBench();
	short isDefined();
	JString getID();
	void setID(JString& id);
	JString getSerialNumber();
	void setSerialNumber(JString& serialNumber);
	~BlazeBench();
	// No public Java copy constructor; creating one:
	BlazeBench(const BlazeBench &that);
	// Creating assignment operator declaration:
	BlazeBench &operator=(const BlazeBench &that);

private:
	jmethodID mid_BlazeBench2990;
	jmethodID mid_isDefined2991;
	jmethodID mid_getID2992;
	jmethodID mid_setID2993;
	jmethodID mid_getSerialNumber2994;
	jmethodID mid_setSerialNumber2995;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_BENCH_T
#define EXTERN_TYPEDEF_BENCH_T
	typedef void* BENCH_T;
#endif /* EXTERN_TYPEDEF_BENCH_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_BLAZEBENCH_T
#define EXTERN_TYPEDEF_BLAZEBENCH_T
	typedef void* BLAZEBENCH_T;
#endif /* EXTERN_TYPEDEF_BLAZEBENCH_T */

	EXPORTED BLAZEBENCH_T BlazeBench_Create();
	EXPORTED short BlazeBench_isDefined(BLAZEBENCH_T c_blaze_bench);
	EXPORTED void BlazeBench_getID(BLAZEBENCH_T c_blaze_bench, JSTRING_T retval);
	EXPORTED void BlazeBench_setID(BLAZEBENCH_T c_blaze_bench, JSTRING_T id);
	EXPORTED void BlazeBench_getSerialNumber(BLAZEBENCH_T c_blaze_bench, JSTRING_T retval);
	EXPORTED void BlazeBench_setSerialNumber(BLAZEBENCH_T c_blaze_bench, JSTRING_T serialNumber);
	EXPORTED void BlazeBench_Destroy(BLAZEBENCH_T blaze_bench);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED BLAZEBENCH_T STDCALL BlazeBench_Create_stdcall();
	EXPORTED short STDCALL BlazeBench_isDefined_stdcall(BLAZEBENCH_T c_blaze_bench);
	EXPORTED void STDCALL BlazeBench_getID_stdcall(BLAZEBENCH_T c_blaze_bench, JSTRING_T retval);
	EXPORTED void STDCALL BlazeBench_setID_stdcall(BLAZEBENCH_T c_blaze_bench, JSTRING_T id);
	EXPORTED void STDCALL BlazeBench_getSerialNumber_stdcall(BLAZEBENCH_T c_blaze_bench, JSTRING_T retval);
	EXPORTED void STDCALL BlazeBench_setSerialNumber_stdcall(BLAZEBENCH_T c_blaze_bench, JSTRING_T serialNumber);
	EXPORTED void STDCALL BlazeBench_Destroy_stdcall(BLAZEBENCH_T blaze_bench);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BLAZEBENCH_H */

/**
 * File: HighResTimeStamp.h
 * Autogenerated on Fri Mar 23 13:39:19 EDT 2018 based on
 * HighResTimeStamp.java
 * for the Java class
 * com/oceanoptics/highrestiming/HighResTimeStamp
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HIGHRESTIMESTAMP_H
#define HIGHRESTIMESTAMP_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class HighResTimeStamp;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED HighResTimeStamp : public BaseJavaClass // CPPClass.tag001
{
public: 
	HighResTimeStamp();
	HighResTimeStamp(long long millis, double nanos);
	HighResTimeStamp(HighResTimeStamp& that, double nanosIntoFuture);
	long long getTimeMillis();
	double getNanoTimeDeltaSince(HighResTimeStamp& then);
	double getMicroTimeDeltaSince(HighResTimeStamp& then);
	double getMilliTimeDeltaSince(HighResTimeStamp& then);
	double getSecondsTimeDeltaSince(HighResTimeStamp& then);
	double getNanoTimeDelta(HighResTimeStamp& before, HighResTimeStamp& after);
	double getMicroTimeDelta(HighResTimeStamp& before, HighResTimeStamp& after);
	double getMilliTimeDelta(HighResTimeStamp& before, HighResTimeStamp& after);
	double getSecondsTimeDelta(HighResTimeStamp& before, HighResTimeStamp& after);
	JString toString();
	~HighResTimeStamp();
	// No public Java copy constructor; creating one:
	HighResTimeStamp(const HighResTimeStamp &that);
	// Creating assignment operator declaration:
	HighResTimeStamp &operator=(const HighResTimeStamp &that);

private:
	jmethodID mid_HighResTimeStamp6548;
	jmethodID mid_HighResTimeStamp6549;
	jmethodID mid_HighResTimeStamp6550;
	jmethodID mid_HighResTimeStamp6551;
	jmethodID mid_getTimeMillis6552;
	jmethodID mid_getNanoTimeDeltaSince6553;
	jmethodID mid_getMicroTimeDeltaSince6554;
	jmethodID mid_getMilliTimeDeltaSince6555;
	jmethodID mid_getSecondsTimeDeltaSince6556;
	jmethodID mid_getNanoTimeDelta6557;
	jmethodID mid_getMicroTimeDelta6558;
	jmethodID mid_getMilliTimeDelta6559;
	jmethodID mid_getSecondsTimeDelta6560;
	jmethodID mid_toString6561;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_HIGHRESTIMESTAMP_T
#define EXTERN_TYPEDEF_HIGHRESTIMESTAMP_T
	typedef void* HIGHRESTIMESTAMP_T;
#endif /* EXTERN_TYPEDEF_HIGHRESTIMESTAMP_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */

	EXPORTED HIGHRESTIMESTAMP_T HighResTimeStamp_Create();
	EXPORTED HIGHRESTIMESTAMP_T HighResTimeStamp_Create_1(HIGHRESTIMESTAMP_T that);
	EXPORTED HIGHRESTIMESTAMP_T HighResTimeStamp_Create_2(long long millis, double nanos);
	EXPORTED HIGHRESTIMESTAMP_T HighResTimeStamp_Create_3(HIGHRESTIMESTAMP_T that, double nanosIntoFuture);
	EXPORTED long long HighResTimeStamp_getTimeMillis(HIGHRESTIMESTAMP_T c_high_res_time_stamp);
	EXPORTED double HighResTimeStamp_getNanoTimeDeltaSince(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double HighResTimeStamp_getMicroTimeDeltaSince(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double HighResTimeStamp_getMilliTimeDeltaSince(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double HighResTimeStamp_getSecondsTimeDeltaSince(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double HighResTimeStamp_getNanoTimeDelta(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double HighResTimeStamp_getMicroTimeDelta(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double HighResTimeStamp_getMilliTimeDelta(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double HighResTimeStamp_getSecondsTimeDelta(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED void HighResTimeStamp_toString(HIGHRESTIMESTAMP_T c_high_res_time_stamp, JSTRING_T retval);
	EXPORTED void HighResTimeStamp_Destroy(HIGHRESTIMESTAMP_T high_res_time_stamp);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED HIGHRESTIMESTAMP_T STDCALL HighResTimeStamp_Create_stdcall();
	EXPORTED HIGHRESTIMESTAMP_T STDCALL HighResTimeStamp_Create_stdcall_1(HIGHRESTIMESTAMP_T that);
	EXPORTED HIGHRESTIMESTAMP_T STDCALL HighResTimeStamp_Create_stdcall_2(long long millis, double nanos);
	EXPORTED HIGHRESTIMESTAMP_T STDCALL HighResTimeStamp_Create_stdcall_3(HIGHRESTIMESTAMP_T that, double nanosIntoFuture);
	EXPORTED long long STDCALL HighResTimeStamp_getTimeMillis_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp);
	EXPORTED double STDCALL HighResTimeStamp_getNanoTimeDeltaSince_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double STDCALL HighResTimeStamp_getMicroTimeDeltaSince_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double STDCALL HighResTimeStamp_getMilliTimeDeltaSince_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double STDCALL HighResTimeStamp_getSecondsTimeDeltaSince_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T then);
	EXPORTED double STDCALL HighResTimeStamp_getNanoTimeDelta_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double STDCALL HighResTimeStamp_getMicroTimeDelta_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double STDCALL HighResTimeStamp_getMilliTimeDelta_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED double STDCALL HighResTimeStamp_getSecondsTimeDelta_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, HIGHRESTIMESTAMP_T before, HIGHRESTIMESTAMP_T after);
	EXPORTED void STDCALL HighResTimeStamp_toString_stdcall(HIGHRESTIMESTAMP_T c_high_res_time_stamp, JSTRING_T retval);
	EXPORTED void STDCALL HighResTimeStamp_Destroy_stdcall(HIGHRESTIMESTAMP_T high_res_time_stamp);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HIGHRESTIMESTAMP_H */

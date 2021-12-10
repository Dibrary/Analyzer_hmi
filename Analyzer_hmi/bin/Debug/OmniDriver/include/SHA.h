/**
 * File: SHA.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SHA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/spectralhyperadapter/SHA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SHA_H
#define SHA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SHAChannel.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SHAChannel;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SHA : public BaseJavaClass // CPPClass.tag001
{
public: 
	short isHyperAdapterPresent();
	int setHyperAdapterDAC(double param0);
	int readHyperAdapterEEPROM(CharArray& param0, int param1, int param2);
	int writeHyperAdapterEEPROM(CharArray& param0, int param1, int param2);
	void initSHA(SHAChannel& param0);
	void calibrate();
	double getCalibrationTime();
	void restoreCalibration();
	SHAChannel getSHAChannel();
	~SHA();
	// No public default Java constructor; creating one:
	SHA();
	// No public Java copy constructor; creating one:
	SHA(const SHA &that);
	// Creating assignment operator declaration:
	SHA &operator=(const SHA &that);

private:
	jmethodID mid_isHyperAdapterPresent2047;
	jmethodID mid_setHyperAdapterDAC2048;
	jmethodID mid_readHyperAdapterEEPROM2049;
	jmethodID mid_writeHyperAdapterEEPROM2050;
	jmethodID mid_initSHA2051;
	jmethodID mid_calibrate2052;
	jmethodID mid_getCalibrationTime2053;
	jmethodID mid_restoreCalibration2054;
	jmethodID mid_getSHAChannel2055;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SHACHANNEL_T
#define EXTERN_TYPEDEF_SHACHANNEL_T
	typedef void* SHACHANNEL_T;
#endif /* EXTERN_TYPEDEF_SHACHANNEL_T */
#ifndef EXTERN_TYPEDEF_SHA_T
#define EXTERN_TYPEDEF_SHA_T
	typedef void* SHA_T;
#endif /* EXTERN_TYPEDEF_SHA_T */

	// No public default Java constructor; creating one:
	EXPORTED SHA_T SHA_Create();
	EXPORTED short SHA_isHyperAdapterPresent(SHA_T c_sha);
	EXPORTED int SHA_setHyperAdapterDAC(SHA_T c_sha, double param0);
	EXPORTED int SHA_readHyperAdapterEEPROM(SHA_T c_sha, CHARARRAY_T param0, int param1, int param2);
	EXPORTED int SHA_writeHyperAdapterEEPROM(SHA_T c_sha, CHARARRAY_T param0, int param1, int param2);
	EXPORTED void SHA_initSHA(SHA_T c_sha, SHACHANNEL_T param0);
	EXPORTED void SHA_calibrate(SHA_T c_sha);
	EXPORTED double SHA_getCalibrationTime(SHA_T c_sha);
	EXPORTED void SHA_restoreCalibration(SHA_T c_sha);
	EXPORTED void SHA_getSHAChannel(SHA_T c_sha, SHACHANNEL_T retval);
	EXPORTED void SHA_Destroy(SHA_T sha);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED short STDCALL SHA_isHyperAdapterPresent_stdcall(SHA_T c_sha);
	EXPORTED int STDCALL SHA_setHyperAdapterDAC_stdcall(SHA_T c_sha, double param0);
	EXPORTED int STDCALL SHA_readHyperAdapterEEPROM_stdcall(SHA_T c_sha, CHARARRAY_T param0, int param1, int param2);
	EXPORTED int STDCALL SHA_writeHyperAdapterEEPROM_stdcall(SHA_T c_sha, CHARARRAY_T param0, int param1, int param2);
	EXPORTED void STDCALL SHA_initSHA_stdcall(SHA_T c_sha, SHACHANNEL_T param0);
	EXPORTED void STDCALL SHA_calibrate_stdcall(SHA_T c_sha);
	EXPORTED double STDCALL SHA_getCalibrationTime_stdcall(SHA_T c_sha);
	EXPORTED void STDCALL SHA_restoreCalibration_stdcall(SHA_T c_sha);
	EXPORTED void STDCALL SHA_getSHAChannel_stdcall(SHA_T c_sha, SHACHANNEL_T retval);
	EXPORTED void STDCALL SHA_Destroy_stdcall(SHA_T sha);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SHA_H */
/**
 * File: AutoNull.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * AutoNull.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/autonull/AutoNull
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef AUTONULL_H
#define AUTONULL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED AutoNull : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getDarkValue();
	void setDarkValue(int param0);
	double getSaturationValue();
	void setSaturationValue(double param0);
	void recordSettings();
	~AutoNull();
	// No public default Java constructor; creating one:
	AutoNull();
	// No public Java copy constructor; creating one:
	AutoNull(const AutoNull &that);
	// Creating assignment operator declaration:
	AutoNull &operator=(const AutoNull &that);

private:
	jmethodID mid_getDarkValue828;
	jmethodID mid_setDarkValue829;
	jmethodID mid_getSaturationValue830;
	jmethodID mid_setSaturationValue831;
	jmethodID mid_recordSettings832;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_AUTONULL_T
#define EXTERN_TYPEDEF_AUTONULL_T
	typedef void* AUTONULL_T;
#endif /* EXTERN_TYPEDEF_AUTONULL_T */

	// No public default Java constructor; creating one:
	EXPORTED AUTONULL_T AutoNull_Create();
	EXPORTED int AutoNull_getDarkValue(AUTONULL_T c_auto_null);
	EXPORTED void AutoNull_setDarkValue(AUTONULL_T c_auto_null, int param0);
	EXPORTED double AutoNull_getSaturationValue(AUTONULL_T c_auto_null);
	EXPORTED void AutoNull_setSaturationValue(AUTONULL_T c_auto_null, double param0);
	EXPORTED void AutoNull_recordSettings(AUTONULL_T c_auto_null);
	EXPORTED void AutoNull_Destroy(AUTONULL_T auto_null);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL AutoNull_getDarkValue_stdcall(AUTONULL_T c_auto_null);
	EXPORTED void STDCALL AutoNull_setDarkValue_stdcall(AUTONULL_T c_auto_null, int param0);
	EXPORTED double STDCALL AutoNull_getSaturationValue_stdcall(AUTONULL_T c_auto_null);
	EXPORTED void STDCALL AutoNull_setSaturationValue_stdcall(AUTONULL_T c_auto_null, double param0);
	EXPORTED void STDCALL AutoNull_recordSettings_stdcall(AUTONULL_T c_auto_null);
	EXPORTED void STDCALL AutoNull_Destroy_stdcall(AUTONULL_T auto_null);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* AUTONULL_H */

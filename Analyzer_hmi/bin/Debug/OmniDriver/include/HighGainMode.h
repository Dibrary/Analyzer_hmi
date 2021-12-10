/**
 * File: HighGainMode.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * HighGainMode.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/highgainmode/HighGainMode
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HIGHGAINMODE_H
#define HIGHGAINMODE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED HighGainMode : public BaseJavaClass // CPPClass.tag001
{
public: 
	void setHighGain(short param0);
	void setHighGainDefault(short param0);
	short getHighGainDefault();
	short hasHighGainDefault();
	~HighGainMode();
	// No public default Java constructor; creating one:
	HighGainMode();
	// No public Java copy constructor; creating one:
	HighGainMode(const HighGainMode &that);
	// Creating assignment operator declaration:
	HighGainMode &operator=(const HighGainMode &that);

private:
	jmethodID mid_setHighGain1365;
	jmethodID mid_setHighGainDefault1366;
	jmethodID mid_getHighGainDefault1367;
	jmethodID mid_hasHighGainDefault1368;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_HIGHGAINMODE_T
#define EXTERN_TYPEDEF_HIGHGAINMODE_T
	typedef void* HIGHGAINMODE_T;
#endif /* EXTERN_TYPEDEF_HIGHGAINMODE_T */

	// No public default Java constructor; creating one:
	EXPORTED HIGHGAINMODE_T HighGainMode_Create();
	EXPORTED void HighGainMode_setHighGain(HIGHGAINMODE_T c_high_gain_mode, short param0);
	EXPORTED void HighGainMode_setHighGainDefault(HIGHGAINMODE_T c_high_gain_mode, short param0);
	EXPORTED short HighGainMode_getHighGainDefault(HIGHGAINMODE_T c_high_gain_mode);
	EXPORTED short HighGainMode_hasHighGainDefault(HIGHGAINMODE_T c_high_gain_mode);
	EXPORTED void HighGainMode_Destroy(HIGHGAINMODE_T high_gain_mode);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL HighGainMode_setHighGain_stdcall(HIGHGAINMODE_T c_high_gain_mode, short param0);
	EXPORTED void STDCALL HighGainMode_setHighGainDefault_stdcall(HIGHGAINMODE_T c_high_gain_mode, short param0);
	EXPORTED short STDCALL HighGainMode_getHighGainDefault_stdcall(HIGHGAINMODE_T c_high_gain_mode);
	EXPORTED short STDCALL HighGainMode_hasHighGainDefault_stdcall(HIGHGAINMODE_T c_high_gain_mode);
	EXPORTED void STDCALL HighGainMode_Destroy_stdcall(HIGHGAINMODE_T high_gain_mode);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HIGHGAINMODE_H */
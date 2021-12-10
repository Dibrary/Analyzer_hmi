/**
 * File: FlameNIR.h
 * Autogenerated on Fri Mar 23 13:38:51 EDT 2018 based on
 * FlameNIR.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/flamenir/FlameNIR
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FLAMENIR_H
#define FLAMENIR_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USB2kp.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USB2kp;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED FlameNIR : public USB2kp // CPPClass.tag001
{
public: 
	FlameNIR();
	FlameNIR(int i);
	void openSpectrometer(int index);
	void setHighGain(short gain);
	void setHighGainDefault(short gain);
	short getHighGainDefault();
	short hasHighGainDefault();
	~FlameNIR();
	// No public Java copy constructor; creating one:
	FlameNIR(const FlameNIR &that);
	// Creating assignment operator declaration:
	FlameNIR &operator=(const FlameNIR &that);

private:
	jmethodID mid_FlameNIR3324;
	jmethodID mid_FlameNIR3325;
	jmethodID mid_openSpectrometer3326;
	jmethodID mid_setHighGain3327;
	jmethodID mid_setHighGainDefault3328;
	jmethodID mid_getHighGainDefault3329;
	jmethodID mid_hasHighGainDefault3330;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USB2KP_T
#define EXTERN_TYPEDEF_USB2KP_T
	typedef void* USB2KP_T;
#endif /* EXTERN_TYPEDEF_USB2KP_T */
#ifndef EXTERN_TYPEDEF_FLAMENIR_T
#define EXTERN_TYPEDEF_FLAMENIR_T
	typedef void* FLAMENIR_T;
#endif /* EXTERN_TYPEDEF_FLAMENIR_T */

	EXPORTED FLAMENIR_T FlameNIR_Create();
	EXPORTED FLAMENIR_T FlameNIR_Create_1(int i);
	EXPORTED void FlameNIR_openSpectrometer(FLAMENIR_T c_flame_n_i_r, int index);
	EXPORTED void FlameNIR_setHighGain(FLAMENIR_T c_flame_n_i_r, short gain);
	EXPORTED void FlameNIR_setHighGainDefault(FLAMENIR_T c_flame_n_i_r, short gain);
	EXPORTED short FlameNIR_getHighGainDefault(FLAMENIR_T c_flame_n_i_r);
	EXPORTED short FlameNIR_hasHighGainDefault(FLAMENIR_T c_flame_n_i_r);
	EXPORTED void FlameNIR_Destroy(FLAMENIR_T flame_n_i_r);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED FLAMENIR_T STDCALL FlameNIR_Create_stdcall();
	EXPORTED FLAMENIR_T STDCALL FlameNIR_Create_stdcall_1(int i);
	EXPORTED void STDCALL FlameNIR_openSpectrometer_stdcall(FLAMENIR_T c_flame_n_i_r, int index);
	EXPORTED void STDCALL FlameNIR_setHighGain_stdcall(FLAMENIR_T c_flame_n_i_r, short gain);
	EXPORTED void STDCALL FlameNIR_setHighGainDefault_stdcall(FLAMENIR_T c_flame_n_i_r, short gain);
	EXPORTED short STDCALL FlameNIR_getHighGainDefault_stdcall(FLAMENIR_T c_flame_n_i_r);
	EXPORTED short STDCALL FlameNIR_hasHighGainDefault_stdcall(FLAMENIR_T c_flame_n_i_r);
	EXPORTED void STDCALL FlameNIR_Destroy_stdcall(FLAMENIR_T flame_n_i_r);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FLAMENIR_H */

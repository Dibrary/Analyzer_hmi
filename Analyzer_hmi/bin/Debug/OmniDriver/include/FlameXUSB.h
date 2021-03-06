/**
 * File: FlameXUSB.h
 * Autogenerated on Fri Mar 23 13:38:51 EDT 2018 based on
 * FlameXUSB.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/flamex/FlameXUSB
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef FLAMEXUSB_H
#define FLAMEXUSB_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "NextGenUSB.h"
#include "OBPSpectrumArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class NextGenUSB;
class OBPSpectrumArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED FlameXUSB : public NextGenUSB // CPPClass.tag001
{
public: 
	FlameXUSB();
	FlameXUSB(int i);
	int getNumberOfPixels(int index);
	void openSpectrometer(int index);
	void setSpectraCount(int value);
	short getBufferEnable();
	void setBufferEnable(short enable);
	int getB2BCapacity();
	void setB2BCapacity(int bufferSize);
	void clearBuffer();
	int getIntegration();
	void setIntegration(int time);
	void requestSpectrumWithMetaData(int count);
	OBPSpectrumArray getSpectrumWithMetaData(int count);
	~FlameXUSB();
	// No public Java copy constructor; creating one:
	FlameXUSB(const FlameXUSB &that);
	// Creating assignment operator declaration:
	FlameXUSB &operator=(const FlameXUSB &that);

private:
	jmethodID mid_FlameXUSB3334;
	jmethodID mid_FlameXUSB3335;
	jmethodID mid_getNumberOfPixels3336;
	jmethodID mid_openSpectrometer3337;
	jmethodID mid_setSpectraCount3338;
	jmethodID mid_getBufferEnable3339;
	jmethodID mid_setBufferEnable3340;
	jmethodID mid_getB2BCapacity3341;
	jmethodID mid_setB2BCapacity3342;
	jmethodID mid_clearBuffer3343;
	jmethodID mid_getIntegration3344;
	jmethodID mid_setIntegration3345;
	jmethodID mid_requestSpectrumWithMetaData3346;
	jmethodID mid_getSpectrumWithMetaData3347;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NEXTGENUSB_T
#define EXTERN_TYPEDEF_NEXTGENUSB_T
	typedef void* NEXTGENUSB_T;
#endif /* EXTERN_TYPEDEF_NEXTGENUSB_T */
#ifndef EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T
#define EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T
	typedef void* OBPSPECTRUMARRAY_T;
#endif /* EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T */
#ifndef EXTERN_TYPEDEF_FLAMEXUSB_T
#define EXTERN_TYPEDEF_FLAMEXUSB_T
	typedef void* FLAMEXUSB_T;
#endif /* EXTERN_TYPEDEF_FLAMEXUSB_T */

	EXPORTED FLAMEXUSB_T FlameXUSB_Create();
	EXPORTED FLAMEXUSB_T FlameXUSB_Create_1(int i);
	EXPORTED int FlameXUSB_getNumberOfPixels(FLAMEXUSB_T c_flame_x_u_s_b, int index);
	EXPORTED void FlameXUSB_openSpectrometer(FLAMEXUSB_T c_flame_x_u_s_b, int index);
	EXPORTED void FlameXUSB_setSpectraCount(FLAMEXUSB_T c_flame_x_u_s_b, int value);
	EXPORTED short FlameXUSB_getBufferEnable(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void FlameXUSB_setBufferEnable(FLAMEXUSB_T c_flame_x_u_s_b, short enable);
	EXPORTED int FlameXUSB_getB2BCapacity(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void FlameXUSB_setB2BCapacity(FLAMEXUSB_T c_flame_x_u_s_b, int bufferSize);
	EXPORTED void FlameXUSB_clearBuffer(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED int FlameXUSB_getIntegration(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void FlameXUSB_setIntegration(FLAMEXUSB_T c_flame_x_u_s_b, int time);
	EXPORTED void FlameXUSB_requestSpectrumWithMetaData(FLAMEXUSB_T c_flame_x_u_s_b, int count);
	EXPORTED void FlameXUSB_getSpectrumWithMetaData(FLAMEXUSB_T c_flame_x_u_s_b, int count, OBPSPECTRUMARRAY_T retval);
	EXPORTED void FlameXUSB_Destroy(FLAMEXUSB_T flame_x_u_s_b);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED FLAMEXUSB_T STDCALL FlameXUSB_Create_stdcall();
	EXPORTED FLAMEXUSB_T STDCALL FlameXUSB_Create_stdcall_1(int i);
	EXPORTED int STDCALL FlameXUSB_getNumberOfPixels_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int index);
	EXPORTED void STDCALL FlameXUSB_openSpectrometer_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int index);
	EXPORTED void STDCALL FlameXUSB_setSpectraCount_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int value);
	EXPORTED short STDCALL FlameXUSB_getBufferEnable_stdcall(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void STDCALL FlameXUSB_setBufferEnable_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, short enable);
	EXPORTED int STDCALL FlameXUSB_getB2BCapacity_stdcall(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void STDCALL FlameXUSB_setB2BCapacity_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int bufferSize);
	EXPORTED void STDCALL FlameXUSB_clearBuffer_stdcall(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED int STDCALL FlameXUSB_getIntegration_stdcall(FLAMEXUSB_T c_flame_x_u_s_b);
	EXPORTED void STDCALL FlameXUSB_setIntegration_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int time);
	EXPORTED void STDCALL FlameXUSB_requestSpectrumWithMetaData_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int count);
	EXPORTED void STDCALL FlameXUSB_getSpectrumWithMetaData_stdcall(FLAMEXUSB_T c_flame_x_u_s_b, int count, OBPSPECTRUMARRAY_T retval);
	EXPORTED void STDCALL FlameXUSB_Destroy_stdcall(FLAMEXUSB_T flame_x_u_s_b);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* FLAMEXUSB_H */

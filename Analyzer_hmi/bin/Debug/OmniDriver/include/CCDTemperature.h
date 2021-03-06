/**
 * File: CCDTemperature.h
 * Autogenerated on Fri Mar 23 13:38:57 EDT 2018 based on
 * CCDTemperature.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/features/ccdtemperature/CCDTemperature
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CCDTEMPERATURE_H
#define CCDTEMPERATURE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED CCDTemperature : public BaseJavaClass // CPPClass.tag001
{
public: 
	void getCCDTemperatureInfo();
	void setCCDTemperatureInfo(short param0, float param1);
	short isTemperatureRegulation();
	void setTemperatureRegulation(short param0);
	float getCCDSetpoint();
	void setCCDSetpoint(float param0);
	int getMinimumCCDSetpoint();
	void setMinimumCCDSetpoint(int param0);
	int getMaximumCCDSetpoint();
	void setMaximumCCDSetpoint(int param0);
	float getThermistor();
	short isThermFault();
	short isTempLock();
	~CCDTemperature();
	// No public default Java constructor; creating one:
	CCDTemperature();
	// No public Java copy constructor; creating one:
	CCDTemperature(const CCDTemperature &that);
	// Creating assignment operator declaration:
	CCDTemperature &operator=(const CCDTemperature &that);

private:
	jmethodID mid_getCCDTemperatureInfo4195;
	jmethodID mid_setCCDTemperatureInfo4196;
	jmethodID mid_isTemperatureRegulation4197;
	jmethodID mid_setTemperatureRegulation4198;
	jmethodID mid_getCCDSetpoint4199;
	jmethodID mid_setCCDSetpoint4200;
	jmethodID mid_getMinimumCCDSetpoint4201;
	jmethodID mid_setMinimumCCDSetpoint4202;
	jmethodID mid_getMaximumCCDSetpoint4203;
	jmethodID mid_setMaximumCCDSetpoint4204;
	jmethodID mid_getThermistor4205;
	jmethodID mid_isThermFault4206;
	jmethodID mid_isTempLock4207;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_CCDTEMPERATURE_T
#define EXTERN_TYPEDEF_CCDTEMPERATURE_T
	typedef void* CCDTEMPERATURE_T;
#endif /* EXTERN_TYPEDEF_CCDTEMPERATURE_T */

	// No public default Java constructor; creating one:
	EXPORTED CCDTEMPERATURE_T CCDTemperature_Create();
	EXPORTED void CCDTemperature_getCCDTemperatureInfo(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_setCCDTemperatureInfo(CCDTEMPERATURE_T c_ccdtemperature, short param0, float param1);
	EXPORTED short CCDTemperature_isTemperatureRegulation(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_setTemperatureRegulation(CCDTEMPERATURE_T c_ccdtemperature, short param0);
	EXPORTED float CCDTemperature_getCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_setCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature, float param0);
	EXPORTED int CCDTemperature_getMinimumCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_setMinimumCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature, int param0);
	EXPORTED int CCDTemperature_getMaximumCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_setMaximumCCDSetpoint(CCDTEMPERATURE_T c_ccdtemperature, int param0);
	EXPORTED float CCDTemperature_getThermistor(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED short CCDTemperature_isThermFault(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED short CCDTemperature_isTempLock(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void CCDTemperature_Destroy(CCDTEMPERATURE_T ccdtemperature);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL CCDTemperature_getCCDTemperatureInfo_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_setCCDTemperatureInfo_stdcall(CCDTEMPERATURE_T c_ccdtemperature, short param0, float param1);
	EXPORTED short STDCALL CCDTemperature_isTemperatureRegulation_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_setTemperatureRegulation_stdcall(CCDTEMPERATURE_T c_ccdtemperature, short param0);
	EXPORTED float STDCALL CCDTemperature_getCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_setCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature, float param0);
	EXPORTED int STDCALL CCDTemperature_getMinimumCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_setMinimumCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature, int param0);
	EXPORTED int STDCALL CCDTemperature_getMaximumCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_setMaximumCCDSetpoint_stdcall(CCDTEMPERATURE_T c_ccdtemperature, int param0);
	EXPORTED float STDCALL CCDTemperature_getThermistor_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED short STDCALL CCDTemperature_isThermFault_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED short STDCALL CCDTemperature_isTempLock_stdcall(CCDTEMPERATURE_T c_ccdtemperature);
	EXPORTED void STDCALL CCDTemperature_Destroy_stdcall(CCDTEMPERATURE_T ccdtemperature);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CCDTEMPERATURE_H */

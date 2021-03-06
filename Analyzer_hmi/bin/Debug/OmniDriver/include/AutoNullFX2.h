/**
 * File: AutoNullFX2.h
 * Autogenerated on Fri Mar 23 13:38:30 EDT 2018 based on
 * AutoNullFX2.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/autonull/AutoNullFX2
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef AUTONULLFX2_H
#define AUTONULLFX2_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "AutoNullImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class AutoNullImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AutoNullFX2 : public AutoNullImpl // CPPClass.tag001
{
public: 
	AutoNullFX2(USBInterface& usbInt);
	int getDarkValue();
	void setDarkValue(int darkValue);
	double getSaturationValue();
	void setSaturationValue(double saturationValue);
	void recordSettings();
	~AutoNullFX2();
	// No public default Java constructor; creating one:
	AutoNullFX2();
	// No public Java copy constructor; creating one:
	AutoNullFX2(const AutoNullFX2 &that);
	// Creating assignment operator declaration:
	AutoNullFX2 &operator=(const AutoNullFX2 &that);
	signed char SLOT_AUTONULLING;

private:
	jmethodID mid_AutoNullFX2833;
	jmethodID mid_getDarkValue834;
	jmethodID mid_setDarkValue835;
	jmethodID mid_getSaturationValue836;
	jmethodID mid_setSaturationValue837;
	jmethodID mid_recordSettings838;
	jfieldID fid_SLOT_AUTONULLING;
	jfieldID fid_dataOutEndPoint;
	jfieldID fid_lowSpeedInEndPoint;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_AUTONULLIMPL_T
#define EXTERN_TYPEDEF_AUTONULLIMPL_T
	typedef void* AUTONULLIMPL_T;
#endif /* EXTERN_TYPEDEF_AUTONULLIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_AUTONULLFX2_T
#define EXTERN_TYPEDEF_AUTONULLFX2_T
	typedef void* AUTONULLFX2_T;
#endif /* EXTERN_TYPEDEF_AUTONULLFX2_T */

	// No public default Java constructor; creating one:
	EXPORTED AUTONULLFX2_T AutoNullFX2_Create();
	EXPORTED AUTONULLFX2_T AutoNullFX2_Create_1(USBINTERFACE_T usbInt);
	EXPORTED int AutoNullFX2_getDarkValue(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void AutoNullFX2_setDarkValue(AUTONULLFX2_T c_auto_null_f_x2, int darkValue);
	EXPORTED double AutoNullFX2_getSaturationValue(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void AutoNullFX2_setSaturationValue(AUTONULLFX2_T c_auto_null_f_x2, double saturationValue);
	EXPORTED void AutoNullFX2_recordSettings(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void AutoNullFX2_Destroy(AUTONULLFX2_T auto_null_f_x2);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED AUTONULLFX2_T STDCALL AutoNullFX2_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL AutoNullFX2_getDarkValue_stdcall(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void STDCALL AutoNullFX2_setDarkValue_stdcall(AUTONULLFX2_T c_auto_null_f_x2, int darkValue);
	EXPORTED double STDCALL AutoNullFX2_getSaturationValue_stdcall(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void STDCALL AutoNullFX2_setSaturationValue_stdcall(AUTONULLFX2_T c_auto_null_f_x2, double saturationValue);
	EXPORTED void STDCALL AutoNullFX2_recordSettings_stdcall(AUTONULLFX2_T c_auto_null_f_x2);
	EXPORTED void STDCALL AutoNullFX2_Destroy_stdcall(AUTONULLFX2_T auto_null_f_x2);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* AUTONULLFX2_H */

/**
 * File: ExternalTriggerDelayImpl.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExternalTriggerDelayImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/externaltriggerdelay/ExternalTriggerDelayImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXTERNALTRIGGERDELAYIMPL_H
#define EXTERNALTRIGGERDELAYIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "FPGAImpl.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class FPGAImpl;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ExternalTriggerDelayImpl : public FPGAImpl // CPPClass.tag001
{
public: 
	ExternalTriggerDelayImpl(USBInterface& usbInt);
	double triggerDelayCountsToMicroseconds(int counts);
	int getExternalTriggerDelayIncrement();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayMinimum();
	void setExternalTriggerDelay(int value);
	void masterClockChanged(long long newValue);
	JStringArray getFeatureGUIClassnames();
	~ExternalTriggerDelayImpl();
	// No public default Java constructor; creating one:
	ExternalTriggerDelayImpl();
	// No public Java copy constructor; creating one:
	ExternalTriggerDelayImpl(const ExternalTriggerDelayImpl &that);
	// Creating assignment operator declaration:
	ExternalTriggerDelayImpl &operator=(const ExternalTriggerDelayImpl &that);

private:
	jmethodID mid_ExternalTriggerDelayImpl1208;
	jmethodID mid_triggerDelayCountsToMicroseconds1209;
	jmethodID mid_getExternalTriggerDelayIncrement1210;
	jmethodID mid_getExternalTriggerDelayMaximum1211;
	jmethodID mid_getExternalTriggerDelayMinimum1212;
	jmethodID mid_setExternalTriggerDelay1213;
	jmethodID mid_masterClockChanged1214;
	jmethodID mid_getFeatureGUIClassnames1215;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_FPGAIMPL_T
#define EXTERN_TYPEDEF_FPGAIMPL_T
	typedef void* FPGAIMPL_T;
#endif /* EXTERN_TYPEDEF_FPGAIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T
	typedef void* EXTERNALTRIGGERDELAYIMPL_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED EXTERNALTRIGGERDELAYIMPL_T ExternalTriggerDelayImpl_Create();
	EXPORTED EXTERNALTRIGGERDELAYIMPL_T ExternalTriggerDelayImpl_Create_1(USBINTERFACE_T usbInt);
	EXPORTED double ExternalTriggerDelayImpl_triggerDelayCountsToMicroseconds(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, int counts);
	EXPORTED int ExternalTriggerDelayImpl_getExternalTriggerDelayIncrement(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED int ExternalTriggerDelayImpl_getExternalTriggerDelayMaximum(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED int ExternalTriggerDelayImpl_getExternalTriggerDelayMinimum(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED void ExternalTriggerDelayImpl_setExternalTriggerDelay(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, int value);
	EXPORTED void ExternalTriggerDelayImpl_masterClockChanged(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, long long newValue);
	EXPORTED void ExternalTriggerDelayImpl_getFeatureGUIClassnames(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, JSTRINGARRAY_T retval);
	EXPORTED void ExternalTriggerDelayImpl_Destroy(EXTERNALTRIGGERDELAYIMPL_T external_trigger_delay_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED EXTERNALTRIGGERDELAYIMPL_T STDCALL ExternalTriggerDelayImpl_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED double STDCALL ExternalTriggerDelayImpl_triggerDelayCountsToMicroseconds_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, int counts);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_getExternalTriggerDelayIncrement_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_getExternalTriggerDelayMaximum_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_getExternalTriggerDelayMinimum_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_setExternalTriggerDelay_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, int value);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_masterClockChanged_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, long long newValue);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_getFeatureGUIClassnames_stdcall(EXTERNALTRIGGERDELAYIMPL_T c_external_trigger_delay_impl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_Destroy_stdcall(EXTERNALTRIGGERDELAYIMPL_T external_trigger_delay_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXTERNALTRIGGERDELAYIMPL_H */

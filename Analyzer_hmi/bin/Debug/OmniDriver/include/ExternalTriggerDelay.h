/**
 * File: ExternalTriggerDelay.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExternalTriggerDelay.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/externaltriggerdelay/ExternalTriggerDelay
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXTERNALTRIGGERDELAY_H
#define EXTERNALTRIGGERDELAY_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED ExternalTriggerDelay : public BaseJavaClass // CPPClass.tag001
{
public: 
	void setExternalTriggerDelay(int param0);
	double triggerDelayCountsToMicroseconds(int param0);
	int getExternalTriggerDelayMinimum();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayIncrement();
	~ExternalTriggerDelay();
	// No public default Java constructor; creating one:
	ExternalTriggerDelay();
	// No public Java copy constructor; creating one:
	ExternalTriggerDelay(const ExternalTriggerDelay &that);
	// Creating assignment operator declaration:
	ExternalTriggerDelay &operator=(const ExternalTriggerDelay &that);

private:
	jmethodID mid_setExternalTriggerDelay1203;
	jmethodID mid_triggerDelayCountsToMicroseconds1204;
	jmethodID mid_getExternalTriggerDelayMinimum1205;
	jmethodID mid_getExternalTriggerDelayMaximum1206;
	jmethodID mid_getExternalTriggerDelayIncrement1207;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAY_T
	typedef void* EXTERNALTRIGGERDELAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAY_T */

	// No public default Java constructor; creating one:
	EXPORTED EXTERNALTRIGGERDELAY_T ExternalTriggerDelay_Create();
	EXPORTED void ExternalTriggerDelay_setExternalTriggerDelay(EXTERNALTRIGGERDELAY_T c_external_trigger_delay, int param0);
	EXPORTED double ExternalTriggerDelay_triggerDelayCountsToMicroseconds(EXTERNALTRIGGERDELAY_T c_external_trigger_delay, int param0);
	EXPORTED int ExternalTriggerDelay_getExternalTriggerDelayMinimum(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED int ExternalTriggerDelay_getExternalTriggerDelayMaximum(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED int ExternalTriggerDelay_getExternalTriggerDelayIncrement(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED void ExternalTriggerDelay_Destroy(EXTERNALTRIGGERDELAY_T external_trigger_delay);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL ExternalTriggerDelay_setExternalTriggerDelay_stdcall(EXTERNALTRIGGERDELAY_T c_external_trigger_delay, int param0);
	EXPORTED double STDCALL ExternalTriggerDelay_triggerDelayCountsToMicroseconds_stdcall(EXTERNALTRIGGERDELAY_T c_external_trigger_delay, int param0);
	EXPORTED int STDCALL ExternalTriggerDelay_getExternalTriggerDelayMinimum_stdcall(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED int STDCALL ExternalTriggerDelay_getExternalTriggerDelayMaximum_stdcall(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED int STDCALL ExternalTriggerDelay_getExternalTriggerDelayIncrement_stdcall(EXTERNALTRIGGERDELAY_T c_external_trigger_delay);
	EXPORTED void STDCALL ExternalTriggerDelay_Destroy_stdcall(EXTERNALTRIGGERDELAY_T external_trigger_delay);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXTERNALTRIGGERDELAY_H */

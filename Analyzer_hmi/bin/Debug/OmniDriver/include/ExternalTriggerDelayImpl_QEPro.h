/**
 * File: ExternalTriggerDelayImpl_QEPro.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExternalTriggerDelayImpl_QEPro.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/externaltriggerdelay/ExternalTriggerDelayImpl_QEPro
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXTERNALTRIGGERDELAYIMPL_QEPRO_H
#define EXTERNALTRIGGERDELAYIMPL_QEPRO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ExternalTriggerDelayImpl_OBP.h"
#include "QEPro.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ExternalTriggerDelayImpl_OBP;
class QEPro;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ExternalTriggerDelayImpl_QEPro : public ExternalTriggerDelayImpl_OBP // CPPClass.tag001
{
public: 
	ExternalTriggerDelayImpl_QEPro(QEPro& qe, USBInterface& usbInt);
	double triggerDelayCountsToMicroseconds(int counts);
	int getExternalTriggerDelayMinimum();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayIncrement();
	~ExternalTriggerDelayImpl_QEPro();
	// No public default Java constructor; creating one:
	ExternalTriggerDelayImpl_QEPro();
	// No public Java copy constructor; creating one:
	ExternalTriggerDelayImpl_QEPro(const ExternalTriggerDelayImpl_QEPro &that);
	// Creating assignment operator declaration:
	ExternalTriggerDelayImpl_QEPro &operator=(const ExternalTriggerDelayImpl_QEPro &that);

private:
	jmethodID mid_ExternalTriggerDelayImpl_QEPro1238;
	jmethodID mid_triggerDelayCountsToMicroseconds1239;
	jmethodID mid_getExternalTriggerDelayMinimum1240;
	jmethodID mid_getExternalTriggerDelayMaximum1241;
	jmethodID mid_getExternalTriggerDelayIncrement1242;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_OBP_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_OBP_T
	typedef void* EXTERNALTRIGGERDELAYIMPL_OBP_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_OBP_T */
#ifndef EXTERN_TYPEDEF_QEPRO_T
#define EXTERN_TYPEDEF_QEPRO_T
	typedef void* QEPRO_T;
#endif /* EXTERN_TYPEDEF_QEPRO_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_QEPRO_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_QEPRO_T
	typedef void* EXTERNALTRIGGERDELAYIMPL_QEPRO_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_QEPRO_T */

	// No public default Java constructor; creating one:
	EXPORTED EXTERNALTRIGGERDELAYIMPL_QEPRO_T ExternalTriggerDelayImpl_QEPro_Create();
	EXPORTED EXTERNALTRIGGERDELAYIMPL_QEPRO_T ExternalTriggerDelayImpl_QEPro_Create_1(QEPRO_T qe, USBINTERFACE_T usbInt);
	EXPORTED double ExternalTriggerDelayImpl_QEPro_triggerDelayCountsToMicroseconds(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro, int counts);
	EXPORTED int ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayMinimum(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED int ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayMaximum(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED int ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayIncrement(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED void ExternalTriggerDelayImpl_QEPro_Destroy(EXTERNALTRIGGERDELAYIMPL_QEPRO_T external_trigger_delay_impl_q_e_pro);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED EXTERNALTRIGGERDELAYIMPL_QEPRO_T STDCALL ExternalTriggerDelayImpl_QEPro_Create_stdcall_1(QEPRO_T qe, USBINTERFACE_T usbInt);
	EXPORTED double STDCALL ExternalTriggerDelayImpl_QEPro_triggerDelayCountsToMicroseconds_stdcall(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro, int counts);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayMinimum_stdcall(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayMaximum_stdcall(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED int STDCALL ExternalTriggerDelayImpl_QEPro_getExternalTriggerDelayIncrement_stdcall(EXTERNALTRIGGERDELAYIMPL_QEPRO_T c_external_trigger_delay_impl_q_e_pro);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_QEPro_Destroy_stdcall(EXTERNALTRIGGERDELAYIMPL_QEPRO_T external_trigger_delay_impl_q_e_pro);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXTERNALTRIGGERDELAYIMPL_QEPRO_H */
/**
 * File: ExternalTriggerDelayImpl_MayaPro.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExternalTriggerDelayImpl_MayaPro.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/externaltriggerdelay/ExternalTriggerDelayImpl_MayaPro
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXTERNALTRIGGERDELAYIMPL_MAYAPRO_H
#define EXTERNALTRIGGERDELAYIMPL_MAYAPRO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ExternalTriggerDelayImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ExternalTriggerDelayImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ExternalTriggerDelayImpl_MayaPro : public ExternalTriggerDelayImpl // CPPClass.tag001
{
public: 
	ExternalTriggerDelayImpl_MayaPro(USBInterface& usbInt);
	double triggerDelayCountsToMicroseconds(int counts);
	~ExternalTriggerDelayImpl_MayaPro();
	// No public default Java constructor; creating one:
	ExternalTriggerDelayImpl_MayaPro();
	// No public Java copy constructor; creating one:
	ExternalTriggerDelayImpl_MayaPro(const ExternalTriggerDelayImpl_MayaPro &that);
	// Creating assignment operator declaration:
	ExternalTriggerDelayImpl_MayaPro &operator=(const ExternalTriggerDelayImpl_MayaPro &that);

private:
	jmethodID mid_ExternalTriggerDelayImpl_MayaPro1234;
	jmethodID mid_triggerDelayCountsToMicroseconds1235;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T
	typedef void* EXTERNALTRIGGERDELAYIMPL_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T
	typedef void* EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T */

	// No public default Java constructor; creating one:
	EXPORTED EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T ExternalTriggerDelayImpl_MayaPro_Create();
	EXPORTED EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T ExternalTriggerDelayImpl_MayaPro_Create_1(USBINTERFACE_T usbInt);
	EXPORTED double ExternalTriggerDelayImpl_MayaPro_triggerDelayCountsToMicroseconds(EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T c_external_trigger_delay_impl_maya_pro, int counts);
	EXPORTED void ExternalTriggerDelayImpl_MayaPro_Destroy(EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T external_trigger_delay_impl_maya_pro);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T STDCALL ExternalTriggerDelayImpl_MayaPro_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED double STDCALL ExternalTriggerDelayImpl_MayaPro_triggerDelayCountsToMicroseconds_stdcall(EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T c_external_trigger_delay_impl_maya_pro, int counts);
	EXPORTED void STDCALL ExternalTriggerDelayImpl_MayaPro_Destroy_stdcall(EXTERNALTRIGGERDELAYIMPL_MAYAPRO_T external_trigger_delay_impl_maya_pro);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXTERNALTRIGGERDELAYIMPL_MAYAPRO_H */

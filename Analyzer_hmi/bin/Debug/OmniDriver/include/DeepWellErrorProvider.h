/**
 * File: DeepWellErrorProvider.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * DeepWellErrorProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/errorprovider/DeepWellErrorProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DEEPWELLERRORPROVIDER_H
#define DEEPWELLERRORPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "AcquisitionPropertiesListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class AcquisitionPropertiesListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED DeepWellErrorProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getDeepWellMinimumIntegrationTime();
	void addAcquisitionPropertiesListener(AcquisitionPropertiesListener& param0);
	void removeAcquisitionPropertiesListener(AcquisitionPropertiesListener& param0);
	~DeepWellErrorProvider();
	// No public default Java constructor; creating one:
	DeepWellErrorProvider();
	// No public Java copy constructor; creating one:
	DeepWellErrorProvider(const DeepWellErrorProvider &that);
	// Creating assignment operator declaration:
	DeepWellErrorProvider &operator=(const DeepWellErrorProvider &that);

private:
	jmethodID mid_getDeepWellMinimumIntegrationTime1168;
	jmethodID mid_addAcquisitionPropertiesListener1169;
	jmethodID mid_removeAcquisitionPropertiesListener1170;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T
	typedef void* ACQUISITIONPROPERTIESLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T */
#ifndef EXTERN_TYPEDEF_DEEPWELLERRORPROVIDER_T
#define EXTERN_TYPEDEF_DEEPWELLERRORPROVIDER_T
	typedef void* DEEPWELLERRORPROVIDER_T;
#endif /* EXTERN_TYPEDEF_DEEPWELLERRORPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED DEEPWELLERRORPROVIDER_T DeepWellErrorProvider_Create();
	EXPORTED int DeepWellErrorProvider_getDeepWellMinimumIntegrationTime(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider);
	EXPORTED void DeepWellErrorProvider_addAcquisitionPropertiesListener(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider, ACQUISITIONPROPERTIESLISTENER_T param0);
	EXPORTED void DeepWellErrorProvider_removeAcquisitionPropertiesListener(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider, ACQUISITIONPROPERTIESLISTENER_T param0);
	EXPORTED void DeepWellErrorProvider_Destroy(DEEPWELLERRORPROVIDER_T deep_well_error_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL DeepWellErrorProvider_getDeepWellMinimumIntegrationTime_stdcall(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider);
	EXPORTED void STDCALL DeepWellErrorProvider_addAcquisitionPropertiesListener_stdcall(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider, ACQUISITIONPROPERTIESLISTENER_T param0);
	EXPORTED void STDCALL DeepWellErrorProvider_removeAcquisitionPropertiesListener_stdcall(DEEPWELLERRORPROVIDER_T c_deep_well_error_provider, ACQUISITIONPROPERTIESLISTENER_T param0);
	EXPORTED void STDCALL DeepWellErrorProvider_Destroy_stdcall(DEEPWELLERRORPROVIDER_T deep_well_error_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DEEPWELLERRORPROVIDER_H */
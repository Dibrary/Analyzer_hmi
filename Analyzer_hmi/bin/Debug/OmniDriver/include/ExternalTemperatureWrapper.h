/**
 * File: ExternalTemperatureWrapper.h
 * Autogenerated on Fri Mar 23 13:38:33 EDT 2018 based on
 * ExternalTemperatureWrapper.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/externaltemperature/ExternalTemperatureWrapper
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef EXTERNALTEMPERATUREWRAPPER_H
#define EXTERNALTEMPERATUREWRAPPER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ExternalTemperature.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ExternalTemperature;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ExternalTemperatureWrapper : public BaseJavaClass // CPPClass.tag001
{
public: 
	ExternalTemperatureWrapper(ExternalTemperature& externalTemperatureObject);
	double getExternalTemperatureCelsius();
	~ExternalTemperatureWrapper();
	// No public default Java constructor; creating one:
	ExternalTemperatureWrapper();
	// No public Java copy constructor; creating one:
	ExternalTemperatureWrapper(const ExternalTemperatureWrapper &that);
	// Creating assignment operator declaration:
	ExternalTemperatureWrapper &operator=(const ExternalTemperatureWrapper &that);

private:
	jmethodID mid_ExternalTemperatureWrapper1201;
	jmethodID mid_getExternalTemperatureCelsius1202;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EXTERNALTEMPERATURE_T
#define EXTERN_TYPEDEF_EXTERNALTEMPERATURE_T
	typedef void* EXTERNALTEMPERATURE_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTEMPERATURE_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTEMPERATUREWRAPPER_T
#define EXTERN_TYPEDEF_EXTERNALTEMPERATUREWRAPPER_T
	typedef void* EXTERNALTEMPERATUREWRAPPER_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTEMPERATUREWRAPPER_T */

	// No public default Java constructor; creating one:
	EXPORTED EXTERNALTEMPERATUREWRAPPER_T ExternalTemperatureWrapper_Create();
	EXPORTED EXTERNALTEMPERATUREWRAPPER_T ExternalTemperatureWrapper_Create_1(EXTERNALTEMPERATURE_T externalTemperatureObject);
	EXPORTED double ExternalTemperatureWrapper_getExternalTemperatureCelsius(EXTERNALTEMPERATUREWRAPPER_T c_external_temperature_wrapper);
	EXPORTED void ExternalTemperatureWrapper_Destroy(EXTERNALTEMPERATUREWRAPPER_T external_temperature_wrapper);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED EXTERNALTEMPERATUREWRAPPER_T STDCALL ExternalTemperatureWrapper_Create_stdcall_1(EXTERNALTEMPERATURE_T externalTemperatureObject);
	EXPORTED double STDCALL ExternalTemperatureWrapper_getExternalTemperatureCelsius_stdcall(EXTERNALTEMPERATUREWRAPPER_T c_external_temperature_wrapper);
	EXPORTED void STDCALL ExternalTemperatureWrapper_Destroy_stdcall(EXTERNALTEMPERATUREWRAPPER_T external_temperature_wrapper);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* EXTERNALTEMPERATUREWRAPPER_H */

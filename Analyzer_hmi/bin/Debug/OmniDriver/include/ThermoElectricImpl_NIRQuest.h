/**
 * File: ThermoElectricImpl_NIRQuest.h
 * Autogenerated on Fri Mar 23 13:38:41 EDT 2018 based on
 * ThermoElectricImpl_NIRQuest.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/thermoelectric/ThermoElectricImpl_NIRQuest
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef THERMOELECTRICIMPL_NIRQUEST_H
#define THERMOELECTRICIMPL_NIRQUEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ThermoElectricImpl_QE65000.h"
#include "USBInterface.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ThermoElectricImpl_QE65000;
class USBInterface;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ThermoElectricImpl_NIRQuest : public ThermoElectricImpl_QE65000 // CPPClass.tag001
{
public: 
	ThermoElectricImpl_NIRQuest(USBInterface& usbInt);
	int getSaturationIntensity();
	short setSaturationIntensity(int newSaturationIntensity, JString& key);
	void setDetectorSetPointCelsius(double tempCelsius);
	~ThermoElectricImpl_NIRQuest();
	// No public default Java constructor; creating one:
	ThermoElectricImpl_NIRQuest();
	// No public Java copy constructor; creating one:
	ThermoElectricImpl_NIRQuest(const ThermoElectricImpl_NIRQuest &that);
	// Creating assignment operator declaration:
	ThermoElectricImpl_NIRQuest &operator=(const ThermoElectricImpl_NIRQuest &that);

private:
	jmethodID mid_ThermoElectricImpl_NIRQuest2149;
	jmethodID mid_getSaturationIntensity2150;
	jmethodID mid_setSaturationIntensity2151;
	jmethodID mid_setDetectorSetPointCelsius2152;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_THERMOELECTRICIMPL_QE65000_T
#define EXTERN_TYPEDEF_THERMOELECTRICIMPL_QE65000_T
	typedef void* THERMOELECTRICIMPL_QE65000_T;
#endif /* EXTERN_TYPEDEF_THERMOELECTRICIMPL_QE65000_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_THERMOELECTRICIMPL_NIRQUEST_T
#define EXTERN_TYPEDEF_THERMOELECTRICIMPL_NIRQUEST_T
	typedef void* THERMOELECTRICIMPL_NIRQUEST_T;
#endif /* EXTERN_TYPEDEF_THERMOELECTRICIMPL_NIRQUEST_T */

	// No public default Java constructor; creating one:
	EXPORTED THERMOELECTRICIMPL_NIRQUEST_T ThermoElectricImpl_NIRQuest_Create();
	EXPORTED THERMOELECTRICIMPL_NIRQUEST_T ThermoElectricImpl_NIRQuest_Create_1(USBINTERFACE_T usbInt);
	EXPORTED int ThermoElectricImpl_NIRQuest_getSaturationIntensity(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest);
	EXPORTED short ThermoElectricImpl_NIRQuest_setSaturationIntensity(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest, int newSaturationIntensity, JSTRING_T key);
	EXPORTED void ThermoElectricImpl_NIRQuest_setDetectorSetPointCelsius(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest, double tempCelsius);
	EXPORTED void ThermoElectricImpl_NIRQuest_Destroy(THERMOELECTRICIMPL_NIRQUEST_T thermo_electric_impl_n_i_r_quest);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED THERMOELECTRICIMPL_NIRQUEST_T STDCALL ThermoElectricImpl_NIRQuest_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL ThermoElectricImpl_NIRQuest_getSaturationIntensity_stdcall(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest);
	EXPORTED short STDCALL ThermoElectricImpl_NIRQuest_setSaturationIntensity_stdcall(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest, int newSaturationIntensity, JSTRING_T key);
	EXPORTED void STDCALL ThermoElectricImpl_NIRQuest_setDetectorSetPointCelsius_stdcall(THERMOELECTRICIMPL_NIRQUEST_T c_thermo_electric_impl_n_i_r_quest, double tempCelsius);
	EXPORTED void STDCALL ThermoElectricImpl_NIRQuest_Destroy_stdcall(THERMOELECTRICIMPL_NIRQUEST_T thermo_electric_impl_n_i_r_quest);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* THERMOELECTRICIMPL_NIRQUEST_H */

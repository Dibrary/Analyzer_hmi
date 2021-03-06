/**
 * File: ThermoElectricImpl_QEPro.h
 * Autogenerated on Fri Mar 23 13:38:41 EDT 2018 based on
 * ThermoElectricImpl_QEPro.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/thermoelectric/ThermoElectricImpl_QEPro
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef THERMOELECTRICIMPL_QEPRO_H
#define THERMOELECTRICIMPL_QEPRO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ThermoElectricImpl.h"
#include "QEPro.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ThermoElectricImpl;
class QEPro;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ThermoElectricImpl_QEPro : public ThermoElectricImpl // CPPClass.tag001
{
public: 
	ThermoElectricImpl_QEPro(QEPro& qe, USBInterface& usbInt, double min, double max, double step);
	void setTECEnable(short enable);
	void setFanEnable(short enable);
	double getDetectorTemperatureCelsius();
	double getDetectorTemperatureSetPointCelsius();
	void setDetectorSetPointCelsius(double point);
	double getSetPointMinimumCelsius();
	double getSetPointMaximumCelsius();
	double getSetPointIncrementCelsius();
	short isSaveTECStateEnabled();
	void saveTECState();
	JStringArray getFeatureGUIClassnames();
	~ThermoElectricImpl_QEPro();
	// No public default Java constructor; creating one:
	ThermoElectricImpl_QEPro();
	// No public Java copy constructor; creating one:
	ThermoElectricImpl_QEPro(const ThermoElectricImpl_QEPro &that);
	// Creating assignment operator declaration:
	ThermoElectricImpl_QEPro &operator=(const ThermoElectricImpl_QEPro &that);

private:
	jmethodID mid_ThermoElectricImpl_QEPro2166;
	jmethodID mid_setTECEnable2167;
	jmethodID mid_setFanEnable2168;
	jmethodID mid_getDetectorTemperatureCelsius2169;
	jmethodID mid_getDetectorTemperatureSetPointCelsius2170;
	jmethodID mid_setDetectorSetPointCelsius2171;
	jmethodID mid_getSetPointMinimumCelsius2172;
	jmethodID mid_getSetPointMaximumCelsius2173;
	jmethodID mid_getSetPointIncrementCelsius2174;
	jmethodID mid_isSaveTECStateEnabled2175;
	jmethodID mid_saveTECState2176;
	jmethodID mid_getFeatureGUIClassnames2177;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_THERMOELECTRICIMPL_T
#define EXTERN_TYPEDEF_THERMOELECTRICIMPL_T
	typedef void* THERMOELECTRICIMPL_T;
#endif /* EXTERN_TYPEDEF_THERMOELECTRICIMPL_T */
#ifndef EXTERN_TYPEDEF_QEPRO_T
#define EXTERN_TYPEDEF_QEPRO_T
	typedef void* QEPRO_T;
#endif /* EXTERN_TYPEDEF_QEPRO_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_THERMOELECTRICIMPL_QEPRO_T
#define EXTERN_TYPEDEF_THERMOELECTRICIMPL_QEPRO_T
	typedef void* THERMOELECTRICIMPL_QEPRO_T;
#endif /* EXTERN_TYPEDEF_THERMOELECTRICIMPL_QEPRO_T */

	// No public default Java constructor; creating one:
	EXPORTED THERMOELECTRICIMPL_QEPRO_T ThermoElectricImpl_QEPro_Create();
	EXPORTED THERMOELECTRICIMPL_QEPRO_T ThermoElectricImpl_QEPro_Create_1(QEPRO_T qe, USBINTERFACE_T usbInt, double min, double max, double step);
	EXPORTED void ThermoElectricImpl_QEPro_setTECEnable(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, short enable);
	EXPORTED void ThermoElectricImpl_QEPro_setFanEnable(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, short enable);
	EXPORTED double ThermoElectricImpl_QEPro_getDetectorTemperatureCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double ThermoElectricImpl_QEPro_getDetectorTemperatureSetPointCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void ThermoElectricImpl_QEPro_setDetectorSetPointCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, double point);
	EXPORTED double ThermoElectricImpl_QEPro_getSetPointMinimumCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double ThermoElectricImpl_QEPro_getSetPointMaximumCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double ThermoElectricImpl_QEPro_getSetPointIncrementCelsius(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED short ThermoElectricImpl_QEPro_isSaveTECStateEnabled(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void ThermoElectricImpl_QEPro_saveTECState(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void ThermoElectricImpl_QEPro_getFeatureGUIClassnames(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, JSTRINGARRAY_T retval);
	EXPORTED void ThermoElectricImpl_QEPro_Destroy(THERMOELECTRICIMPL_QEPRO_T thermo_electric_impl_q_e_pro);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED THERMOELECTRICIMPL_QEPRO_T STDCALL ThermoElectricImpl_QEPro_Create_stdcall_1(QEPRO_T qe, USBINTERFACE_T usbInt, double min, double max, double step);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_setTECEnable_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, short enable);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_setFanEnable_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, short enable);
	EXPORTED double STDCALL ThermoElectricImpl_QEPro_getDetectorTemperatureCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double STDCALL ThermoElectricImpl_QEPro_getDetectorTemperatureSetPointCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_setDetectorSetPointCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, double point);
	EXPORTED double STDCALL ThermoElectricImpl_QEPro_getSetPointMinimumCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double STDCALL ThermoElectricImpl_QEPro_getSetPointMaximumCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED double STDCALL ThermoElectricImpl_QEPro_getSetPointIncrementCelsius_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED short STDCALL ThermoElectricImpl_QEPro_isSaveTECStateEnabled_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_saveTECState_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_getFeatureGUIClassnames_stdcall(THERMOELECTRICIMPL_QEPRO_T c_thermo_electric_impl_q_e_pro, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ThermoElectricImpl_QEPro_Destroy_stdcall(THERMOELECTRICIMPL_QEPRO_T thermo_electric_impl_q_e_pro);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* THERMOELECTRICIMPL_QEPRO_H */

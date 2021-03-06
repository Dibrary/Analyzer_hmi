/**
 * File: ThermoElectricShowFanControl.h
 * Autogenerated on Fri Mar 23 13:38:41 EDT 2018 based on
 * ThermoElectricShowFanControl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/thermoelectric/ThermoElectricShowFanControl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef THERMOELECTRICSHOWFANCONTROL_H
#define THERMOELECTRICSHOWFANCONTROL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED ThermoElectricShowFanControl : public BaseJavaClass // CPPClass.tag001
{
public: 
	~ThermoElectricShowFanControl();
	// No public default Java constructor; creating one:
	ThermoElectricShowFanControl();
	// No public Java copy constructor; creating one:
	ThermoElectricShowFanControl(const ThermoElectricShowFanControl &that);
	// Creating assignment operator declaration:
	ThermoElectricShowFanControl &operator=(const ThermoElectricShowFanControl &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_THERMOELECTRICSHOWFANCONTROL_T
#define EXTERN_TYPEDEF_THERMOELECTRICSHOWFANCONTROL_T
	typedef void* THERMOELECTRICSHOWFANCONTROL_T;
#endif /* EXTERN_TYPEDEF_THERMOELECTRICSHOWFANCONTROL_T */

	// No public default Java constructor; creating one:
	EXPORTED THERMOELECTRICSHOWFANCONTROL_T ThermoElectricShowFanControl_Create();
	EXPORTED void ThermoElectricShowFanControl_Destroy(THERMOELECTRICSHOWFANCONTROL_T thermo_electric_show_fan_control);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL ThermoElectricShowFanControl_Destroy_stdcall(THERMOELECTRICSHOWFANCONTROL_T thermo_electric_show_fan_control);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* THERMOELECTRICSHOWFANCONTROL_H */

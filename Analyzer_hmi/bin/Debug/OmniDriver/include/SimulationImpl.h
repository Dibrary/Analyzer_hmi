/**
 * File: SimulationImpl.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * SimulationImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/simulation/SimulationImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SIMULATIONIMPL_H
#define SIMULATIONIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "Simulation.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class Simulation;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SimulationImpl : public BaseJavaClass // CPPClass.tag001
{
public: 
	SimulationImpl(Simulation& s);
	void setNumberOfPixels(int pixels, int dark);
	void setSpectrumType(int type);
	int getNumberOfPixels();
	int getNumberOfDarkPixels();
	JStringArray getFeatureGUIClassnames();
	~SimulationImpl();
	// No public default Java constructor; creating one:
	SimulationImpl();
	// No public Java copy constructor; creating one:
	SimulationImpl(const SimulationImpl &that);
	// Creating assignment operator declaration:
	SimulationImpl &operator=(const SimulationImpl &that);

private:
	jmethodID mid_SimulationImpl1985;
	jmethodID mid_setNumberOfPixels1986;
	jmethodID mid_setSpectrumType1987;
	jmethodID mid_getNumberOfPixels1988;
	jmethodID mid_getNumberOfDarkPixels1989;
	jmethodID mid_getFeatureGUIClassnames1990;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SIMULATION_T
#define EXTERN_TYPEDEF_SIMULATION_T
	typedef void* SIMULATION_T;
#endif /* EXTERN_TYPEDEF_SIMULATION_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_SIMULATIONIMPL_T
#define EXTERN_TYPEDEF_SIMULATIONIMPL_T
	typedef void* SIMULATIONIMPL_T;
#endif /* EXTERN_TYPEDEF_SIMULATIONIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED SIMULATIONIMPL_T SimulationImpl_Create();
	EXPORTED SIMULATIONIMPL_T SimulationImpl_Create_1(SIMULATION_T s);
	EXPORTED void SimulationImpl_setNumberOfPixels(SIMULATIONIMPL_T c_simulation_impl, int pixels, int dark);
	EXPORTED void SimulationImpl_setSpectrumType(SIMULATIONIMPL_T c_simulation_impl, int type);
	EXPORTED int SimulationImpl_getNumberOfPixels(SIMULATIONIMPL_T c_simulation_impl);
	EXPORTED int SimulationImpl_getNumberOfDarkPixels(SIMULATIONIMPL_T c_simulation_impl);
	EXPORTED void SimulationImpl_getFeatureGUIClassnames(SIMULATIONIMPL_T c_simulation_impl, JSTRINGARRAY_T retval);
	EXPORTED void SimulationImpl_Destroy(SIMULATIONIMPL_T simulation_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SIMULATIONIMPL_T STDCALL SimulationImpl_Create_stdcall_1(SIMULATION_T s);
	EXPORTED void STDCALL SimulationImpl_setNumberOfPixels_stdcall(SIMULATIONIMPL_T c_simulation_impl, int pixels, int dark);
	EXPORTED void STDCALL SimulationImpl_setSpectrumType_stdcall(SIMULATIONIMPL_T c_simulation_impl, int type);
	EXPORTED int STDCALL SimulationImpl_getNumberOfPixels_stdcall(SIMULATIONIMPL_T c_simulation_impl);
	EXPORTED int STDCALL SimulationImpl_getNumberOfDarkPixels_stdcall(SIMULATIONIMPL_T c_simulation_impl);
	EXPORTED void STDCALL SimulationImpl_getFeatureGUIClassnames_stdcall(SIMULATIONIMPL_T c_simulation_impl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL SimulationImpl_Destroy_stdcall(SIMULATIONIMPL_T simulation_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SIMULATIONIMPL_H */
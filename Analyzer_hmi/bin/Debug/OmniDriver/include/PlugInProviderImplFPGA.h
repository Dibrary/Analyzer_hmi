/**
 * File: PlugInProviderImplFPGA.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * PlugInProviderImplFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/pluginprovider/PlugInProviderImplFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef PLUGINPROVIDERIMPLFPGA_H
#define PLUGINPROVIDERIMPLFPGA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "PlugInProviderImpl.h"
#include "USBInterface.h"
#include "Spectrometer.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class PlugInProviderImpl;
class USBInterface;
class Spectrometer;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED PlugInProviderImplFPGA : public PlugInProviderImpl // CPPClass.tag001
{
public: 
	PlugInProviderImplFPGA(USBInterface& usbInt, Spectrometer& spec);
	~PlugInProviderImplFPGA();
	// No public default Java constructor; creating one:
	PlugInProviderImplFPGA();
	// No public Java copy constructor; creating one:
	PlugInProviderImplFPGA(const PlugInProviderImplFPGA &that);
	// Creating assignment operator declaration:
	PlugInProviderImplFPGA &operator=(const PlugInProviderImplFPGA &that);

private:
	jmethodID mid_PlugInProviderImplFPGA1943;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_PLUGINPROVIDERIMPL_T
#define EXTERN_TYPEDEF_PLUGINPROVIDERIMPL_T
	typedef void* PLUGINPROVIDERIMPL_T;
#endif /* EXTERN_TYPEDEF_PLUGINPROVIDERIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_SPECTROMETER_T
#define EXTERN_TYPEDEF_SPECTROMETER_T
	typedef void* SPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_PLUGINPROVIDERIMPLFPGA_T
#define EXTERN_TYPEDEF_PLUGINPROVIDERIMPLFPGA_T
	typedef void* PLUGINPROVIDERIMPLFPGA_T;
#endif /* EXTERN_TYPEDEF_PLUGINPROVIDERIMPLFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED PLUGINPROVIDERIMPLFPGA_T PlugInProviderImplFPGA_Create();
	EXPORTED PLUGINPROVIDERIMPLFPGA_T PlugInProviderImplFPGA_Create_1(USBINTERFACE_T usbInt, SPECTROMETER_T spec);
	EXPORTED void PlugInProviderImplFPGA_Destroy(PLUGINPROVIDERIMPLFPGA_T plug_in_provider_impl_f_p_g_a);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED PLUGINPROVIDERIMPLFPGA_T STDCALL PlugInProviderImplFPGA_Create_stdcall_1(USBINTERFACE_T usbInt, SPECTROMETER_T spec);
	EXPORTED void STDCALL PlugInProviderImplFPGA_Destroy_stdcall(PLUGINPROVIDERIMPLFPGA_T plug_in_provider_impl_f_p_g_a);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* PLUGINPROVIDERIMPLFPGA_H */
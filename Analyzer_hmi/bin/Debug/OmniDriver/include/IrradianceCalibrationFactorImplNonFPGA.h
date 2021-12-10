/**
 * File: IrradianceCalibrationFactorImplNonFPGA.h
 * Autogenerated on Fri Mar 23 13:38:37 EDT 2018 based on
 * IrradianceCalibrationFactorImplNonFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/irradiancecalibrationfactor/IrradianceCalibrationFactorImplNonFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_H
#define IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "IrradianceCalibrationFactorImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class IrradianceCalibrationFactorImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED IrradianceCalibrationFactorImplNonFPGA : public IrradianceCalibrationFactorImpl // CPPClass.tag001
{
public: 
	IrradianceCalibrationFactorImplNonFPGA(USBInterface& usb, int numberOfPixels);
	~IrradianceCalibrationFactorImplNonFPGA();
	// No public default Java constructor; creating one:
	IrradianceCalibrationFactorImplNonFPGA();
	// No public Java copy constructor; creating one:
	IrradianceCalibrationFactorImplNonFPGA(const IrradianceCalibrationFactorImplNonFPGA &that);
	// Creating assignment operator declaration:
	IrradianceCalibrationFactorImplNonFPGA &operator=(const IrradianceCalibrationFactorImplNonFPGA &that);

private:
	jmethodID mid_IrradianceCalibrationFactorImplNonFPGA1615;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPL_T
#define EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPL_T
	typedef void* IRRADIANCECALIBRATIONFACTORIMPL_T;
#endif /* EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T
#define EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T
	typedef void* IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T;
#endif /* EXTERN_TYPEDEF_IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T IrradianceCalibrationFactorImplNonFPGA_Create();
	EXPORTED IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T IrradianceCalibrationFactorImplNonFPGA_Create_1(USBINTERFACE_T usb, int numberOfPixels);
	EXPORTED void IrradianceCalibrationFactorImplNonFPGA_Destroy(IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T irradiance_calibration_factor_impl_non_f_p_g_a);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T STDCALL IrradianceCalibrationFactorImplNonFPGA_Create_stdcall_1(USBINTERFACE_T usb, int numberOfPixels);
	EXPORTED void STDCALL IrradianceCalibrationFactorImplNonFPGA_Destroy_stdcall(IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_T irradiance_calibration_factor_impl_non_f_p_g_a);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* IRRADIANCECALIBRATIONFACTORIMPLNONFPGA_H */

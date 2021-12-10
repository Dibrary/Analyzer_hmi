/**
 * File: I2CBusImplFPGA.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * I2CBusImplFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/i2cbus/I2CBusImplFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef I2CBUSIMPLFPGA_H
#define I2CBUSIMPLFPGA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "I2CBusImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class I2CBusImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED I2CBusImplFPGA : public I2CBusImpl // CPPClass.tag001
{
public: 
	I2CBusImplFPGA(USBInterface& usb);
	~I2CBusImplFPGA();
	// No public default Java constructor; creating one:
	I2CBusImplFPGA();
	// No public Java copy constructor; creating one:
	I2CBusImplFPGA(const I2CBusImplFPGA &that);
	// Creating assignment operator declaration:
	I2CBusImplFPGA &operator=(const I2CBusImplFPGA &that);

private:
	jmethodID mid_I2CBusImplFPGA1385;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_I2CBUSIMPL_T
#define EXTERN_TYPEDEF_I2CBUSIMPL_T
	typedef void* I2CBUSIMPL_T;
#endif /* EXTERN_TYPEDEF_I2CBUSIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_I2CBUSIMPLFPGA_T
#define EXTERN_TYPEDEF_I2CBUSIMPLFPGA_T
	typedef void* I2CBUSIMPLFPGA_T;
#endif /* EXTERN_TYPEDEF_I2CBUSIMPLFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED I2CBUSIMPLFPGA_T I2CBusImplFPGA_Create();
	EXPORTED I2CBUSIMPLFPGA_T I2CBusImplFPGA_Create_1(USBINTERFACE_T usb);
	EXPORTED void I2CBusImplFPGA_Destroy(I2CBUSIMPLFPGA_T i2cbusimplfpga);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED I2CBUSIMPLFPGA_T STDCALL I2CBusImplFPGA_Create_stdcall_1(USBINTERFACE_T usb);
	EXPORTED void STDCALL I2CBusImplFPGA_Destroy_stdcall(I2CBUSIMPLFPGA_T i2cbusimplfpga);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* I2CBUSIMPLFPGA_H */

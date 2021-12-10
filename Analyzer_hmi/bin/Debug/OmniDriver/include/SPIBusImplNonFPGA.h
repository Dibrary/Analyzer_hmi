/**
 * File: SPIBusImplNonFPGA.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SPIBusImplNonFPGA.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/spibus/SPIBusImplNonFPGA
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPIBUSIMPLNONFPGA_H
#define SPIBUSIMPLNONFPGA_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SPIBusImpl.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SPIBusImpl;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SPIBusImplNonFPGA : public SPIBusImpl // CPPClass.tag001
{
public: 
	SPIBusImplNonFPGA(USBInterface& usb);
	~SPIBusImplNonFPGA();
	// No public default Java constructor; creating one:
	SPIBusImplNonFPGA();
	// No public Java copy constructor; creating one:
	SPIBusImplNonFPGA(const SPIBusImplNonFPGA &that);
	// Creating assignment operator declaration:
	SPIBusImplNonFPGA &operator=(const SPIBusImplNonFPGA &that);

private:
	jmethodID mid_SPIBusImplNonFPGA2084;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPIBUSIMPL_T
#define EXTERN_TYPEDEF_SPIBUSIMPL_T
	typedef void* SPIBUSIMPL_T;
#endif /* EXTERN_TYPEDEF_SPIBUSIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_SPIBUSIMPLNONFPGA_T
#define EXTERN_TYPEDEF_SPIBUSIMPLNONFPGA_T
	typedef void* SPIBUSIMPLNONFPGA_T;
#endif /* EXTERN_TYPEDEF_SPIBUSIMPLNONFPGA_T */

	// No public default Java constructor; creating one:
	EXPORTED SPIBUSIMPLNONFPGA_T SPIBusImplNonFPGA_Create();
	EXPORTED SPIBUSIMPLNONFPGA_T SPIBusImplNonFPGA_Create_1(USBINTERFACE_T usb);
	EXPORTED void SPIBusImplNonFPGA_Destroy(SPIBUSIMPLNONFPGA_T spibusimplnonfpga);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SPIBUSIMPLNONFPGA_T STDCALL SPIBusImplNonFPGA_Create_stdcall_1(USBINTERFACE_T usb);
	EXPORTED void STDCALL SPIBusImplNonFPGA_Destroy_stdcall(SPIBUSIMPLNONFPGA_T spibusimplnonfpga);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPIBUSIMPLNONFPGA_H */
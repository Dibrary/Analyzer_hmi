/**
 * File: USBFeature.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * USBFeature.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/USBFeature
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USBFEATURE_H
#define USBFEATURE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED USBFeature : public BaseJavaClass // CPPClass.tag001
{
public: 
	USBFeature(USBInterface& usbInt);
	~USBFeature();
	// No public default Java constructor; creating one:
	USBFeature();
	// No public Java copy constructor; creating one:
	USBFeature(const USBFeature &that);
	// Creating assignment operator declaration:
	USBFeature &operator=(const USBFeature &that);

private:
	jmethodID mid_USBFeature732;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */

	// No public default Java constructor; creating one:
	EXPORTED USBFEATURE_T USBFeature_Create();
	EXPORTED USBFEATURE_T USBFeature_Create_1(USBINTERFACE_T usbInt);
	EXPORTED void USBFeature_Destroy(USBFEATURE_T usbfeature);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USBFEATURE_T STDCALL USBFeature_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED void STDCALL USBFeature_Destroy_stdcall(USBFEATURE_T usbfeature);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USBFEATURE_H */

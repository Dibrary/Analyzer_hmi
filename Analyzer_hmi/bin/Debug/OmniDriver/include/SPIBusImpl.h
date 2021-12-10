/**
 * File: SPIBusImpl.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SPIBusImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/spibus/SPIBusImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPIBUSIMPL_H
#define SPIBUSIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SPIBusImpl : public USBFeature // CPPClass.tag001
{
public: 
	SPIBusImpl(USBInterface& usbInt);
	CharArray getSPIBytes(CharArray& message, int length);
	JStringArray getFeatureGUIClassnames();
	~SPIBusImpl();
	// No public default Java constructor; creating one:
	SPIBusImpl();
	// No public Java copy constructor; creating one:
	SPIBusImpl(const SPIBusImpl &that);
	// Creating assignment operator declaration:
	SPIBusImpl &operator=(const SPIBusImpl &that);

private:
	jmethodID mid_SPIBusImpl2080;
	jmethodID mid_getSPIBytes2081;
	jmethodID mid_getFeatureGUIClassnames2082;
	jfieldID fid_dataOutEndPoint;
	jfieldID fid_lowSpeedInEndPoint;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_SPIBUSIMPL_T
#define EXTERN_TYPEDEF_SPIBUSIMPL_T
	typedef void* SPIBUSIMPL_T;
#endif /* EXTERN_TYPEDEF_SPIBUSIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED SPIBUSIMPL_T SPIBusImpl_Create();
	EXPORTED SPIBUSIMPL_T SPIBusImpl_Create_1(USBINTERFACE_T usbInt);
	EXPORTED void SPIBusImpl_getSPIBytes(SPIBUSIMPL_T c_spibusimpl, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void SPIBusImpl_getFeatureGUIClassnames(SPIBUSIMPL_T c_spibusimpl, JSTRINGARRAY_T retval);
	EXPORTED void SPIBusImpl_Destroy(SPIBUSIMPL_T spibusimpl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED SPIBUSIMPL_T STDCALL SPIBusImpl_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED void STDCALL SPIBusImpl_getSPIBytes_stdcall(SPIBUSIMPL_T c_spibusimpl, CHARARRAY_T message, int length, CHARARRAY_T retval);
	EXPORTED void STDCALL SPIBusImpl_getFeatureGUIClassnames_stdcall(SPIBUSIMPL_T c_spibusimpl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL SPIBusImpl_Destroy_stdcall(SPIBUSIMPL_T spibusimpl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPIBUSIMPL_H */
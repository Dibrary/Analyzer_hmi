/**
 * File: I2CBusImpl_QEPro.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * I2CBusImpl_QEPro.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/i2cbus/I2CBusImpl_QEPro
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef I2CBUSIMPL_QEPRO_H
#define I2CBUSIMPL_QEPRO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "I2CBusImpl.h"
#include "QEPro.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class I2CBusImpl;
class QEPro;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED I2CBusImpl_QEPro : public I2CBusImpl // CPPClass.tag001
{
public: 
	I2CBusImpl_QEPro(QEPro& qe, USBInterface& usb);
	CharArray getI2CBytes(signed char address, signed char numBytes);
	int setI2CBytes(signed char address, signed char numBytes, CharArray& buffer);
	JStringArray getFeatureGUIClassnames();
	~I2CBusImpl_QEPro();
	// No public default Java constructor; creating one:
	I2CBusImpl_QEPro();
	// No public Java copy constructor; creating one:
	I2CBusImpl_QEPro(const I2CBusImpl_QEPro &that);
	// Creating assignment operator declaration:
	I2CBusImpl_QEPro &operator=(const I2CBusImpl_QEPro &that);

private:
	jmethodID mid_I2CBusImpl_QEPro1391;
	jmethodID mid_getI2CBytes1392;
	jmethodID mid_setI2CBytes1393;
	jmethodID mid_getFeatureGUIClassnames1394;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_I2CBUSIMPL_T
#define EXTERN_TYPEDEF_I2CBUSIMPL_T
	typedef void* I2CBUSIMPL_T;
#endif /* EXTERN_TYPEDEF_I2CBUSIMPL_T */
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
#ifndef EXTERN_TYPEDEF_I2CBUSIMPL_QEPRO_T
#define EXTERN_TYPEDEF_I2CBUSIMPL_QEPRO_T
	typedef void* I2CBUSIMPL_QEPRO_T;
#endif /* EXTERN_TYPEDEF_I2CBUSIMPL_QEPRO_T */

	// No public default Java constructor; creating one:
	EXPORTED I2CBUSIMPL_QEPRO_T I2CBusImpl_QEPro_Create();
	EXPORTED I2CBUSIMPL_QEPRO_T I2CBusImpl_QEPro_Create_1(QEPRO_T qe, USBINTERFACE_T usb);
	EXPORTED void I2CBusImpl_QEPro_getI2CBytes(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED int I2CBusImpl_QEPro_setI2CBytes(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, signed char address, signed char numBytes, CHARARRAY_T buffer);
	EXPORTED void I2CBusImpl_QEPro_getFeatureGUIClassnames(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, JSTRINGARRAY_T retval);
	EXPORTED void I2CBusImpl_QEPro_Destroy(I2CBUSIMPL_QEPRO_T i2cbusimpl_qepro);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED I2CBUSIMPL_QEPRO_T STDCALL I2CBusImpl_QEPro_Create_stdcall_1(QEPRO_T qe, USBINTERFACE_T usb);
	EXPORTED void STDCALL I2CBusImpl_QEPro_getI2CBytes_stdcall(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, signed char address, signed char numBytes, CHARARRAY_T retval);
	EXPORTED int STDCALL I2CBusImpl_QEPro_setI2CBytes_stdcall(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, signed char address, signed char numBytes, CHARARRAY_T buffer);
	EXPORTED void STDCALL I2CBusImpl_QEPro_getFeatureGUIClassnames_stdcall(I2CBUSIMPL_QEPRO_T c_i2cbusimpl_qepro, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL I2CBusImpl_QEPro_Destroy_stdcall(I2CBUSIMPL_QEPRO_T i2cbusimpl_qepro);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* I2CBUSIMPL_QEPRO_H */

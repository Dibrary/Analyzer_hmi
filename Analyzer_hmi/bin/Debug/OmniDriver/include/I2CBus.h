/**
 * File: I2CBus.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * I2CBus.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/i2cbus/I2CBus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef I2CBUS_H
#define I2CBUS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED I2CBus : public BaseJavaClass // CPPClass.tag001
{
public: 
	int setI2CBytes(signed char param0, signed char param1, CharArray& param2);
	CharArray getI2CBytes(signed char param0, signed char param1);
	~I2CBus();
	// No public default Java constructor; creating one:
	I2CBus();
	// No public Java copy constructor; creating one:
	I2CBus(const I2CBus &that);
	// Creating assignment operator declaration:
	I2CBus &operator=(const I2CBus &that);

private:
	jmethodID mid_setI2CBytes1379;
	jmethodID mid_getI2CBytes1380;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_I2CBUS_T
#define EXTERN_TYPEDEF_I2CBUS_T
	typedef void* I2CBUS_T;
#endif /* EXTERN_TYPEDEF_I2CBUS_T */

	// No public default Java constructor; creating one:
	EXPORTED I2CBUS_T I2CBus_Create();
	EXPORTED int I2CBus_setI2CBytes(I2CBUS_T c_i2cbus, signed char param0, signed char param1, CHARARRAY_T param2);
	EXPORTED void I2CBus_getI2CBytes(I2CBUS_T c_i2cbus, signed char param0, signed char param1, CHARARRAY_T retval);
	EXPORTED void I2CBus_Destroy(I2CBUS_T i2cbus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL I2CBus_setI2CBytes_stdcall(I2CBUS_T c_i2cbus, signed char param0, signed char param1, CHARARRAY_T param2);
	EXPORTED void STDCALL I2CBus_getI2CBytes_stdcall(I2CBUS_T c_i2cbus, signed char param0, signed char param1, CHARARRAY_T retval);
	EXPORTED void STDCALL I2CBus_Destroy_stdcall(I2CBUS_T i2cbus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* I2CBUS_H */
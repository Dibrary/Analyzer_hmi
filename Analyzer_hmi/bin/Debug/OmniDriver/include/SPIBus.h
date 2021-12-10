/**
 * File: SPIBus.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SPIBus.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/spibus/SPIBus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SPIBUS_H
#define SPIBUS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED SPIBus : public BaseJavaClass // CPPClass.tag001
{
public: 
	CharArray getSPIBytes(CharArray& param0, int param1);
	~SPIBus();
	// No public default Java constructor; creating one:
	SPIBus();
	// No public Java copy constructor; creating one:
	SPIBus(const SPIBus &that);
	// Creating assignment operator declaration:
	SPIBus &operator=(const SPIBus &that);

private:
	jmethodID mid_getSPIBytes2079;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPIBUS_T
#define EXTERN_TYPEDEF_SPIBUS_T
	typedef void* SPIBUS_T;
#endif /* EXTERN_TYPEDEF_SPIBUS_T */

	// No public default Java constructor; creating one:
	EXPORTED SPIBUS_T SPIBus_Create();
	EXPORTED void SPIBus_getSPIBytes(SPIBUS_T c_spibus, CHARARRAY_T param0, int param1, CHARARRAY_T retval);
	EXPORTED void SPIBus_Destroy(SPIBUS_T spibus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL SPIBus_getSPIBytes_stdcall(SPIBUS_T c_spibus, CHARARRAY_T param0, int param1, CHARARRAY_T retval);
	EXPORTED void STDCALL SPIBus_Destroy_stdcall(SPIBUS_T spibus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SPIBUS_H */
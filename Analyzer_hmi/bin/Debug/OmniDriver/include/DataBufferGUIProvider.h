/**
 * File: DataBufferGUIProvider.h
 * Autogenerated on Fri Mar 23 13:38:31 EDT 2018 based on
 * DataBufferGUIProvider.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/buffer/DataBufferGUIProvider
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DATABUFFERGUIPROVIDER_H
#define DATABUFFERGUIPROVIDER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED DataBufferGUIProvider : public BaseJavaClass // CPPClass.tag001
{
public: 
	~DataBufferGUIProvider();
	// No public default Java constructor; creating one:
	DataBufferGUIProvider();
	// No public Java copy constructor; creating one:
	DataBufferGUIProvider(const DataBufferGUIProvider &that);
	// Creating assignment operator declaration:
	DataBufferGUIProvider &operator=(const DataBufferGUIProvider &that);

private:
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_DATABUFFERGUIPROVIDER_T
#define EXTERN_TYPEDEF_DATABUFFERGUIPROVIDER_T
	typedef void* DATABUFFERGUIPROVIDER_T;
#endif /* EXTERN_TYPEDEF_DATABUFFERGUIPROVIDER_T */

	// No public default Java constructor; creating one:
	EXPORTED DATABUFFERGUIPROVIDER_T DataBufferGUIProvider_Create();
	EXPORTED void DataBufferGUIProvider_Destroy(DATABUFFERGUIPROVIDER_T data_buffer_g_u_i_provider);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL DataBufferGUIProvider_Destroy_stdcall(DATABUFFERGUIPROVIDER_T data_buffer_g_u_i_provider);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DATABUFFERGUIPROVIDER_H */
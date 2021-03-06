/**
 * File: WiFiPassphrase.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * WiFiPassphrase.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/networkconfigure/WiFiPassphrase
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef WIFIPASSPHRASE_H
#define WIFIPASSPHRASE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED WiFiPassphrase : public BaseJavaClass // CPPClass.tag001
{
public: 
	WiFiPassphrase(CharArray& pp);
	CharArray getPassphrase();
	~WiFiPassphrase();
	// No public default Java constructor; creating one:
	WiFiPassphrase();
	// No public Java copy constructor; creating one:
	WiFiPassphrase(const WiFiPassphrase &that);
	// Creating assignment operator declaration:
	WiFiPassphrase &operator=(const WiFiPassphrase &that);

private:
	jmethodID mid_WiFiPassphrase1850;
	jmethodID mid_getPassphrase1851;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_WIFIPASSPHRASE_T
#define EXTERN_TYPEDEF_WIFIPASSPHRASE_T
	typedef void* WIFIPASSPHRASE_T;
#endif /* EXTERN_TYPEDEF_WIFIPASSPHRASE_T */

	// No public default Java constructor; creating one:
	EXPORTED WIFIPASSPHRASE_T WiFiPassphrase_Create();
	EXPORTED WIFIPASSPHRASE_T WiFiPassphrase_Create_1(CHARARRAY_T pp);
	EXPORTED void WiFiPassphrase_getPassphrase(WIFIPASSPHRASE_T c_wi_fi_passphrase, CHARARRAY_T retval);
	EXPORTED void WiFiPassphrase_Destroy(WIFIPASSPHRASE_T wi_fi_passphrase);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED WIFIPASSPHRASE_T STDCALL WiFiPassphrase_Create_stdcall_1(CHARARRAY_T pp);
	EXPORTED void STDCALL WiFiPassphrase_getPassphrase_stdcall(WIFIPASSPHRASE_T c_wi_fi_passphrase, CHARARRAY_T retval);
	EXPORTED void STDCALL WiFiPassphrase_Destroy_stdcall(WIFIPASSPHRASE_T wi_fi_passphrase);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* WIFIPASSPHRASE_H */

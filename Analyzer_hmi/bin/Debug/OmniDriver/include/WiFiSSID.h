/**
 * File: WiFiSSID.h
 * Autogenerated on Fri Mar 23 13:38:38 EDT 2018 based on
 * WiFiSSID.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/networkconfigure/WiFiSSID
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef WIFISSID_H
#define WIFISSID_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED WiFiSSID : public BaseJavaClass // CPPClass.tag001
{
public: 
	WiFiSSID(CharArray& id);
	CharArray getSSID();
	JString toString();
	~WiFiSSID();
	// No public default Java constructor; creating one:
	WiFiSSID();
	// No public Java copy constructor; creating one:
	WiFiSSID(const WiFiSSID &that);
	// Creating assignment operator declaration:
	WiFiSSID &operator=(const WiFiSSID &that);

private:
	jmethodID mid_WiFiSSID1852;
	jmethodID mid_getSSID1853;
	jmethodID mid_toString1854;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_WIFISSID_T
#define EXTERN_TYPEDEF_WIFISSID_T
	typedef void* WIFISSID_T;
#endif /* EXTERN_TYPEDEF_WIFISSID_T */

	// No public default Java constructor; creating one:
	EXPORTED WIFISSID_T WiFiSSID_Create();
	EXPORTED WIFISSID_T WiFiSSID_Create_1(CHARARRAY_T id);
	EXPORTED void WiFiSSID_getSSID(WIFISSID_T c_wi_fi_s_s_i_d, CHARARRAY_T retval);
	EXPORTED void WiFiSSID_toString(WIFISSID_T c_wi_fi_s_s_i_d, JSTRING_T retval);
	EXPORTED void WiFiSSID_Destroy(WIFISSID_T wi_fi_s_s_i_d);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED WIFISSID_T STDCALL WiFiSSID_Create_stdcall_1(CHARARRAY_T id);
	EXPORTED void STDCALL WiFiSSID_getSSID_stdcall(WIFISSID_T c_wi_fi_s_s_i_d, CHARARRAY_T retval);
	EXPORTED void STDCALL WiFiSSID_toString_stdcall(WIFISSID_T c_wi_fi_s_s_i_d, JSTRING_T retval);
	EXPORTED void STDCALL WiFiSSID_Destroy_stdcall(WIFISSID_T wi_fi_s_s_i_d);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* WIFISSID_H */
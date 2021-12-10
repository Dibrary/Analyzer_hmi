/**
 * File: MPProductTest.h
 * Autogenerated on Fri Mar 23 13:39:19 EDT 2018 based on
 * MPProductTest.java
 * for the Java class
 * com/oceanoptics/tests/MPProductTest
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MPPRODUCTTEST_H
#define MPPRODUCTTEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MPProductTest : public BaseJavaClass // CPPClass.tag001
{
public: 
	void main(JStringArray& args);
	MPProductTest();
	~MPProductTest();
	// No public Java copy constructor; creating one:
	MPProductTest(const MPProductTest &that);
	// Creating assignment operator declaration:
	MPProductTest &operator=(const MPProductTest &that);

private:
	jmethodID mid_main6537;
	jmethodID mid_MPProductTest6538;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_MPPRODUCTTEST_T
#define EXTERN_TYPEDEF_MPPRODUCTTEST_T
	typedef void* MPPRODUCTTEST_T;
#endif /* EXTERN_TYPEDEF_MPPRODUCTTEST_T */

	EXPORTED void MPProductTest_main(MPPRODUCTTEST_T c_mpproducttest, JSTRINGARRAY_T args);
	EXPORTED MPPRODUCTTEST_T MPProductTest_Create();
	EXPORTED void MPProductTest_Destroy(MPPRODUCTTEST_T mpproducttest);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL MPProductTest_main_stdcall(MPPRODUCTTEST_T c_mpproducttest, JSTRINGARRAY_T args);
	EXPORTED MPPRODUCTTEST_T STDCALL MPProductTest_Create_stdcall();
	EXPORTED void STDCALL MPProductTest_Destroy_stdcall(MPPRODUCTTEST_T mpproducttest);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MPPRODUCTTEST_H */

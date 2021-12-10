/**
 * File: Test.h
 * Autogenerated on Fri Mar 23 13:39:21 EDT 2018 based on
 * Test.java
 * for the Java class
 * com/oceanoptics/unirs232/tests/Test
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef TEST_H
#define TEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Test : public BaseJavaClass // CPPClass.tag001
{
public: 
	Test();
	void main(JStringArray& args);
	~Test();
	// No public Java copy constructor; creating one:
	Test(const Test &that);
	// Creating assignment operator declaration:
	Test &operator=(const Test &that);

private:
	jmethodID mid_Test6732;
	jmethodID mid_main6733;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_TEST_T
#define EXTERN_TYPEDEF_TEST_T
	typedef void* TEST_T;
#endif /* EXTERN_TYPEDEF_TEST_T */

	EXPORTED TEST_T Test_Create();
	EXPORTED void Test_main(TEST_T c_test, JSTRINGARRAY_T args);
	EXPORTED void Test_Destroy(TEST_T test);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED TEST_T STDCALL Test_Create_stdcall();
	EXPORTED void STDCALL Test_main_stdcall(TEST_T c_test, JSTRINGARRAY_T args);
	EXPORTED void STDCALL Test_Destroy_stdcall(TEST_T test);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* TEST_H */
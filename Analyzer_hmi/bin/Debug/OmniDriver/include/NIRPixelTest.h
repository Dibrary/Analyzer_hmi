/**
 * File: NIRPixelTest.h
 * Autogenerated on Fri Mar 23 13:39:19 EDT 2018 based on
 * NIRPixelTest.java
 * for the Java class
 * com/oceanoptics/tests/NIRPixelTest
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NIRPIXELTEST_H
#define NIRPIXELTEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED NIRPixelTest : public BaseJavaClass // CPPClass.tag001
{
public: 
	NIRPixelTest();
	void main(JStringArray& args);
	~NIRPixelTest();
	// No public Java copy constructor; creating one:
	NIRPixelTest(const NIRPixelTest &that);
	// Creating assignment operator declaration:
	NIRPixelTest &operator=(const NIRPixelTest &that);

private:
	jmethodID mid_NIRPixelTest6539;
	jmethodID mid_main6540;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_NIRPIXELTEST_T
#define EXTERN_TYPEDEF_NIRPIXELTEST_T
	typedef void* NIRPIXELTEST_T;
#endif /* EXTERN_TYPEDEF_NIRPIXELTEST_T */

	EXPORTED NIRPIXELTEST_T NIRPixelTest_Create();
	EXPORTED void NIRPixelTest_main(NIRPIXELTEST_T c_nirpixeltest, JSTRINGARRAY_T args);
	EXPORTED void NIRPixelTest_Destroy(NIRPIXELTEST_T nirpixeltest);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED NIRPIXELTEST_T STDCALL NIRPixelTest_Create_stdcall();
	EXPORTED void STDCALL NIRPixelTest_main_stdcall(NIRPIXELTEST_T c_nirpixeltest, JSTRINGARRAY_T args);
	EXPORTED void STDCALL NIRPixelTest_Destroy_stdcall(NIRPIXELTEST_T nirpixeltest);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NIRPIXELTEST_H */

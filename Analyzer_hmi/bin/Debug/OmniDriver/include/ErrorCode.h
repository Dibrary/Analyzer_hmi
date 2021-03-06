/**
 * File: ErrorCode.h
 * Autogenerated on Fri Mar 23 13:38:28 EDT 2018 based on
 * ErrorCode.java
 * for the Java class
 * com/oceanoptics/omnidriver/constants/ErrorCode
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ERRORCODE_H
#define ERRORCODE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ErrorCode : public BaseJavaClass // CPPClass.tag001
{
public: 
	ErrorCode(int newCode);
	void setErrorCode(int code, short on);
	int getErrorCodes();
	short isCodeIgnored(int code);
	void setCodeIgnored(int code, short ignore);
	short isErrorCodeSet(int code);
	JStringArray getAllErrorResponses();
	JString getErrorResponse(int code);
	JString getIngoreResponse();
	int getErrorCount();
	~ErrorCode();
	// No public default Java constructor; creating one:
	ErrorCode();
	// No public Java copy constructor; creating one:
	ErrorCode(const ErrorCode &that);
	// Creating assignment operator declaration:
	ErrorCode &operator=(const ErrorCode &that);
	int ERROR_CODE_NORMAL;
	int ERROR_CODE_INTERLOCK;
	int ERROR_CODE_GATED_MODE;
	int ERROR_TRIGGER_MODE;
	int ERROR_CODE_DEEPWELL_MODE;

private:
	jmethodID mid_ErrorCode659;
	jmethodID mid_setErrorCode660;
	jmethodID mid_getErrorCodes661;
	jmethodID mid_isCodeIgnored662;
	jmethodID mid_setCodeIgnored663;
	jmethodID mid_isErrorCodeSet664;
	jmethodID mid_getAllErrorResponses665;
	jmethodID mid_getErrorResponse666;
	jmethodID mid_getIngoreResponse667;
	jmethodID mid_getErrorCount668;
	jfieldID fid_ERROR_CODE_NORMAL;
	jfieldID fid_ERROR_CODE_INTERLOCK;
	jfieldID fid_ERROR_CODE_GATED_MODE;
	jfieldID fid_ERROR_TRIGGER_MODE;
	jfieldID fid_ERROR_CODE_DEEPWELL_MODE;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_ERRORCODE_T
#define EXTERN_TYPEDEF_ERRORCODE_T
	typedef void* ERRORCODE_T;
#endif /* EXTERN_TYPEDEF_ERRORCODE_T */

	// No public default Java constructor; creating one:
	EXPORTED ERRORCODE_T ErrorCode_Create();
	EXPORTED ERRORCODE_T ErrorCode_Create_1(int newCode);
	EXPORTED void ErrorCode_setErrorCode(ERRORCODE_T c_error_code, int code, short on);
	EXPORTED int ErrorCode_getErrorCodes(ERRORCODE_T c_error_code);
	EXPORTED short ErrorCode_isCodeIgnored(ERRORCODE_T c_error_code, int code);
	EXPORTED void ErrorCode_setCodeIgnored(ERRORCODE_T c_error_code, int code, short ignore);
	EXPORTED short ErrorCode_isErrorCodeSet(ERRORCODE_T c_error_code, int code);
	EXPORTED void ErrorCode_getAllErrorResponses(ERRORCODE_T c_error_code, JSTRINGARRAY_T retval);
	EXPORTED void ErrorCode_getErrorResponse(ERRORCODE_T c_error_code, int code, JSTRING_T retval);
	EXPORTED void ErrorCode_getIngoreResponse(ERRORCODE_T c_error_code, JSTRING_T retval);
	EXPORTED int ErrorCode_getErrorCount(ERRORCODE_T c_error_code);
	EXPORTED void ErrorCode_Destroy(ERRORCODE_T error_code);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ERRORCODE_T STDCALL ErrorCode_Create_stdcall_1(int newCode);
	EXPORTED void STDCALL ErrorCode_setErrorCode_stdcall(ERRORCODE_T c_error_code, int code, short on);
	EXPORTED int STDCALL ErrorCode_getErrorCodes_stdcall(ERRORCODE_T c_error_code);
	EXPORTED short STDCALL ErrorCode_isCodeIgnored_stdcall(ERRORCODE_T c_error_code, int code);
	EXPORTED void STDCALL ErrorCode_setCodeIgnored_stdcall(ERRORCODE_T c_error_code, int code, short ignore);
	EXPORTED short STDCALL ErrorCode_isErrorCodeSet_stdcall(ERRORCODE_T c_error_code, int code);
	EXPORTED void STDCALL ErrorCode_getAllErrorResponses_stdcall(ERRORCODE_T c_error_code, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ErrorCode_getErrorResponse_stdcall(ERRORCODE_T c_error_code, int code, JSTRING_T retval);
	EXPORTED void STDCALL ErrorCode_getIngoreResponse_stdcall(ERRORCODE_T c_error_code, JSTRING_T retval);
	EXPORTED int STDCALL ErrorCode_getErrorCount_stdcall(ERRORCODE_T c_error_code);
	EXPORTED void STDCALL ErrorCode_Destroy_stdcall(ERRORCODE_T error_code);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ERRORCODE_H */

/**
 * File: ByteConversions.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * ByteConversions.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/ByteConversions
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef BYTECONVERSIONS_H
#define BYTECONVERSIONS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED ByteConversions : public BaseJavaClass // CPPClass.tag001
{
public: 
	ByteConversions();
	long long bytesToLong(CharArray& bytes, int start, int maxLength);
	long long bytesToLong(CharArray& bytes, int start);
	int bytesToInteger(CharArray& bytes, int start, int maxLength);
	int bytesToInteger(CharArray& bytes, int start);
	short bytesToShort(CharArray& bytes, int start, int maxLength);
	short bytesToShort(CharArray& bytes, int start);
	float bytesToFloat(CharArray& bytes, int start);
	double bytesToDouble(CharArray& bytes, int start);
	~ByteConversions();
	// No public Java copy constructor; creating one:
	ByteConversions(const ByteConversions &that);
	// Creating assignment operator declaration:
	ByteConversions &operator=(const ByteConversions &that);

private:
	jmethodID mid_ByteConversions689;
	jmethodID mid_bytesToLong690;
	jmethodID mid_bytesToLong691;
	jmethodID mid_bytesToInteger692;
	jmethodID mid_bytesToInteger693;
	jmethodID mid_bytesToShort694;
	jmethodID mid_bytesToShort695;
	jmethodID mid_bytesToFloat696;
	jmethodID mid_bytesToDouble697;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_BYTECONVERSIONS_T
#define EXTERN_TYPEDEF_BYTECONVERSIONS_T
	typedef void* BYTECONVERSIONS_T;
#endif /* EXTERN_TYPEDEF_BYTECONVERSIONS_T */

	EXPORTED BYTECONVERSIONS_T ByteConversions_Create();
	EXPORTED long long ByteConversions_bytesToLong(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED long long ByteConversions_bytesToLong_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED int ByteConversions_bytesToInteger(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED int ByteConversions_bytesToInteger_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED short ByteConversions_bytesToShort(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED short ByteConversions_bytesToShort_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED float ByteConversions_bytesToFloat(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED double ByteConversions_bytesToDouble(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED void ByteConversions_Destroy(BYTECONVERSIONS_T byte_conversions);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED BYTECONVERSIONS_T STDCALL ByteConversions_Create_stdcall();
	EXPORTED long long STDCALL ByteConversions_bytesToLong_stdcall(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED long long STDCALL ByteConversions_bytesToLong_stdcall_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED int STDCALL ByteConversions_bytesToInteger_stdcall(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED int STDCALL ByteConversions_bytesToInteger_stdcall_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED short STDCALL ByteConversions_bytesToShort_stdcall(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start, int maxLength);
	EXPORTED short STDCALL ByteConversions_bytesToShort_stdcall_1(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED float STDCALL ByteConversions_bytesToFloat_stdcall(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED double STDCALL ByteConversions_bytesToDouble_stdcall(BYTECONVERSIONS_T c_byte_conversions, CHARARRAY_T bytes, int start);
	EXPORTED void STDCALL ByteConversions_Destroy_stdcall(BYTECONVERSIONS_T byte_conversions);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* BYTECONVERSIONS_H */

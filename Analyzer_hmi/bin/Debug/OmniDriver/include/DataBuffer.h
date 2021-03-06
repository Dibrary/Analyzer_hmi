/**
 * File: DataBuffer.h
 * Autogenerated on Fri Mar 23 13:38:31 EDT 2018 based on
 * DataBuffer.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/buffer/DataBuffer
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef DATABUFFER_H
#define DATABUFFER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED DataBuffer : public BaseJavaClass // CPPClass.tag001
{
public: 
	void clearBuffer();
	int getBufferCapacity();
	int getBufferCapacityMaximum();
	int getBufferCapacityMinimum();
	int getNumberOfElements();
	void setBufferCapacity(int param0);
	void abortAcquisition();
	void startAcquisition();
	void enableBuffer(short param0);
	short isEnableBuffer();
	~DataBuffer();
	// No public default Java constructor; creating one:
	DataBuffer();
	// No public Java copy constructor; creating one:
	DataBuffer(const DataBuffer &that);
	// Creating assignment operator declaration:
	DataBuffer &operator=(const DataBuffer &that);

private:
	jmethodID mid_clearBuffer936;
	jmethodID mid_getBufferCapacity937;
	jmethodID mid_getBufferCapacityMaximum938;
	jmethodID mid_getBufferCapacityMinimum939;
	jmethodID mid_getNumberOfElements940;
	jmethodID mid_setBufferCapacity941;
	jmethodID mid_abortAcquisition942;
	jmethodID mid_startAcquisition943;
	jmethodID mid_enableBuffer944;
	jmethodID mid_isEnableBuffer945;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_DATABUFFER_T
#define EXTERN_TYPEDEF_DATABUFFER_T
	typedef void* DATABUFFER_T;
#endif /* EXTERN_TYPEDEF_DATABUFFER_T */

	// No public default Java constructor; creating one:
	EXPORTED DATABUFFER_T DataBuffer_Create();
	EXPORTED void DataBuffer_clearBuffer(DATABUFFER_T c_data_buffer);
	EXPORTED int DataBuffer_getBufferCapacity(DATABUFFER_T c_data_buffer);
	EXPORTED int DataBuffer_getBufferCapacityMaximum(DATABUFFER_T c_data_buffer);
	EXPORTED int DataBuffer_getBufferCapacityMinimum(DATABUFFER_T c_data_buffer);
	EXPORTED int DataBuffer_getNumberOfElements(DATABUFFER_T c_data_buffer);
	EXPORTED void DataBuffer_setBufferCapacity(DATABUFFER_T c_data_buffer, int param0);
	EXPORTED void DataBuffer_abortAcquisition(DATABUFFER_T c_data_buffer);
	EXPORTED void DataBuffer_startAcquisition(DATABUFFER_T c_data_buffer);
	EXPORTED void DataBuffer_enableBuffer(DATABUFFER_T c_data_buffer, short param0);
	EXPORTED short DataBuffer_isEnableBuffer(DATABUFFER_T c_data_buffer);
	EXPORTED void DataBuffer_Destroy(DATABUFFER_T data_buffer);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL DataBuffer_clearBuffer_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED int STDCALL DataBuffer_getBufferCapacity_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED int STDCALL DataBuffer_getBufferCapacityMaximum_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED int STDCALL DataBuffer_getBufferCapacityMinimum_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED int STDCALL DataBuffer_getNumberOfElements_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED void STDCALL DataBuffer_setBufferCapacity_stdcall(DATABUFFER_T c_data_buffer, int param0);
	EXPORTED void STDCALL DataBuffer_abortAcquisition_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED void STDCALL DataBuffer_startAcquisition_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED void STDCALL DataBuffer_enableBuffer_stdcall(DATABUFFER_T c_data_buffer, short param0);
	EXPORTED short STDCALL DataBuffer_isEnableBuffer_stdcall(DATABUFFER_T c_data_buffer);
	EXPORTED void STDCALL DataBuffer_Destroy_stdcall(DATABUFFER_T data_buffer);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* DATABUFFER_H */

/**
 * File: ADC1000USBTest.h
 * Autogenerated on Fri Mar 23 13:39:19 EDT 2018 based on
 * ADC1000USBTest.java
 * for the Java class
 * com/oceanoptics/tests/ADC1000USBTest
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ADC1000USBTEST_H
#define ADC1000USBTEST_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ADC1000USBTest : public BaseJavaClass // CPPClass.tag001
{
public: 
	ADC1000USBTest();
	void setEndpoints();
	void runDriverDependent();
	void runIndependent();
	void initialize();
	int getNumChannels();
	JString readInfo(int slot);
	void setRotatorTrue();
	void setChannelMux(int channel);
	DoubleArray getSpectrum();
	void main(JStringArray& args);
	~ADC1000USBTest();
	// No public Java copy constructor; creating one:
	ADC1000USBTest(const ADC1000USBTest &that);
	// Creating assignment operator declaration:
	ADC1000USBTest &operator=(const ADC1000USBTest &that);

private:
	jmethodID mid_ADC1000USBTest6524;
	jmethodID mid_setEndpoints6525;
	jmethodID mid_runDriverDependent6526;
	jmethodID mid_runIndependent6527;
	jmethodID mid_initialize6528;
	jmethodID mid_getNumChannels6529;
	jmethodID mid_readInfo6530;
	jmethodID mid_setRotatorTrue6531;
	jmethodID mid_setChannelMux6532;
	jmethodID mid_getSpectrum6533;
	jmethodID mid_main6534;
	jfieldID fid_dataOutEndPoint;
	jfieldID fid_highSpeedInEndPoint1;
	jfieldID fid_highSpeedInEndPoint2;
	jfieldID fid_lowSpeedInEndPoint;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_ADC1000USBTEST_T
#define EXTERN_TYPEDEF_ADC1000USBTEST_T
	typedef void* ADC1000USBTEST_T;
#endif /* EXTERN_TYPEDEF_ADC1000USBTEST_T */

	EXPORTED ADC1000USBTEST_T ADC1000USBTest_Create();
	EXPORTED void ADC1000USBTest_setEndpoints(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void ADC1000USBTest_runDriverDependent(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void ADC1000USBTest_runIndependent(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void ADC1000USBTest_initialize(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED int ADC1000USBTest_getNumChannels(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void ADC1000USBTest_readInfo(ADC1000USBTEST_T c_adc1000usbtest, int slot, JSTRING_T retval);
	EXPORTED void ADC1000USBTest_setRotatorTrue(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void ADC1000USBTest_setChannelMux(ADC1000USBTEST_T c_adc1000usbtest, int channel);
	EXPORTED void ADC1000USBTest_getSpectrum(ADC1000USBTEST_T c_adc1000usbtest, DOUBLEARRAY_T retval);
	EXPORTED void ADC1000USBTest_main(ADC1000USBTEST_T c_adc1000usbtest, JSTRINGARRAY_T args);
	EXPORTED void ADC1000USBTest_Destroy(ADC1000USBTEST_T adc1000usbtest);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ADC1000USBTEST_T STDCALL ADC1000USBTest_Create_stdcall();
	EXPORTED void STDCALL ADC1000USBTest_setEndpoints_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void STDCALL ADC1000USBTest_runDriverDependent_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void STDCALL ADC1000USBTest_runIndependent_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void STDCALL ADC1000USBTest_initialize_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED int STDCALL ADC1000USBTest_getNumChannels_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void STDCALL ADC1000USBTest_readInfo_stdcall(ADC1000USBTEST_T c_adc1000usbtest, int slot, JSTRING_T retval);
	EXPORTED void STDCALL ADC1000USBTest_setRotatorTrue_stdcall(ADC1000USBTEST_T c_adc1000usbtest);
	EXPORTED void STDCALL ADC1000USBTest_setChannelMux_stdcall(ADC1000USBTEST_T c_adc1000usbtest, int channel);
	EXPORTED void STDCALL ADC1000USBTest_getSpectrum_stdcall(ADC1000USBTEST_T c_adc1000usbtest, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL ADC1000USBTest_main_stdcall(ADC1000USBTEST_T c_adc1000usbtest, JSTRINGARRAY_T args);
	EXPORTED void STDCALL ADC1000USBTest_Destroy_stdcall(ADC1000USBTEST_T adc1000usbtest);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ADC1000USBTEST_H */

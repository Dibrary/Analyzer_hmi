/**
 * File: ContinuousStrobeImpl_FPGA_32bit.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * ContinuousStrobeImpl_FPGA_32bit.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/continuousstrobe/ContinuousStrobeImpl_FPGA_32bit
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CONTINUOUSSTROBEIMPL_FPGA_32BIT_H
#define CONTINUOUSSTROBEIMPL_FPGA_32BIT_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ContinuousStrobeImpl.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ContinuousStrobeImpl;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ContinuousStrobeImpl_FPGA_32bit : public ContinuousStrobeImpl // CPPClass.tag001
{
public: 
	ContinuousStrobeImpl_FPGA_32bit(USBInterface& usbInt);
	int getContinuousStrobeDelayIncrement(int magnitude);
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayMinimum();
	void setContinuousStrobeDelay(int delayMicros);
	double continuousStrobeCountsToMicros(int counts);
	void masterClockChanged(long long newValue);
	JStringArray getFeatureGUIClassnames();
	void setContinuousModeType(short mode);
	void setDelayAfterIntegration(int delay);
	short getContinuousModeType();
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	~ContinuousStrobeImpl_FPGA_32bit();
	// No public default Java constructor; creating one:
	ContinuousStrobeImpl_FPGA_32bit();
	// No public Java copy constructor; creating one:
	ContinuousStrobeImpl_FPGA_32bit(const ContinuousStrobeImpl_FPGA_32bit &that);
	// Creating assignment operator declaration:
	ContinuousStrobeImpl_FPGA_32bit &operator=(const ContinuousStrobeImpl_FPGA_32bit &that);

private:
	jmethodID mid_ContinuousStrobeImpl_FPGA_32bit1048;
	jmethodID mid_getContinuousStrobeDelayIncrement1049;
	jmethodID mid_getContinuousStrobeDelayMaximum1050;
	jmethodID mid_getContinuousStrobeDelayMinimum1051;
	jmethodID mid_setContinuousStrobeDelay1052;
	jmethodID mid_continuousStrobeCountsToMicros1053;
	jmethodID mid_masterClockChanged1054;
	jmethodID mid_getFeatureGUIClassnames1055;
	jmethodID mid_setContinuousModeType1056;
	jmethodID mid_setDelayAfterIntegration1057;
	jmethodID mid_getContinuousModeType1058;
	jmethodID mid_getDelayAfterIntegration1059;
	jmethodID mid_setContinuousEnable1060;
	jmethodID mid_getContinuousEnable1061;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T
	typedef void* CONTINUOUSSTROBEIMPL_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FPGA_32BIT_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FPGA_32BIT_T
	typedef void* CONTINUOUSSTROBEIMPL_FPGA_32BIT_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FPGA_32BIT_T */

	// No public default Java constructor; creating one:
	EXPORTED CONTINUOUSSTROBEIMPL_FPGA_32BIT_T ContinuousStrobeImpl_FPGA_32bit_Create();
	EXPORTED CONTINUOUSSTROBEIMPL_FPGA_32BIT_T ContinuousStrobeImpl_FPGA_32bit_Create_1(USBINTERFACE_T usbInt);
	EXPORTED int ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayIncrement(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int magnitude);
	EXPORTED int ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayMaximum(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED int ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayMinimum(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_setContinuousStrobeDelay(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int delayMicros);
	EXPORTED double ContinuousStrobeImpl_FPGA_32bit_continuousStrobeCountsToMicros(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int counts);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_masterClockChanged(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, long long newValue);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_getFeatureGUIClassnames(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, JSTRINGARRAY_T retval);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_setContinuousModeType(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, short mode);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_setDelayAfterIntegration(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int delay);
	EXPORTED short ContinuousStrobeImpl_FPGA_32bit_getContinuousModeType(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED int ContinuousStrobeImpl_FPGA_32bit_getDelayAfterIntegration(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_setContinuousEnable(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, short value);
	EXPORTED short ContinuousStrobeImpl_FPGA_32bit_getContinuousEnable(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void ContinuousStrobeImpl_FPGA_32bit_Destroy(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T continuous_strobe_impl_f_p_g_a_32bit);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED CONTINUOUSSTROBEIMPL_FPGA_32BIT_T STDCALL ContinuousStrobeImpl_FPGA_32bit_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayIncrement_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int magnitude);
	EXPORTED int STDCALL ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayMaximum_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED int STDCALL ContinuousStrobeImpl_FPGA_32bit_getContinuousStrobeDelayMinimum_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_setContinuousStrobeDelay_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int delayMicros);
	EXPORTED double STDCALL ContinuousStrobeImpl_FPGA_32bit_continuousStrobeCountsToMicros_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int counts);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_masterClockChanged_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, long long newValue);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_getFeatureGUIClassnames_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_setContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, short mode);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_setDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, int delay);
	EXPORTED short STDCALL ContinuousStrobeImpl_FPGA_32bit_getContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED int STDCALL ContinuousStrobeImpl_FPGA_32bit_getDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_setContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit, short value);
	EXPORTED short STDCALL ContinuousStrobeImpl_FPGA_32bit_getContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T c_continuous_strobe_impl_f_p_g_a_32bit);
	EXPORTED void STDCALL ContinuousStrobeImpl_FPGA_32bit_Destroy_stdcall(CONTINUOUSSTROBEIMPL_FPGA_32BIT_T continuous_strobe_impl_f_p_g_a_32bit);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CONTINUOUSSTROBEIMPL_FPGA_32BIT_H */

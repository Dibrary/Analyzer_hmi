/**
 * File: ContinuousStrobeImpl_FX.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * ContinuousStrobeImpl_FX.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/continuousstrobe/ContinuousStrobeImpl_FX
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CONTINUOUSSTROBEIMPL_FX_H
#define CONTINUOUSSTROBEIMPL_FX_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ContinuousStrobeImpl.h"
#include "OceanBinaryProtocolProvider.h"
#include "USBInterface.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ContinuousStrobeImpl;
class OceanBinaryProtocolProvider;
class USBInterface;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ContinuousStrobeImpl_FX : public ContinuousStrobeImpl // CPPClass.tag001
{
public: 
	ContinuousStrobeImpl_FX(OceanBinaryProtocolProvider& bn, USBInterface& usbInt);
	ContinuousStrobeImpl_FX(USBInterface& usbInt);
	int getContinuousStrobeDelayMinimum();
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayIncrement(int magnitude);
	double continuousStrobeCountsToMicros(int counts);
	void setContinuousStrobeDelay(int usec);
	short getContinuousEnable();
	void setContinuousModeType(short mode);
	short getContinuousModeType();
	void setDelayAfterIntegration(int delay);
	int getDelayAfterIntegration();
	JStringArray getFeatureGUIClassnames();
	void setContinuousEnable(short value);
	~ContinuousStrobeImpl_FX();
	// No public default Java constructor; creating one:
	ContinuousStrobeImpl_FX();
	// No public Java copy constructor; creating one:
	ContinuousStrobeImpl_FX(const ContinuousStrobeImpl_FX &that);
	// Creating assignment operator declaration:
	ContinuousStrobeImpl_FX &operator=(const ContinuousStrobeImpl_FX &that);
	int PERIOD_MINIMUM_USEC;
	int PERIOD_MAXIMUM_USEC;
	int PERIOD_INCREMENT_USEC;
	int COUNTS_PER_USEC;

private:
	jmethodID mid_ContinuousStrobeImpl_FX1062;
	jmethodID mid_ContinuousStrobeImpl_FX1063;
	jmethodID mid_getContinuousStrobeDelayMinimum1064;
	jmethodID mid_getContinuousStrobeDelayMaximum1065;
	jmethodID mid_getContinuousStrobeDelayIncrement1066;
	jmethodID mid_continuousStrobeCountsToMicros1067;
	jmethodID mid_setContinuousStrobeDelay1068;
	jmethodID mid_getContinuousEnable1069;
	jmethodID mid_setContinuousModeType1070;
	jmethodID mid_getContinuousModeType1071;
	jmethodID mid_setDelayAfterIntegration1072;
	jmethodID mid_getDelayAfterIntegration1073;
	jmethodID mid_getFeatureGUIClassnames1074;
	jmethodID mid_setContinuousEnable1075;
	jfieldID fid_PERIOD_MINIMUM_USEC;
	jfieldID fid_PERIOD_MAXIMUM_USEC;
	jfieldID fid_PERIOD_INCREMENT_USEC;
	jfieldID fid_COUNTS_PER_USEC;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T
	typedef void* CONTINUOUSSTROBEIMPL_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_T */
#ifndef EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
#define EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
	typedef void* OCEANBINARYPROTOCOLPROVIDER_T;
#endif /* EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FX_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FX_T
	typedef void* CONTINUOUSSTROBEIMPL_FX_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_FX_T */

	// No public default Java constructor; creating one:
	EXPORTED CONTINUOUSSTROBEIMPL_FX_T ContinuousStrobeImpl_FX_Create();
	EXPORTED CONTINUOUSSTROBEIMPL_FX_T ContinuousStrobeImpl_FX_Create_1(OCEANBINARYPROTOCOLPROVIDER_T bn, USBINTERFACE_T usbInt);
	EXPORTED CONTINUOUSSTROBEIMPL_FX_T ContinuousStrobeImpl_FX_Create_2(USBINTERFACE_T usbInt);
	EXPORTED int ContinuousStrobeImpl_FX_getContinuousStrobeDelayMinimum(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED int ContinuousStrobeImpl_FX_getContinuousStrobeDelayMaximum(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED int ContinuousStrobeImpl_FX_getContinuousStrobeDelayIncrement(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int magnitude);
	EXPORTED double ContinuousStrobeImpl_FX_continuousStrobeCountsToMicros(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int counts);
	EXPORTED void ContinuousStrobeImpl_FX_setContinuousStrobeDelay(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int usec);
	EXPORTED short ContinuousStrobeImpl_FX_getContinuousEnable(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void ContinuousStrobeImpl_FX_setContinuousModeType(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, short mode);
	EXPORTED short ContinuousStrobeImpl_FX_getContinuousModeType(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void ContinuousStrobeImpl_FX_setDelayAfterIntegration(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int delay);
	EXPORTED int ContinuousStrobeImpl_FX_getDelayAfterIntegration(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void ContinuousStrobeImpl_FX_getFeatureGUIClassnames(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, JSTRINGARRAY_T retval);
	EXPORTED void ContinuousStrobeImpl_FX_setContinuousEnable(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, short value);
	EXPORTED void ContinuousStrobeImpl_FX_Destroy(CONTINUOUSSTROBEIMPL_FX_T continuous_strobe_impl_f_x);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED CONTINUOUSSTROBEIMPL_FX_T STDCALL ContinuousStrobeImpl_FX_Create_stdcall_1(OCEANBINARYPROTOCOLPROVIDER_T bn, USBINTERFACE_T usbInt);
	EXPORTED CONTINUOUSSTROBEIMPL_FX_T STDCALL ContinuousStrobeImpl_FX_Create_stdcall_2(USBINTERFACE_T usbInt);
	EXPORTED int STDCALL ContinuousStrobeImpl_FX_getContinuousStrobeDelayMinimum_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED int STDCALL ContinuousStrobeImpl_FX_getContinuousStrobeDelayMaximum_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED int STDCALL ContinuousStrobeImpl_FX_getContinuousStrobeDelayIncrement_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int magnitude);
	EXPORTED double STDCALL ContinuousStrobeImpl_FX_continuousStrobeCountsToMicros_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int counts);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_setContinuousStrobeDelay_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int usec);
	EXPORTED short STDCALL ContinuousStrobeImpl_FX_getContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_setContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, short mode);
	EXPORTED short STDCALL ContinuousStrobeImpl_FX_getContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_setDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, int delay);
	EXPORTED int STDCALL ContinuousStrobeImpl_FX_getDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_getFeatureGUIClassnames_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_setContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_FX_T c_continuous_strobe_impl_f_x, short value);
	EXPORTED void STDCALL ContinuousStrobeImpl_FX_Destroy_stdcall(CONTINUOUSSTROBEIMPL_FX_T continuous_strobe_impl_f_x);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CONTINUOUSSTROBEIMPL_FX_H */

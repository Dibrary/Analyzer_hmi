/**
 * File: ContinuousStrobeImpl_Jaz.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * ContinuousStrobeImpl_Jaz.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/continuousstrobe/ContinuousStrobeImpl_Jaz
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CONTINUOUSSTROBEIMPL_JAZ_H
#define CONTINUOUSSTROBEIMPL_JAZ_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ContinuousStrobeImpl_Jaz : public BaseJavaClass // CPPClass.tag001
{
public: 
	ContinuousStrobeImpl_Jaz();
	void setContinuousStrobeDelay(int delayMicros);
	int getContinuousStrobeDelayMinimum();
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayIncrement(int magnitude);
	double continuousStrobeCountsToMicros(int counts);
	JStringArray getFeatureGUIClassnames();
	void setContinuousModeType(short mode);
	short getContinuousModeType();
	void setDelayAfterIntegration(int delay);
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	~ContinuousStrobeImpl_Jaz();
	// No public Java copy constructor; creating one:
	ContinuousStrobeImpl_Jaz(const ContinuousStrobeImpl_Jaz &that);
	// Creating assignment operator declaration:
	ContinuousStrobeImpl_Jaz &operator=(const ContinuousStrobeImpl_Jaz &that);

private:
	jmethodID mid_ContinuousStrobeImpl_Jaz1076;
	jmethodID mid_setContinuousStrobeDelay1077;
	jmethodID mid_getContinuousStrobeDelayMinimum1078;
	jmethodID mid_getContinuousStrobeDelayMaximum1079;
	jmethodID mid_getContinuousStrobeDelayIncrement1080;
	jmethodID mid_continuousStrobeCountsToMicros1081;
	jmethodID mid_getFeatureGUIClassnames1082;
	jmethodID mid_setContinuousModeType1083;
	jmethodID mid_getContinuousModeType1084;
	jmethodID mid_setDelayAfterIntegration1085;
	jmethodID mid_getDelayAfterIntegration1086;
	jmethodID mid_setContinuousEnable1087;
	jmethodID mid_getContinuousEnable1088;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_JAZ_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_JAZ_T
	typedef void* CONTINUOUSSTROBEIMPL_JAZ_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_JAZ_T */

	EXPORTED CONTINUOUSSTROBEIMPL_JAZ_T ContinuousStrobeImpl_Jaz_Create();
	EXPORTED void ContinuousStrobeImpl_Jaz_setContinuousStrobeDelay(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int delayMicros);
	EXPORTED int ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayMinimum(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED int ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayMaximum(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED int ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayIncrement(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int magnitude);
	EXPORTED double ContinuousStrobeImpl_Jaz_continuousStrobeCountsToMicros(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int counts);
	EXPORTED void ContinuousStrobeImpl_Jaz_getFeatureGUIClassnames(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void ContinuousStrobeImpl_Jaz_setContinuousModeType(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, short mode);
	EXPORTED short ContinuousStrobeImpl_Jaz_getContinuousModeType(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void ContinuousStrobeImpl_Jaz_setDelayAfterIntegration(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int delay);
	EXPORTED int ContinuousStrobeImpl_Jaz_getDelayAfterIntegration(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void ContinuousStrobeImpl_Jaz_setContinuousEnable(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, short value);
	EXPORTED short ContinuousStrobeImpl_Jaz_getContinuousEnable(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void ContinuousStrobeImpl_Jaz_Destroy(CONTINUOUSSTROBEIMPL_JAZ_T continuous_strobe_impl_jaz);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED CONTINUOUSSTROBEIMPL_JAZ_T STDCALL ContinuousStrobeImpl_Jaz_Create_stdcall();
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_setContinuousStrobeDelay_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int delayMicros);
	EXPORTED int STDCALL ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayMinimum_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED int STDCALL ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayMaximum_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED int STDCALL ContinuousStrobeImpl_Jaz_getContinuousStrobeDelayIncrement_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int magnitude);
	EXPORTED double STDCALL ContinuousStrobeImpl_Jaz_continuousStrobeCountsToMicros_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int counts);
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_getFeatureGUIClassnames_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_setContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, short mode);
	EXPORTED short STDCALL ContinuousStrobeImpl_Jaz_getContinuousModeType_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_setDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, int delay);
	EXPORTED int STDCALL ContinuousStrobeImpl_Jaz_getDelayAfterIntegration_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_setContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz, short value);
	EXPORTED short STDCALL ContinuousStrobeImpl_Jaz_getContinuousEnable_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T c_continuous_strobe_impl_jaz);
	EXPORTED void STDCALL ContinuousStrobeImpl_Jaz_Destroy_stdcall(CONTINUOUSSTROBEIMPL_JAZ_T continuous_strobe_impl_jaz);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CONTINUOUSSTROBEIMPL_JAZ_H */

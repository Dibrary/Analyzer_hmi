/**
 * File: SingleStrobeImpl_Jaz.h
 * Autogenerated on Fri Mar 23 13:38:40 EDT 2018 based on
 * SingleStrobeImpl_Jaz.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/singlestrobe/SingleStrobeImpl_Jaz
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef SINGLESTROBEIMPL_JAZ_H
#define SINGLESTROBEIMPL_JAZ_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED SingleStrobeImpl_Jaz : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getSingleStrobeMinimum();
	int getSingleStrobeMaximum();
	int getSingleStrobeIncrement();
	double getSingleStrobeCountsToMicros(int counts);
	JStringArray getFeatureGUIClassnames();
	~SingleStrobeImpl_Jaz();
	// No public default Java constructor; creating one:
	SingleStrobeImpl_Jaz();
	// No public Java copy constructor; creating one:
	SingleStrobeImpl_Jaz(const SingleStrobeImpl_Jaz &that);
	// Creating assignment operator declaration:
	SingleStrobeImpl_Jaz &operator=(const SingleStrobeImpl_Jaz &that);

private:
	jmethodID mid_getSingleStrobeMinimum2024;
	jmethodID mid_getSingleStrobeMaximum2025;
	jmethodID mid_getSingleStrobeIncrement2026;
	jmethodID mid_getSingleStrobeCountsToMicros2027;
	jmethodID mid_getFeatureGUIClassnames2028;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_SINGLESTROBEIMPL_JAZ_T
#define EXTERN_TYPEDEF_SINGLESTROBEIMPL_JAZ_T
	typedef void* SINGLESTROBEIMPL_JAZ_T;
#endif /* EXTERN_TYPEDEF_SINGLESTROBEIMPL_JAZ_T */

	// No public default Java constructor; creating one:
	EXPORTED SINGLESTROBEIMPL_JAZ_T SingleStrobeImpl_Jaz_Create();
	EXPORTED int SingleStrobeImpl_Jaz_getSingleStrobeMinimum(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED int SingleStrobeImpl_Jaz_getSingleStrobeMaximum(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED int SingleStrobeImpl_Jaz_getSingleStrobeIncrement(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED double SingleStrobeImpl_Jaz_getSingleStrobeCountsToMicros(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz, int counts);
	EXPORTED void SingleStrobeImpl_Jaz_getFeatureGUIClassnames(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void SingleStrobeImpl_Jaz_Destroy(SINGLESTROBEIMPL_JAZ_T single_strobe_impl_jaz);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL SingleStrobeImpl_Jaz_getSingleStrobeMinimum_stdcall(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED int STDCALL SingleStrobeImpl_Jaz_getSingleStrobeMaximum_stdcall(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED int STDCALL SingleStrobeImpl_Jaz_getSingleStrobeIncrement_stdcall(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz);
	EXPORTED double STDCALL SingleStrobeImpl_Jaz_getSingleStrobeCountsToMicros_stdcall(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz, int counts);
	EXPORTED void STDCALL SingleStrobeImpl_Jaz_getFeatureGUIClassnames_stdcall(SINGLESTROBEIMPL_JAZ_T c_single_strobe_impl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL SingleStrobeImpl_Jaz_Destroy_stdcall(SINGLESTROBEIMPL_JAZ_T single_strobe_impl_jaz);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* SINGLESTROBEIMPL_JAZ_H */

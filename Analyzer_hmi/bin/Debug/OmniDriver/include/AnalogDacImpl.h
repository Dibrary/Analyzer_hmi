/**
 * File: AnalogDacImpl.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * AnalogDacImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/dac/AnalogDacImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ANALOGDACIMPL_H
#define ANALOGDACIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "OceanBinaryProtocolProvider.h"
#include "USBInterface.h"
#include "OffsetConstraints.h"
#include "ReferenceConstraints.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class OceanBinaryProtocolProvider;
class USBInterface;
class OffsetConstraints;
class ReferenceConstraints;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED AnalogDacImpl : public USBFeature // CPPClass.tag001
{
public: 
	AnalogDacImpl(OceanBinaryProtocolProvider& obp, USBInterface& usbInt);
	void setOffsetCount(int baselineOffset);
	void setReferenceCount(int referenceCnt);
	int getReferenceCount();
	int getOffsetCount();
	OffsetConstraints getOffsetConstraints();
	ReferenceConstraints getReferenceConstraints();
	JStringArray getFeatureGUIClassnames();
	~AnalogDacImpl();
	// No public default Java constructor; creating one:
	AnalogDacImpl();
	// No public Java copy constructor; creating one:
	AnalogDacImpl(const AnalogDacImpl &that);
	// Creating assignment operator declaration:
	AnalogDacImpl &operator=(const AnalogDacImpl &that);

private:
	jmethodID mid_AnalogDacImpl1132;
	jmethodID mid_setOffsetCount1133;
	jmethodID mid_setReferenceCount1134;
	jmethodID mid_getReferenceCount1135;
	jmethodID mid_getOffsetCount1136;
	jmethodID mid_getOffsetConstraints1137;
	jmethodID mid_getReferenceConstraints1138;
	jmethodID mid_getFeatureGUIClassnames1139;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */
#ifndef EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
#define EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
	typedef void* OCEANBINARYPROTOCOLPROVIDER_T;
#endif /* EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_OFFSETCONSTRAINTS_T
#define EXTERN_TYPEDEF_OFFSETCONSTRAINTS_T
	typedef void* OFFSETCONSTRAINTS_T;
#endif /* EXTERN_TYPEDEF_OFFSETCONSTRAINTS_T */
#ifndef EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T
#define EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T
	typedef void* REFERENCECONSTRAINTS_T;
#endif /* EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_ANALOGDACIMPL_T
#define EXTERN_TYPEDEF_ANALOGDACIMPL_T
	typedef void* ANALOGDACIMPL_T;
#endif /* EXTERN_TYPEDEF_ANALOGDACIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED ANALOGDACIMPL_T AnalogDacImpl_Create();
	EXPORTED ANALOGDACIMPL_T AnalogDacImpl_Create_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt);
	EXPORTED void AnalogDacImpl_setOffsetCount(ANALOGDACIMPL_T c_analog_dac_impl, int baselineOffset);
	EXPORTED void AnalogDacImpl_setReferenceCount(ANALOGDACIMPL_T c_analog_dac_impl, int referenceCnt);
	EXPORTED int AnalogDacImpl_getReferenceCount(ANALOGDACIMPL_T c_analog_dac_impl);
	EXPORTED int AnalogDacImpl_getOffsetCount(ANALOGDACIMPL_T c_analog_dac_impl);
	EXPORTED void AnalogDacImpl_getOffsetConstraints(ANALOGDACIMPL_T c_analog_dac_impl, OFFSETCONSTRAINTS_T retval);
	EXPORTED void AnalogDacImpl_getReferenceConstraints(ANALOGDACIMPL_T c_analog_dac_impl, REFERENCECONSTRAINTS_T retval);
	EXPORTED void AnalogDacImpl_getFeatureGUIClassnames(ANALOGDACIMPL_T c_analog_dac_impl, JSTRINGARRAY_T retval);
	EXPORTED void AnalogDacImpl_Destroy(ANALOGDACIMPL_T analog_dac_impl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ANALOGDACIMPL_T STDCALL AnalogDacImpl_Create_stdcall_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt);
	EXPORTED void STDCALL AnalogDacImpl_setOffsetCount_stdcall(ANALOGDACIMPL_T c_analog_dac_impl, int baselineOffset);
	EXPORTED void STDCALL AnalogDacImpl_setReferenceCount_stdcall(ANALOGDACIMPL_T c_analog_dac_impl, int referenceCnt);
	EXPORTED int STDCALL AnalogDacImpl_getReferenceCount_stdcall(ANALOGDACIMPL_T c_analog_dac_impl);
	EXPORTED int STDCALL AnalogDacImpl_getOffsetCount_stdcall(ANALOGDACIMPL_T c_analog_dac_impl);
	EXPORTED void STDCALL AnalogDacImpl_getOffsetConstraints_stdcall(ANALOGDACIMPL_T c_analog_dac_impl, OFFSETCONSTRAINTS_T retval);
	EXPORTED void STDCALL AnalogDacImpl_getReferenceConstraints_stdcall(ANALOGDACIMPL_T c_analog_dac_impl, REFERENCECONSTRAINTS_T retval);
	EXPORTED void STDCALL AnalogDacImpl_getFeatureGUIClassnames_stdcall(ANALOGDACIMPL_T c_analog_dac_impl, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL AnalogDacImpl_Destroy_stdcall(ANALOGDACIMPL_T analog_dac_impl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ANALOGDACIMPL_H */

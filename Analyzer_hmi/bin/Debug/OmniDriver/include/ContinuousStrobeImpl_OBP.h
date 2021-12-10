/**
 * File: ContinuousStrobeImpl_OBP.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * ContinuousStrobeImpl_OBP.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/continuousstrobe/ContinuousStrobeImpl_OBP
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CONTINUOUSSTROBEIMPL_OBP_H
#define CONTINUOUSSTROBEIMPL_OBP_H
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

CLASS_TOKEN EXPORTED ContinuousStrobeImpl_OBP : public ContinuousStrobeImpl // CPPClass.tag001
{
public: 
	ContinuousStrobeImpl_OBP(OceanBinaryProtocolProvider& obp, USBInterface& usbInt);
	void setContinuousStrobeDelay(int usec);
	JStringArray getFeatureGUIClassnames();
	~ContinuousStrobeImpl_OBP();
	// No public default Java constructor; creating one:
	ContinuousStrobeImpl_OBP();
	// No public Java copy constructor; creating one:
	ContinuousStrobeImpl_OBP(const ContinuousStrobeImpl_OBP &that);
	// Creating assignment operator declaration:
	ContinuousStrobeImpl_OBP &operator=(const ContinuousStrobeImpl_OBP &that);

private:
	jmethodID mid_ContinuousStrobeImpl_OBP1089;
	jmethodID mid_setContinuousStrobeDelay1090;
	jmethodID mid_getFeatureGUIClassnames1091;
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
#ifndef EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_OBP_T
#define EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_OBP_T
	typedef void* CONTINUOUSSTROBEIMPL_OBP_T;
#endif /* EXTERN_TYPEDEF_CONTINUOUSSTROBEIMPL_OBP_T */

	// No public default Java constructor; creating one:
	EXPORTED CONTINUOUSSTROBEIMPL_OBP_T ContinuousStrobeImpl_OBP_Create();
	EXPORTED CONTINUOUSSTROBEIMPL_OBP_T ContinuousStrobeImpl_OBP_Create_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt);
	EXPORTED void ContinuousStrobeImpl_OBP_setContinuousStrobeDelay(CONTINUOUSSTROBEIMPL_OBP_T c_continuous_strobe_impl_o_b_p, int usec);
	EXPORTED void ContinuousStrobeImpl_OBP_getFeatureGUIClassnames(CONTINUOUSSTROBEIMPL_OBP_T c_continuous_strobe_impl_o_b_p, JSTRINGARRAY_T retval);
	EXPORTED void ContinuousStrobeImpl_OBP_Destroy(CONTINUOUSSTROBEIMPL_OBP_T continuous_strobe_impl_o_b_p);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED CONTINUOUSSTROBEIMPL_OBP_T STDCALL ContinuousStrobeImpl_OBP_Create_stdcall_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt);
	EXPORTED void STDCALL ContinuousStrobeImpl_OBP_setContinuousStrobeDelay_stdcall(CONTINUOUSSTROBEIMPL_OBP_T c_continuous_strobe_impl_o_b_p, int usec);
	EXPORTED void STDCALL ContinuousStrobeImpl_OBP_getFeatureGUIClassnames_stdcall(CONTINUOUSSTROBEIMPL_OBP_T c_continuous_strobe_impl_o_b_p, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL ContinuousStrobeImpl_OBP_Destroy_stdcall(CONTINUOUSSTROBEIMPL_OBP_T continuous_strobe_impl_o_b_p);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CONTINUOUSSTROBEIMPL_OBP_H */
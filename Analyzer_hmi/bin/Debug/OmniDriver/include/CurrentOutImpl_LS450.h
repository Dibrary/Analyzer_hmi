/**
 * File: CurrentOutImpl_LS450.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * CurrentOutImpl_LS450.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/currentout/CurrentOutImpl_LS450
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CURRENTOUTIMPL_LS450_H
#define CURRENTOUTIMPL_LS450_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SingleStrobeImpl.h"
#include "USBInterface.h"
#include "USBEndpointDescriptor.h"
#include "JStringArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SingleStrobeImpl;
class USBInterface;
class USBEndpointDescriptor;
class JStringArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED CurrentOutImpl_LS450 : public SingleStrobeImpl // CPPClass.tag001
{
public: 
	CurrentOutImpl_LS450(USBInterface& usbInt, USBEndpointDescriptor& endPoint);
	double analogOutCountsToMilliamps(int counts);
	int getDACIncrement();
	int getDACMaximum();
	int getDACMinimum();
	void setDACCounts(int counts);
	JStringArray getFeatureGUIClassnames();
	~CurrentOutImpl_LS450();
	// No public default Java constructor; creating one:
	CurrentOutImpl_LS450();
	// No public Java copy constructor; creating one:
	CurrentOutImpl_LS450(const CurrentOutImpl_LS450 &that);
	// Creating assignment operator declaration:
	CurrentOutImpl_LS450 &operator=(const CurrentOutImpl_LS450 &that);

private:
	jmethodID mid_CurrentOutImpl_LS4501119;
	jmethodID mid_analogOutCountsToMilliamps1120;
	jmethodID mid_getDACIncrement1121;
	jmethodID mid_getDACMaximum1122;
	jmethodID mid_getDACMinimum1123;
	jmethodID mid_setDACCounts1124;
	jmethodID mid_getFeatureGUIClassnames1125;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SINGLESTROBEIMPL_T
#define EXTERN_TYPEDEF_SINGLESTROBEIMPL_T
	typedef void* SINGLESTROBEIMPL_T;
#endif /* EXTERN_TYPEDEF_SINGLESTROBEIMPL_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
#define EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
	typedef void* USBENDPOINTDESCRIPTOR_T;
#endif /* EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_CURRENTOUTIMPL_LS450_T
#define EXTERN_TYPEDEF_CURRENTOUTIMPL_LS450_T
	typedef void* CURRENTOUTIMPL_LS450_T;
#endif /* EXTERN_TYPEDEF_CURRENTOUTIMPL_LS450_T */

	// No public default Java constructor; creating one:
	EXPORTED CURRENTOUTIMPL_LS450_T CurrentOutImpl_LS450_Create();
	EXPORTED CURRENTOUTIMPL_LS450_T CurrentOutImpl_LS450_Create_1(USBINTERFACE_T usbInt, USBENDPOINTDESCRIPTOR_T endPoint);
	EXPORTED double CurrentOutImpl_LS450_analogOutCountsToMilliamps(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, int counts);
	EXPORTED int CurrentOutImpl_LS450_getDACIncrement(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED int CurrentOutImpl_LS450_getDACMaximum(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED int CurrentOutImpl_LS450_getDACMinimum(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED void CurrentOutImpl_LS450_setDACCounts(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, int counts);
	EXPORTED void CurrentOutImpl_LS450_getFeatureGUIClassnames(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, JSTRINGARRAY_T retval);
	EXPORTED void CurrentOutImpl_LS450_Destroy(CURRENTOUTIMPL_LS450_T current_out_impl_l_s450);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED CURRENTOUTIMPL_LS450_T STDCALL CurrentOutImpl_LS450_Create_stdcall_1(USBINTERFACE_T usbInt, USBENDPOINTDESCRIPTOR_T endPoint);
	EXPORTED double STDCALL CurrentOutImpl_LS450_analogOutCountsToMilliamps_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, int counts);
	EXPORTED int STDCALL CurrentOutImpl_LS450_getDACIncrement_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED int STDCALL CurrentOutImpl_LS450_getDACMaximum_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED int STDCALL CurrentOutImpl_LS450_getDACMinimum_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450);
	EXPORTED void STDCALL CurrentOutImpl_LS450_setDACCounts_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, int counts);
	EXPORTED void STDCALL CurrentOutImpl_LS450_getFeatureGUIClassnames_stdcall(CURRENTOUTIMPL_LS450_T c_current_out_impl_l_s450, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL CurrentOutImpl_LS450_Destroy_stdcall(CURRENTOUTIMPL_LS450_T current_out_impl_l_s450);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CURRENTOUTIMPL_LS450_H */
/**
 * File: VIS_NIR_LightSourceImpl.h
 * Autogenerated on Fri Mar 23 13:38:42 EDT 2018 based on
 * VIS_NIR_LightSourceImpl.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/visnirlightsource/VIS_NIR_LightSourceImpl
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef VIS_NIR_LIGHTSOURCEIMPL_H
#define VIS_NIR_LIGHTSOURCEIMPL_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBFeature.h"
#include "USBInterface.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBFeature;
class USBInterface;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED VIS_NIR_LightSourceImpl : public USBFeature // CPPClass.tag001
{
public: 
	VIS_NIR_LightSourceImpl(USBInterface& usbInt);
	ShortArray getPOTValues();
	void setPOTValue(int pot, short value);
	void setNIRLampOn(short lampOn);
	short isNIRLampOn();
	void setVisLampOn(short lampOn);
	short isVisLampOn();
	void setVisLampIntensity(short intens);
	short getVisLampIntensity();
	void setNIRLampIntensity(short intens);
	short getNIRLampIntensity();
	int getLampIntensityMinimum();
	int getLampIntensityMaximum();
	int getLampIntensityIncrement();
	void initialize();
	~VIS_NIR_LightSourceImpl();
	// No public default Java constructor; creating one:
	VIS_NIR_LightSourceImpl();
	// No public Java copy constructor; creating one:
	VIS_NIR_LightSourceImpl(const VIS_NIR_LightSourceImpl &that);
	// Creating assignment operator declaration:
	VIS_NIR_LightSourceImpl &operator=(const VIS_NIR_LightSourceImpl &that);

private:
	jmethodID mid_VIS_NIR_LightSourceImpl2346;
	jmethodID mid_getPOTValues2347;
	jmethodID mid_setPOTValue2348;
	jmethodID mid_setNIRLampOn2349;
	jmethodID mid_isNIRLampOn2350;
	jmethodID mid_setVisLampOn2351;
	jmethodID mid_isVisLampOn2352;
	jmethodID mid_setVisLampIntensity2353;
	jmethodID mid_getVisLampIntensity2354;
	jmethodID mid_setNIRLampIntensity2355;
	jmethodID mid_getNIRLampIntensity2356;
	jmethodID mid_getLampIntensityMinimum2357;
	jmethodID mid_getLampIntensityMaximum2358;
	jmethodID mid_getLampIntensityIncrement2359;
	jmethodID mid_initialize2360;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBFEATURE_T
#define EXTERN_TYPEDEF_USBFEATURE_T
	typedef void* USBFEATURE_T;
#endif /* EXTERN_TYPEDEF_USBFEATURE_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_VIS_NIR_LIGHTSOURCEIMPL_T
#define EXTERN_TYPEDEF_VIS_NIR_LIGHTSOURCEIMPL_T
	typedef void* VIS_NIR_LIGHTSOURCEIMPL_T;
#endif /* EXTERN_TYPEDEF_VIS_NIR_LIGHTSOURCEIMPL_T */

	// No public default Java constructor; creating one:
	EXPORTED VIS_NIR_LIGHTSOURCEIMPL_T VIS_NIR_LightSourceImpl_Create();
	EXPORTED VIS_NIR_LIGHTSOURCEIMPL_T VIS_NIR_LightSourceImpl_Create_1(USBINTERFACE_T usbInt);
	EXPORTED void VIS_NIR_LightSourceImpl_getPOTValues(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, SHORTARRAY_T retval);
	EXPORTED void VIS_NIR_LightSourceImpl_setPOTValue(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, int pot, short value);
	EXPORTED void VIS_NIR_LightSourceImpl_setNIRLampOn(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short lampOn);
	EXPORTED short VIS_NIR_LightSourceImpl_isNIRLampOn(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void VIS_NIR_LightSourceImpl_setVisLampOn(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short lampOn);
	EXPORTED short VIS_NIR_LightSourceImpl_isVisLampOn(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void VIS_NIR_LightSourceImpl_setVisLampIntensity(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short intens);
	EXPORTED short VIS_NIR_LightSourceImpl_getVisLampIntensity(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void VIS_NIR_LightSourceImpl_setNIRLampIntensity(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short intens);
	EXPORTED short VIS_NIR_LightSourceImpl_getNIRLampIntensity(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int VIS_NIR_LightSourceImpl_getLampIntensityMinimum(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int VIS_NIR_LightSourceImpl_getLampIntensityMaximum(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int VIS_NIR_LightSourceImpl_getLampIntensityIncrement(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void VIS_NIR_LightSourceImpl_initialize(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void VIS_NIR_LightSourceImpl_Destroy(VIS_NIR_LIGHTSOURCEIMPL_T vis_nir_lightsourceimpl);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED VIS_NIR_LIGHTSOURCEIMPL_T STDCALL VIS_NIR_LightSourceImpl_Create_stdcall_1(USBINTERFACE_T usbInt);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_getPOTValues_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, SHORTARRAY_T retval);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_setPOTValue_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, int pot, short value);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_setNIRLampOn_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short lampOn);
	EXPORTED short STDCALL VIS_NIR_LightSourceImpl_isNIRLampOn_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_setVisLampOn_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short lampOn);
	EXPORTED short STDCALL VIS_NIR_LightSourceImpl_isVisLampOn_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_setVisLampIntensity_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short intens);
	EXPORTED short STDCALL VIS_NIR_LightSourceImpl_getVisLampIntensity_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_setNIRLampIntensity_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl, short intens);
	EXPORTED short STDCALL VIS_NIR_LightSourceImpl_getNIRLampIntensity_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int STDCALL VIS_NIR_LightSourceImpl_getLampIntensityMinimum_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int STDCALL VIS_NIR_LightSourceImpl_getLampIntensityMaximum_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED int STDCALL VIS_NIR_LightSourceImpl_getLampIntensityIncrement_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_initialize_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T c_vis_nir_lightsourceimpl);
	EXPORTED void STDCALL VIS_NIR_LightSourceImpl_Destroy_stdcall(VIS_NIR_LIGHTSOURCEIMPL_T vis_nir_lightsourceimpl);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* VIS_NIR_LIGHTSOURCEIMPL_H */

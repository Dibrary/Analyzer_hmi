/**
 * File: USBProductInfo.h
 * Autogenerated on Fri Mar 23 13:38:29 EDT 2018 based on
 * USBProductInfo.java
 * for the Java class
 * com/oceanoptics/omnidriver/constants/USBProductInfo
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef USBPRODUCTINFO_H
#define USBPRODUCTINFO_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JString;
class USBProductInfo;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED USBProductInfo : public BaseJavaClass // CPPClass.tag001
{
public: 
	USBProductInfo(JString& name, JString& className, int vendorID, int productID);
	USBProductInfo getProductInfo(int vendorID, int productID);
	~USBProductInfo();
	// No public default Java constructor; creating one:
	USBProductInfo();
	// No public Java copy constructor; creating one:
	USBProductInfo(const USBProductInfo &that);
	// Creating assignment operator declaration:
	USBProductInfo &operator=(const USBProductInfo &that);
	int vendorID;
	int productID;
	int OOI_VENDOR_ID;
	int USB2000_PRODUCT_ID;
	int ADC1000USB_PRODUCT_ID;
	int SAS_PRODUCT_ID;
	int HR2000_PRODUCT_ID;
	int NIR512_PRODUCT_ID;
	int NIR256_PRODUCT_ID;
	int HR4000_PRODUCT_ID;
	int USB650_PRODUCT_ID;
	int HR2000Plus_PRODUCT_ID;
	int QE65000_PRODUCT_ID;
	int USB2000Plus_PRODUCT_ID;
	int FLAME_NIR128B_PRODUCT_ID;
	int OCEAN_OPTICS_FLAMEU_PID;
	int USB4000_PRODUCT_ID;
	int USB325_PRODUCT_ID;
	int USB250_PRODUCT_ID;
	int USB500_PRODUCT_ID;
	int S8378_PRODUCT_ID;
	int DRAGON_PRODUCT_ID;
	int TORUS_USB_PRODUCT_ID;
	int MAYA_PRO_2000_PRODUCT_ID;
	int MAYA2000_PRODUCT_ID;
	int APEX_PRODUCT_ID;
	int MAYA_LSL_PRODUCT_ID;
	int JAZ_PRODUCT_ID;
	int FLAMEX_PRODUCT_ID;
	int BLAZE_PRODUCT_ID;
	int NIRQUEST256_PRODUCT_ID;
	int NIRQUEST512_PRODUCT_ID;
	int STS_PRODUCT_ID;
	int QEPRO_PRODUCT_ID;
	int PANCAKE_PRODUCT_ID;
	int VENTANA_PRODUCT_ID;
	int W1064M_PRODUCT_ID;
	int OCEAN_OPTICS_1064VNIR_PID;
	int DEFAULT_PRODUCT_ID;
	int CENTICE_VENDOR_ID;
	int MMSRAMAN_PRODUCT_ID;
	int FLUXDATA_VENDOR_ID;
	int FLUXDATA_PRODUCT_ID;
	int ISS_ID;
	int LS450_ID;
	int ISS_UV_ID;
	int DA_VN_ID;
	int DA_UV_ID;

private:
	jmethodID mid_USBProductInfo685;
	jmethodID mid_getProductInfo686;
	jfieldID fid_name;
	jfieldID fid_className;
	jfieldID fid_vendorID;
	jfieldID fid_productID;
	jfieldID fid_OOI_VENDOR_ID;
	jfieldID fid_USB2000_PRODUCT_ID;
	jfieldID fid_ADC1000USB_PRODUCT_ID;
	jfieldID fid_SAS_PRODUCT_ID;
	jfieldID fid_HR2000_PRODUCT_ID;
	jfieldID fid_NIR512_PRODUCT_ID;
	jfieldID fid_NIR256_PRODUCT_ID;
	jfieldID fid_HR4000_PRODUCT_ID;
	jfieldID fid_USB650_PRODUCT_ID;
	jfieldID fid_HR2000Plus_PRODUCT_ID;
	jfieldID fid_QE65000_PRODUCT_ID;
	jfieldID fid_USB2000Plus_PRODUCT_ID;
	jfieldID fid_FLAME_NIR128B_PRODUCT_ID;
	jfieldID fid_OCEAN_OPTICS_FLAMEU_PID;
	jfieldID fid_USB4000_PRODUCT_ID;
	jfieldID fid_USB325_PRODUCT_ID;
	jfieldID fid_USB250_PRODUCT_ID;
	jfieldID fid_USB500_PRODUCT_ID;
	jfieldID fid_S8378_PRODUCT_ID;
	jfieldID fid_DRAGON_PRODUCT_ID;
	jfieldID fid_TORUS_USB_PRODUCT_ID;
	jfieldID fid_MAYA_PRO_2000_PRODUCT_ID;
	jfieldID fid_MAYA2000_PRODUCT_ID;
	jfieldID fid_APEX_PRODUCT_ID;
	jfieldID fid_MAYA_LSL_PRODUCT_ID;
	jfieldID fid_JAZ_PRODUCT_ID;
	jfieldID fid_FLAMEX_PRODUCT_ID;
	jfieldID fid_BLAZE_PRODUCT_ID;
	jfieldID fid_NIRQUEST256_PRODUCT_ID;
	jfieldID fid_NIRQUEST512_PRODUCT_ID;
	jfieldID fid_STS_PRODUCT_ID;
	jfieldID fid_QEPRO_PRODUCT_ID;
	jfieldID fid_PANCAKE_PRODUCT_ID;
	jfieldID fid_VENTANA_PRODUCT_ID;
	jfieldID fid_W1064M_PRODUCT_ID;
	jfieldID fid_OCEAN_OPTICS_1064VNIR_PID;
	jfieldID fid_DEFAULT_PRODUCT_ID;
	jfieldID fid_CENTICE_VENDOR_ID;
	jfieldID fid_MMSRAMAN_PRODUCT_ID;
	jfieldID fid_FLUXDATA_VENDOR_ID;
	jfieldID fid_FLUXDATA_PRODUCT_ID;
	jfieldID fid_ISS_ID;
	jfieldID fid_LS450_ID;
	jfieldID fid_ISS_UV_ID;
	jfieldID fid_DA_VN_ID;
	jfieldID fid_DA_UV_ID;
	jfieldID fid_products;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_USBPRODUCTINFO_T
#define EXTERN_TYPEDEF_USBPRODUCTINFO_T
	typedef void* USBPRODUCTINFO_T;
#endif /* EXTERN_TYPEDEF_USBPRODUCTINFO_T */

	// No public default Java constructor; creating one:
	EXPORTED USBPRODUCTINFO_T USBProductInfo_Create();
	EXPORTED USBPRODUCTINFO_T USBProductInfo_Create_1(JSTRING_T name, JSTRING_T className, int vendorID, int productID);
	EXPORTED void USBProductInfo_getProductInfo(USBPRODUCTINFO_T c_usbproductinfo, int vendorID, int productID, USBPRODUCTINFO_T retval);
	EXPORTED void USBProductInfo_Destroy(USBPRODUCTINFO_T usbproductinfo);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED USBPRODUCTINFO_T STDCALL USBProductInfo_Create_stdcall_1(JSTRING_T name, JSTRING_T className, int vendorID, int productID);
	EXPORTED void STDCALL USBProductInfo_getProductInfo_stdcall(USBPRODUCTINFO_T c_usbproductinfo, int vendorID, int productID, USBPRODUCTINFO_T retval);
	EXPORTED void STDCALL USBProductInfo_Destroy_stdcall(USBPRODUCTINFO_T usbproductinfo);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* USBPRODUCTINFO_H */

/**
 * File: GPIOImpl_OBP.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * GPIOImpl_OBP.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/gpio/GPIOImpl_OBP
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GPIOIMPL_OBP_H
#define GPIOIMPL_OBP_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "GPIOImpl.h"
#include "OceanBinaryProtocolProvider.h"
#include "USBInterface.h"
#include "BitSet.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class GPIOImpl;
class OceanBinaryProtocolProvider;
class USBInterface;
class BitSet;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GPIOImpl_OBP : public GPIOImpl // CPPClass.tag001
{
public: 
	GPIOImpl_OBP(OceanBinaryProtocolProvider& obp, USBInterface& usbInt, int numberOfGPIO);
	BitSet getValueBits();
	int getValueBit(int bitNumber);
	void setValueAllBits(BitSet& bitSet);
	void setValueBitmask(short value);
	void setValueBit(int bit, short value);
	BitSet getDirectionBits();
	void setDirectionAllBits(BitSet& bitSet);
	void setDirectionBitmask(short value);
	void setDirectionBit(int bit, short value);
	BitSet getMuxBits();
	int getNumberOfPins();
	void setMuxAllBits(BitSet& bitSet);
	void setMuxBitmask(short bitmask);
	void setMuxBit(int bit, short value);
	int getTotalGPIOBits();
	~GPIOImpl_OBP();
	// No public default Java constructor; creating one:
	GPIOImpl_OBP();
	// No public Java copy constructor; creating one:
	GPIOImpl_OBP(const GPIOImpl_OBP &that);
	// Creating assignment operator declaration:
	GPIOImpl_OBP &operator=(const GPIOImpl_OBP &that);

private:
	jmethodID mid_GPIOImpl_OBP1323;
	jmethodID mid_getValueBits1324;
	jmethodID mid_getValueBit1325;
	jmethodID mid_setValueAllBits1326;
	jmethodID mid_setValueBitmask1327;
	jmethodID mid_setValueBit1328;
	jmethodID mid_getDirectionBits1329;
	jmethodID mid_setDirectionAllBits1330;
	jmethodID mid_setDirectionBitmask1331;
	jmethodID mid_setDirectionBit1332;
	jmethodID mid_getMuxBits1333;
	jmethodID mid_getNumberOfPins1334;
	jmethodID mid_setMuxAllBits1335;
	jmethodID mid_setMuxBitmask1336;
	jmethodID mid_setMuxBit1337;
	jmethodID mid_getTotalGPIOBits1338;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_GPIOIMPL_T
#define EXTERN_TYPEDEF_GPIOIMPL_T
	typedef void* GPIOIMPL_T;
#endif /* EXTERN_TYPEDEF_GPIOIMPL_T */
#ifndef EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
#define EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T
	typedef void* OCEANBINARYPROTOCOLPROVIDER_T;
#endif /* EXTERN_TYPEDEF_OCEANBINARYPROTOCOLPROVIDER_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */
#ifndef EXTERN_TYPEDEF_GPIOIMPL_OBP_T
#define EXTERN_TYPEDEF_GPIOIMPL_OBP_T
	typedef void* GPIOIMPL_OBP_T;
#endif /* EXTERN_TYPEDEF_GPIOIMPL_OBP_T */

	// No public default Java constructor; creating one:
	EXPORTED GPIOIMPL_OBP_T GPIOImpl_OBP_Create();
	EXPORTED GPIOIMPL_OBP_T GPIOImpl_OBP_Create_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt, int numberOfGPIO);
	EXPORTED void GPIOImpl_OBP_getValueBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED int GPIOImpl_OBP_getValueBit(GPIOIMPL_OBP_T c_gpioimpl_obp, int bitNumber);
	EXPORTED void GPIOImpl_OBP_setValueAllBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void GPIOImpl_OBP_setValueBitmask(GPIOIMPL_OBP_T c_gpioimpl_obp, short value);
	EXPORTED void GPIOImpl_OBP_setValueBit(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED void GPIOImpl_OBP_getDirectionBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED void GPIOImpl_OBP_setDirectionAllBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void GPIOImpl_OBP_setDirectionBitmask(GPIOIMPL_OBP_T c_gpioimpl_obp, short value);
	EXPORTED void GPIOImpl_OBP_setDirectionBit(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED void GPIOImpl_OBP_getMuxBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED int GPIOImpl_OBP_getNumberOfPins(GPIOIMPL_OBP_T c_gpioimpl_obp);
	EXPORTED void GPIOImpl_OBP_setMuxAllBits(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void GPIOImpl_OBP_setMuxBitmask(GPIOIMPL_OBP_T c_gpioimpl_obp, short bitmask);
	EXPORTED void GPIOImpl_OBP_setMuxBit(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED int GPIOImpl_OBP_getTotalGPIOBits(GPIOIMPL_OBP_T c_gpioimpl_obp);
	EXPORTED void GPIOImpl_OBP_Destroy(GPIOIMPL_OBP_T gpioimpl_obp);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED GPIOIMPL_OBP_T STDCALL GPIOImpl_OBP_Create_stdcall_1(OCEANBINARYPROTOCOLPROVIDER_T obp, USBINTERFACE_T usbInt, int numberOfGPIO);
	EXPORTED void STDCALL GPIOImpl_OBP_getValueBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED int STDCALL GPIOImpl_OBP_getValueBit_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, int bitNumber);
	EXPORTED void STDCALL GPIOImpl_OBP_setValueAllBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_OBP_setValueBitmask_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, short value);
	EXPORTED void STDCALL GPIOImpl_OBP_setValueBit_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED void STDCALL GPIOImpl_OBP_getDirectionBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED void STDCALL GPIOImpl_OBP_setDirectionAllBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_OBP_setDirectionBitmask_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, short value);
	EXPORTED void STDCALL GPIOImpl_OBP_setDirectionBit_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED void STDCALL GPIOImpl_OBP_getMuxBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T retval);
	EXPORTED int STDCALL GPIOImpl_OBP_getNumberOfPins_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp);
	EXPORTED void STDCALL GPIOImpl_OBP_setMuxAllBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_OBP_setMuxBitmask_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, short bitmask);
	EXPORTED void STDCALL GPIOImpl_OBP_setMuxBit_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp, int bit, short value);
	EXPORTED int STDCALL GPIOImpl_OBP_getTotalGPIOBits_stdcall(GPIOIMPL_OBP_T c_gpioimpl_obp);
	EXPORTED void STDCALL GPIOImpl_OBP_Destroy_stdcall(GPIOIMPL_OBP_T gpioimpl_obp);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GPIOIMPL_OBP_H */

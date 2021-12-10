/**
 * File: GPIOImpl_Jaz.h
 * Autogenerated on Fri Mar 23 13:38:35 EDT 2018 based on
 * GPIOImpl_Jaz.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/gpio/GPIOImpl_Jaz
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef GPIOIMPL_JAZ_H
#define GPIOIMPL_JAZ_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JStringArray.h"
#include "BitSet.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class JStringArray;
class BitSet;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED GPIOImpl_Jaz : public BaseJavaClass // CPPClass.tag001
{
public: 
	int getTotalGPIOBits();
	int getNumberOfPins();
	JStringArray getFeatureGUIClassnames();
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
	void setMuxAllBits(BitSet& bitSet);
	void setMuxBitmask(short value);
	void setMuxBit(int bit, short value);
	~GPIOImpl_Jaz();
	// No public default Java constructor; creating one:
	GPIOImpl_Jaz();
	// No public Java copy constructor; creating one:
	GPIOImpl_Jaz(const GPIOImpl_Jaz &that);
	// Creating assignment operator declaration:
	GPIOImpl_Jaz &operator=(const GPIOImpl_Jaz &that);

private:
	jmethodID mid_getTotalGPIOBits1307;
	jmethodID mid_getNumberOfPins1308;
	jmethodID mid_getFeatureGUIClassnames1309;
	jmethodID mid_getValueBits1310;
	jmethodID mid_getValueBit1311;
	jmethodID mid_setValueAllBits1312;
	jmethodID mid_setValueBitmask1313;
	jmethodID mid_setValueBit1314;
	jmethodID mid_getDirectionBits1315;
	jmethodID mid_setDirectionAllBits1316;
	jmethodID mid_setDirectionBitmask1317;
	jmethodID mid_setDirectionBit1318;
	jmethodID mid_getMuxBits1319;
	jmethodID mid_setMuxAllBits1320;
	jmethodID mid_setMuxBitmask1321;
	jmethodID mid_setMuxBit1322;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_JSTRINGARRAY_T
#define EXTERN_TYPEDEF_JSTRINGARRAY_T
	typedef void* JSTRINGARRAY_T;
#endif /* EXTERN_TYPEDEF_JSTRINGARRAY_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */
#ifndef EXTERN_TYPEDEF_GPIOIMPL_JAZ_T
#define EXTERN_TYPEDEF_GPIOIMPL_JAZ_T
	typedef void* GPIOIMPL_JAZ_T;
#endif /* EXTERN_TYPEDEF_GPIOIMPL_JAZ_T */

	// No public default Java constructor; creating one:
	EXPORTED GPIOIMPL_JAZ_T GPIOImpl_Jaz_Create();
	EXPORTED int GPIOImpl_Jaz_getTotalGPIOBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz);
	EXPORTED int GPIOImpl_Jaz_getNumberOfPins(GPIOIMPL_JAZ_T c_gpioimpl_jaz);
	EXPORTED void GPIOImpl_Jaz_getFeatureGUIClassnames(GPIOIMPL_JAZ_T c_gpioimpl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void GPIOImpl_Jaz_getValueBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED int GPIOImpl_Jaz_getValueBit(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bitNumber);
	EXPORTED void GPIOImpl_Jaz_setValueAllBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void GPIOImpl_Jaz_setValueBitmask(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void GPIOImpl_Jaz_setValueBit(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void GPIOImpl_Jaz_getDirectionBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED void GPIOImpl_Jaz_setDirectionAllBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void GPIOImpl_Jaz_setDirectionBitmask(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void GPIOImpl_Jaz_setDirectionBit(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void GPIOImpl_Jaz_getMuxBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED void GPIOImpl_Jaz_setMuxAllBits(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void GPIOImpl_Jaz_setMuxBitmask(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void GPIOImpl_Jaz_setMuxBit(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void GPIOImpl_Jaz_Destroy(GPIOIMPL_JAZ_T gpioimpl_jaz);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL GPIOImpl_Jaz_getTotalGPIOBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz);
	EXPORTED int STDCALL GPIOImpl_Jaz_getNumberOfPins_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz);
	EXPORTED void STDCALL GPIOImpl_Jaz_getFeatureGUIClassnames_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, JSTRINGARRAY_T retval);
	EXPORTED void STDCALL GPIOImpl_Jaz_getValueBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED int STDCALL GPIOImpl_Jaz_getValueBit_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bitNumber);
	EXPORTED void STDCALL GPIOImpl_Jaz_setValueAllBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_Jaz_setValueBitmask_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_setValueBit_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_getDirectionBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED void STDCALL GPIOImpl_Jaz_setDirectionAllBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_Jaz_setDirectionBitmask_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_setDirectionBit_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_getMuxBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T retval);
	EXPORTED void STDCALL GPIOImpl_Jaz_setMuxAllBits_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, BITSET_T bitSet);
	EXPORTED void STDCALL GPIOImpl_Jaz_setMuxBitmask_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_setMuxBit_stdcall(GPIOIMPL_JAZ_T c_gpioimpl_jaz, int bit, short value);
	EXPORTED void STDCALL GPIOImpl_Jaz_Destroy_stdcall(GPIOIMPL_JAZ_T gpioimpl_jaz);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* GPIOIMPL_JAZ_H */
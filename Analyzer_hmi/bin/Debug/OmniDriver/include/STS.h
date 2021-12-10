/**
 * File: STS.h
 * Autogenerated on Fri Mar 23 13:39:12 EDT 2018 based on
 * STS.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/sts/STS
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef STS_H
#define STS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "STSBase.h"
#include "USBInterface.h"
#include "GUIProviderArray.h"
#include "BitSet.h"
#include "ExternalTriggerModeArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class STSBase;
class USBInterface;
class GUIProviderArray;
class BitSet;
class ExternalTriggerModeArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED STS : public STSBase // CPPClass.tag001
{
public: 
	STS();
	STS(int i);
	void initFeatures(USBInterface& usb);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	double getSingleStrobeCountsToMicros(int counts);
	int getSingleStrobeHigh();
	int getSingleStrobeIncrement();
	int getSingleStrobeLow();
	int getSingleStrobeMaximum();
	int getSingleStrobeMinimum();
	void setSingleStrobeHigh(int counts);
	void setSingleStrobeLow(int counts);
	double continuousStrobeCountsToMicros(int counts);
	int getContinuousStrobeDelayIncrement(int magnitude);
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayMinimum();
	void setContinuousStrobeDelay(int durationOfPhase);
	void setContinuousModeType(short mode);
	void setDelayAfterIntegration(int delay);
	short getContinuousModeType();
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	BitSet getDirectionBits();
	BitSet getMuxBits();
	int getNumberOfPins();
	int getTotalGPIOBits();
	int getValueBit(int bitNumber);
	BitSet getValueBits();
	void setDirectionAllBits(BitSet& bitSet);
	void setDirectionBit(int bit, short value);
	void setDirectionBitmask(short bitmask);
	void setMuxAllBits(BitSet& bitSet);
	void setMuxBit(int bit, short value);
	void setMuxBitmask(short bitmask);
	void setValueAllBits(BitSet& bitSet);
	void setValueBit(int bit, short value);
	void setValueBitmask(short bitmask);
	int getExternalTriggerDelayIncrement();
	int getExternalTriggerDelayMaximum();
	int getExternalTriggerDelayMinimum();
	void setExternalTriggerDelay(int counts);
	double triggerDelayCountsToMicroseconds(int counts);
	ExternalTriggerModeArray getExternalTriggerModes();
	void setExternalTriggerMode(int mode);
	void sendSimulatedTriggerSignal();
	~STS();
	// No public Java copy constructor; creating one:
	STS(const STS &that);
	// Creating assignment operator declaration:
	STS &operator=(const STS &that);

private:
	jmethodID mid_STS5695;
	jmethodID mid_STS5696;
	jmethodID mid_initFeatures5697;
	jmethodID mid_openSpectrometer5698;
	jmethodID mid_getGUIFeatures5699;
	jmethodID mid_getSingleStrobeCountsToMicros5700;
	jmethodID mid_getSingleStrobeHigh5701;
	jmethodID mid_getSingleStrobeIncrement5702;
	jmethodID mid_getSingleStrobeLow5703;
	jmethodID mid_getSingleStrobeMaximum5704;
	jmethodID mid_getSingleStrobeMinimum5705;
	jmethodID mid_setSingleStrobeHigh5706;
	jmethodID mid_setSingleStrobeLow5707;
	jmethodID mid_continuousStrobeCountsToMicros5708;
	jmethodID mid_getContinuousStrobeDelayIncrement5709;
	jmethodID mid_getContinuousStrobeDelayMaximum5710;
	jmethodID mid_getContinuousStrobeDelayMinimum5711;
	jmethodID mid_setContinuousStrobeDelay5712;
	jmethodID mid_setContinuousModeType5713;
	jmethodID mid_setDelayAfterIntegration5714;
	jmethodID mid_getContinuousModeType5715;
	jmethodID mid_getDelayAfterIntegration5716;
	jmethodID mid_setContinuousEnable5717;
	jmethodID mid_getContinuousEnable5718;
	jmethodID mid_getDirectionBits5719;
	jmethodID mid_getMuxBits5720;
	jmethodID mid_getNumberOfPins5721;
	jmethodID mid_getTotalGPIOBits5722;
	jmethodID mid_getValueBit5723;
	jmethodID mid_getValueBits5724;
	jmethodID mid_setDirectionAllBits5725;
	jmethodID mid_setDirectionBit5726;
	jmethodID mid_setDirectionBitmask5727;
	jmethodID mid_setMuxAllBits5728;
	jmethodID mid_setMuxBit5729;
	jmethodID mid_setMuxBitmask5730;
	jmethodID mid_setValueAllBits5731;
	jmethodID mid_setValueBit5732;
	jmethodID mid_setValueBitmask5733;
	jmethodID mid_getExternalTriggerDelayIncrement5734;
	jmethodID mid_getExternalTriggerDelayMaximum5735;
	jmethodID mid_getExternalTriggerDelayMinimum5736;
	jmethodID mid_setExternalTriggerDelay5737;
	jmethodID mid_triggerDelayCountsToMicroseconds5738;
	jmethodID mid_getExternalTriggerModes5739;
	jmethodID mid_setExternalTriggerMode5740;
	jmethodID mid_sendSimulatedTriggerSignal5741;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_STSBASE_T
#define EXTERN_TYPEDEF_STSBASE_T
	typedef void* STSBASE_T;
#endif /* EXTERN_TYPEDEF_STSBASE_T */
#ifndef EXTERN_TYPEDEF_USBINTERFACE_T
#define EXTERN_TYPEDEF_USBINTERFACE_T
	typedef void* USBINTERFACE_T;
#endif /* EXTERN_TYPEDEF_USBINTERFACE_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_BITSET_T
#define EXTERN_TYPEDEF_BITSET_T
	typedef void* BITSET_T;
#endif /* EXTERN_TYPEDEF_BITSET_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_STS_T
#define EXTERN_TYPEDEF_STS_T
	typedef void* STS_T;
#endif /* EXTERN_TYPEDEF_STS_T */

	EXPORTED STS_T STS_Create();
	EXPORTED STS_T STS_Create_1(int i);
	EXPORTED void STS_initFeatures(STS_T c_sts, USBINTERFACE_T usb);
	EXPORTED void STS_openSpectrometer(STS_T c_sts, int index);
	EXPORTED void STS_getGUIFeatures(STS_T c_sts, GUIPROVIDERARRAY_T retval);
	EXPORTED double STS_getSingleStrobeCountsToMicros(STS_T c_sts, int counts);
	EXPORTED int STS_getSingleStrobeHigh(STS_T c_sts);
	EXPORTED int STS_getSingleStrobeIncrement(STS_T c_sts);
	EXPORTED int STS_getSingleStrobeLow(STS_T c_sts);
	EXPORTED int STS_getSingleStrobeMaximum(STS_T c_sts);
	EXPORTED int STS_getSingleStrobeMinimum(STS_T c_sts);
	EXPORTED void STS_setSingleStrobeHigh(STS_T c_sts, int counts);
	EXPORTED void STS_setSingleStrobeLow(STS_T c_sts, int counts);
	EXPORTED double STS_continuousStrobeCountsToMicros(STS_T c_sts, int counts);
	EXPORTED int STS_getContinuousStrobeDelayIncrement(STS_T c_sts, int magnitude);
	EXPORTED int STS_getContinuousStrobeDelayMaximum(STS_T c_sts);
	EXPORTED int STS_getContinuousStrobeDelayMinimum(STS_T c_sts);
	EXPORTED void STS_setContinuousStrobeDelay(STS_T c_sts, int durationOfPhase);
	EXPORTED void STS_setContinuousModeType(STS_T c_sts, short mode);
	EXPORTED void STS_setDelayAfterIntegration(STS_T c_sts, int delay);
	EXPORTED short STS_getContinuousModeType(STS_T c_sts);
	EXPORTED int STS_getDelayAfterIntegration(STS_T c_sts);
	EXPORTED void STS_setContinuousEnable(STS_T c_sts, short value);
	EXPORTED short STS_getContinuousEnable(STS_T c_sts);
	EXPORTED void STS_getDirectionBits(STS_T c_sts, BITSET_T retval);
	EXPORTED void STS_getMuxBits(STS_T c_sts, BITSET_T retval);
	EXPORTED int STS_getNumberOfPins(STS_T c_sts);
	EXPORTED int STS_getTotalGPIOBits(STS_T c_sts);
	EXPORTED int STS_getValueBit(STS_T c_sts, int bitNumber);
	EXPORTED void STS_getValueBits(STS_T c_sts, BITSET_T retval);
	EXPORTED void STS_setDirectionAllBits(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STS_setDirectionBit(STS_T c_sts, int bit, short value);
	EXPORTED void STS_setDirectionBitmask(STS_T c_sts, short bitmask);
	EXPORTED void STS_setMuxAllBits(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STS_setMuxBit(STS_T c_sts, int bit, short value);
	EXPORTED void STS_setMuxBitmask(STS_T c_sts, short bitmask);
	EXPORTED void STS_setValueAllBits(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STS_setValueBit(STS_T c_sts, int bit, short value);
	EXPORTED void STS_setValueBitmask(STS_T c_sts, short bitmask);
	EXPORTED int STS_getExternalTriggerDelayIncrement(STS_T c_sts);
	EXPORTED int STS_getExternalTriggerDelayMaximum(STS_T c_sts);
	EXPORTED int STS_getExternalTriggerDelayMinimum(STS_T c_sts);
	EXPORTED void STS_setExternalTriggerDelay(STS_T c_sts, int counts);
	EXPORTED double STS_triggerDelayCountsToMicroseconds(STS_T c_sts, int counts);
	EXPORTED void STS_getExternalTriggerModes(STS_T c_sts, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STS_setExternalTriggerMode(STS_T c_sts, int mode);
	EXPORTED void STS_sendSimulatedTriggerSignal(STS_T c_sts);
	EXPORTED void STS_Destroy(STS_T sts);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED STS_T STDCALL STS_Create_stdcall();
	EXPORTED STS_T STDCALL STS_Create_stdcall_1(int i);
	EXPORTED void STDCALL STS_initFeatures_stdcall(STS_T c_sts, USBINTERFACE_T usb);
	EXPORTED void STDCALL STS_openSpectrometer_stdcall(STS_T c_sts, int index);
	EXPORTED void STDCALL STS_getGUIFeatures_stdcall(STS_T c_sts, GUIPROVIDERARRAY_T retval);
	EXPORTED double STDCALL STS_getSingleStrobeCountsToMicros_stdcall(STS_T c_sts, int counts);
	EXPORTED int STDCALL STS_getSingleStrobeHigh_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getSingleStrobeIncrement_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getSingleStrobeLow_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getSingleStrobeMaximum_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getSingleStrobeMinimum_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_setSingleStrobeHigh_stdcall(STS_T c_sts, int counts);
	EXPORTED void STDCALL STS_setSingleStrobeLow_stdcall(STS_T c_sts, int counts);
	EXPORTED double STDCALL STS_continuousStrobeCountsToMicros_stdcall(STS_T c_sts, int counts);
	EXPORTED int STDCALL STS_getContinuousStrobeDelayIncrement_stdcall(STS_T c_sts, int magnitude);
	EXPORTED int STDCALL STS_getContinuousStrobeDelayMaximum_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getContinuousStrobeDelayMinimum_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_setContinuousStrobeDelay_stdcall(STS_T c_sts, int durationOfPhase);
	EXPORTED void STDCALL STS_setContinuousModeType_stdcall(STS_T c_sts, short mode);
	EXPORTED void STDCALL STS_setDelayAfterIntegration_stdcall(STS_T c_sts, int delay);
	EXPORTED short STDCALL STS_getContinuousModeType_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getDelayAfterIntegration_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_setContinuousEnable_stdcall(STS_T c_sts, short value);
	EXPORTED short STDCALL STS_getContinuousEnable_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_getDirectionBits_stdcall(STS_T c_sts, BITSET_T retval);
	EXPORTED void STDCALL STS_getMuxBits_stdcall(STS_T c_sts, BITSET_T retval);
	EXPORTED int STDCALL STS_getNumberOfPins_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getTotalGPIOBits_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getValueBit_stdcall(STS_T c_sts, int bitNumber);
	EXPORTED void STDCALL STS_getValueBits_stdcall(STS_T c_sts, BITSET_T retval);
	EXPORTED void STDCALL STS_setDirectionAllBits_stdcall(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STDCALL STS_setDirectionBit_stdcall(STS_T c_sts, int bit, short value);
	EXPORTED void STDCALL STS_setDirectionBitmask_stdcall(STS_T c_sts, short bitmask);
	EXPORTED void STDCALL STS_setMuxAllBits_stdcall(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STDCALL STS_setMuxBit_stdcall(STS_T c_sts, int bit, short value);
	EXPORTED void STDCALL STS_setMuxBitmask_stdcall(STS_T c_sts, short bitmask);
	EXPORTED void STDCALL STS_setValueAllBits_stdcall(STS_T c_sts, BITSET_T bitSet);
	EXPORTED void STDCALL STS_setValueBit_stdcall(STS_T c_sts, int bit, short value);
	EXPORTED void STDCALL STS_setValueBitmask_stdcall(STS_T c_sts, short bitmask);
	EXPORTED int STDCALL STS_getExternalTriggerDelayIncrement_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getExternalTriggerDelayMaximum_stdcall(STS_T c_sts);
	EXPORTED int STDCALL STS_getExternalTriggerDelayMinimum_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_setExternalTriggerDelay_stdcall(STS_T c_sts, int counts);
	EXPORTED double STDCALL STS_triggerDelayCountsToMicroseconds_stdcall(STS_T c_sts, int counts);
	EXPORTED void STDCALL STS_getExternalTriggerModes_stdcall(STS_T c_sts, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL STS_setExternalTriggerMode_stdcall(STS_T c_sts, int mode);
	EXPORTED void STDCALL STS_sendSimulatedTriggerSignal_stdcall(STS_T c_sts);
	EXPORTED void STDCALL STS_Destroy_stdcall(STS_T sts);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* STS_H */
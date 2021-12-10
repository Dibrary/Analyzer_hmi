/**
 * File: OceanFxNetwork.h
 * Autogenerated on Fri Mar 23 13:38:51 EDT 2018 based on
 * OceanFxNetwork.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/flamex/OceanFxNetwork
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef OCEANFXNETWORK_H
#define OCEANFXNETWORK_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "NextGenNetwork.h"
#include "OBPSpectrumArray.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class NextGenNetwork;
class OBPSpectrumArray;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED OceanFxNetwork : public NextGenNetwork // CPPClass.tag001
{
public: 
	int getNumberOfPixels(int index);
	void setSpectraCount(int value);
	short getBufferEnable();
	void setBufferEnable(short enable);
	int getB2BCapacity();
	void setB2BCapacity(int bufferSize);
	void clearBuffer();
	int getNumberOfBuses();
	int getIntegration();
	void setIntegration(int time);
	void requestSpectrumWithMetaData(int count);
	OBPSpectrumArray getSpectrumWithMetaData(int count);
	~OceanFxNetwork();
	// No public default Java constructor; creating one:
	OceanFxNetwork();
	// No public Java copy constructor; creating one:
	OceanFxNetwork(const OceanFxNetwork &that);
	// Creating assignment operator declaration:
	OceanFxNetwork &operator=(const OceanFxNetwork &that);

private:
	jmethodID mid_getNumberOfPixels3348;
	jmethodID mid_setSpectraCount3349;
	jmethodID mid_getBufferEnable3350;
	jmethodID mid_setBufferEnable3351;
	jmethodID mid_getB2BCapacity3352;
	jmethodID mid_setB2BCapacity3353;
	jmethodID mid_clearBuffer3354;
	jmethodID mid_getNumberOfBuses3355;
	jmethodID mid_getIntegration3356;
	jmethodID mid_setIntegration3357;
	jmethodID mid_requestSpectrumWithMetaData3358;
	jmethodID mid_getSpectrumWithMetaData3359;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_NEXTGENNETWORK_T
#define EXTERN_TYPEDEF_NEXTGENNETWORK_T
	typedef void* NEXTGENNETWORK_T;
#endif /* EXTERN_TYPEDEF_NEXTGENNETWORK_T */
#ifndef EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T
#define EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T
	typedef void* OBPSPECTRUMARRAY_T;
#endif /* EXTERN_TYPEDEF_OBPSPECTRUMARRAY_T */
#ifndef EXTERN_TYPEDEF_OCEANFXNETWORK_T
#define EXTERN_TYPEDEF_OCEANFXNETWORK_T
	typedef void* OCEANFXNETWORK_T;
#endif /* EXTERN_TYPEDEF_OCEANFXNETWORK_T */

	// No public default Java constructor; creating one:
	EXPORTED OCEANFXNETWORK_T OceanFxNetwork_Create();
	EXPORTED int OceanFxNetwork_getNumberOfPixels(OCEANFXNETWORK_T c_ocean_fx_network, int index);
	EXPORTED void OceanFxNetwork_setSpectraCount(OCEANFXNETWORK_T c_ocean_fx_network, int value);
	EXPORTED short OceanFxNetwork_getBufferEnable(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void OceanFxNetwork_setBufferEnable(OCEANFXNETWORK_T c_ocean_fx_network, short enable);
	EXPORTED int OceanFxNetwork_getB2BCapacity(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void OceanFxNetwork_setB2BCapacity(OCEANFXNETWORK_T c_ocean_fx_network, int bufferSize);
	EXPORTED void OceanFxNetwork_clearBuffer(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED int OceanFxNetwork_getNumberOfBuses(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED int OceanFxNetwork_getIntegration(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void OceanFxNetwork_setIntegration(OCEANFXNETWORK_T c_ocean_fx_network, int time);
	EXPORTED void OceanFxNetwork_requestSpectrumWithMetaData(OCEANFXNETWORK_T c_ocean_fx_network, int count);
	EXPORTED void OceanFxNetwork_getSpectrumWithMetaData(OCEANFXNETWORK_T c_ocean_fx_network, int count, OBPSPECTRUMARRAY_T retval);
	EXPORTED void OceanFxNetwork_Destroy(OCEANFXNETWORK_T ocean_fx_network);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED int STDCALL OceanFxNetwork_getNumberOfPixels_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int index);
	EXPORTED void STDCALL OceanFxNetwork_setSpectraCount_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int value);
	EXPORTED short STDCALL OceanFxNetwork_getBufferEnable_stdcall(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void STDCALL OceanFxNetwork_setBufferEnable_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, short enable);
	EXPORTED int STDCALL OceanFxNetwork_getB2BCapacity_stdcall(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void STDCALL OceanFxNetwork_setB2BCapacity_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int bufferSize);
	EXPORTED void STDCALL OceanFxNetwork_clearBuffer_stdcall(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED int STDCALL OceanFxNetwork_getNumberOfBuses_stdcall(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED int STDCALL OceanFxNetwork_getIntegration_stdcall(OCEANFXNETWORK_T c_ocean_fx_network);
	EXPORTED void STDCALL OceanFxNetwork_setIntegration_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int time);
	EXPORTED void STDCALL OceanFxNetwork_requestSpectrumWithMetaData_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int count);
	EXPORTED void STDCALL OceanFxNetwork_getSpectrumWithMetaData_stdcall(OCEANFXNETWORK_T c_ocean_fx_network, int count, OBPSPECTRUMARRAY_T retval);
	EXPORTED void STDCALL OceanFxNetwork_Destroy_stdcall(OCEANFXNETWORK_T ocean_fx_network);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* OCEANFXNETWORK_H */

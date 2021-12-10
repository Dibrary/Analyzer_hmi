/**
 * File: OceanSPI.h
 * Autogenerated on Fri Mar 23 13:38:39 EDT 2018 based on
 * OceanSPI.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/oceanspi/OceanSPI
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef OCEANSPI_H
#define OCEANSPI_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED OceanSPI : public BaseJavaClass // CPPClass.tag001
{
public: 
	CharArray getSPIBytes(CharArray& param0, int param1);
	int getNumberOfBuses();
	int getNumberOfChipSelects(int param0);
	int getMaxMasterFrequency(int param0);
	int getMaxSlaveFrequency(int param0);
	int getBusControllerMode(int param0);
	int getBusTransferMode(int param0, int param1);
	int getPolarity(int param0, int param1);
	int getChipSelectDelay(int param0);
	int getBusWaitStateDelay(int param0);
	void setClockSpeed(int param0, int param1);
	void setBusControllerMode(int param0, int param1);
	void setBusTransferMode(int param0, int param1, int param2);
	void setPolarity(int param0, int param1, int param2);
	void setChipSelectDelay(int param0, int param1);
	void setBusWaitStateDelay(int param0, int param1);
	void saveSPISettings();
	~OceanSPI();
	// No public default Java constructor; creating one:
	OceanSPI();
	// No public Java copy constructor; creating one:
	OceanSPI(const OceanSPI &that);
	// Creating assignment operator declaration:
	OceanSPI &operator=(const OceanSPI &that);

private:
	jmethodID mid_getSPIBytes1897;
	jmethodID mid_getNumberOfBuses1898;
	jmethodID mid_getNumberOfChipSelects1899;
	jmethodID mid_getMaxMasterFrequency1900;
	jmethodID mid_getMaxSlaveFrequency1901;
	jmethodID mid_getBusControllerMode1902;
	jmethodID mid_getBusTransferMode1903;
	jmethodID mid_getPolarity1904;
	jmethodID mid_getChipSelectDelay1905;
	jmethodID mid_getBusWaitStateDelay1906;
	jmethodID mid_setClockSpeed1907;
	jmethodID mid_setBusControllerMode1908;
	jmethodID mid_setBusTransferMode1909;
	jmethodID mid_setPolarity1910;
	jmethodID mid_setChipSelectDelay1911;
	jmethodID mid_setBusWaitStateDelay1912;
	jmethodID mid_saveSPISettings1913;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_OCEANSPI_T
#define EXTERN_TYPEDEF_OCEANSPI_T
	typedef void* OCEANSPI_T;
#endif /* EXTERN_TYPEDEF_OCEANSPI_T */

	// No public default Java constructor; creating one:
	EXPORTED OCEANSPI_T OceanSPI_Create();
	EXPORTED void OceanSPI_getSPIBytes(OCEANSPI_T c_ocean_s_p_i, CHARARRAY_T param0, int param1, CHARARRAY_T retval);
	EXPORTED int OceanSPI_getNumberOfBuses(OCEANSPI_T c_ocean_s_p_i);
	EXPORTED int OceanSPI_getNumberOfChipSelects(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int OceanSPI_getMaxMasterFrequency(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int OceanSPI_getMaxSlaveFrequency(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int OceanSPI_getBusControllerMode(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int OceanSPI_getBusTransferMode(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED int OceanSPI_getPolarity(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED int OceanSPI_getChipSelectDelay(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int OceanSPI_getBusWaitStateDelay(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED void OceanSPI_setClockSpeed(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void OceanSPI_setBusControllerMode(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void OceanSPI_setBusTransferMode(OCEANSPI_T c_ocean_s_p_i, int param0, int param1, int param2);
	EXPORTED void OceanSPI_setPolarity(OCEANSPI_T c_ocean_s_p_i, int param0, int param1, int param2);
	EXPORTED void OceanSPI_setChipSelectDelay(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void OceanSPI_setBusWaitStateDelay(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void OceanSPI_saveSPISettings(OCEANSPI_T c_ocean_s_p_i);
	EXPORTED void OceanSPI_Destroy(OCEANSPI_T ocean_s_p_i);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED void STDCALL OceanSPI_getSPIBytes_stdcall(OCEANSPI_T c_ocean_s_p_i, CHARARRAY_T param0, int param1, CHARARRAY_T retval);
	EXPORTED int STDCALL OceanSPI_getNumberOfBuses_stdcall(OCEANSPI_T c_ocean_s_p_i);
	EXPORTED int STDCALL OceanSPI_getNumberOfChipSelects_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int STDCALL OceanSPI_getMaxMasterFrequency_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int STDCALL OceanSPI_getMaxSlaveFrequency_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int STDCALL OceanSPI_getBusControllerMode_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int STDCALL OceanSPI_getBusTransferMode_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED int STDCALL OceanSPI_getPolarity_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED int STDCALL OceanSPI_getChipSelectDelay_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED int STDCALL OceanSPI_getBusWaitStateDelay_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0);
	EXPORTED void STDCALL OceanSPI_setClockSpeed_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void STDCALL OceanSPI_setBusControllerMode_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void STDCALL OceanSPI_setBusTransferMode_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1, int param2);
	EXPORTED void STDCALL OceanSPI_setPolarity_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1, int param2);
	EXPORTED void STDCALL OceanSPI_setChipSelectDelay_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void STDCALL OceanSPI_setBusWaitStateDelay_stdcall(OCEANSPI_T c_ocean_s_p_i, int param0, int param1);
	EXPORTED void STDCALL OceanSPI_saveSPISettings_stdcall(OCEANSPI_T c_ocean_s_p_i);
	EXPORTED void STDCALL OceanSPI_Destroy_stdcall(OCEANSPI_T ocean_s_p_i);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* OCEANSPI_H */
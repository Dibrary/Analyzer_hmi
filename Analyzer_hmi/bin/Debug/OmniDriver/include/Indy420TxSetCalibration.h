/**
 * File: Indy420TxSetCalibration.h
 * Autogenerated on Fri Mar 23 13:38:36 EDT 2018 based on
 * Indy420TxSetCalibration.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/indy/Indy420TxSetCalibration
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef INDY420TXSETCALIBRATION_H
#define INDY420TXSETCALIBRATION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "DispatchProtocolMessage.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class DispatchProtocolMessage;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Indy420TxSetCalibration : public DispatchProtocolMessage // CPPClass.tag001
{
public: 
	Indy420TxSetCalibration();
	int getModuleIndex();
	int getCountsAt4mA();
	int getCountsAt20mA();
	void setModuleIndex(int moduleIndex);
	void setCountsAt4mA(int counts);
	void setCountsAt20mA(int counts);
	~Indy420TxSetCalibration();
	// No public Java copy constructor; creating one:
	Indy420TxSetCalibration(const Indy420TxSetCalibration &that);
	// Creating assignment operator declaration:
	Indy420TxSetCalibration &operator=(const Indy420TxSetCalibration &that);

private:
	jmethodID mid_Indy420TxSetCalibration1437;
	jmethodID mid_getModuleIndex1438;
	jmethodID mid_getCountsAt4mA1439;
	jmethodID mid_getCountsAt20mA1440;
	jmethodID mid_setModuleIndex1441;
	jmethodID mid_setCountsAt4mA1442;
	jmethodID mid_setCountsAt20mA1443;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T
#define EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T
	typedef void* DISPATCHPROTOCOLMESSAGE_T;
#endif /* EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T */
#ifndef EXTERN_TYPEDEF_INDY420TXSETCALIBRATION_T
#define EXTERN_TYPEDEF_INDY420TXSETCALIBRATION_T
	typedef void* INDY420TXSETCALIBRATION_T;
#endif /* EXTERN_TYPEDEF_INDY420TXSETCALIBRATION_T */

	EXPORTED INDY420TXSETCALIBRATION_T Indy420TxSetCalibration_Create();
	EXPORTED int Indy420TxSetCalibration_getModuleIndex(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED int Indy420TxSetCalibration_getCountsAt4mA(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED int Indy420TxSetCalibration_getCountsAt20mA(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED void Indy420TxSetCalibration_setModuleIndex(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int moduleIndex);
	EXPORTED void Indy420TxSetCalibration_setCountsAt4mA(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int counts);
	EXPORTED void Indy420TxSetCalibration_setCountsAt20mA(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int counts);
	EXPORTED void Indy420TxSetCalibration_Destroy(INDY420TXSETCALIBRATION_T indy420_tx_set_calibration);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED INDY420TXSETCALIBRATION_T STDCALL Indy420TxSetCalibration_Create_stdcall();
	EXPORTED int STDCALL Indy420TxSetCalibration_getModuleIndex_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED int STDCALL Indy420TxSetCalibration_getCountsAt4mA_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED int STDCALL Indy420TxSetCalibration_getCountsAt20mA_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration);
	EXPORTED void STDCALL Indy420TxSetCalibration_setModuleIndex_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int moduleIndex);
	EXPORTED void STDCALL Indy420TxSetCalibration_setCountsAt4mA_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int counts);
	EXPORTED void STDCALL Indy420TxSetCalibration_setCountsAt20mA_stdcall(INDY420TXSETCALIBRATION_T c_indy420_tx_set_calibration, int counts);
	EXPORTED void STDCALL Indy420TxSetCalibration_Destroy_stdcall(INDY420TXSETCALIBRATION_T indy420_tx_set_calibration);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* INDY420TXSETCALIBRATION_H */

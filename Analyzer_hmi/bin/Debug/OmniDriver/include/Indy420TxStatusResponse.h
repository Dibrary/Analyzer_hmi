/**
 * File: Indy420TxStatusResponse.h
 * Autogenerated on Fri Mar 23 13:38:36 EDT 2018 based on
 * Indy420TxStatusResponse.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/indy/Indy420TxStatusResponse
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef INDY420TXSTATUSRESPONSE_H
#define INDY420TXSTATUSRESPONSE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "DispatchProtocolMessage.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class DispatchProtocolMessage;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED Indy420TxStatusResponse : public DispatchProtocolMessage // CPPClass.tag001
{
public: 
	Indy420TxStatusResponse();
	Indy420TxStatusResponse(CharArray& message);
	int getModuleIndex();
	short isEnergized();
	int getCounts();
	float getMilliamps();
	short isEnabled();
	~Indy420TxStatusResponse();
	// No public Java copy constructor; creating one:
	Indy420TxStatusResponse(const Indy420TxStatusResponse &that);
	// Creating assignment operator declaration:
	Indy420TxStatusResponse &operator=(const Indy420TxStatusResponse &that);

private:
	jmethodID mid_Indy420TxStatusResponse1449;
	jmethodID mid_Indy420TxStatusResponse1450;
	jmethodID mid_getModuleIndex1451;
	jmethodID mid_isEnergized1452;
	jmethodID mid_getCounts1453;
	jmethodID mid_getMilliamps1454;
	jmethodID mid_isEnabled1455;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T
#define EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T
	typedef void* DISPATCHPROTOCOLMESSAGE_T;
#endif /* EXTERN_TYPEDEF_DISPATCHPROTOCOLMESSAGE_T */
#ifndef EXTERN_TYPEDEF_INDY420TXSTATUSRESPONSE_T
#define EXTERN_TYPEDEF_INDY420TXSTATUSRESPONSE_T
	typedef void* INDY420TXSTATUSRESPONSE_T;
#endif /* EXTERN_TYPEDEF_INDY420TXSTATUSRESPONSE_T */

	EXPORTED INDY420TXSTATUSRESPONSE_T Indy420TxStatusResponse_Create();
	EXPORTED INDY420TXSTATUSRESPONSE_T Indy420TxStatusResponse_Create_1(CHARARRAY_T message);
	EXPORTED int Indy420TxStatusResponse_getModuleIndex(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED short Indy420TxStatusResponse_isEnergized(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED int Indy420TxStatusResponse_getCounts(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED float Indy420TxStatusResponse_getMilliamps(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED short Indy420TxStatusResponse_isEnabled(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED void Indy420TxStatusResponse_Destroy(INDY420TXSTATUSRESPONSE_T indy420_tx_status_response);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED INDY420TXSTATUSRESPONSE_T STDCALL Indy420TxStatusResponse_Create_stdcall();
	EXPORTED INDY420TXSTATUSRESPONSE_T STDCALL Indy420TxStatusResponse_Create_stdcall_1(CHARARRAY_T message);
	EXPORTED int STDCALL Indy420TxStatusResponse_getModuleIndex_stdcall(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED short STDCALL Indy420TxStatusResponse_isEnergized_stdcall(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED int STDCALL Indy420TxStatusResponse_getCounts_stdcall(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED float STDCALL Indy420TxStatusResponse_getMilliamps_stdcall(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED short STDCALL Indy420TxStatusResponse_isEnabled_stdcall(INDY420TXSTATUSRESPONSE_T c_indy420_tx_status_response);
	EXPORTED void STDCALL Indy420TxStatusResponse_Destroy_stdcall(INDY420TXSTATUSRESPONSE_T indy420_tx_status_response);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* INDY420TXSTATUSRESPONSE_H */

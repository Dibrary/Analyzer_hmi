/**
 * File: HR2000PlusStatus.h
 * Autogenerated on Fri Mar 23 13:38:52 EDT 2018 based on
 * HR2000PlusStatus.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/hr2000plus/HR2000PlusStatus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef HR2000PLUSSTATUS_H
#define HR2000PLUSSTATUS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "SpectrometerStatus.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerStatus;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED HR2000PlusStatus : public SpectrometerStatus // CPPClass.tag001
{
public: 
	HR2000PlusStatus();
	JString toString();
	~HR2000PlusStatus();
	// No public Java copy constructor; creating one:
	HR2000PlusStatus(const HR2000PlusStatus &that);
	// Creating assignment operator declaration:
	HR2000PlusStatus &operator=(const HR2000PlusStatus &that);
	signed char numPacketsInSpectra;
	int powerDownFlag;
	signed char packetCount;
	int usbSpeed;

private:
	jmethodID mid_HR2000PlusStatus3511;
	jmethodID mid_toString3512;
	jfieldID fid_numPacketsInSpectra;
	jfieldID fid_powerDownFlag;
	jfieldID fid_packetCount;
	jfieldID fid_usbSpeed;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
#define EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
	typedef void* SPECTROMETERSTATUS_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERSTATUS_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_HR2000PLUSSTATUS_T
#define EXTERN_TYPEDEF_HR2000PLUSSTATUS_T
	typedef void* HR2000PLUSSTATUS_T;
#endif /* EXTERN_TYPEDEF_HR2000PLUSSTATUS_T */

	EXPORTED HR2000PLUSSTATUS_T HR2000PlusStatus_Create();
	EXPORTED void HR2000PlusStatus_toString(HR2000PLUSSTATUS_T c_hr2000plusstatus, JSTRING_T retval);
	EXPORTED void HR2000PlusStatus_Destroy(HR2000PLUSSTATUS_T hr2000plusstatus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED HR2000PLUSSTATUS_T STDCALL HR2000PlusStatus_Create_stdcall();
	EXPORTED void STDCALL HR2000PlusStatus_toString_stdcall(HR2000PLUSSTATUS_T c_hr2000plusstatus, JSTRING_T retval);
	EXPORTED void STDCALL HR2000PlusStatus_Destroy_stdcall(HR2000PLUSSTATUS_T hr2000plusstatus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* HR2000PLUSSTATUS_H */
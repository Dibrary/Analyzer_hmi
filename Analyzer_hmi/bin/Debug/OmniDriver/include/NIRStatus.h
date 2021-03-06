/**
 * File: NIRStatus.h
 * Autogenerated on Fri Mar 23 13:39:01 EDT 2018 based on
 * NIRStatus.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/nir/NIRStatus
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NIRSTATUS_H
#define NIRSTATUS_H
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

CLASS_TOKEN EXPORTED NIRStatus : public SpectrometerStatus // CPPClass.tag001
{
public: 
	NIRStatus();
	JString toString();
	~NIRStatus();
	// No public Java copy constructor; creating one:
	NIRStatus(const NIRStatus &that);
	// Creating assignment operator declaration:
	NIRStatus &operator=(const NIRStatus &that);
	short external5VActive;
	int packetCount;
	short highGainModeActive;
	short tecActive;
	short fanActive;

private:
	jmethodID mid_NIRStatus4925;
	jmethodID mid_toString4926;
	jfieldID fid_external5VActive;
	jfieldID fid_packetCount;
	jfieldID fid_highGainModeActive;
	jfieldID fid_tecActive;
	jfieldID fid_fanActive;
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
#ifndef EXTERN_TYPEDEF_NIRSTATUS_T
#define EXTERN_TYPEDEF_NIRSTATUS_T
	typedef void* NIRSTATUS_T;
#endif /* EXTERN_TYPEDEF_NIRSTATUS_T */

	EXPORTED NIRSTATUS_T NIRStatus_Create();
	EXPORTED void NIRStatus_toString(NIRSTATUS_T c_nirstatus, JSTRING_T retval);
	EXPORTED void NIRStatus_Destroy(NIRSTATUS_T nirstatus);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED NIRSTATUS_T STDCALL NIRStatus_Create_stdcall();
	EXPORTED void STDCALL NIRStatus_toString_stdcall(NIRSTATUS_T c_nirstatus, JSTRING_T retval);
	EXPORTED void STDCALL NIRStatus_Destroy_stdcall(NIRSTATUS_T nirstatus);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NIRSTATUS_H */

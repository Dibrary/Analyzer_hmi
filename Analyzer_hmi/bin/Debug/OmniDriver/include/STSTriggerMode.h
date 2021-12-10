/**
 * File: STSTriggerMode.h
 * Autogenerated on Fri Mar 23 13:39:14 EDT 2018 based on
 * STSTriggerMode.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/sts/STSTriggerMode
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef STSTRIGGERMODE_H
#define STSTRIGGERMODE_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "ExternalTriggerMode.h"
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class ExternalTriggerMode;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED STSTriggerMode : public ExternalTriggerMode // CPPClass.tag001
{
public: 
	STSTriggerMode(int mode);
	JString toString();
	~STSTriggerMode();
	// No public default Java constructor; creating one:
	STSTriggerMode();
	// No public Java copy constructor; creating one:
	STSTriggerMode(const STSTriggerMode &that);
	// Creating assignment operator declaration:
	STSTriggerMode &operator=(const STSTriggerMode &that);
	int STS_TRIGGER_MODE_NORMAL;
	int STS_TRIGGER_MODE_EXTERNAL;
	int STS_TRIGGER_MODE_INTERNAL;

private:
	jmethodID mid_STSTriggerMode5819;
	jmethodID mid_toString5820;
	jfieldID fid_STS_TRIGGER_MODE_NORMAL;
	jfieldID fid_STS_TRIGGER_MODE_EXTERNAL;
	jfieldID fid_STS_TRIGGER_MODE_INTERNAL;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODE_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODE_T
	typedef void* EXTERNALTRIGGERMODE_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODE_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */
#ifndef EXTERN_TYPEDEF_STSTRIGGERMODE_T
#define EXTERN_TYPEDEF_STSTRIGGERMODE_T
	typedef void* STSTRIGGERMODE_T;
#endif /* EXTERN_TYPEDEF_STSTRIGGERMODE_T */

	// No public default Java constructor; creating one:
	EXPORTED STSTRIGGERMODE_T STSTriggerMode_Create();
	EXPORTED STSTRIGGERMODE_T STSTriggerMode_Create_1(int mode);
	EXPORTED void STSTriggerMode_toString(STSTRIGGERMODE_T c_ststriggermode, JSTRING_T retval);
	EXPORTED void STSTriggerMode_Destroy(STSTRIGGERMODE_T ststriggermode);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED STSTRIGGERMODE_T STDCALL STSTriggerMode_Create_stdcall_1(int mode);
	EXPORTED void STDCALL STSTriggerMode_toString_stdcall(STSTRIGGERMODE_T c_ststriggermode, JSTRING_T retval);
	EXPORTED void STDCALL STSTriggerMode_Destroy_stdcall(STSTRIGGERMODE_T ststriggermode);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* STSTRIGGERMODE_H */
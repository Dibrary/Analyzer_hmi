/**
 * File: NextGenTriggerMode.h
 * Autogenerated on Fri Mar 23 13:39:00 EDT 2018 based on
 * NextGenTriggerMode.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/nextgen/NextGenTriggerMode
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef NEXTGENTRIGGERMODE_H
#define NEXTGENTRIGGERMODE_H
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

CLASS_TOKEN EXPORTED NextGenTriggerMode : public ExternalTriggerMode // CPPClass.tag001
{
public: 
	NextGenTriggerMode(int mode);
	JString toString();
	~NextGenTriggerMode();
	// No public default Java constructor; creating one:
	NextGenTriggerMode();
	// No public Java copy constructor; creating one:
	NextGenTriggerMode(const NextGenTriggerMode &that);
	// Creating assignment operator declaration:
	NextGenTriggerMode &operator=(const NextGenTriggerMode &that);
	int FLAMEX_TRIGGER_MODE_NORMAL;
	int FLAMEX_TRIGGER_MODE_HW_RISE;
	int FLAMEX_TRIGGER_MODE_HW_FALL;
	int FLAMEX_TRIGGER_MODE_LEVEL;
	int FLAMEX_TRIGGER_MODE_PW;
	int FLAMEX_TRIGGER_MODE_DISABLE;

private:
	jmethodID mid_NextGenTriggerMode4697;
	jmethodID mid_toString4698;
	jfieldID fid_FLAMEX_TRIGGER_MODE_NORMAL;
	jfieldID fid_FLAMEX_TRIGGER_MODE_HW_RISE;
	jfieldID fid_FLAMEX_TRIGGER_MODE_HW_FALL;
	jfieldID fid_FLAMEX_TRIGGER_MODE_LEVEL;
	jfieldID fid_FLAMEX_TRIGGER_MODE_PW;
	jfieldID fid_FLAMEX_TRIGGER_MODE_DISABLE;
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
#ifndef EXTERN_TYPEDEF_NEXTGENTRIGGERMODE_T
#define EXTERN_TYPEDEF_NEXTGENTRIGGERMODE_T
	typedef void* NEXTGENTRIGGERMODE_T;
#endif /* EXTERN_TYPEDEF_NEXTGENTRIGGERMODE_T */

	// No public default Java constructor; creating one:
	EXPORTED NEXTGENTRIGGERMODE_T NextGenTriggerMode_Create();
	EXPORTED NEXTGENTRIGGERMODE_T NextGenTriggerMode_Create_1(int mode);
	EXPORTED void NextGenTriggerMode_toString(NEXTGENTRIGGERMODE_T c_next_gen_trigger_mode, JSTRING_T retval);
	EXPORTED void NextGenTriggerMode_Destroy(NEXTGENTRIGGERMODE_T next_gen_trigger_mode);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED NEXTGENTRIGGERMODE_T STDCALL NextGenTriggerMode_Create_stdcall_1(int mode);
	EXPORTED void STDCALL NextGenTriggerMode_toString_stdcall(NEXTGENTRIGGERMODE_T c_next_gen_trigger_mode, JSTRING_T retval);
	EXPORTED void STDCALL NextGenTriggerMode_Destroy_stdcall(NEXTGENTRIGGERMODE_T next_gen_trigger_mode);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* NEXTGENTRIGGERMODE_H */

/**
 * File: CCDShutter.h
 * Autogenerated on Fri Mar 23 13:38:56 EDT 2018 based on
 * CCDShutter.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/features/ccdshutter/CCDShutter
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef CCDSHUTTER_H
#define CCDSHUTTER_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED CCDShutter : public BaseJavaClass // CPPClass.tag001
{
public: 
	signed char getShutterState();
	short isShutterOpen();
	void openShutter();
	void closeShutter();
	~CCDShutter();
	// No public default Java constructor; creating one:
	CCDShutter();
	// No public Java copy constructor; creating one:
	CCDShutter(const CCDShutter &that);
	// Creating assignment operator declaration:
	CCDShutter &operator=(const CCDShutter &that);

private:
	jmethodID mid_getShutterState4185;
	jmethodID mid_isShutterOpen4186;
	jmethodID mid_openShutter4187;
	jmethodID mid_closeShutter4188;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_CCDSHUTTER_T
#define EXTERN_TYPEDEF_CCDSHUTTER_T
	typedef void* CCDSHUTTER_T;
#endif /* EXTERN_TYPEDEF_CCDSHUTTER_T */

	// No public default Java constructor; creating one:
	EXPORTED CCDSHUTTER_T CCDShutter_Create();
	EXPORTED signed char CCDShutter_getShutterState(CCDSHUTTER_T c_ccdshutter);
	EXPORTED short CCDShutter_isShutterOpen(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void CCDShutter_openShutter(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void CCDShutter_closeShutter(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void CCDShutter_Destroy(CCDSHUTTER_T ccdshutter);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED signed char STDCALL CCDShutter_getShutterState_stdcall(CCDSHUTTER_T c_ccdshutter);
	EXPORTED short STDCALL CCDShutter_isShutterOpen_stdcall(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void STDCALL CCDShutter_openShutter_stdcall(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void STDCALL CCDShutter_closeShutter_stdcall(CCDSHUTTER_T c_ccdshutter);
	EXPORTED void STDCALL CCDShutter_Destroy_stdcall(CCDSHUTTER_T ccdshutter);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* CCDSHUTTER_H */

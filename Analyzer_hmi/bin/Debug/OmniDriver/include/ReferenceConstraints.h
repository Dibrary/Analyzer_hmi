/**
 * File: ReferenceConstraints.h
 * Autogenerated on Fri Mar 23 13:38:32 EDT 2018 based on
 * ReferenceConstraints.java
 * for the Java class
 * com/oceanoptics/omnidriver/features/dac/ReferenceConstraints
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef REFERENCECONSTRAINTS_H
#define REFERENCECONSTRAINTS_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#endif /* INCLUDES_IN_HEADER */


CLASS_TOKEN EXPORTED ReferenceConstraints : public BaseJavaClass // CPPClass.tag001
{
public: 
	ReferenceConstraints(float minReferenceValueVolts, float maxReferenceValueVolts, int minReferenceValueDAC, int maxReferenceValueDAC);
	float getMinReferenceValueVolts();
	float getMaxReferenceValueVolts();
	int getMinReferenceValueDAC();
	int getMaxReferenceValueDAC();
	~ReferenceConstraints();
	// No public default Java constructor; creating one:
	ReferenceConstraints();
	// No public Java copy constructor; creating one:
	ReferenceConstraints(const ReferenceConstraints &that);
	// Creating assignment operator declaration:
	ReferenceConstraints &operator=(const ReferenceConstraints &that);

private:
	jmethodID mid_ReferenceConstraints1158;
	jmethodID mid_getMinReferenceValueVolts1159;
	jmethodID mid_getMaxReferenceValueVolts1160;
	jmethodID mid_getMinReferenceValueDAC1161;
	jmethodID mid_getMaxReferenceValueDAC1162;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T
#define EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T
	typedef void* REFERENCECONSTRAINTS_T;
#endif /* EXTERN_TYPEDEF_REFERENCECONSTRAINTS_T */

	// No public default Java constructor; creating one:
	EXPORTED REFERENCECONSTRAINTS_T ReferenceConstraints_Create();
	EXPORTED REFERENCECONSTRAINTS_T ReferenceConstraints_Create_1(float minReferenceValueVolts, float maxReferenceValueVolts, int minReferenceValueDAC, int maxReferenceValueDAC);
	EXPORTED float ReferenceConstraints_getMinReferenceValueVolts(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED float ReferenceConstraints_getMaxReferenceValueVolts(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED int ReferenceConstraints_getMinReferenceValueDAC(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED int ReferenceConstraints_getMaxReferenceValueDAC(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED void ReferenceConstraints_Destroy(REFERENCECONSTRAINTS_T reference_constraints);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED REFERENCECONSTRAINTS_T STDCALL ReferenceConstraints_Create_stdcall_1(float minReferenceValueVolts, float maxReferenceValueVolts, int minReferenceValueDAC, int maxReferenceValueDAC);
	EXPORTED float STDCALL ReferenceConstraints_getMinReferenceValueVolts_stdcall(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED float STDCALL ReferenceConstraints_getMaxReferenceValueVolts_stdcall(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED int STDCALL ReferenceConstraints_getMinReferenceValueDAC_stdcall(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED int STDCALL ReferenceConstraints_getMaxReferenceValueDAC_stdcall(REFERENCECONSTRAINTS_T c_reference_constraints);
	EXPORTED void STDCALL ReferenceConstraints_Destroy_stdcall(REFERENCECONSTRAINTS_T reference_constraints);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* REFERENCECONSTRAINTS_H */

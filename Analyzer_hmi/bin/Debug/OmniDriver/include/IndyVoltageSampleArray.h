/***
 * IndyVoltageSampleArray.h
 * Autogenerated on Fri Mar 23 13:39:21 EDT 2018
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */

#ifndef INDYVOLTAGESAMPLEARRAY_H
#define INDYVOLTAGESAMPLEARRAY_H
#include "ArrayTypes.h"
#include "IndyVoltageSample.h"

#ifdef __cplusplus

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class IndyVoltageSample;
#endif /* CLASS_PREDECLARATIONS */

class EXPORTED IndyVoltageSampleArray : public AbstractArray {
public:
	/* Default constructor */
	IndyVoltageSampleArray();

	/* Initialization constructor */
	IndyVoltageSampleArray(IndyVoltageSample *objects, int length);

	/* Copy constructor */
	IndyVoltageSampleArray(const IndyVoltageSampleArray &that);

	/* Destructor */
	~IndyVoltageSampleArray();

	/* Assignment operator */
	IndyVoltageSampleArray &operator=(const IndyVoltageSampleArray &that);

	/* Setter */
	void setObjects(IndyVoltageSample *objects, int length);

	/* Getter */
	IndyVoltageSample *getObjects();

	/* Getter for specific index */
	IndyVoltageSample getElementAt(int index);

	/* Utility method for internal use only */
	char *getClassDescriptor();

private:
	IndyVoltageSample *data;
	JNIBridge* jni;
	EnvWrapper* localenv;
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_INDYVOLTAGESAMPLEARRAY_T
#define EXTERN_TYPEDEF_INDYVOLTAGESAMPLEARRAY_T
	typedef void* INDYVOLTAGESAMPLEARRAY_T;
#endif /* EXTERN_TYPEDEF_INDYVOLTAGESAMPLEARRAY_T */

#ifndef EXTERN_TYPEDEF_INDYVOLTAGESAMPLE_T
#define EXTERN_TYPEDEF_INDYVOLTAGESAMPLE_T
	typedef void* INDYVOLTAGESAMPLE_T;
#endif /* EXTERN_TYPEDEF_INDYVOLTAGESAMPLE_T */

	EXPORTED INDYVOLTAGESAMPLEARRAY_T IndyVoltageSampleArray_Create();
	EXPORTED INDYVOLTAGESAMPLEARRAY_T IndyVoltageSampleArray_Create_1(INDYVOLTAGESAMPLE_T* objects, int length);
	EXPORTED void IndyVoltageSampleArray_Destroy(INDYVOLTAGESAMPLEARRAY_T indy_voltage_sample_array);
	EXPORTED int IndyVoltageSampleArray_getLength(INDYVOLTAGESAMPLEARRAY_T indy_voltage_sample_array);
	EXPORTED void IndyVoltageSampleArray_setObjects(INDYVOLTAGESAMPLEARRAY_T indy_voltage_sample_array, INDYVOLTAGESAMPLE_T* objects, int length);
	EXPORTED void IndyVoltageSampleArray_getElementAt(INDYVOLTAGESAMPLEARRAY_T indy_voltage_sample_array, int index, INDYVOLTAGESAMPLE_T target);
	EXPORTED int IndyVoltageSampleArray_copyObjectsInto(INDYVOLTAGESAMPLEARRAY_T indy_voltage_sample_array, INDYVOLTAGESAMPLE_T* target, int length);
#ifdef __cplusplus
};
#endif /* __cplusplus */

#endif /* INDYVOLTAGESAMPLEARRAY_H */

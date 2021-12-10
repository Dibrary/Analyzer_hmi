/***
 * BlazeTriggerModeArray.h
 * Autogenerated on Mon Mar 13 20:24:51 EDT 2017
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */

#ifndef BLAZETRIGGERMODEARRAY_H
#define BLAZETRIGGERMODEARRAY_H
#include "ArrayTypes.h"
#include "BlazeTriggerMode.h"

#ifdef __cplusplus

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class BlazeTriggerMode;
#endif /* CLASS_PREDECLARATIONS */

class EXPORTED BlazeTriggerModeArray : public AbstractArray {
public:
	/* Default constructor */
	BlazeTriggerModeArray();

	/* Initialization constructor */
	BlazeTriggerModeArray(BlazeTriggerMode *objects, int length);

	/* Copy constructor */
	BlazeTriggerModeArray(const BlazeTriggerModeArray &that);

	/* Destructor */
	~BlazeTriggerModeArray();

	/* Assignment operator */
	BlazeTriggerModeArray &operator=(const BlazeTriggerModeArray &that);

	/* Setter */
	void setObjects(BlazeTriggerMode *objects, int length);

	/* Getter */
	BlazeTriggerMode *getObjects();

	/* Getter for specific index */
	BlazeTriggerMode getElementAt(int index);

	/* Utility method for internal use only */
	char *getClassDescriptor();

private:
	BlazeTriggerMode *data;
	JNIBridge* jni;
	EnvWrapper* localenv;
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_BLAZETRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_BLAZETRIGGERMODEARRAY_T
	typedef void* BLAZETRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_BLAZETRIGGERMODEARRAY_T */

#ifndef EXTERN_TYPEDEF_BLAZETRIGGERMODE_T
#define EXTERN_TYPEDEF_BLAZETRIGGERMODE_T
	typedef void* BLAZETRIGGERMODE_T;
#endif /* EXTERN_TYPEDEF_BLAZETRIGGERMODE_T */

	EXPORTED BLAZETRIGGERMODEARRAY_T BlazeTriggerModeArray_Create();
	EXPORTED BLAZETRIGGERMODEARRAY_T BlazeTriggerModeArray_Create_1(BLAZETRIGGERMODE_T* objects, int length);
	EXPORTED void BlazeTriggerModeArray_Destroy(BLAZETRIGGERMODEARRAY_T blaze_trigger_mode_array);
	EXPORTED int BlazeTriggerModeArray_getLength(BLAZETRIGGERMODEARRAY_T blaze_trigger_mode_array);
	EXPORTED void BlazeTriggerModeArray_setObjects(BLAZETRIGGERMODEARRAY_T blaze_trigger_mode_array, BLAZETRIGGERMODE_T* objects, int length);
	EXPORTED void BlazeTriggerModeArray_getElementAt(BLAZETRIGGERMODEARRAY_T blaze_trigger_mode_array, int index, BLAZETRIGGERMODE_T target);
	EXPORTED int BlazeTriggerModeArray_copyObjectsInto(BLAZETRIGGERMODEARRAY_T blaze_trigger_mode_array, BLAZETRIGGERMODE_T* target, int length);
#ifdef __cplusplus
};
#endif /* __cplusplus */

#endif /* BLAZETRIGGERMODEARRAY_H */
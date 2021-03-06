/***
 * SpectrometerChannelArray.h
 * Autogenerated on Fri Mar 23 13:39:21 EDT 2018
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */

#ifndef SPECTROMETERCHANNELARRAY_H
#define SPECTROMETERCHANNELARRAY_H
#include "ArrayTypes.h"
#include "SpectrometerChannel.h"

#ifdef __cplusplus

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class SpectrometerChannel;
#endif /* CLASS_PREDECLARATIONS */

class EXPORTED SpectrometerChannelArray : public AbstractArray {
public:
	/* Default constructor */
	SpectrometerChannelArray();

	/* Initialization constructor */
	SpectrometerChannelArray(SpectrometerChannel *objects, int length);

	/* Copy constructor */
	SpectrometerChannelArray(const SpectrometerChannelArray &that);

	/* Destructor */
	~SpectrometerChannelArray();

	/* Assignment operator */
	SpectrometerChannelArray &operator=(const SpectrometerChannelArray &that);

	/* Setter */
	void setObjects(SpectrometerChannel *objects, int length);

	/* Getter */
	SpectrometerChannel *getObjects();

	/* Getter for specific index */
	SpectrometerChannel getElementAt(int index);

	/* Utility method for internal use only */
	char *getClassDescriptor();

private:
	SpectrometerChannel *data;
	JNIBridge* jni;
	EnvWrapper* localenv;
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T
#define EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T
	typedef void* SPECTROMETERCHANNELARRAY_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T */

#ifndef EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T
#define EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T
	typedef void* SPECTROMETERCHANNEL_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERCHANNEL_T */

	EXPORTED SPECTROMETERCHANNELARRAY_T SpectrometerChannelArray_Create();
	EXPORTED SPECTROMETERCHANNELARRAY_T SpectrometerChannelArray_Create_1(SPECTROMETERCHANNEL_T* objects, int length);
	EXPORTED void SpectrometerChannelArray_Destroy(SPECTROMETERCHANNELARRAY_T spectrometer_channel_array);
	EXPORTED int SpectrometerChannelArray_getLength(SPECTROMETERCHANNELARRAY_T spectrometer_channel_array);
	EXPORTED void SpectrometerChannelArray_setObjects(SPECTROMETERCHANNELARRAY_T spectrometer_channel_array, SPECTROMETERCHANNEL_T* objects, int length);
	EXPORTED void SpectrometerChannelArray_getElementAt(SPECTROMETERCHANNELARRAY_T spectrometer_channel_array, int index, SPECTROMETERCHANNEL_T target);
	EXPORTED int SpectrometerChannelArray_copyObjectsInto(SPECTROMETERCHANNELARRAY_T spectrometer_channel_array, SPECTROMETERCHANNEL_T* target, int length);
#ifdef __cplusplus
};
#endif /* __cplusplus */

#endif /* SPECTROMETERCHANNELARRAY_H */

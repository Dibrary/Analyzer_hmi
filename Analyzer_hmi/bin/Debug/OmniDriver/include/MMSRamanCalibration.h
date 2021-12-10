/**
 * File: MMSRamanCalibration.h
 * Autogenerated on Fri Mar 23 13:38:58 EDT 2018 based on
 * MMSRamanCalibration.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/mmsraman/ramanspectrometer/MMSRamanCalibration
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef MMSRAMANCALIBRATION_H
#define MMSRAMANCALIBRATION_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "JString.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class MMSRamanCalibration;
class JString;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED MMSRamanCalibration : public BaseJavaClass // CPPClass.tag001
{
public: 
	MMSRamanCalibration();
	int getMaskRatio();
	void setMaskRatio(int maskRatio);
	int getMaskFlipped();
	void setMaskFlipped(int maskFlipped);
	JString getMaskOrientation();
	short isSpectraFlipped();
	void setSpectraFlipped(short spectraFlipped);
	IntArray getMaskIndices();
	void setMaskIndices(IntArray& maskIndices);
	int getMaskXAlignmentAdjustments(int index);
	IntArray getMaskXAlignmentAdjustments();
	void setMaskXAlignmentAdjustments(IntArray& maskXAlignmentAdjustments);
	IntArray getMaskYAlignmentAdjustments();
	void setMaskYAlignmentAdjustments(IntArray& maskYAlignmentAdjustments);
	int getSourcePeaks();
	void setSourcePeaks(int sourcePeaks);
	int getShifts(int index);
	IntArray getShifts();
	void setShifts(int index, int shifts);
	void setShifts(IntArray& shifts);
	int getPolynomialOrder();
	void setPolynomialOrder(int polynomialOrder);
	FloatArray getObservedPixels();
	void setObservedPixels(FloatArray& observedPixels);
	FloatArray getActualWavelengths();
	void setActualWavelengths(FloatArray& actualWavelengths);
	int getNumberOfDeadPixelColumnsLeft();
	void setNumberOfDeadPixelColumnsLeft(int numberOfDeadPixelColumnsLeft);
	int getNumberOfDeadPixelColumnsRight();
	void setNumberOfDeadPixelColumnsRight(int numberOfDeadPixelColumnsRight);
	JString getName();
	void setName(JString& name);
	JString getMask();
	void setMask(JString& mask);
	JString getSpectralSource();
	void setSpectralSource(JString& spectralSource);
	JString getSerialNumber();
	void setSerialNumber(JString& serialNumber);
	JString toString();
	~MMSRamanCalibration();
	// No public Java copy constructor; creating one:
	MMSRamanCalibration(const MMSRamanCalibration &that);
	// Creating assignment operator declaration:
	MMSRamanCalibration &operator=(const MMSRamanCalibration &that);
	int polynomialOrder;
	float observedPixels;
	float actualWavelengths;

private:
	jmethodID mid_MMSRamanCalibration4429;
	jmethodID mid_MMSRamanCalibration4430;
	jmethodID mid_getMaskRatio4431;
	jmethodID mid_setMaskRatio4432;
	jmethodID mid_getMaskFlipped4433;
	jmethodID mid_setMaskFlipped4434;
	jmethodID mid_getMaskOrientation4435;
	jmethodID mid_isSpectraFlipped4436;
	jmethodID mid_setSpectraFlipped4437;
	jmethodID mid_getMaskIndices4438;
	jmethodID mid_setMaskIndices4439;
	jmethodID mid_getMaskXAlignmentAdjustments4440;
	jmethodID mid_getMaskXAlignmentAdjustments4441;
	jmethodID mid_setMaskXAlignmentAdjustments4442;
	jmethodID mid_getMaskYAlignmentAdjustments4443;
	jmethodID mid_setMaskYAlignmentAdjustments4444;
	jmethodID mid_getSourcePeaks4445;
	jmethodID mid_setSourcePeaks4446;
	jmethodID mid_getShifts4447;
	jmethodID mid_getShifts4448;
	jmethodID mid_setShifts4449;
	jmethodID mid_setShifts4450;
	jmethodID mid_getPolynomialOrder4451;
	jmethodID mid_setPolynomialOrder4452;
	jmethodID mid_getObservedPixels4453;
	jmethodID mid_setObservedPixels4454;
	jmethodID mid_getActualWavelengths4455;
	jmethodID mid_setActualWavelengths4456;
	jmethodID mid_getNumberOfDeadPixelColumnsLeft4457;
	jmethodID mid_setNumberOfDeadPixelColumnsLeft4458;
	jmethodID mid_getNumberOfDeadPixelColumnsRight4459;
	jmethodID mid_setNumberOfDeadPixelColumnsRight4460;
	jmethodID mid_getName4461;
	jmethodID mid_setName4462;
	jmethodID mid_getMask4463;
	jmethodID mid_setMask4464;
	jmethodID mid_getSpectralSource4465;
	jmethodID mid_setSpectralSource4466;
	jmethodID mid_getSerialNumber4467;
	jmethodID mid_setSerialNumber4468;
	jmethodID mid_toString4469;
	jfieldID fid_polynomialOrder;
	jfieldID fid_observedPixels;
	jfieldID fid_actualWavelengths;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_MMSRAMANCALIBRATION_T
#define EXTERN_TYPEDEF_MMSRAMANCALIBRATION_T
	typedef void* MMSRAMANCALIBRATION_T;
#endif /* EXTERN_TYPEDEF_MMSRAMANCALIBRATION_T */
#ifndef EXTERN_TYPEDEF_JSTRING_T
#define EXTERN_TYPEDEF_JSTRING_T
	typedef void* JSTRING_T;
#endif /* EXTERN_TYPEDEF_JSTRING_T */

	EXPORTED MMSRAMANCALIBRATION_T MMSRamanCalibration_Create();
	EXPORTED MMSRAMANCALIBRATION_T MMSRamanCalibration_Create_1(MMSRAMANCALIBRATION_T calibration);
	EXPORTED int MMSRamanCalibration_getMaskRatio(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setMaskRatio(MMSRAMANCALIBRATION_T c_mmsramancalibration, int maskRatio);
	EXPORTED int MMSRamanCalibration_getMaskFlipped(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setMaskFlipped(MMSRAMANCALIBRATION_T c_mmsramancalibration, int maskFlipped);
	EXPORTED void MMSRamanCalibration_getMaskOrientation(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED short MMSRamanCalibration_isSpectraFlipped(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setSpectraFlipped(MMSRAMANCALIBRATION_T c_mmsramancalibration, short spectraFlipped);
	EXPORTED void MMSRamanCalibration_getMaskIndices(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setMaskIndices(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskIndices);
	EXPORTED int MMSRamanCalibration_getMaskXAlignmentAdjustments(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index);
	EXPORTED void MMSRamanCalibration_getMaskXAlignmentAdjustments_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setMaskXAlignmentAdjustments(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskXAlignmentAdjustments);
	EXPORTED void MMSRamanCalibration_getMaskYAlignmentAdjustments(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setMaskYAlignmentAdjustments(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskYAlignmentAdjustments);
	EXPORTED int MMSRamanCalibration_getSourcePeaks(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setSourcePeaks(MMSRAMANCALIBRATION_T c_mmsramancalibration, int sourcePeaks);
	EXPORTED int MMSRamanCalibration_getShifts(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index);
	EXPORTED void MMSRamanCalibration_getShifts_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setShifts(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index, int shifts);
	EXPORTED void MMSRamanCalibration_setShifts_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T shifts);
	EXPORTED int MMSRamanCalibration_getPolynomialOrder(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setPolynomialOrder(MMSRAMANCALIBRATION_T c_mmsramancalibration, int polynomialOrder);
	EXPORTED void MMSRamanCalibration_getObservedPixels(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setObservedPixels(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T observedPixels);
	EXPORTED void MMSRamanCalibration_getActualWavelengths(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T retval);
	EXPORTED void MMSRamanCalibration_setActualWavelengths(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T actualWavelengths);
	EXPORTED int MMSRamanCalibration_getNumberOfDeadPixelColumnsLeft(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setNumberOfDeadPixelColumnsLeft(MMSRAMANCALIBRATION_T c_mmsramancalibration, int numberOfDeadPixelColumnsLeft);
	EXPORTED int MMSRamanCalibration_getNumberOfDeadPixelColumnsRight(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void MMSRamanCalibration_setNumberOfDeadPixelColumnsRight(MMSRAMANCALIBRATION_T c_mmsramancalibration, int numberOfDeadPixelColumnsRight);
	EXPORTED void MMSRamanCalibration_getName(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void MMSRamanCalibration_setName(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T name);
	EXPORTED void MMSRamanCalibration_getMask(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void MMSRamanCalibration_setMask(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T mask);
	EXPORTED void MMSRamanCalibration_getSpectralSource(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void MMSRamanCalibration_setSpectralSource(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T spectralSource);
	EXPORTED void MMSRamanCalibration_getSerialNumber(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void MMSRamanCalibration_setSerialNumber(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T serialNumber);
	EXPORTED void MMSRamanCalibration_toString(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void MMSRamanCalibration_Destroy(MMSRAMANCALIBRATION_T mmsramancalibration);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED MMSRAMANCALIBRATION_T STDCALL MMSRamanCalibration_Create_stdcall();
	EXPORTED MMSRAMANCALIBRATION_T STDCALL MMSRamanCalibration_Create_stdcall_1(MMSRAMANCALIBRATION_T calibration);
	EXPORTED int STDCALL MMSRamanCalibration_getMaskRatio_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setMaskRatio_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int maskRatio);
	EXPORTED int STDCALL MMSRamanCalibration_getMaskFlipped_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setMaskFlipped_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int maskFlipped);
	EXPORTED void STDCALL MMSRamanCalibration_getMaskOrientation_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED short STDCALL MMSRamanCalibration_isSpectraFlipped_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setSpectraFlipped_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, short spectraFlipped);
	EXPORTED void STDCALL MMSRamanCalibration_getMaskIndices_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setMaskIndices_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskIndices);
	EXPORTED int STDCALL MMSRamanCalibration_getMaskXAlignmentAdjustments_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index);
	EXPORTED void STDCALL MMSRamanCalibration_getMaskXAlignmentAdjustments_stdcall_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setMaskXAlignmentAdjustments_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskXAlignmentAdjustments);
	EXPORTED void STDCALL MMSRamanCalibration_getMaskYAlignmentAdjustments_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setMaskYAlignmentAdjustments_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T maskYAlignmentAdjustments);
	EXPORTED int STDCALL MMSRamanCalibration_getSourcePeaks_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setSourcePeaks_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int sourcePeaks);
	EXPORTED int STDCALL MMSRamanCalibration_getShifts_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index);
	EXPORTED void STDCALL MMSRamanCalibration_getShifts_stdcall_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setShifts_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int index, int shifts);
	EXPORTED void STDCALL MMSRamanCalibration_setShifts_stdcall_1(MMSRAMANCALIBRATION_T c_mmsramancalibration, INTARRAY_T shifts);
	EXPORTED int STDCALL MMSRamanCalibration_getPolynomialOrder_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setPolynomialOrder_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int polynomialOrder);
	EXPORTED void STDCALL MMSRamanCalibration_getObservedPixels_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setObservedPixels_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T observedPixels);
	EXPORTED void STDCALL MMSRamanCalibration_getActualWavelengths_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setActualWavelengths_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, FLOATARRAY_T actualWavelengths);
	EXPORTED int STDCALL MMSRamanCalibration_getNumberOfDeadPixelColumnsLeft_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setNumberOfDeadPixelColumnsLeft_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int numberOfDeadPixelColumnsLeft);
	EXPORTED int STDCALL MMSRamanCalibration_getNumberOfDeadPixelColumnsRight_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration);
	EXPORTED void STDCALL MMSRamanCalibration_setNumberOfDeadPixelColumnsRight_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, int numberOfDeadPixelColumnsRight);
	EXPORTED void STDCALL MMSRamanCalibration_getName_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setName_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T name);
	EXPORTED void STDCALL MMSRamanCalibration_getMask_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setMask_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T mask);
	EXPORTED void STDCALL MMSRamanCalibration_getSpectralSource_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setSpectralSource_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T spectralSource);
	EXPORTED void STDCALL MMSRamanCalibration_getSerialNumber_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_setSerialNumber_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T serialNumber);
	EXPORTED void STDCALL MMSRamanCalibration_toString_stdcall(MMSRAMANCALIBRATION_T c_mmsramancalibration, JSTRING_T retval);
	EXPORTED void STDCALL MMSRamanCalibration_Destroy_stdcall(MMSRAMANCALIBRATION_T mmsramancalibration);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* MMSRAMANCALIBRATION_H */
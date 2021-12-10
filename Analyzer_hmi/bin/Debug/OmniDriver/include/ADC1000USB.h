/**
 * File: ADC1000USB.h
 * Autogenerated on Fri Mar 23 13:38:48 EDT 2018 based on
 * ADC1000USB.java
 * for the Java class
 * com/oceanoptics/omnidriver/spectrometer/adc1000usb/ADC1000USB
 * Copyright (C) 2006 - 2008 Ocean Optics, Inc.  All rights reserved.
 */


#ifndef ADC1000USB_H
#define ADC1000USB_H
#include "BaseJavaClass.h"

#ifdef __cplusplus

#ifdef INCLUDES_IN_HEADER
#include "USBSpectrometer.h"
#include "USBEndpointDescriptor.h"
#include "GUIProviderArray.h"
#include "Spectrum.h"
#include "OmniDriverDispatchListener.h"
#include "AcquisitionPropertiesListener.h"
#include "SpectrometerStatus.h"
#include "Coefficients.h"
#include "SpectrometerChannelArray.h"
#include "MultiChannelListener.h"
#include "ExternalTriggerModeArray.h"
#include "CoefficientsArray.h"
#include "AcquisitionListener.h"
#endif /* INCLUDES_IN_HEADER */

/* Pre-declarations for circular dependencies in header files */
#ifdef CLASS_PREDECLARATIONS
class USBSpectrometer;
class USBEndpointDescriptor;
class GUIProviderArray;
class Spectrum;
class OmniDriverDispatchListener;
class AcquisitionPropertiesListener;
class SpectrometerStatus;
class Coefficients;
class SpectrometerChannelArray;
class MultiChannelListener;
class ExternalTriggerModeArray;
class CoefficientsArray;
class AcquisitionListener;
#endif /* CLASS_PREDECLARATIONS */

CLASS_TOKEN EXPORTED ADC1000USB : public USBSpectrometer // CPPClass.tag001
{
public: 
	ADC1000USB(int i);
	ADC1000USB();
	void setEndpoints();
	USBEndpointDescriptor getEndpoint(int endPoint);
	short allowWriteToEEPROM(int privilegeLevel, int slot);
	void openSpectrometer(int index);
	GUIProviderArray getGUIFeatures();
	Spectrum getSpectrum(Spectrum& spectrum);
	Spectrum getSpectrum();
	void setCoefficients();
	int getDeepWellMinimumIntegrationTime();
	void addOmniDriverDispatchListener(OmniDriverDispatchListener& listener);
	void removeOmniDriverDispatchListener(OmniDriverDispatchListener& listener);
	void addAcquisitionPropertiesListener(AcquisitionPropertiesListener& listener);
	void removeAcquisitionPropertiesListener(AcquisitionPropertiesListener& listener);
	int getActualIntegrationTime();
	SpectrometerStatus readStatus();
	Coefficients getNewCoefficients(int index);
	short isDeepWell();
	void setDeepWell(short dw);
	void setIntegrationTime(int intTime);
	void setStrobeDelay(int delay);
	int getNumberOfChannels();
	ShortArray getChannelsPresent();
	int getNumberOfEnabledChannels();
	void setChannelMux(int index);
	void setChannelPresent(int index, short present);
	short isChannelPresent(int index);
	void setChannels(SpectrometerChannelArray& chans);
	void setChannelStatus(int index, short status);
	void setDeepWellStatus(short status);
	IntArray getChannelIndices();
	short isRotatorEnabled();
	void setRotatorEnabled(short enabled);
	short isInterpolationEnabled();
	void setInterpolationEnabled(short enabled);
	void addChannelListener(MultiChannelListener& listener);
	void removeChannelListener(MultiChannelListener& listener);
	void setContinuousStrobeDelay(int delayMicros);
	int getContinuousStrobeDelayMinimum();
	int getContinuousStrobeDelayMaximum();
	int getContinuousStrobeDelayIncrement(int magnitude);
	double continuousStrobeCountsToMicros(int counts);
	void setContinuousModeType(short mode);
	void setDelayAfterIntegration(int delay);
	short getContinuousModeType();
	int getDelayAfterIntegration();
	void setContinuousEnable(short value);
	short getContinuousEnable();
	void setMasterClock(int rate);
	void setExternalTriggerMode(int mode);
	ExternalTriggerModeArray getExternalTriggerModes();
	CoefficientsArray readNonlinearityCoefficientsFromSpectrometer();
	void writeNonlinearityCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray getNonlinearityCoefficients();
	void setNonlinearityCoefficients(CoefficientsArray& coefficients);
	DoubleArray getNonlinearityCoefficientsSingleChannel(int index);
	void setNonlinearityCoefficientsSingleChannel(DoubleArray& nl, int index);
	CoefficientsArray readWavelengthCalibrationCoefficientsFromSpectrometer();
	void writeWavelengthCoefficientsToSpectrometer(CoefficientsArray& coefficients);
	CoefficientsArray getWavelengthCalibrationCoefficients();
	void setWavelengthCalibrationCoefficients(CoefficientsArray& coefficients);
	DoubleArray getWavelengths(int index);
	void setWavelengths(DoubleArray& wl, int index);
	CoefficientsArray readStrayLightCorrectionCoefficientFromSpectrometer();
	void writeStrayLightCoefficientToSpectrometer(CoefficientsArray& coefficients);
	void setStrayLightCorrectionCoefficient(CoefficientsArray& coefficients);
	CoefficientsArray getStrayLightCorrectionCoefficient();
	void setStrayLight(double strayLight, int index);
	double getStrayLight(int index);
	short isAdvancedVersion();
	void addAcquisitionListener(AcquisitionListener& listener);
	void removeAcquisitionListener(AcquisitionListener& listener);
	~ADC1000USB();
	// No public Java copy constructor; creating one:
	ADC1000USB(const ADC1000USB &that);
	// Creating assignment operator declaration:
	ADC1000USB &operator=(const ADC1000USB &that);
	signed char DW_INFO_SLOT;

private:
	jmethodID mid_ADC1000USB3111;
	jmethodID mid_ADC1000USB3112;
	jmethodID mid_setEndpoints3113;
	jmethodID mid_getEndpoint3114;
	jmethodID mid_allowWriteToEEPROM3115;
	jmethodID mid_openSpectrometer3116;
	jmethodID mid_getGUIFeatures3117;
	jmethodID mid_getSpectrum3118;
	jmethodID mid_getSpectrum3119;
	jmethodID mid_setCoefficients3120;
	jmethodID mid_getDeepWellMinimumIntegrationTime3121;
	jmethodID mid_addOmniDriverDispatchListener3122;
	jmethodID mid_removeOmniDriverDispatchListener3123;
	jmethodID mid_addAcquisitionPropertiesListener3124;
	jmethodID mid_removeAcquisitionPropertiesListener3125;
	jmethodID mid_getActualIntegrationTime3126;
	jmethodID mid_readStatus3127;
	jmethodID mid_getNewCoefficients3128;
	jmethodID mid_isDeepWell3129;
	jmethodID mid_setDeepWell3130;
	jmethodID mid_setIntegrationTime3131;
	jmethodID mid_setStrobeDelay3132;
	jmethodID mid_getNumberOfChannels3133;
	jmethodID mid_getChannelsPresent3134;
	jmethodID mid_getNumberOfEnabledChannels3135;
	jmethodID mid_setChannelMux3136;
	jmethodID mid_setChannelPresent3137;
	jmethodID mid_isChannelPresent3138;
	jmethodID mid_setChannels3139;
	jmethodID mid_setChannelStatus3140;
	jmethodID mid_setDeepWellStatus3141;
	jmethodID mid_getChannelIndices3142;
	jmethodID mid_isRotatorEnabled3143;
	jmethodID mid_setRotatorEnabled3144;
	jmethodID mid_isInterpolationEnabled3145;
	jmethodID mid_setInterpolationEnabled3146;
	jmethodID mid_addChannelListener3147;
	jmethodID mid_removeChannelListener3148;
	jmethodID mid_setContinuousStrobeDelay3149;
	jmethodID mid_getContinuousStrobeDelayMinimum3150;
	jmethodID mid_getContinuousStrobeDelayMaximum3151;
	jmethodID mid_getContinuousStrobeDelayIncrement3152;
	jmethodID mid_continuousStrobeCountsToMicros3153;
	jmethodID mid_setContinuousModeType3154;
	jmethodID mid_setDelayAfterIntegration3155;
	jmethodID mid_getContinuousModeType3156;
	jmethodID mid_getDelayAfterIntegration3157;
	jmethodID mid_setContinuousEnable3158;
	jmethodID mid_getContinuousEnable3159;
	jmethodID mid_setMasterClock3160;
	jmethodID mid_setExternalTriggerMode3161;
	jmethodID mid_getExternalTriggerModes3162;
	jmethodID mid_readNonlinearityCoefficientsFromSpectrometer3163;
	jmethodID mid_writeNonlinearityCoefficientsToSpectrometer3164;
	jmethodID mid_getNonlinearityCoefficients3165;
	jmethodID mid_setNonlinearityCoefficients3166;
	jmethodID mid_getNonlinearityCoefficientsSingleChannel3167;
	jmethodID mid_setNonlinearityCoefficientsSingleChannel3168;
	jmethodID mid_readWavelengthCalibrationCoefficientsFromSpectrometer3169;
	jmethodID mid_writeWavelengthCoefficientsToSpectrometer3170;
	jmethodID mid_getWavelengthCalibrationCoefficients3171;
	jmethodID mid_setWavelengthCalibrationCoefficients3172;
	jmethodID mid_getWavelengths3173;
	jmethodID mid_setWavelengths3174;
	jmethodID mid_readStrayLightCorrectionCoefficientFromSpectrometer3175;
	jmethodID mid_writeStrayLightCoefficientToSpectrometer3176;
	jmethodID mid_setStrayLightCorrectionCoefficient3177;
	jmethodID mid_getStrayLightCorrectionCoefficient3178;
	jmethodID mid_setStrayLight3179;
	jmethodID mid_getStrayLight3180;
	jmethodID mid_isAdvancedVersion3181;
	jmethodID mid_addAcquisitionListener3182;
	jmethodID mid_removeAcquisitionListener3183;
	jfieldID fid_DW_INFO_SLOT;
	void init_ids(JNIEnv* pJNIEnv);
};

extern "C" {
#endif /* __cplusplus */
#ifndef EXTERN_TYPEDEF_USBSPECTROMETER_T
#define EXTERN_TYPEDEF_USBSPECTROMETER_T
	typedef void* USBSPECTROMETER_T;
#endif /* EXTERN_TYPEDEF_USBSPECTROMETER_T */
#ifndef EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
#define EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T
	typedef void* USBENDPOINTDESCRIPTOR_T;
#endif /* EXTERN_TYPEDEF_USBENDPOINTDESCRIPTOR_T */
#ifndef EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
#define EXTERN_TYPEDEF_GUIPROVIDERARRAY_T
	typedef void* GUIPROVIDERARRAY_T;
#endif /* EXTERN_TYPEDEF_GUIPROVIDERARRAY_T */
#ifndef EXTERN_TYPEDEF_SPECTRUM_T
#define EXTERN_TYPEDEF_SPECTRUM_T
	typedef void* SPECTRUM_T;
#endif /* EXTERN_TYPEDEF_SPECTRUM_T */
#ifndef EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T
#define EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T
	typedef void* OMNIDRIVERDISPATCHLISTENER_T;
#endif /* EXTERN_TYPEDEF_OMNIDRIVERDISPATCHLISTENER_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T
	typedef void* ACQUISITIONPROPERTIESLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONPROPERTIESLISTENER_T */
#ifndef EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
#define EXTERN_TYPEDEF_SPECTROMETERSTATUS_T
	typedef void* SPECTROMETERSTATUS_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERSTATUS_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTS_T
#define EXTERN_TYPEDEF_COEFFICIENTS_T
	typedef void* COEFFICIENTS_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTS_T */
#ifndef EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T
#define EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T
	typedef void* SPECTROMETERCHANNELARRAY_T;
#endif /* EXTERN_TYPEDEF_SPECTROMETERCHANNELARRAY_T */
#ifndef EXTERN_TYPEDEF_MULTICHANNELLISTENER_T
#define EXTERN_TYPEDEF_MULTICHANNELLISTENER_T
	typedef void* MULTICHANNELLISTENER_T;
#endif /* EXTERN_TYPEDEF_MULTICHANNELLISTENER_T */
#ifndef EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
#define EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T
	typedef void* EXTERNALTRIGGERMODEARRAY_T;
#endif /* EXTERN_TYPEDEF_EXTERNALTRIGGERMODEARRAY_T */
#ifndef EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
#define EXTERN_TYPEDEF_COEFFICIENTSARRAY_T
	typedef void* COEFFICIENTSARRAY_T;
#endif /* EXTERN_TYPEDEF_COEFFICIENTSARRAY_T */
#ifndef EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
#define EXTERN_TYPEDEF_ACQUISITIONLISTENER_T
	typedef void* ACQUISITIONLISTENER_T;
#endif /* EXTERN_TYPEDEF_ACQUISITIONLISTENER_T */
#ifndef EXTERN_TYPEDEF_ADC1000USB_T
#define EXTERN_TYPEDEF_ADC1000USB_T
	typedef void* ADC1000USB_T;
#endif /* EXTERN_TYPEDEF_ADC1000USB_T */

	EXPORTED ADC1000USB_T ADC1000USB_Create(int i);
	EXPORTED ADC1000USB_T ADC1000USB_Create_1();
	EXPORTED void ADC1000USB_setEndpoints(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_getEndpoint(ADC1000USB_T c_adc1000usb, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short ADC1000USB_allowWriteToEEPROM(ADC1000USB_T c_adc1000usb, int privilegeLevel, int slot);
	EXPORTED void ADC1000USB_openSpectrometer(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void ADC1000USB_getGUIFeatures(ADC1000USB_T c_adc1000usb, GUIPROVIDERARRAY_T retval);
	EXPORTED void ADC1000USB_getSpectrum(ADC1000USB_T c_adc1000usb, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED void ADC1000USB_getSpectrum_1(ADC1000USB_T c_adc1000usb, SPECTRUM_T retval);
	EXPORTED void ADC1000USB_setCoefficients(ADC1000USB_T c_adc1000usb);
	EXPORTED int ADC1000USB_getDeepWellMinimumIntegrationTime(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_addOmniDriverDispatchListener(ADC1000USB_T c_adc1000usb, OMNIDRIVERDISPATCHLISTENER_T listener);
	EXPORTED void ADC1000USB_removeOmniDriverDispatchListener(ADC1000USB_T c_adc1000usb, OMNIDRIVERDISPATCHLISTENER_T listener);
	EXPORTED void ADC1000USB_addAcquisitionPropertiesListener(ADC1000USB_T c_adc1000usb, ACQUISITIONPROPERTIESLISTENER_T listener);
	EXPORTED void ADC1000USB_removeAcquisitionPropertiesListener(ADC1000USB_T c_adc1000usb, ACQUISITIONPROPERTIESLISTENER_T listener);
	EXPORTED int ADC1000USB_getActualIntegrationTime(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_readStatus(ADC1000USB_T c_adc1000usb, SPECTROMETERSTATUS_T retval);
	EXPORTED void ADC1000USB_getNewCoefficients(ADC1000USB_T c_adc1000usb, int index, COEFFICIENTS_T retval);
	EXPORTED short ADC1000USB_isDeepWell(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setDeepWell(ADC1000USB_T c_adc1000usb, short dw);
	EXPORTED void ADC1000USB_setIntegrationTime(ADC1000USB_T c_adc1000usb, int intTime);
	EXPORTED void ADC1000USB_setStrobeDelay(ADC1000USB_T c_adc1000usb, int delay);
	EXPORTED int ADC1000USB_getNumberOfChannels(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_getChannelsPresent(ADC1000USB_T c_adc1000usb, SHORTARRAY_T retval);
	EXPORTED int ADC1000USB_getNumberOfEnabledChannels(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setChannelMux(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void ADC1000USB_setChannelPresent(ADC1000USB_T c_adc1000usb, int index, short present);
	EXPORTED short ADC1000USB_isChannelPresent(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void ADC1000USB_setChannels(ADC1000USB_T c_adc1000usb, SPECTROMETERCHANNELARRAY_T chans);
	EXPORTED void ADC1000USB_setChannelStatus(ADC1000USB_T c_adc1000usb, int index, short status);
	EXPORTED void ADC1000USB_setDeepWellStatus(ADC1000USB_T c_adc1000usb, short status);
	EXPORTED void ADC1000USB_getChannelIndices(ADC1000USB_T c_adc1000usb, INTARRAY_T retval);
	EXPORTED short ADC1000USB_isRotatorEnabled(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setRotatorEnabled(ADC1000USB_T c_adc1000usb, short enabled);
	EXPORTED short ADC1000USB_isInterpolationEnabled(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setInterpolationEnabled(ADC1000USB_T c_adc1000usb, short enabled);
	EXPORTED void ADC1000USB_addChannelListener(ADC1000USB_T c_adc1000usb, MULTICHANNELLISTENER_T listener);
	EXPORTED void ADC1000USB_removeChannelListener(ADC1000USB_T c_adc1000usb, MULTICHANNELLISTENER_T listener);
	EXPORTED void ADC1000USB_setContinuousStrobeDelay(ADC1000USB_T c_adc1000usb, int delayMicros);
	EXPORTED int ADC1000USB_getContinuousStrobeDelayMinimum(ADC1000USB_T c_adc1000usb);
	EXPORTED int ADC1000USB_getContinuousStrobeDelayMaximum(ADC1000USB_T c_adc1000usb);
	EXPORTED int ADC1000USB_getContinuousStrobeDelayIncrement(ADC1000USB_T c_adc1000usb, int magnitude);
	EXPORTED double ADC1000USB_continuousStrobeCountsToMicros(ADC1000USB_T c_adc1000usb, int counts);
	EXPORTED void ADC1000USB_setContinuousModeType(ADC1000USB_T c_adc1000usb, short mode);
	EXPORTED void ADC1000USB_setDelayAfterIntegration(ADC1000USB_T c_adc1000usb, int delay);
	EXPORTED short ADC1000USB_getContinuousModeType(ADC1000USB_T c_adc1000usb);
	EXPORTED int ADC1000USB_getDelayAfterIntegration(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setContinuousEnable(ADC1000USB_T c_adc1000usb, short value);
	EXPORTED short ADC1000USB_getContinuousEnable(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_setMasterClock(ADC1000USB_T c_adc1000usb, int rate);
	EXPORTED void ADC1000USB_setExternalTriggerMode(ADC1000USB_T c_adc1000usb, int mode);
	EXPORTED void ADC1000USB_getExternalTriggerModes(ADC1000USB_T c_adc1000usb, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void ADC1000USB_readNonlinearityCoefficientsFromSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_writeNonlinearityCoefficientsToSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_getNonlinearityCoefficients(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_setNonlinearityCoefficients(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_getNonlinearityCoefficientsSingleChannel(ADC1000USB_T c_adc1000usb, int index, DOUBLEARRAY_T retval);
	EXPORTED void ADC1000USB_setNonlinearityCoefficientsSingleChannel(ADC1000USB_T c_adc1000usb, DOUBLEARRAY_T nl, int index);
	EXPORTED void ADC1000USB_readWavelengthCalibrationCoefficientsFromSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_writeWavelengthCoefficientsToSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_getWavelengthCalibrationCoefficients(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_setWavelengthCalibrationCoefficients(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_getWavelengths(ADC1000USB_T c_adc1000usb, int index, DOUBLEARRAY_T retval);
	EXPORTED void ADC1000USB_setWavelengths(ADC1000USB_T c_adc1000usb, DOUBLEARRAY_T wl, int index);
	EXPORTED void ADC1000USB_readStrayLightCorrectionCoefficientFromSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_writeStrayLightCoefficientToSpectrometer(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_setStrayLightCorrectionCoefficient(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void ADC1000USB_getStrayLightCorrectionCoefficient(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void ADC1000USB_setStrayLight(ADC1000USB_T c_adc1000usb, double strayLight, int index);
	EXPORTED double ADC1000USB_getStrayLight(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED short ADC1000USB_isAdvancedVersion(ADC1000USB_T c_adc1000usb);
	EXPORTED void ADC1000USB_addAcquisitionListener(ADC1000USB_T c_adc1000usb, ACQUISITIONLISTENER_T listener);
	EXPORTED void ADC1000USB_removeAcquisitionListener(ADC1000USB_T c_adc1000usb, ACQUISITIONLISTENER_T listener);
	EXPORTED void ADC1000USB_Destroy(ADC1000USB_T adc1000usb);

#ifdef WIN32
	// Use the following function prototypes when calling functions from Visual Basic 6
	EXPORTED ADC1000USB_T STDCALL ADC1000USB_Create_stdcall(int i);
	EXPORTED ADC1000USB_T STDCALL ADC1000USB_Create_stdcall_1();
	EXPORTED void STDCALL ADC1000USB_setEndpoints_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_getEndpoint_stdcall(ADC1000USB_T c_adc1000usb, int endPoint, USBENDPOINTDESCRIPTOR_T retval);
	EXPORTED short STDCALL ADC1000USB_allowWriteToEEPROM_stdcall(ADC1000USB_T c_adc1000usb, int privilegeLevel, int slot);
	EXPORTED void STDCALL ADC1000USB_openSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void STDCALL ADC1000USB_getGUIFeatures_stdcall(ADC1000USB_T c_adc1000usb, GUIPROVIDERARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_getSpectrum_stdcall(ADC1000USB_T c_adc1000usb, SPECTRUM_T spectrum, SPECTRUM_T retval);
	EXPORTED void STDCALL ADC1000USB_getSpectrum_stdcall_1(ADC1000USB_T c_adc1000usb, SPECTRUM_T retval);
	EXPORTED void STDCALL ADC1000USB_setCoefficients_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED int STDCALL ADC1000USB_getDeepWellMinimumIntegrationTime_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_addOmniDriverDispatchListener_stdcall(ADC1000USB_T c_adc1000usb, OMNIDRIVERDISPATCHLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_removeOmniDriverDispatchListener_stdcall(ADC1000USB_T c_adc1000usb, OMNIDRIVERDISPATCHLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_addAcquisitionPropertiesListener_stdcall(ADC1000USB_T c_adc1000usb, ACQUISITIONPROPERTIESLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_removeAcquisitionPropertiesListener_stdcall(ADC1000USB_T c_adc1000usb, ACQUISITIONPROPERTIESLISTENER_T listener);
	EXPORTED int STDCALL ADC1000USB_getActualIntegrationTime_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_readStatus_stdcall(ADC1000USB_T c_adc1000usb, SPECTROMETERSTATUS_T retval);
	EXPORTED void STDCALL ADC1000USB_getNewCoefficients_stdcall(ADC1000USB_T c_adc1000usb, int index, COEFFICIENTS_T retval);
	EXPORTED short STDCALL ADC1000USB_isDeepWell_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setDeepWell_stdcall(ADC1000USB_T c_adc1000usb, short dw);
	EXPORTED void STDCALL ADC1000USB_setIntegrationTime_stdcall(ADC1000USB_T c_adc1000usb, int intTime);
	EXPORTED void STDCALL ADC1000USB_setStrobeDelay_stdcall(ADC1000USB_T c_adc1000usb, int delay);
	EXPORTED int STDCALL ADC1000USB_getNumberOfChannels_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_getChannelsPresent_stdcall(ADC1000USB_T c_adc1000usb, SHORTARRAY_T retval);
	EXPORTED int STDCALL ADC1000USB_getNumberOfEnabledChannels_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setChannelMux_stdcall(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void STDCALL ADC1000USB_setChannelPresent_stdcall(ADC1000USB_T c_adc1000usb, int index, short present);
	EXPORTED short STDCALL ADC1000USB_isChannelPresent_stdcall(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED void STDCALL ADC1000USB_setChannels_stdcall(ADC1000USB_T c_adc1000usb, SPECTROMETERCHANNELARRAY_T chans);
	EXPORTED void STDCALL ADC1000USB_setChannelStatus_stdcall(ADC1000USB_T c_adc1000usb, int index, short status);
	EXPORTED void STDCALL ADC1000USB_setDeepWellStatus_stdcall(ADC1000USB_T c_adc1000usb, short status);
	EXPORTED void STDCALL ADC1000USB_getChannelIndices_stdcall(ADC1000USB_T c_adc1000usb, INTARRAY_T retval);
	EXPORTED short STDCALL ADC1000USB_isRotatorEnabled_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setRotatorEnabled_stdcall(ADC1000USB_T c_adc1000usb, short enabled);
	EXPORTED short STDCALL ADC1000USB_isInterpolationEnabled_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setInterpolationEnabled_stdcall(ADC1000USB_T c_adc1000usb, short enabled);
	EXPORTED void STDCALL ADC1000USB_addChannelListener_stdcall(ADC1000USB_T c_adc1000usb, MULTICHANNELLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_removeChannelListener_stdcall(ADC1000USB_T c_adc1000usb, MULTICHANNELLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_setContinuousStrobeDelay_stdcall(ADC1000USB_T c_adc1000usb, int delayMicros);
	EXPORTED int STDCALL ADC1000USB_getContinuousStrobeDelayMinimum_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED int STDCALL ADC1000USB_getContinuousStrobeDelayMaximum_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED int STDCALL ADC1000USB_getContinuousStrobeDelayIncrement_stdcall(ADC1000USB_T c_adc1000usb, int magnitude);
	EXPORTED double STDCALL ADC1000USB_continuousStrobeCountsToMicros_stdcall(ADC1000USB_T c_adc1000usb, int counts);
	EXPORTED void STDCALL ADC1000USB_setContinuousModeType_stdcall(ADC1000USB_T c_adc1000usb, short mode);
	EXPORTED void STDCALL ADC1000USB_setDelayAfterIntegration_stdcall(ADC1000USB_T c_adc1000usb, int delay);
	EXPORTED short STDCALL ADC1000USB_getContinuousModeType_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED int STDCALL ADC1000USB_getDelayAfterIntegration_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setContinuousEnable_stdcall(ADC1000USB_T c_adc1000usb, short value);
	EXPORTED short STDCALL ADC1000USB_getContinuousEnable_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_setMasterClock_stdcall(ADC1000USB_T c_adc1000usb, int rate);
	EXPORTED void STDCALL ADC1000USB_setExternalTriggerMode_stdcall(ADC1000USB_T c_adc1000usb, int mode);
	EXPORTED void STDCALL ADC1000USB_getExternalTriggerModes_stdcall(ADC1000USB_T c_adc1000usb, EXTERNALTRIGGERMODEARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_readNonlinearityCoefficientsFromSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_writeNonlinearityCoefficientsToSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_getNonlinearityCoefficients_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_setNonlinearityCoefficients_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_getNonlinearityCoefficientsSingleChannel_stdcall(ADC1000USB_T c_adc1000usb, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_setNonlinearityCoefficientsSingleChannel_stdcall(ADC1000USB_T c_adc1000usb, DOUBLEARRAY_T nl, int index);
	EXPORTED void STDCALL ADC1000USB_readWavelengthCalibrationCoefficientsFromSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_writeWavelengthCoefficientsToSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_getWavelengthCalibrationCoefficients_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_setWavelengthCalibrationCoefficients_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_getWavelengths_stdcall(ADC1000USB_T c_adc1000usb, int index, DOUBLEARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_setWavelengths_stdcall(ADC1000USB_T c_adc1000usb, DOUBLEARRAY_T wl, int index);
	EXPORTED void STDCALL ADC1000USB_readStrayLightCorrectionCoefficientFromSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_writeStrayLightCoefficientToSpectrometer_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_setStrayLightCorrectionCoefficient_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T coefficients);
	EXPORTED void STDCALL ADC1000USB_getStrayLightCorrectionCoefficient_stdcall(ADC1000USB_T c_adc1000usb, COEFFICIENTSARRAY_T retval);
	EXPORTED void STDCALL ADC1000USB_setStrayLight_stdcall(ADC1000USB_T c_adc1000usb, double strayLight, int index);
	EXPORTED double STDCALL ADC1000USB_getStrayLight_stdcall(ADC1000USB_T c_adc1000usb, int index);
	EXPORTED short STDCALL ADC1000USB_isAdvancedVersion_stdcall(ADC1000USB_T c_adc1000usb);
	EXPORTED void STDCALL ADC1000USB_addAcquisitionListener_stdcall(ADC1000USB_T c_adc1000usb, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_removeAcquisitionListener_stdcall(ADC1000USB_T c_adc1000usb, ACQUISITIONLISTENER_T listener);
	EXPORTED void STDCALL ADC1000USB_Destroy_stdcall(ADC1000USB_T adc1000usb);
#endif /* WIN32 */
#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif /* ADC1000USB_H */

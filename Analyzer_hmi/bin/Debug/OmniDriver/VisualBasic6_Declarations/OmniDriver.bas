Attribute VB_Name = "Module1"
' Revised 21-Nov-2008
' Revised 30-Apr-2010 - fixed problems with Wrapper Extensions methods

Public Declare Sub CopyMemory Lib "kernel32" Alias "RtlMoveMemory" (ByRef Destination As Any, ByRef Source As Any, ByVal Length As Long)
Public Declare Function lstrlen Lib "kernel32" Alias "lstrlenA" (ByVal lpstring As Long) As Long

Public Declare Function JNIBridge_getInstance Lib "common32.dll" Alias "_JNIBridge_getInstance_stdcall@0" () As Long
Public Declare Sub JNIBridge_shutdown Lib "common32.dll" Alias "_JNIBridge_shutdown_stdcall@4" (ByVal jnibridge_handle As Long)
Public Declare Sub JNIBridge_unloadDLL Lib "common32.dll" Alias "_JNIBridge_unloadDLL_stdcall@4" (ByVal jnibridge_handle As Long)

' Wrapper Extensions methods
Public Declare Function WrapperExtensions_Create Lib "OmniDriver32.dll" Alias "_WrapperExtensions_Create_stdcall@0" () As Long
Public Declare Sub Wrapper_getWrapperExtensions Lib "OmniDriver32.dll" Alias "_Wrapper_getWrapperExtensions_stdcall@8" (ByVal wrapper_handle As Long, ByVal wrapper_extensions_handle As Long)

Public Declare Function WrapperExtensions_getNumberOfChannels Lib "OmniDriver32.dll" Alias "_WrapperExtensions_getNumberOfChannels_stdcall@8" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function WrapperExtensions_getNumberOfEnabledChannels Lib "OmniDriver32.dll" Alias "_WrapperExtensions_getNumberOfEnabledChannels_stdcall@8" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function WrapperExtensions_isChannelEnabled Lib "OmniDriver32.dll" Alias "_WrapperExtensions_isChannelEnabled_stdcall@12" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long
    
Public Declare Function WrapperExtensions_isSpectrumValid Lib "OmniDriver32.dll" Alias "_WrapperExtensions_isSpectrumValid_stdcall@8" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Function WrapperExtensions_isSpectrumValid_1 Lib "OmniDriver32.dll" Alias "_WrapperExtensions_isSpectrumValid_stdcall_1@12" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Integer

Public Declare Function WrapperExtensions_getSaturationIntensity Lib "OmniDriver32.dll" Alias "_WrapperExtensions_getSaturationIntensity_stdcall@8" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function WrapperExtensions_setSaturationIntensity Lib "OmniDriver32.dll" Alias "_WrapperExtensions_setSaturationIntensity_stdcall@12" (ByVal wrapper_extensions_handle As Long, ByVal spectrometer_index As Long, ByVal saturation_intensity As Long) As Integer

' Wrapper methods
Public Declare Function Wrapper_Create Lib "OmniDriver32.dll" Alias "_Wrapper_Create_stdcall@0" () As Long
Public Declare Sub Wrapper_Destroy Lib "OmniDriver32.dll" Alias "_Wrapper_Destroy_stdcall@4" (ByVal wrapper_handle As Long)
Public Declare Sub Wrapper_closeAllSpectrometers Lib "OmniDriver32.dll" Alias "_Wrapper_closeAllSpectrometers_stdcall@4" (ByVal wrapper_handle As Long)

Public Declare Function Wrapper_exportToGramsSPC Lib "OmniDriver32.dll" Alias "_Wrapper_exportToGramsSPC_stdcall@20" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal output_pathname_handle As Long, ByVal pixel_array_handle As Long, ByVal username_handle As Long) As Integer
Public Declare Function Wrapper_exportToGramsSPC_1 Lib "OmniDriver32.dll" Alias "_Wrapper_exportToGramsSPC_stdcall_1@24" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal output_pathname_handle As Long, ByVal pixel_array_handle As Long, ByVal username_handle As Long) As Integer

Public Declare Sub Wrapper_getApiVersion Lib "OmniDriver32.dll" Alias "_Wrapper_getApiVersion_stdcall@8" (ByVal wrapper_handle As Long, ByVal api_string_handle As Long)
Public Declare Function Wrapper_getBoxcarWidth Lib "OmniDriver32.dll" Alias "_Wrapper_getBoxcarWidth_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getBoxcarWidth_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getBoxcarWidth_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long
Public Declare Function Wrapper_getBuildNumber Lib "OmniDriver32.dll" Alias "_Wrapper_getBuildNumber_stdcall@4" (ByVal wrapper_handle As Long) As Long
Public Declare Function Wrapper_getExternalTriggerMode Lib "OmniDriver32.dll" Alias "_Wrapper_getExternalTriggerMode_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getExternalTriggerMode_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getExternalTriggerMode_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long
Public Declare Function Wrapper_getIntegrationTime Lib "OmniDriver32.dll" Alias "_Wrapper_getIntegrationTime_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getIntegrationTime_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getIntegrationTime_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long
Public Declare Function Wrapper_getMinimumIntegrationTime Lib "OmniDriver32.dll" Alias "_Wrapper_getMinimumIntegrationTime_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Sub Wrapper_getName Lib "OmniDriver32.dll" Alias "_Wrapper_getName_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal jstring_handle As Long)
Public Declare Function Wrapper_getNumberOfEnabledChannels Lib "OmniDriver32.dll" Alias "_Wrapper_getNumberOfEnabledChannels_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Function Wrapper_getNumberOfPixels Lib "OmniDriver32.dll" Alias "_Wrapper_getNumberOfPixels_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getNumberOfDarkPixels Lib "OmniDriver32.dll" Alias "_Wrapper_getNumberOfDarkPixels_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getScansToAverage Lib "OmniDriver32.dll" Alias "_Wrapper_getScansToAverage_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getScansToAverage_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getScansToAverage_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long
Public Declare Sub Wrapper_getSerialNumber Lib "OmniDriver32.dll" Alias "_Wrapper_getSerialNumber_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal jstring_handle As Long)

Public Declare Sub Wrapper_getSpectrum Lib "OmniDriver32.dll" Alias "_Wrapper_getSpectrum_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal double_array_handle As Long)
Public Declare Sub Wrapper_getSpectrum_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getSpectrum_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal double_array_handle As Long)

Public Declare Function Wrapper_getStrobeEnable Lib "OmniDriver32.dll" Alias "_Wrapper_getStrobeEnable_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Long
Public Declare Function Wrapper_getStrobeEnable_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getStrobeEnable_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Long

Public Declare Function Wrapper_isSaturated Lib "OmniDriver32.dll" Alias "_Wrapper_isSaturated_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Function Wrapper_isSaturated_1 Lib "OmniDriver32.dll" Alias "_Wrapper_isSaturated_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Integer

Public Declare Function Wrapper_openAllSpectrometers Lib "OmniDriver32.dll" Alias "_Wrapper_openAllSpectrometers_stdcall@4" (ByVal wrapper_handle As Long) As Long
Public Declare Function Wrapper_openNetworkSpectrometer Lib "OmniDriver32.dll" Alias "_Wrapper_openNetworkSpectrometer_stdcall@8" (ByVal wrapper_handle As Long, ByVal string_handle As Long) As Long
Public Declare Function Wrapper_getNumberOfSpectrometersFound Lib "OmniDriver32.dll" Alias "_Wrapper_getNumberOfSpectrometersFound_stdcall@4" (ByVal wrapper_handle As Long) As Long

Public Declare Sub Wrapper_setAutoToggleStrobeLampEnable Lib "OmniDriver32.dll" Alias "_Wrapper_setAutoToggleStrobeLampEnable_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setAutoToggleStrobeLampEnable_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setAutoToggleStrobeLampEnable_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal enable As Long)

Public Declare Sub Wrapper_setBoxcarWidth Lib "OmniDriver32.dll" Alias "_Wrapper_setBoxcarWidth_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal width As Long)
Public Declare Sub Wrapper_setBoxcarWidth_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setBoxcarWidth_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal width As Long)
Public Declare Sub Wrapper_setCorrectForDetectorNonlinearity Lib "OmniDriver32.dll" Alias "_Wrapper_setCorrectForDetectorNonlinearity_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setCorrectForDetectorNonlinearity_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setCorrectForDetectorNonlinearity_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setCorrectForElectricalDark Lib "OmniDriver32.dll" Alias "_Wrapper_setCorrectForElectricalDark_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setCorrectForElectricalDark_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setCorrectForElectricalDark_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setExternalTriggerMode Lib "OmniDriver32.dll" Alias "_Wrapper_setExternalTriggerMode_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal mode As Long)
Public Declare Sub Wrapper_setExternalTriggerMode_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setExternalTriggerMode_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal mode As Long)
Public Declare Sub Wrapper_setIntegrationTime Lib "OmniDriver32.dll" Alias "_Wrapper_setIntegrationTime_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal integration_time As Long)
Public Declare Sub Wrapper_setIntegrationTime_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setIntegrationTime_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal integration_time As Long)
Public Declare Sub Wrapper_setScansToAverage Lib "OmniDriver32.dll" Alias "_Wrapper_setScansToAverage_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal number_of_scans As Long)
Public Declare Sub Wrapper_setScansToAverage_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setScansToAverage_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal number_of_scans As Long)
Public Declare Sub Wrapper_setStrobeEnable Lib "OmniDriver32.dll" Alias "_Wrapper_setStrobeEnable_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_setStrobeEnable_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setStrobeEnable_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal enable As Long)
Public Declare Sub Wrapper_stopAveraging Lib "OmniDriver32.dll" Alias "_Wrapper_stopAveraging_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long)
Public Declare Sub Wrapper_stopAveraging_1 Lib "OmniDriver32.dll" Alias "_Wrapper_stopAveraging_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long)

Public Declare Sub Wrapper_highSpdAcq_AllocateBuffer Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_AllocateBuffer_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal number_of_spectra As Long)
Public Declare Sub Wrapper_highSpdAcq_StartAcquisition Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_StartAcquisition_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long)
Public Declare Sub Wrapper_highSpdAcq_StartAcquisition_1 Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_StartAcquisition_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long)
Public Declare Sub Wrapper_highSpdAcq_StopAcquisition Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_StopAcquisition_stdcall@4" (ByVal wrapper_handle As Long)
Public Declare Function Wrapper_highSpdAcq_GetNumberOfSpectraAcquired Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_GetNumberOfSpectraAcquired_stdcall@4" (ByVal wrapper_handle As Long) As Long
Public Declare Sub Wrapper_highSpdAcq_GetSpectrum Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_GetSpectrum_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal double_array_handle As Long)
Public Declare Function Wrapper_highSpdAcq_IsSaturated Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_IsSaturated_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrum_number As Long) As Integer
Public Declare Sub Wrapper_highSpdAcq_GetTimeStamp Lib "OmniDriver32.dll" Alias "_Wrapper_highSpdAcq_GetTimeStamp_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrum_number As Long, ByVal timestamp_handle As Long)

Public Declare Sub Wrapper_getWavelengths Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengths_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal double_array As Long)
Public Declare Sub Wrapper_getWavelengths_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengths_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal double_array As Long)

Public Declare Function Wrapper_getWavelengthFirst Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthFirst_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Double
Public Declare Function Wrapper_getWavelengthFirst_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthFirst_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Double
Public Declare Function Wrapper_getWavelengthSecond Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthSecond_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Double
Public Declare Function Wrapper_getWavelengthSecond_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthSecond_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Double
Public Declare Function Wrapper_getWavelengthThird Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthThird_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Double
Public Declare Function Wrapper_getWavelengthThird_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthThird_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Double
Public Declare Function Wrapper_getWavelengthIntercept Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthIntercept_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Double
Public Declare Function Wrapper_getWavelengthIntercept_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getWavelengthIntercept_stdcall_1@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long) As Double

Public Declare Sub Wrapper_getEEPromInfo Lib "OmniDriver32.dll" Alias "_Wrapper_getEEPromInfo_stdcall@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal slot_number As Long, ByVal string_handle As Long)
Public Declare Function Wrapper_setEEPromInfo Lib "OmniDriver32.dll" Alias "_Wrapper_setEEPromInfo_stdcall@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal slot_number As Long, ByVal string_handle As Long) As Integer

Public Declare Sub Wrapper_getCalibrationCoefficientsFromEEProm Lib "OmniDriver32.dll" Alias "_Wrapper_getCalibrationCoefficientsFromEEProm_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal coefficients_handle As Long)
Public Declare Sub Wrapper_getCalibrationCoefficientsFromEEProm_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getCalibrationCoefficientsFromEEProm_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal coefficients_handle As Long)

Public Declare Function Wrapper_setCalibrationCoefficientsIntoEEProm Lib "OmniDriver32.dll" Alias "_Wrapper_setCalibrationCoefficientsIntoEEProm_stdcall@24" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal coefficients_handle As Long, ByVal applyWavelengthCoefficients As Long, ByVal applyStrayLightConstant As Long, ByVal applyNonlinearityCoefficients As Long) As Long
Public Declare Function Wrapper_setCalibrationCoefficientsIntoEEProm_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setCalibrationCoefficientsIntoEEProm_stdcall_1@28" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal coefficients_handle As Long, ByVal applyWavelengthCoefficients As Long, ByVal applyStrayLightConstant As Long, ByVal applyNonlinearityCoefficients As Long) As Long

Public Declare Sub Wrapper_getCalibrationCoefficientsFromBuffer Lib "OmniDriver32.dll" Alias "_Wrapper_getCalibrationCoefficientsFromBuffer_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal coefficients_handle As Long)
Public Declare Sub Wrapper_getCalibrationCoefficientsFromBuffer_1 Lib "OmniDriver32.dll" Alias "_Wrapper_getCalibrationCoefficientsFromBuffer_stdcall_1@16" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal coefficients_handle As Long)

Public Declare Function Wrapper_setCalibrationCoefficientsIntoBuffer Lib "OmniDriver32.dll" Alias "_Wrapper_setCalibrationCoefficientsIntoBuffer_stdcall@24" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal coefficients_handle As Long, ByVal applyWavelengthCoefficients As Long, ByVal applyStrayLightConstant As Long, ByVal applyNonlinearityCoefficients As Long) As Long
Public Declare Function Wrapper_setCalibrationCoefficientsIntoBuffer_1 Lib "OmniDriver32.dll" Alias "_Wrapper_setCalibrationCoefficientsIntoBuffer_stdcall_1@28" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal channel_index As Long, ByVal coefficients_handle As Long, ByVal applyWavelengthCoefficients As Long, ByVal applyStrayLightConstant As Long, ByVal applyNonlinearityCoefficients As Long) As Long

Public Declare Sub Wrapper_setDetectorSetPointCelsius Lib "OmniDriver32.dll" Alias "_Wrapper_setDetectorSetPointCelsius_stdcall@16" (ByVal wrapper__handle As Long, ByVal spectrometer_index As Long, ByVal temperature_celsius As Double)

' Feature access methods in the Wrapper object

Public Declare Function Wrapper_isFeatureSupportedBoardTemperature Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedBoardTemperature_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerBoardTemperature Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerBoardTemperature_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal board_temperature_handle As Long)

Public Declare Function Wrapper_isFeatureSupportedContinuousStrobe Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedContinuousStrobe_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerContinuousStrobe Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerContinuousStrobe_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal continuous_strobe_handle As Long)

Public Declare Function Wrapper_isFeatureSupportedCurrentOut Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedCurrentOut_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerCurrentOut Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerCurrentOut_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal current_out_handle As Long)

Public Declare Function Wrapper_isFeatureSupportedGPIO Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedGPIO_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerGPIO Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerGPIO_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal gpio_handle As Long)

Public Declare Function Wrapper_isFeatureSupportedThermoElectric Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedThermoElectric_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerThermoElectric Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerThermoElectric_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal thermo_electric_handle As Long)

Public Declare Function Wrapper_isFeatureSupportedVersion Lib "OmniDriver32.dll" Alias "_Wrapper_isFeatureSupportedVersion_stdcall@8" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long) As Integer
Public Declare Sub Wrapper_getFeatureControllerVersion Lib "OmniDriver32.dll" Alias "_Wrapper_getFeatureControllerVersion_stdcall@12" (ByVal wrapper_handle As Long, ByVal spectrometer_index As Long, ByVal version_handle As Long)

' Feature object methods

Public Declare Function BoardTemperature_Create Lib "OmniDriver32.dll" Alias "_BoardTemperature_Create_stdcall@0" () As Long
Public Declare Sub BoardTemperature_Destroy Lib "OmniDriver32.dll" Alias "_BoardTemperature_Destroy_stdcall@4" (ByVal board_temperature_handle As Long)
Public Declare Function BoardTemperature_getBoardTemperatureCelsius Lib "OmniDriver32.dll" Alias "_BoardTemperature_getBoardTemperatureCelsius_stdcall@4" (ByVal board_temperature_handle As Long) As Double

Public Declare Function ContinuousStrobe_Create Lib "OmniDriver32.dll" Alias "_ContinuousStrobe_Create_stdcall@0" () As Long
Public Declare Sub ContinuousStrobe_Destroy Lib "OmniDriver32.dll" Alias "_ContinuousStrobe_Destroy_stdcall@4" (ByVal continuous_strobe_handle As Long)
Public Declare Sub ContinuousStrobe_setContinuousStrobeDelay Lib "OmniDriver32.dll" Alias "_ContinuousStrobe_setContinuousStrobeDelay_stdcall@8" (ByVal continuous_strobe_handle As Long, ByVal delay_amount As Long)

Public Declare Function CurrentOut_Create Lib "OmniDriver32.dll" Alias "_CurrentOut_Create_stdcall@0" () As Long
Public Declare Sub CurrentOut_Destroy Lib "OmniDriver32.dll" Alias "_CurrentOut_Destroy_stdcall@4" (ByVal current_out_handle As Long)
Public Declare Sub CurrentOut_setDACCounts Lib "OmniDriver32.dll" Alias "_CurrentOut_setDACCounts_stdcall@8" (ByVal current_out_handle As Long, ByVal count As Long)

Public Declare Function GPIO_Create Lib "OmniDriver32.dll" Alias "_GPIO_Create_stdcall@0" () As Long
Public Declare Sub GPIO_Destroy Lib "OmniDriver32.dll" Alias "_GPIO_Destroy_stdcall@4" (ByVal gpio_handle As Long)
Public Declare Sub GPIO_setMuxBit Lib "OmniDriver32.dll" Alias "_GPIO_setMuxBit_stdcall@12" (ByVal gpio_handle As Long, ByVal bit_position As Long, ByVal mode As Long)
Public Declare Sub GPIO_setDirectionBit Lib "OmniDriver32.dll" Alias "_GPIO_setDirectionBit_stdcall@12" (ByVal gpio_handle As Long, ByVal bit_position As Long, ByVal direction As Long)
Public Declare Sub GPIO_setValueBit Lib "OmniDriver32.dll" Alias "_GPIO_setValueBit_stdcall@12" (ByVal gpio_handle As Long, ByVal bit_position As Long, ByVal value As Long)
Public Declare Function GPIO_getValueBit Lib "OmniDriver32.dll" Alias "_GPIO_getValueBit_stdcall@8" (ByVal gpio_handle As Long, ByVal bit_position As Long) As Long
Public Declare Sub GPIO_getValueBits Lib "OmniDriver32.dll" Alias "_GPIO_getValueBits_stdcall@8" (ByVal gpio_handle As Long, ByVal bitSet_handle As Long)


Public Declare Function ThermoElectric_Create Lib "OmniDriver32.dll" Alias "_ThermoElectric_Create_stdcall@0" () As Long
Public Declare Sub ThermoElectric_Destroy Lib "OmniDriver32.dll" Alias "_ThermoElectric_Destroy_stdcall@4" (ByVal thermo_electric_handle As Long)
Public Declare Sub ThermoElectric_setFanEnable Lib "OmniDriver32.dll" Alias "_ThermoElectric_setFanEnable_stdcall@8" (ByVal thermo_electric_handle As Long, ByVal enable As Long)
Public Declare Sub ThermoElectric_setTECEnable Lib "OmniDriver32.dll" Alias "_ThermoElectric_setTECEnable_stdcall@8" (ByVal thermo_electric_handle As Long, ByVal enable As Long)
Public Declare Function ThermoElectric_getDetectorTemperatureCelsius Lib "OmniDriver32.dll" Alias "_ThermoElectric_getDetectorTemperatureCelsius_stdcall@4" (ByVal thermo_electric_handle As Long) As Double
' DO NOT USE THE FOLLOWING METHOD.  INSTEAD, USE Wrapper_setDetectorSetPointCelsius(wrapper_handle,spectrometerIndex,temperatureSetting)
'Public Declare Sub ThermoElectric_setDetectorSetPointCelsius Lib "OmniDriver32.dll" Alias "_ThermoElectric_setDetectorSetPointCelsius_stdcall@8" (ByVal thermo_electric_handle As Long, ByVal temperature_celsius As Double)

Public Declare Function Version_Create Lib "OmniDriver32.dll" Alias "_Version_Create_stdcall@0" () As Long
Public Declare Sub Version_Destroy Lib "OmniDriver32.dll" Alias "_Version_Destroy_stdcall@4" (ByVal version_handle As Long)
Public Declare Sub Version_getFirmwareVersion Lib "OmniDriver32.dll" Alias "_Version_getFirmwareVersion_stdcall@8" (ByVal version_handle As Long, ByVal jstring_handle As Long)

' Utility methods
Public Declare Function BitSet_Create Lib "common32.dll" Alias "_BitSet_Create_stdcall@0" () As Long
Public Declare Sub BitSet_Destroy Lib "common32.dll" Alias "_BitSet_Destroy_stdcall@4" (ByVal bitSet_handle As Long)
Public Declare Function BitSet_Create_1 Lib "common32.dll" Alias "_BitSet_Create_stdcall_1@4" (ByVal number_of_bits As Long) As Long
Public Declare Sub BitSet_set_3 Lib "common32.dll" Alias "_BitSet_set_stdcall_3@12" (ByVal bitSet_handle As Long, ByVal bit_number As Long, ByVal value As Long)
Public Declare Function BitSet_get Lib "common32.dll" Alias "_BitSet_get_stdcall@8" (ByVal bitSet_handle As Long, ByVal bit_number As Long) As Long

Public Declare Function DoubleArray_Create Lib "common32.dll" Alias "_DoubleArray_Create_stdcall@0" () As Long
Public Declare Function DoubleArray_getElementAt Lib "common32.dll" Alias "_DoubleArray_getElementAt_stdcall@8" (ByVal double_array_handle As Long, ByVal index As Long) As Double
Public Declare Sub DoubleArray_Destroy Lib "common32.dll" Alias "_DoubleArray_Destroy_stdcall@4" (ByVal double_array_handle As Long)

Public Declare Function HighResTimeStamp_Create Lib "OmniDriver32.dll" Alias "_HighResTimeStamp_Create_stdcall@0" () As Long
Public Declare Sub HighResTimeStamp_Destroy Lib "OmniDriver32.dll" Alias "_HighResTimeStamp_Destroy_stdcall@4" (ByVal timestamp_handle As Long)
Public Declare Sub HighResTimeStamp_toString Lib "OmniDriver32.dll" Alias "_HighResTimeStamp_toString_stdcall@8" (ByVal timestamp_handle As Long, ByVal jstring_handle As Long)

Public Declare Function JString_Create Lib "common32.dll" Alias "_JString_Create_stdcall@0" () As Long
Public Declare Sub JString_Destroy Lib "common32.dll" Alias "_JString_Destroy_stdcall@4" (ByVal jstring_handle As Long)
Public Declare Function JString_getASCII Lib "common32.dll" Alias "_JString_getASCII_stdcall@4" (ByVal jstring_handle As Long) As Long



' String conversion utility
Public Function VBStrFromAnsiPtr(ByVal lpstr As Long) As String
Dim bStr() As Byte
Dim cChars As Long

' Get the number of characters in the buffer
cChars = lstrlen(lpstr)

' Resize the byte array
ReDim bStr(cChars - 1) As Byte

' Grab the ANSI buffer
Call CopyMemory(bStr(0), ByVal lpstr, cChars)

' Now convert to a VB Unicode string
Dim ss As String
ss = StrConv(bStr, vbUnicode)
VBStrFromAnsiPtr = StrConv(bStr, vbUnicode)

End Function

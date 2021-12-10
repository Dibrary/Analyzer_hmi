Updated: 9/8/2008


The directory path "C:\Program Files\OceanOptics\OmniDriver\labview\win32\VersionNN.MM" 
contains the *.llb libraries which wrap the functions in the OmniDriver32.dll and SPAM32.dll files.
Be sure to use the version of the Omnidriver LLB files which correspond to your
version of LabVIEW.

OmniDriver32.dll, SPAM32.dll, and common32.dll are located, by default, in the directory
C:\Program Files\OceanOptics\OmniDriver\OOI_HOME.
The OmniDriver sample applications which work with LabVIEW will need to 
know the location of these two dll files.  If LabVIEW cannot find the OmniDriver DLL's,
it will ask you for their location when you start the sample program.

The Wrapper library contains most of the basic spectrometer control
functions.
IMPORTANT: you should only use the functions/VI's belonging to the
"Wrapper" library object.  These functions comprise the "Wrapper API".
The only time you may use functions/VI's outside of the Wrapper
is if one of the wrapper VI's itself returns an object of a different type.

Here is a partial list of these "other" objects/libraries.  These libraries
correspond to "features" which are available on some, but not all,
of our spectrometer models.
- AnalogIn
- AnalogOut
- BoardTemperature
- ContinuousStrobeDelay - (LabVIEW 8.x versions only)
- ExternalTriggerDelay - (Limited features available in LabVIEW 7.1)
- GPIO
- ThermoElectric

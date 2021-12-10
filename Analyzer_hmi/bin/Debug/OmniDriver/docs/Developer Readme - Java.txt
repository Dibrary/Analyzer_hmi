Developing in Java


Configuring your development environment
----------------------------------------

1. If you are using Java to develop applications using OmniDriver, you will need to install
   the Java JDK version 1.6 or above.  Update your system PATH to point to the new java
   location (typically something like C:\Program Files\Java\JDK1.6.0_05).
   If Java is not in the system PATH, it uses the following registry key to attempt to
   locate java:  HKEY_LOCAL_MACHINE\SOFTWARE\JavaSoft\Java Runtime Environment\CurrentVersion

2. The files which make up OmniDriver are located in the OOI_HOME directory.  
   You must define an environment variable named "OOI_HOME" and set its value to
   the full pathname of the OOI_HOME directory.

3. Make sure the OOI_HOME directory is in the classpath.

4. The OOI_HOME directory must also be in the PATH for your PC.  This is because there
   are a number of DLL files (or Linux "SO" files or Mac "DYLIB" files) in this folder that
   are required by OmniDriver.


--------------------

Troubleshooting Tips

1. If you run your OmniDriver-based Java application and get the exception
   NoClassDefFoundError for the com.oceanoptics.omnidriver.Wrapper class
   it is probably because the OOI_HOME environment variable has not been defined.

2. If, when you run your OmniDriver-base Java application you get the exception
   "UnsatisfiedLinkError no NatUSB in java.library.path"
   it is probaby because the OOI_HOME directory is not in your system PATH.

Developing in C/C++

If you are developing in C or C++, you will need several header files.

You must update your IDE's project settings by adding the following directories
to the list of include directories:
	$(OMNIDRIVER_HOME)\include
	$(JAVA_HOME)\include
	$(JAVA_HOME)\include\win32

"OMNIDRIVER_HOME" simply refers to wherever you chose to install OmniDriver.
"JAVA_HOME" simply refers to wherever you installed the Java JDK.

To do this in Microsoft Visual Studio 2005, open the project properties window, expand
the "C/C++" branch, and click on "General".  Then add each of the above directories
to the "Additional Include Directories" property.

-----

You must also update your IDE's project settings to tell it where to find the
OmniDriver32.lib, common32.lib, and optionally SPAM32.lib files.

In Microsoft Visual Studio 2005, open the project properties window, expand the 
"Linker" branch, and click on "General".  Then add the OOI_HOME directory
to the list of directories for the "Additional Library Directories" property.
Then click on the "Input" item for linker settings and add OmniDriver32.lib,
common32.lib, and optionally SPAM32.lib to the "Additional Dependencies"
property.

You must also inform your IDE where to find the OmniDriver include files.
To do this in Microsoft Visual Studio 2005
- Click on the "Project" menu item and choose "your_project_name properties"
- Click on the "C/C++" item and add the include directory to the 
  "Additional Inlude Directories" item.

-----

As implied by the above comments, you must download and install the Java JDK.
The JDK version of Java is necessary because the smaller JRE version does not
have the necessary include files.  
Any version of Java 1.6 or later should be acceptable.
You can download the Java JDK from www.javasoft.com

-----

It may be necessary to add one of the following #define lines to your source files.
#define WIN32
#define MACOSX
#define LINUX
Choose the symbol that corresponds to the OS for which you are developing.
This #define should be placed BEFORE any include statements for OmniDriver header files.
Some IDE's and project types automatically define the appropriate symbol.  But some
types of Visual Studio projects do not automatically define the required symbol.  
If none of these symbols is defined, you will get numerous compile-time errors relating
to OmniDriver symbols.

-----

OmniDriver functionality is exposed via three different interfaces:
- C functions
- C++ objects
- COM objects

If you are developing with Microsoft Visual Studio, you may use any of these
interface methods.
HOWEVER, if you are developing with any other IDE (eg. Borland C++ Builder), you
may only use the "C" and "COM" interfaces.  This is because there is no standard
for how C++ name mangling is performed, and the OmniDriver C++ interface
was developed using Microsoft Visual Studio.  If you attempt to use the C++ 
interface with an IDE other than Visual Studio, you will get lots of "undefined
symbol" errors.

-----

If you are using the National Instruments CVI "C" Compiler

After downloading this sample application, you may need to inform the IDE of the
new location of the following three files: OmniDriver32.lib, common32.lib, and SPAM32.lib
To do this:
- Click on the menu item "Edit.Project"
- Remove the three LIB files from the list (highlight each file and click the "Remove" button).
- Click the "Add" button to re-add each of these three LIB (not DLL) files from their new location.

For more information about using the National Instruments CVI "C" compiler, please refer
to the readme.txt file located in the project folder for the NI CVI sample application
(%OMNIDRIVER_ROOT%\samples\win32\c\NationalInstrumentsCVI_C_Interface_Demo\readme.txt).


-----

If you are using Microsoft Visual C++ 6.0

To set the path where the IDE will look for the OmniDriver32.dll:
Click on the menu item Project.Settings
In the drop down list box labelled "Settings For" choose "All Configurations"
Click on the "Link" tab
In the "Category" drop down list box choose "Input"
In the textbox labelled "Additional library path" enter "C:\Program Files\OceanOptics\OmniDriver\OOI_HOME


"long long" data type issue:
This compiler does not support the newer "long long" language construct for declaring 64-bit integers.
To work around this problem, add the following two statements to the top of every *.cpp file
in your project (ahead of any other #include's of OceanOptics header files):
#define HIGHRESTIMESTAMP_H
#define SPECTROMETERCHANNEL_H
This will prevent the inclusion of header files containing the "long long" data type.
The excluded header files are not necessary, as long as you are using the "Wrapper API"
to control your spectrometers.

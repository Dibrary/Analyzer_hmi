Developing in Visual Basic

If you are using the COM interface to OmniDriver
------------------------------------------------

After installing OmniDriver, you must add a reference to the new OmniDriver COM object 
within your Visual Basic project.  To do this within Microsoft Visual Studio 2005,
click on the "Project" menu item and choose "Add Reference".  In the "Add Reference"
dialog box, click on the "COM" tab. Then scroll down to "OmniDriver 2.0 Type Library",
highlight it, and click OK.  If you do not see "OmniDriver 2.0 Type Library" in the
list of available COM objects, it means you did not successfully register the new
OmniDriver32.dll file.

If you need to register the new OmniDriver32.dll file:
	cd to the OOI_HOME directory containing OmniDriver32.dll
	regsvr32 OmniDriver32.dll

If you need to use objects and methods belonging to the SPAM product, you must also
add a new reference to "SPAM 2.0 Type Library" as well, using the same procedure
as above.



--------------------------------------------------

If you are using the C/C++ interface to OmniDriver

Make sure that the new OOI_HOME directory is in the system PATH.



---------------------------------

If you are using Visual Basic 6.0

We currently only support the "C" function call interface to OmniDriver for the
Visual Basic 6.0 development environment.  You should not use the COM interface
at this time.  The COM interface has a known problem with "feature controllers"
in VB6.
In order to more conveniently expose OmniDriver's "C" methods, we have provided
the file OmniDriver.bas, located in VisualBasic6_Declarations subdirectory.  You should
add this file to your VB6 project, using the "Add Modules" option.

For more information on how to access OmniDriver functionality in VB6 applications, 
please download and view the new "Sample_VisualBasic6_Cinterface_Demo.zip" for VB6 developers.

IMPORTANT NOTE FOR VISUAL BASIC 6.0 USERS

Visual Basic 6.0 does not release the OmniDriver DLL from memory after your 
application terminates when running your application within the IDE. This will
cause your application to crash (and the IDE exits as well!) when you run your
application a second consecutive time within the IDE.
The work-around is to exit the IDE after each debugging session with your app.

FYI: Visual Studio 2005 does not appear to have this problem.  So if you have
access to Visual Studio 2005, you might want to upgrade to this newer IDE.

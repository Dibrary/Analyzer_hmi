The following procedure is based on Borland Developer Studio 2006

-------------------------

In order to use OmniDriver functions in your Delphi application, you must first
create a "package" which will make the OmniDriver COM object available.

Start "Delphi for Microsoft Win32"

Click File.New.Package - DelphiForWin32

Rename Package1.bpl to OmniDriver200807.bpl (you can choose any name you want)

Click File.SaveAll
	It will ask you where to save OmniDriver200807.bdsproj
	You may specify any location.  
	For our sample, we specified
	..\OmniDriver\samples\win32\delphi\borland_dev_studio_2006_package


Click Component.ImportComponent
Type of component: choose "import ActiveX control"  then click "Next"
Registered ActiveX controls: highlight OmniDriver32.dll and click "Next"
	If OmniDriver32.dll is not listed, click the Add button, 
	navigate to OmniDriver32.dll (located in the OOI_HOME directory),
	and click "ok".  Then click "Next".
On the "Component" panel:
	Leave "Palette page" set to "ActiveX"
	Unit Dir Name: change the path to the folder you just specified when you did the "Save All"
	Leave other settings unchanged.
Import Component panel: Create Unit selection: choose "add unit to OmniDriver200807.bdsproj project" and click "Finish"

Click on the menu item: Project.Build OmniDriver200807
You may get a warning indicating method "SetName" hides virtual method of "TComponent".
This is not a problem.
FYI: This step will produce two new files in C:\Documents and Settings\username\My Documents\Borland Studio Projects
named OmniDriver200807.bpl and OmniDriver200807.dcp

Right-click on OmniDriver200807.bpl" in the project window and choose "install"
A huge popup dialog box will appear indicating Omniriver200807.bpl has been installed.

Finally, we need to make the new package available to your application.
To do this:
   1. Click on the "Components" menu item, then click on "Install Packages".
   2. Click on the "Add" button.
   3. Navigate to the package we just created, located in
      samples\win32\delphi\borland_dev_studio_2006_package,
      highlight OmniDriver_TLB.dcu, and click "Open". 
The net effect of the above three steps is to copy OmniDriver_TLB.dcu
from samples\win32\delphi\borland_dev_studio_2006_package 
to c:\Program Files\Borland\BDS\4.0\imports
This step is necessary to make OmniDriver available to your application.


--------

If you want to use functionality in the SPAM product, repeat the procedure given above, substituting "spam" for "omnidriver"
where appropriate.

--------


Now create the application that will use OmniDriver to accomplish some useful task.

Start "Delphi for Microsoft Win32"

File.New - VCL Forms Application - Delphi for Win32

File.SaveAll to OmniDriver\samples\win32\delphi\borland_dev_studio_2006_application (or wherever you wish)

In the "uses" section of your application, add "OmniDriver_TLB".

Double-click on the dialog box to generate the "FormCreate" method.  This is where you should
add logic to initialize OmniDriver.


When you run your application, you may be prompted for the location of
the file "OmniDriver_TLB.pas".  This file is located in the directory containing the
OmniDriver package you created earlier (see above).

You may see the following error when you run your application:
"Project <your_project_name> raised exception class EOleSysError with message 'Class not registered'.
This means you haven't properly "registered" OmniDriver32.dll and SPAM32.dll
To register these DLL's, open a command-prompt window, CD to the OOI_HOME directory,
and enter the following two commands:
regsvr32 OmniDriver32.dls
regsvr32 SPAM32.dll
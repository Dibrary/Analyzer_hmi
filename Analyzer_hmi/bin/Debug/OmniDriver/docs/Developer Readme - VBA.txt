file: Developer Readme - VBA.txt

How to write a VBA function
---------------------------
Start Excel and open a new workbook.
From within Excel, click on the menu item "Tools > Macro > Visual Basic Editor"
This will open the "Visual Basic Editor" window.
From within the Visual Basic Editor, click on the menu item "Insert > Module"
This will open an empty window titled something like "Module1 (Code)".
Enter your VBA function in this new window.


How to access the OmniDriver COM object from VBA
------------------------------------------------
(this assumes you are in the VBA project/module editing window)
Click on Tools.References
Click the "Browse" button
Navigate to C:\Program Files\OceanOptics\OmniDriver\OOI_HOME
Highlight OmniDriver32.dll and click the "Open" button
Make sure "OmniDriver 2.0 Type Library" is checked and then click OK


How to test run your VBA function
---------------------------------
In your worksheet, click on a cell and type =YourFunctionName() in the "Fx" box
near the top of the window.
When you hit the <enter> key while positioned in the "Fx" box, it will invoke your function.

You may need to adjust the security level for Excel to permit the operation of your VBA macro.
To do this, click on the menu item Tools > Options.
Click on the "Security" tab.
Then click on the "Macro Security" button and choose a security level that will
permit your macro to run.


How to pass arguments into your VBA function
--------------------------------------------
When you declare your function by typing it in the Fx box, you can specify
hardcoded arguments.  Or you can specify cell locations (eg. A1, A2, B7, etc.)
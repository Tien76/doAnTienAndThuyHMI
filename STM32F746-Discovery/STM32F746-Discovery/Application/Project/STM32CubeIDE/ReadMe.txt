/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*
*   STM32CubeIDE
*
*   This directory contains the necessary project files and settings to compile
*   and link an Embedded Wizard generated application for a dedicated STM32
*   target using STM32CubeIDE.
*
*   This package is prepared and tested for the STM32F746 Discovery board.
*
*******************************************************************************/

Getting started with STM32F746 Discovery board:
-----------------------------------------------
  In order to get your first Embedded Wizard generated UI application up and
  running on your STM32 target, we have prepared a detailed article, which
  covers all necessary steps.
  We highly recommend to study the following document:

  https://doc.embedded-wizard.de/getting-started-stm32f746-discovery

How to build a UI demo application using STM32CubeIDE:
------------------------------------------------------------

- The Embedded Wizard template project is commonly used for all provided
  Embedded Wizard examples. All Embedded Wizard examples will store the
  generated code within the common \Application\GeneratedCode folder.

- The following steps are needed to establish this automatic project import:
  * Open the desired Embedded Wizard example project.
  * Select the profile and set the attribute PostProcess to the following file:
    ..\..\Application\Project\STM32CubeIDE\STM32F746-Discovery\STM32CubeIDE_ew_post_process.cmd

- After the Embedded Wizard code generation the installed post process will
  adapt the .cproject xml file. All necessary libraries and include paths
  (depending on the color format and screen rotation) will be set automatically.

- Import of the project to STM32CubeIDE
  * The given STM32CubeIDE Example under \Application\STM32CubeIDE contains a
    workspace which has all adaptions for an Embedded Wizard project. For
    using this within STM32CubeIDE do following steps:
    1. Open STM32CubeIDE and select the directory \Application\Project\STM32CubeIDE
       as workspace directory.
    2. To import the C project, select the menu item 'File' - 'Import' and choose
       'General' - 'Existing Projects into Workspace' and press 'Next'
    3. Choose 'Select root directory' - 'Browse' and select the directory
       \Application\Project\STM32CubeIDE\STM32F746-Discovery
    4. Select the checkbox and press 'Finish'
    5. To compile the project please press the 'Build' button (Hammer symbol). 
    6. Press the 'Run' or 'Debug' button within the toolbar at the top of the 
	   window in order to run the application.

- Usage of external Flash:
  The project is predefined for using the external flash memory. For running the
  controller without the external flash, you have to define following symbols:
    EW_BITMAP_PIXEL_SECTION_NAME=<EMPTY> (remove the section name)
    EW_FONT_PIXEL_SECTION_NAME=<EMPTY> (remove the section name)
    EW_USE_EXTERNAL_FLASH=0
  Additionally, change the ST-LINK Utility CLI definition under
  'Run->External Tools->External Tools Configurations' by removing the command
  parts for using the external loader.

- Usage of FreeRTOS:
  The project is predefined for using FreeRTOS. For running the application
  without FreeRTOS, you have to disable the FreeRTOS symbol (EW_USE_FREE_RTOS=0)
  and exclude the FreeRTOS middleware folders. Therefore please select the FreeRTOS
  folder under 'ThirdParty->STM32Cube_FW_F7->Middlewares->Third Party->FreeRTOS'
  and do a right click on it. The context menu under 'Resource Configuration->
  Exclude from Build' will give you the option to simply hide or unhide the
  FreeRTOS folders.

- If the color format or the screen orientation was changed, please do a
  clean and refresh in STM32CubeIDE and build the project again.

- Please note that the post process has dependencies to the name of the build
  configuration. In case you change these, you also have to change the post
  process respectively the powershell script.

Know Issues:
------------

- The maximum path length of the longest include path is limited for eclipse based
  projects. Due to the complexity of the FreeRTOS folder structure, this can cause the
  error that some files cannot be found even when they are definitely at the right
  place. To avoid this problem please make sure that you unpacked the Build Environment
  at a location close to the root directory (e.g. C:\STM32\).


/*******************************************************************************
* Important note:
* This Build Environment is intended to be used as template for Embedded Wizard
* GUI applications on the development board or your customer specific hardware.
* Please take care to adjust all timings and hardware configurations (e.g. system
* clock configurations, memory timings, MPU and cache settings) according to your
* needs and hardware capabilities in order to ensure a stable system.
* Please also take the hardware manufacturer's corresponding specifications,
* application notes and erratas into account.
*******************************************************************************/

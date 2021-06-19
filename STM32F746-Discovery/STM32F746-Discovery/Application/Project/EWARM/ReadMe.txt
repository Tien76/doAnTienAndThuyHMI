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
*   EWARM
*
*   This directory contains the necessary projectfiles and settings to compile
*   and link an Embedded Wizard generated application for a dedicated STM32
*   target using IAR Embedded Workbench.
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

How to build a UI demo application using IAR Embedded Workbench:
----------------------------------------------------------------

- The Embedded Wizard template project is commonly used for all provided
  Embedded Wizard examples. All Embedded Wizard examples will store the
  generated code within the common \Application\GeneratedCode folder.

- The generated code of an Embedded Wizard example is imported automatically
  to the IAR Embedded Workbench project using the Project Connection mechanism.

- To establish this automatic project import a post process has to be added
  to the Profile settings within Embedded Wizard Studio:
  * Open the desired Embedded Wizard example project.
  * Select the profile and set the attribute PostProcess to the following file:
    ..\..\Application\Project\EWARM\EWARM_ew_post_process.cmd

- After the Embedded Wizard code generation the installed post process
  will generate a ewfiles.ipcf file, that controls the import to the
  IAR Embedded Workbench project.

- After returning to IAR Embedded Workbench, the latest generated code and
  the suitable Embedded Wizard Platform Package will be imported to the
  IAR Embedded Workbench project (depending on the color format and the
  screen orientation selected in the Embedded Wizard Profile).

- If the color format or the screen orientation was changed, please do a
  complete rebuild of the IAR Embedded Workbench project.

- Usage of external Flash:
  The project is predefined for using the external flash memory. For running the
  controller without the external flash you have to disable
  following macros within the project options:
  EW_BITMAP_PIXEL_SECTION_NAME
  EW_FONT_PIXEL_SECTION_NAME
  EW_USE_EXTERNAL_FLASH

- Usage of FreeRTOS:
  The project is predefined for using FreeRTOS. For running the application
  without FreeRTOS you have to set EW_USE_FREE_RTOS=0 in the global project
  options and to exclude the FreeRTOS modules from the build.


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

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
*   Application
*
*   This directory contains the necessary source codes and makefiles to compile
*   and link an Embedded Wizard generated application for a dedicated STM32
*   target.
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

How to build a demo using this template for the STM32F746 Discovery board:
--------------------------------------------------------------------------

  1.) Start Embedded Wizard Studio and open one of the demo projects that
      you will find in the subdirectory /Examples.

      Generate code by pressing 'F8'. As a result, the generated code will
      be stored in the subdirectory /Application/GeneratedCode.

  2.) Execute the batch file 'StartGccBuildEnvironment.bat' you will find in
      the root directory of this package. As a result a console window will appear.

  3.) Compile and link the example:

      make

  4.) If the application was compiled and linked successfully, connect your
      target and download the application:

      make install

  5.) If necessary, adapt the makefile to your needs.

  Alternatively, you can use the following toolchains to build the UI applications:
  - Keil MDK ARM (µVision)
  - IAR Embedded Workbench
  - Atollic TrueSTUDIO
  Please follow the corresponding ReadMe.txt files located in the project directories.


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

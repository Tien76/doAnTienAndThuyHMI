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
*   MasterDemo
*
*   This directory contains the binary file of the Embedded Wizard Master Demo.
*
*   The Embedded Wizard Master Demo combines a variety of examples within one
*   huge demo application. It can be used for presentations and showcases.
*   Each demo application can be activated from a common main menu. To return
*   back from a demo application to the main menu, a small home button appears
*   on top of every demo.
*   Additionally, the Master Demo contains an auto-demo mode that presents one
*   demo application after the other. The auto-demo starts automatically and
*   stops as soon as the user touches the screen.
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


How to flash the master demo application to the STM32F746 Discovery board:
--------------------------------------------------------------------------

  1.) Connect your development board with your PC via USB (make sure to use
      the ST-LINK USB connector).

  2.) Execute the batch file 'FlashMasterDemo.bat'. A console window will appear
      and the flash tool will download the binary file of the Master Demo.

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
*   This package contains everything needed to build and run an Embedded Wizard
*   generated UI application on a STM32 target.
*   This Build Environment for Embedded Wizard generated UI applications was
*   tested by using the following components:
*   - Embedded Wizard Studio V10.00
*   - Embedded Wizard Platform Package for STM32 V10.00
*   - STM32F746 Discovery Build Environment V10.00
*   - STM32F746 Discovery board
*   - STM32CubeProgrammer V2.5.0
*   - STM32CubeF7 Firmware Package V1.16.0
*   - GCC ARM Embedded Toolchain 9-2020-q2-update
*   - IAR Embedded Workbench 8.50.6, IAR C/C++ Compiler V8.50.6.265/W32 for ARM
*   - Keil MDK-ARM Professional Version 5.32.0.0, ARM Compiler 6.14.1 (armclang)
*   - STM32CubeIDE 1.4.0
*
*******************************************************************************/

Getting started with STM32F746 Discovery board:
-----------------------------------------------
  In order to get your first Embedded Wizard generated UI application up and
  running on your STM32 target, we have prepared a detailed article, which
  covers all necessary steps.
  We highly recommend to study the following document:

  https://doc.embedded-wizard.de/getting-started-stm32f746-discovery


Getting started with Embedded Wizard Studio:
--------------------------------------------
  In order to get familiar with Embedded Wizard Studio and the UI development
  work-flow, we highly recommend to study our online documentation:

  https://doc.embedded-wizard.de

  Furthermore, we have collected many 'Questions and Answers' covering
  typical Embedded Wizard programming aspects. Please visit our community:

  https://ask.embedded-wizard.de

  Please use this platform to drop your questions, answers and ideas.


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


Build Environment specific changes:
-----------------------------------
* Version 10.00
  - CPU data cache clear and invalidate operations added in order to support mixed
    drawing operations by DMA2D and CPU (especially necessary for data cache with
    write-back configuration).
  - Dashboard example added, MasterDemo enhanced.
  - Changed from ST-LINK Utility to STM32CubeProgrammer v2.5.0
  - Project template for STM32CubeIDE added (Atollic TrueSTUDIO removed).
  - Test with Embedded Wizard V10.00 and STM32 Platform Package V10.00

* Version 9.30.01
  - Adding PulseOximeter and SmartThermostat examples. MasterDemo enhanced.
  - DeviceDriver.c template improved to handle display update request properly.
  - Memory pool defines renamed and typos in comments fixed.
  - Changed to STM32CubeF7 Firmware Package V1.16.0
  - Test with Embedded Wizard V9.30 and STM32 Platform Package V9.30

* Version 9.30
  - The TLSF memroy manager has been removed: The Runtime Environment
    contains now an own optimized memory manager that is tailored for GUI
    applications on resource constraint embedded systems.
    The Embedded Wizard Heap Manager is now used instead of TLSF.
  - The file ewmain.c is adapted to use the new memory manager.
    For debugging purposes the new function EwVerifyHeap() is called
    before the Garbage Collector is started, to check the memory integrity.
  - The project configuration is now done within the new file ewconfig.h.
    The file ewmain.c does no more contain configuration settings.
    The makefile/project files contain only those settings which have an
    impact to the project structure or the selection of files and libraries.
  - The interface between Embedded Wizard and the underlying hardware specific
    Board Support Package has been redesigned and aligned with all other
    platforms. Please have a look to the header files within the folder
    /TargetSpecific for more details.
  - Support of multi-touch: The touch driver ew_bsp_touch.c provides now
    multi-touch events. The main loop in ewmain.c has been adapted to
    process multi-touch events.
  - The files ew_bsp_serial.c/h are renamed to ew_bsp_console.c/h
  - Disabling FMC bank1 fixed (STM Application Note AN4861)
  - Changed to GCC ARM Embedded Toolchain 9-2020-q2-update
  - Test with Embedded Wizard V9.30 and STM32 Platform Package V9.30

* Version 9.20
  - Test with Embedded Wizard V9.20 and STM32 Platform Package V9.20
  - The Graphics Engines for color format RGBA8888, RGB888 and RGB565 have
    been enhanced to support the new bitmap resource format RGB565.
  - The Graphics Engines for color format RGBA8888, RGB888, RGB565 and RGBA444
    have been enhanced to support the new bitmap resource format Index8.
  - The target specific module ew_bsp_graphics.c has been enhanced to support
    hardware accelerated drawing operations for the new source formats
    RGB565 and Index8.
  - The third-party software Xprintf is no more used and has been removed.
  - The dependency to printf() function is removed: The function EwFormat()
    does not exist anymore and has been removed from ewextrte.c. The function
    EwPrint() is now part of the RTE itself and implements a subset of the
    printf() format escape sequences (%d, %u, %f, %s, %c, %x, %X).
  - The new function EwConsoleOutput() has been added to the extern RTE
    module ewextrte.c. The function is used to print the given message on
    the console. No additional formatting, etc. is needed.
  - The set of provided examples has been enhanced. Please have a look into
    the subdirectory /Examples.
  - Realtime clock can be set by using new EwBspSetTime() function. RTC is
    now set to a default value during start of application (see ewmain.c).

* Version 9.10
  - Test with Embedded Wizard V9.10 and STM32 Platform Package V9.10
  - main.c file is now split into main.c and ewmain.c
  - New function EwPrintSystemInfo() for printing system and configuration
    information - helpful in case of any support issues.
  - The flag EW_USE_QSPI_FLASH is now replaced by EW_USE_EXTERNAL_FLASH
  - The usage of FreeRTOS is now enabled by default within GCC makefile
    and in the project files for all further toolchains also.
  - The platform package libraries for IAR are build and tested with the
    latest IAR compiler version (V8.32) while the application project
    is still compatible with IAR Version 7.80. If IAR Embedded Worbench 7.x
    is used to build the application a linker warning concerning wchar_t size
    will occur. Since wchar_t is not used within the libraries, this warning
    can be ignored.
  - The platform package libraries for Keil MDK and the application project
    are build with the latest ARM compiler V6.10.1 (armclang).
  - Macro EW_USE_QSPI_FLASH has changed to EW_USE_EXTERNAL_FLASH

* Version 9.00
  - Test with Embedded Wizard V9.00 and STM32 Platform Package V9.00
  - The Build Environment contains now a subset of the STM32CubeF7 embedded
    software for STM32F7 series. It contains only those files, which are
    necessary to build the provided GUI applications.
    If you want to work with the full STM32CubeF7 firmware tree, please
    download it from the STM32 website and adapt the makefile or project
    settings accordingly.
  - The main application and the makefile / project files for the supported
    toolchains are now located within the subdirectory /Application.
  - All third party software components are now located within the subdirectory
    /ThirdParty
  - Support for Atollic TrueSTUDIO added.
  - Optional support of external Flash and FreeRTOS  to IAR and Keil projects added.

* Version 8.30.02
  - Entire set of GFX/RTE libraries are rebuild after adapting/checking for
    proper FPU settings.
  - Test with latest STM32CubeF7 firemware.

* Version 8.30.01
  - GCC libraries are created with single precision FPU settings to be
    compatible with all F7 targets (using -mfpu=fpv5-sp-d16 instead of
    -mfpu=fpv5-d16).
    The usage of double precision has caused a hardfault on F746 targets
    when calling EwFormat() with float values.
  - GCC libraries compiled with GCC ARM Embedded Toolchain 7-2017-q4-major.

* Version 8.30
  - Avoiding unnecessary updates by using CoreRoot__DoesNeedUpdate().
  - Enhanced MPU configuration for SDRAM and external flash areas to avoid MCU blocking
    (according STM Application Note AN4861).
  - FMC bank1 (0x6000 0000 - 0x6FFF FFFF) disabled, since it is not used.
    This setting avoids unneeded speculative access to the first FMC bank
    (according STM Application Note AN4861).
  - The limitation for max. 256 pixel font height has been increased to 1024
    pixel. To display such large fonts the glyph cache has to be large enough.
  - Text alignment algorithms (changed with V8.20) are reworked (bug-fix).

* Version 8.20.01
  - IAR libraries with highest optimization.
  - GCC libraries compiled with GCC ARM Embedded Toolchain 6-2017-q1-update.
  - Comments corrected.

* Version 8.20
  - The entire Build Environment is now based on a Template approach.
    Within the subdirectory /Template you will find one common project that
    is prepared for all examples and that can be used as a starting point
    for your development.
  - The Build Environment provides now template projects for Keil MDK-ARM and
    IAR embedded workbench. You will find them in the subdirectories of the
    /Template folder. Please have a look into the related ReadMe.txt files.
  - Providing libraries for GCC, MDK-ARM and IAR.
  - Important project settings are now imported automatically to GCC make,
    IAR and Keil projects: The profile settings 'ColorFormat' and
    'ScreenOrientation' are used to control the build process without
    the need for any additional manually settings.
  - The set of provided examples has been enhanced. Please have a look into
    the subdirectory /Examples.
  - All target specific source codes (ew_bsp_xxx.c/h) that build the bridge
    between the Embedded Wizard generated code and the underlying ST drivers
    are now located within the folder /TargetSpecific.
  - Stacksize of template project is increased to 8 kByte.
  - Bugfix of leap year calculation within the function EwBspGetTime().
  - The DMA2D.c module is replaced by ew_bsp_graphics.c.
  - Support of synchronized single buffer update by using partial display update.
    This approach makes it possible to draw directly into the visible framebuffer
    without flicker or tearing effects (as long as drawing operation is fast
    enough).
  - Support of off-screen buffer is removed. Use new single buffer mode or
    double-buffering instead.
  - Memory profiling feature is now always active - just add the function call
    EwPrintProfilierStatistic( 0 ) within your main loop in case you want to get
    an overview of the current/maximum memory consumption.
  - The generated macros EMWI_SURFACE_ROTATION and EMWI_COLOR_FORMAT are now
    used for library selection.


3rdParty-Components
-------------------
The following 3rdParty-Components are used:

1. STM Source code

* Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

2. Gnu Make - GNU General Public License v2 or later

3. Gnu GCC - GNU General Public License v2 or later

@echo off

rem *************************************************************************************************
rem Please set the ABSOLUTE installation path of the STM32CubeProgrammer tool
rem *************************************************************************************************

set STM32CubeProgrammer_Path=C:\Program Files\STMicroelectronics\STM32Cube\STM32CubeProgrammer

rem *************************************************************************************************
rem Please do NOT change the following settings
rem *************************************************************************************************
set PlatformName=STM32F746-Discovery
set ExternalLoader=N25Q128A_STM32F746G-DISCO.stldr
set BuildEnvVersion=V10.00
set GettingStartedLink=getting-started-stm32f746-discovery
cd ..
call .\Application\Project\GCC\devenv.cmd

echo.
echo *******************************************************************************
echo *
echo * Flashing Embedded Wizard Master Demo for target %PlatformName%
echo *
echo *******************************************************************************
echo.

set APP_FILE=..\..\..\MasterDemo\EmbeddedWizard-%PlatformName%

"%STM32CubeProgrammer_Path%/bin/STM32_Programmer_CLI" -c port=SWD -w %APP_FILE%.hex -el "%STM32CUBEPROG_EXT_FLASH_LOADER%" -g 0x8000000

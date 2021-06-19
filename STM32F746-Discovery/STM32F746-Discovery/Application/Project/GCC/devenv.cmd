@echo off

set Title=Embedded Wizard Build Environment for %PlatformName% %BuildEnvVersion%
set STLINK_EXT_FLASH_LOADER=%ST-LINK_Utility_Path%/ExternalLoader/%ExternalLoader%
set STM32CUBEPROG_EXT_FLASH_LOADER=%STM32CubeProgrammer_Path%/bin/ExternalLoader/%ExternalLoader%
title %Title%

echo *******************************************************************************
echo * Welcome to %Title%
echo *******************************************************************************
echo.

IF DEFINED BuildInitialized GOTO run

GOTO setpaths

:setpaths

:: set the path to dmake and its tools
set PATH=%~dp0\..\..\..\ThirdParty\Make;%PATH%

:: compiler path
set PATH=%~dp0\..\..\..\ThirdParty\gcc-arm-none-eabi\bin;%PATH%

:: st-link utility path
set PATH=%ST-LINK_Utility_Path%;%PATH%

set BuildInitialized=1

:run

REM do some checks

if not ["%ST-LINK_Utility_Path%"] == [""] (
  if not exist "%ST-LINK_Utility_Path%" (
    echo.
    echo ST-LINK_Utility check failed:
    echo ST-LINK_Utility not found on path:
    echo "%ST-LINK_Utility_Path%".
    echo Please install the ST-LINK_Utility or adapt the setting for
    echo 'ST-LINK_Utility_Path' in file 'StartGccBuildEnvironment.bat'.
    echo.
    pause
    exit
  )

  if not exist "%STLINK_EXT_FLASH_LOADER%" (
    echo.
    echo STLINK_EXT_FLASH_LOADER check failed:
    echo External flash loader for ST-LINK_Utility not found on path:
    echo "%STLINK_EXT_FLASH_LOADER%".
    echo Please check your ST-STLINK Utility installation
    echo or adapt the setting for 'STLINK_EXT_FLASH_LOADER'
    echo in file 'Application\Project\GCC\devenv.cmd'.
    echo.
    pause
    exit
  )
 echo ST-LINK Utility:     "%ST-LINK_Utility_Path%"
)

if not ["%STM32CubeProgrammer_Path%"] == [""] (
  if not exist "%STM32CubeProgrammer_Path%/bin" (
    echo.
    echo STM32CubeProgrammer check failed:
    echo STM32CubeProgrammer not found on path:
    echo "%STM32CubeProgrammer_Path%/bin".
    echo Please install the STM32CubeProgrammer or adapt the setting for
    echo 'STM32CubeProgrammer_Path' in file 'StartGccBuildEnvironment.bat'.
    echo.
    pause
    exit
  )

  if not exist "%STM32CUBEPROG_EXT_FLASH_LOADER%" (
    echo.
    echo STLINK_EXT_FLASH_LOADER check failed:
    echo External flash loader for STM32CubeProgrammer not found on path:
    echo "%STM32CUBEPROG_EXT_FLASH_LOADER%".
    echo Please check your STM32CubeProgrammer installation or
    echo adapt setting for 'STM32CUBEPROG_EXT_FLASH_LOADER' in file
    echo 'Application\Project\GCC\devenv.cmd'.
    echo.
    pause
    exit
  )
  echo STM-CubeProgrammer:  "%STM32CubeProgrammer_Path%"
)

if ["%ST-LINK_Utility_Path%"] == [""] (
  if ["%STM32CubeProgrammer_Path%"] == [""] (
    echo.
    echo Neither ST-LINK_Utility_Path nor STM32CubeProgrammer_Path is defined.
    echo Please add one of them to StartGccBuildEnvironment.bat
    echo.
    pause
    exit
  )
)



echo ext. FLASH loader:   "%ExternalLoader%"
echo.
echo All checks are passed!
echo.
echo *******************************************************************************
echo *
echo * Getting started with Embedded Wizard and %PlatformName% board:
echo *
echo * https://doc.embedded-wizard.de/%GettingStartedLink%
echo *
echo *******************************************************************************
echo.
echo.
echo Entering Embedded Wizard template project
echo.

cd Application\Project\GCC



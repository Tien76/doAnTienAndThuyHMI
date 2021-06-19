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
cmd /K Application\Project\GCC\devenv.cmd

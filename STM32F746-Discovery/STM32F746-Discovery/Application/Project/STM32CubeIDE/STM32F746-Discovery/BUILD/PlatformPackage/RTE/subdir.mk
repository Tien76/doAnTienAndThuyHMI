################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Embedded\ wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/PlatformPackage/RTE/ewextrte.c 

OBJS += \
./PlatformPackage/RTE/ewextrte.o 

C_DEPS += \
./PlatformPackage/RTE/ewextrte.d 


# Each subdirectory must supply rules for building sources it contributes
PlatformPackage/RTE/ewextrte.o: C:/Embedded\ wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/PlatformPackage/RTE/ewextrte.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32F746xx -DUSE_STM32746G_DISCO -DUSE_HAL_DRIVER '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' '-DEW_BITMAP_PIXEL_SECTION_NAME=.SectionEwResource' '-DEW_FONT_PIXEL_SECTION_NAME=.SectionEwResource' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' -c -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../Application/GeneratedCode" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../Application/Source" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../TargetSpecific" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../TargetSpecific/Drivers" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Drivers/CMSIS/Include" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Drivers/BSP/Components/Common" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../ThirdParty/STM32Cube_FW_F7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../PlatformPackage/RTE" -I"C:/Embedded wizard/HMI_4/STM32F746-Discovery/STM32F746-Discovery/Application/Project/STM32CubeIDE/STM32F746-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"PlatformPackage/RTE/ewextrte.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"


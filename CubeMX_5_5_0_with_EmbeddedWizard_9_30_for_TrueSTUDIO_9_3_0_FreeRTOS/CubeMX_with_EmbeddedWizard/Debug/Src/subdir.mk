################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/DHT11.c \
../Src/Variable.c \
../Src/freertos.c \
../Src/main.c \
../Src/stm32f7xx_hal_msp.c \
../Src/stm32f7xx_it.c \
../Src/syscalls.c \
../Src/system_stm32f7xx.c 

OBJS += \
./Src/DHT11.o \
./Src/Variable.o \
./Src/freertos.o \
./Src/main.o \
./Src/stm32f7xx_hal_msp.o \
./Src/stm32f7xx_it.o \
./Src/syscalls.o \
./Src/system_stm32f7xx.o 

C_DEPS += \
./Src/DHT11.d \
./Src/Variable.d \
./Src/freertos.d \
./Src/main.d \
./Src/stm32f7xx_hal_msp.d \
./Src/stm32f7xx_it.d \
./Src/syscalls.d \
./Src/system_stm32f7xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/DHT11.o: ../Src/DHT11.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/DHT11.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/Variable.o: ../Src/Variable.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/Variable.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/freertos.o: ../Src/freertos.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/freertos.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/main.o: ../Src/main.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32f7xx_hal_msp.o: ../Src/stm32f7xx_hal_msp.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32f7xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32f7xx_it.o: ../Src/stm32f7xx_it.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32f7xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/system_stm32f7xx.o: ../Src/system_stm32f7xx.c
	arm-none-eabi-gcc -c "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_STM32746G_DISCO=1' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_SURFACE_ROTATION=0' '-DEW_USE_FREE_RTOS=1' '-DEW_USE_EXTERNAL_FLASH=1' -c -I../Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/Source" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/Application/GeneratedCode" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/TargetSpecific/Drivers" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RTE" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/PlatformPackage/RGB565" -I"C:/Embedded wizard/doAnTienAndThuy/HMI_4/HMI_4/CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS/CubeMX_with_EmbeddedWizard/EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/system_stm32f7xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

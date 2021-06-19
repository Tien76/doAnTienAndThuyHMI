################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include Src/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include EmbeddedWizard/ThirdParty/STM32Cube_FW_F7/Drivers/BSP/STM32746G-Discovery/subdir.mk
-include EmbeddedWizard/TargetSpecific/Drivers/subdir.mk
-include EmbeddedWizard/TargetSpecific/subdir.mk
-include EmbeddedWizard/PlatformPackage/RTE/subdir.mk
-include EmbeddedWizard/PlatformPackage/RGB565/subdir.mk
-include EmbeddedWizard/Application/Source/subdir.mk
-include EmbeddedWizard/Application/GeneratedCode/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := CubeMX_with_EmbeddedWizard
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
CubeMX_with_EmbeddedWizard.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
CubeMX_with_EmbeddedWizard.list \

OBJCOPY_BIN += \
CubeMX_with_EmbeddedWizard.bin \


# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: CubeMX_with_EmbeddedWizard.elf secondary-outputs

# Tool invocations
CubeMX_with_EmbeddedWizard.elf: $(OBJS) $(USER_OBJS) ../STM32F746NG_FLASH.ld
	arm-none-eabi-gcc -o "CubeMX_with_EmbeddedWizard.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"../STM32F746NG_FLASH.ld" --specs=nosys.specs -Wl,-Map="CubeMX_with_EmbeddedWizard.map" -Wl,--gc-sections -static -L"C:\Embedded wizard\doAnTienAndThuy\HMI_4\HMI_4\CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS\CubeMX_with_EmbeddedWizard\EmbeddedWizard\PlatformPackage\RGB565" -L"C:\Embedded wizard\doAnTienAndThuy\HMI_4\HMI_4\CubeMX_5_5_0_with_EmbeddedWizard_9_30_for_TrueSTUDIO_9_3_0_FreeRTOS\CubeMX_with_EmbeddedWizard\EmbeddedWizard\PlatformPackage\RTE" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

CubeMX_with_EmbeddedWizard.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "CubeMX_with_EmbeddedWizard.list"
	@echo 'Finished building: $@'
	@echo ' '

CubeMX_with_EmbeddedWizard.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "CubeMX_with_EmbeddedWizard.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	arm-none-eabi-objcopy.exe -O ihex "CubeMX_with_EmbeddedWizard.elf" "CubeMX_with_EmbeddedWizard.hex"
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY: post-build

-include ../makefile.targets
